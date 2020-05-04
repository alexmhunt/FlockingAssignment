// Fill out your copyright notice in the Description page of Project Settings.


#include "FlockingManager.h"
#include "Agent.h"
#include "GenericPlatform/GenericPlatformMath.h"
#define AGENT_COUNT 10
#define MAX_ACCEL 10
#define MIN_ACCEL -5
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
        /*
        for(auto& agent: Agents){
            if(agent != a){
                float distsquared = FVector::DistSquared(a->GetActorLocation(), agent->GetActorLocation());

                // calculate 3 rules

                // rule 1
                // get pos of nearby boids
                if(distsquared < RANGE){
                    v1 += agent->GetActorLocation();
                    inRule1Range++;
                }

                if(distsquared < AVOID_RANGE){
                    v2 += a->GetActorLocation() - agent->GetActorLocation();
                }

                if(distsquared < RANGE){
                    v3 += agent->Velocity;
                }

            }
        }
        if(inRule1Range)
            v1 /= inRule1Range;

        v1 = (v1 - a->GetActorLocation() / 100);

        if(inRule3Range)
            v1 /= inRule3Range;

        v3 = v3 / 8;*/

        // Apply the 3 rules of flocking to the current boid.
        v1 = rule1(a);
        v2 = rule2(a);
        v3 = rule3(a);

        
        // Calculate the current boid's velocity based on the 3 rules.
        vel = a->Velocity + v1 + v2 + v3;
        // Limit the maximum velocity so that our boids aren't too fast
        a->Velocity = vel.GetClampedToMaxSize(MAX_ACCEL);
    }

}

// Rule 1: Boids try to fly towards the center of mass of neighboring boids.
FVector UFlockingManager::rule1(AAgent *a){
    FVector v;
    for(auto& agent: Agents){
        if(agent != a){
            v += agent->GetActorLocation();
        }
    }

    v /= (AGENT_COUNT - 1);
    v -= a->GetActorLocation();


    return v / 100;

};

// Rule 2: Boids try to keep a small distance away from other objects (including other boids).
FVector UFlockingManager::rule2(AAgent *a){
    FVector v = FVector(0.f); // initialize vector to 0

    for(auto& agent: Agents){
        if(agent != a){
            float dist = FVector::Distance(a->GetActorLocation(), agent->GetActorLocation());
            float abs = FGenericPlatformMath::Abs(dist); 
            //UE_LOG(LogTemp, Warning, TEXT("Dist between %s and %s = %10.6f"), TCHAR_TO_ANSI(*AActor::GetDebugName(a)), TCHAR_TO_ANSI(*AActor::GetDebugName(agent)), abs);
            if(abs < 100.f){
                v = v - (agent->GetActorLocation() - a->GetActorLocation());
            }
        }
    }

    //v /= (AGENT_COUNT - 1);

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

    //v /= (AGENT_COUNT - 1);

    return (v - a->Velocity) / 8;
};

void UFlockingManager::limitVelocity(AAgent *a){
    int vlim = 50;
    FVector v;

    if(a->Velocity.GetAbs().Size() > vlim)
        a->Velocity = (a->Velocity / a->Velocity.GetAbs()) * vlim;
}