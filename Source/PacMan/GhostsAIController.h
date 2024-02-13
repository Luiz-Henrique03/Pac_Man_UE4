// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GhostsAIController.generated.h"

class APacManPawn;

UCLASS()
class PACMAN_API AGhostsAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	

private:
	APacManPawn* PacManPawnReference;
	float DelayToHunt = 2;
	void HuntPacMan();


};
