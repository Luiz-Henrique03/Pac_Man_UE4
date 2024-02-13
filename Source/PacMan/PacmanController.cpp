// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanController.h"
#include "PacManGameModeBase.h"
#include "PacManPawn.h"

APacManPawn* APacmanController::GetPacManPawn()
{
	return Cast<APacManPawn>(GetPawn());
}

void APacmanController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("MoveUp", IE_Pressed, this, &APacmanController::MoveUp);
	InputComponent->BindAction("MoveDown", IE_Pressed, this, &APacmanController::MoveDown);
	InputComponent->BindAction("MoveLeft", IE_Pressed, this, &APacmanController::MoveLeft);
	InputComponent->BindAction("MoveRight", IE_Pressed, this, &APacmanController::MoveRight);

}

void APacmanController::MoveUp()
{
	if (GetPacManPawn() == nullptr) { return; }
	GetPacManPawn()->SetDirection(FVector::UpVector);
}

void APacmanController::MoveDown()
{
	if (GetPacManPawn() == nullptr) { return; }
	GetPacManPawn()->SetDirection(FVector::DownVector);
}

void APacmanController::MoveLeft()
{
	if (GetPacManPawn() == nullptr) { return; }
	GetPacManPawn()->SetDirection(FVector::LeftVector);

}

void APacmanController::MoveRight()
{
	if (GetPacManPawn() == nullptr) { return; }
	GetPacManPawn()->SetDirection(FVector::RightVector);

}