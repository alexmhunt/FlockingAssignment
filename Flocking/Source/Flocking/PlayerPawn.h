// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "PlayerPawn.generated.h"

UCLASS()
class FLOCKING_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent * Mesh;


protected:

    FVector2D CameraInput;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere)
	class UCameraComponent * Camera;

	UFloatingPawnMovement * PawnMovement;

	void MoveForward( float Amount );
	void MoveRight( float Amount );

	void PitchCamera(float AxisValue);
    void YawCamera(float AxisValue);
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
