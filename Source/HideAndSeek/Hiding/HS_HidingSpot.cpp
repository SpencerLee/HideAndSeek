 // Fill out your copyright notice in the Description page of Project Settings.

#include "HideAndSeek.h"
#include "HS_HidingSpot.h"


// Sets default values
AHS_HidingSpot::AHS_HidingSpot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	marker = CreateDefaultSubobject<UBillboardComponent>(TEXT("Marker"), false);
	


}

// Called when the game starts or when spawned
void AHS_HidingSpot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHS_HidingSpot::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

