// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PacManGameModeBase.generated.h"

class APacManPawn;
class AFoodie;

UCLASS()
class PACMAN_API APacManGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	
	int32 GetAllFoodies();
	
public:
	// Called every frame
	void HandleGameOver();
	int32 DeadFoodies;
	APacManPawn* PacManPawnRef;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
