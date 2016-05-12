// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "HS_Hider.generated.h"

UCLASS()
class HIDEANDSEEK_API AHS_Hider : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHS_Hider();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};
