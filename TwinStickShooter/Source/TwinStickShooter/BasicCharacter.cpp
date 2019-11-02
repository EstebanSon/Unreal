// Fill out your copyright notice in the Description page of Project Settings.

#include "TwinStickShooter.h"
#include "BasicCharacter.h"


// Sets default values
ABasicCharacter::ABasicCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Implement CalculateHealth
void ABasicCharacter::CalculateHealth(float Delta)
{
	Health += Delta;
	CalculateDead();
}

// Implemetn CalculateDead
void ABasicCharacter::CalculateDead()
{
	if (Health <= 0)
		isDead = true;
	else
		isDead = false;
}

// Implement PostEditChangeProperty
#if WITH_EDITOR
void ABasicCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	isDead = false;
	Health = 100;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	CalculateDead();
}
#endif