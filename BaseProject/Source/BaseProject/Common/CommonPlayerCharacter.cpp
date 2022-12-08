// Fill out your copyright notice in the Description page of Project Settings.


#include "Common/CommonPlayerCharacter.h"

ACommonPlayerCharacter::ACommonPlayerCharacter()
{
	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
}

void ACommonPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}
