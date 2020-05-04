// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlockingManager.generated.h"

/**
 * 
 */
UCLASS()
class FLOCKING_API UFlockingManager : public UObject
{
public:
	GENERATED_BODY()
	void Init( UWorld *world, UStaticMeshComponent *mesh );
	void Flock();

private:
	UWorld *World;	
	bool initialized;

	UPROPERTY(EditAnywhere)
	TArray<class AAgent *> Agents;

	FVector rule1(AAgent *a);
	FVector rule2(AAgent *a);
	FVector rule3(AAgent *a);

	void limitVelocity(AAgent *a);
};
