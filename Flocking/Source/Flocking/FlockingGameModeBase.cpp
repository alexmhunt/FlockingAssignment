// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "FlockingGameModeBase.h"
#include "FlockingManager.h"

AFlockingGameModeBase::AFlockingGameModeBase() {
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
    PrimaryActorTick.bCanEverTick = true;
}  

void AFlockingGameModeBase::BeginPlay() {
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("GAMEMODE BEGINPLAY()"));
    Manager = NewObject<UFlockingManager>();
    Manager->Init( GetWorld(), Mesh );
}

void AFlockingGameModeBase::Tick( float DeltaTime ) {
    Super::Tick( DeltaTime );
    Manager->Flock();
};