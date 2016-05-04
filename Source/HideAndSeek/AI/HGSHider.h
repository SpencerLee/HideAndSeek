// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "HGSHider.generated.h"

UCLASS()
class HIDEANDSEEK_API AHGSHider : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AHGSHider();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};
