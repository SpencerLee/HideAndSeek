// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Components/BillboardComponent.h"
#include "HS_HidingSpot.generated.h"

UCLASS()
class HIDEANDSEEK_API AHS_HidingSpot : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHS_HidingSpot();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY()
		UBillboardComponent* marker;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = HidingSpot)
		bool bIsTaken;

	
};
