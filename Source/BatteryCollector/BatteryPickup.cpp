// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include "Classes/Components/StaticMeshComponent.h"

// Sets default values for this actor's properties
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	// Set the base power level
	BatteryPower = 150.0f;
}

void ABatteryPickup::WasCollected_Implementation()
{
	// Base pickup behaviour
	Super::WasCollected_Implementation();

	// Destroy the battery
	Destroy();
}

// Public way to access the BatteryPower 
float ABatteryPickup::GetPower()
{
	return BatteryPower;
}
