// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PacmanController.generated.h"

class APacManPawn;
class APacManGameModeBase;

UCLASS()
class PACMAN_API APacmanController : public APlayerController
{
	GENERATED_BODY()

protected:
	void SetupInputComponent() override;
	APacManPawn* GetPacManPawn();
public:
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
private:

	
};
