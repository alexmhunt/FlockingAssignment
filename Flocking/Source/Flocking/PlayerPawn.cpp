// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Camera = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));

	//Camera->SetRelativeLocation(FVector(-500.f,0.f,0.f));
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	SpringArm->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	Camera->bUsePawnControlRotation = true; // Rotate the arm based on the controller

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Rotate our actor's yaw, which will turn our camera because we're attached to it
    {
        FRotator NewRotation = GetActorRotation();
        NewRotation.Yaw += CameraInput.X;
        SetActorRotation(NewRotation);
    }

    //Rotate our camera's pitch, but limit it so we're always looking downward
    {
        FRotator NewRotation = SpringArm->GetComponentRotation();
        NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
        SpringArm->SetWorldRotation(NewRotation);
    }

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerPawn::MoveRight);	

	PlayerInputComponent->BindAxis("Turn", this, &APlayerPawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerPawn::AddControllerPitchInput);

}

void APlayerPawn::MoveForward( float Amount ){
	PawnMovement->AddInputVector( GetActorForwardVector() * Amount );
}

void APlayerPawn::MoveRight( float Amount ){
	PawnMovement->AddInputVector( GetActorRightVector() * Amount );
}

void APlayerPawn::PitchCamera(float AxisValue)
{
    CameraInput.Y = AxisValue;
}

void APlayerPawn::YawCamera(float AxisValue)
{
    CameraInput.X = AxisValue;
}