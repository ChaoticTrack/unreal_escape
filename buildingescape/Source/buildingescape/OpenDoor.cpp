// Copyright Peyton Seigo 2017

#include "buildingescape.h"
#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// Find the owning actor
	AActor *Owner = GetOwner();

	// FString Owner = GetOwner()->GetName();
	// FString Rotation = GetOwner()->GetTransform().GetRotation().ToString();

	// Create a rotator
	FRotator NewRotation = FRotator(0.0f, -80.0f, 0.0f);

	// Set the door rotation
	Owner->SetActorRotation(NewRotation);
	
	//GetOwner()->SetActorTransform(Rotation(30));
	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

