// Fill out your copyright notice in the Description page of Project Settings.


#include "FlockingManager.h"
#include "Agent.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Kismet/GameplayStatics.h"
#define AGENT_COUNT 10
#define MAX_ACCEL 5
#define RANGE 500
#define AVOID_RANGE 100

void UFlockingManager::Init( UWorld *world, UStaticMeshComponent *mesh ) {
	UE_LOG(LogTemp, Warning, TEXT("Manager initialized"));
    
    World = world;
    float incr = (PI * 2.f) / AGENT_COUNT;
    for( int i = 0; i < AGENT_COUNT; i++ ) {
        if( World != nullptr ) {
            FRotator rotation = FRotator();

            FVector location = FVector();
            location.X = FMath::Sin( incr * i ) * 150.f;
            location.Y = FMath::Cos( incr * i ) * 150.f;
            location.Z = 0.f;

            AAgent * agent = World->SpawnActor<AAgent>( location, rotation );
            agent->Init( mesh, i );
            agent->Velocity = FVector(0.f);
            Agents.Add( agent );
        }
    }

    initialized = true;
}

/* Apply the Flocking algorithm to each Agent (boid).
* Based on Conrad Parker's pseudocode:
* http://www.kfish.org/boids/pseudocode.html
*/ 
void UFlockingManager::Flock() {
    FVector v1 = FVector(0.f);
    FVector v2 = FVector(0.f);
    FVector v3 = FVector(0.f);
    FVector vel = FVector(0.f);
    
    //int inRule1Range = 0, inRule2Range = 0, inRule3Range = 0;

    for(auto& a: Agents){
        // Apply the 3 rules of flocking to the current boid.
        v1 = rule1(a);
        v2 = rule2(a);
        v3 = rule3(a);

        
        // Calculate the current boid's velocity based on the 3 rules.
        // Also, make the boids move towards the player.
        vel = a->Velocity + v1 + v2 + v3 + tend_to_player(a);
        // Limit the maximum velocity so that our boids aren't too fast
        a->Velocity = vel.GetClampedToMaxSize(MAX_ACCEL);

        
    }

}

// Rule 1: Boids try to fly towards the center of mass of neighboring boids.
FVector UFlockingManager::rule1(AAgent *a){
    FVector v;

    // Get all the other boids and add their locations to a vector
    for(auto& agent: Agents){
        if(agent != a){
            v += agent->GetActorLocation();
        }
    }

    // Divide by the number of other boids to get
    // the average position of the entire flock.
    v /= (AGENT_COUNT - 1);
    v -= a->GetActorLocation();


    return v / 100; // boid moves 1% towards the average position.

};

// Rule 2: Boids try to keep a small distance away from other objects (including other boids).
FVector UFlockingManager::rule2(AAgent *a){
    FVector v = FVector(0.f); // initialize vector to 0

    // For each other boid in the flock...
    for(auto& agent: Agents){
        if(agent != a){
            // Get distance between this boid and the other boid
            float dist = FVector::Distance(a->GetActorLocation(), agent->GetActorLocation());
            float abs = FGenericPlatformMath::Abs(dist); // absolute value
            if(abs < 100.f){ // If distance less than 100,
                // Make this boid tend away from the other boid.
                v = v - (agent->GetActorLocation() - a->GetActorLocation());
            }
        }
    }


    return v;
};

// Rule 3: Boids try to match velocity with near boids.
FVector UFlockingManager::rule3(AAgent *a){
    FVector v;

    for(auto& agent: Agents){
        if(agent != a){
            v += agent->Velocity;
        }
    }

    return (v - a->Velocity) / 8;
};

// Make boid fly towards the player.
FVector UFlockingManager::tend_to_player(AAgent *a){
    FVector playerloc = FVector(0.f);

    APawn* player = UGameplayStatics::GetPlayerController(a, 0)->GetPawn();

    if(player) // if pointer to player isn't null
        playerloc = player->GetActorLocation();

    return (playerloc - a->GetActorLocation()) / 100;
}