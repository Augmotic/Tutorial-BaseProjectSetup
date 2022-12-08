// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/LIBCharacter.h"

// Sets default values
ALIBCharacter::ALIBCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALIBCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALIBCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALIBCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

