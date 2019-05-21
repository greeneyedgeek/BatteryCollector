// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include "Classes/Components/StaticMeshComponent.h"

// Sets default values for this actor's properties
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);
}

void ABatteryPickup::WasCollected_Implementation()
{
	// Base pickup behaviour
	Super::WasCollected_Implementation();

	// Destroy the battery
	Destroy();
}


