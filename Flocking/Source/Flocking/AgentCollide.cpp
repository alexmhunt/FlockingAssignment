// Fill out your copyright notice in the Description page of Project Settings.


#include "AgentCollide.h"
#include "Agent.h"

// Sets default values for this component's properties
UAgentCollide::UAgentCollide()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAgentCollide::BeginPlay()
{
	Super::BeginPlay();

	// ...
	AAgent * agent = dynamic_cast<AAgent *>(GetOwner());
	UStaticMeshComponent * cone = agent->FindComponentByClass<UStaticMeshComponent>();

	cone->OnComponentHit.AddDynamic(this, &UAgentCollide::OnActorHit);
	
}


// Called every frame
void UAgentCollide::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAgentCollide::OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit ) {
  ;
}
