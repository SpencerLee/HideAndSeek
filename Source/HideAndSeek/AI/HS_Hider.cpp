// Fill out your copyright notice in the Description page of Project Settings.

#include "HideAndSeek.h"
#include "HS_Hider.h"


// Sets default values
AHS_Hider::AHS_Hider()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetMovementComponent()->NavAgentProps.AgentRadius = 42.f;
	GetMovementComponent()->NavAgentProps.AgentHeight = 192.0f;
	GetMovementComponent()->NavAgentProps.AgentStepHeight = -1.0f;
	GetMovementComponent()->NavAgentProps.NavWalkingSearchHeightScale = .5f;
	GetMovementComponent()->NavAgentProps.bCanCrouch = false;
	GetMovementComponent()->NavAgentProps.bCanJump = true;
	GetMovementComponent()->NavAgentProps.bCanWalk = true;

}

// Called when the game starts or when spawned
void AHS_Hider::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHS_Hider::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AHS_Hider::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

