// Fill out your copyright notice in the Description page of Project Settings.


#include "Agent.h"

AAgent::AAgent(){
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AgentMesh"));	
	RootComponent = Mesh;
	Velocity = FVector(0.f);
}

void AAgent::BeginPlay(){
	Super::BeginPlay();
}

void AAgent::Init( UStaticMeshComponent *mesh, int id ) {
	// Initialize static mesh
	UE_LOG(LogTemp, Warning, TEXT("Agent initialized.") );
	Mesh->SetStaticMesh( mesh->GetStaticMesh() );
}

void AAgent::Tick(float DeltaTime){
	Super::Tick(DeltaTime);

	// Update Agent location
	FVector loc = GetActorLocation();
	SetActorLocation( loc + Velocity );
	
	// turn head forward in direction of movement
	/*FRotator rotation = Velocity.Rotation();
	rotation.Add(0.f,-90.f,0.f);
	SetActorRotation(rotation.Clamp());
	*/

	// Reset Agent's velocity if it has NaN.
	// I noticed that whenever I start the game in the editor and enable
	// mouse control by clicking in the window, all the Agents' velocities
	// are set to NaN. I'm not really sure why that happens, but this fixes it.
	if (Velocity.ContainsNaN()){
		Velocity = FVector(1.0);
	}
}