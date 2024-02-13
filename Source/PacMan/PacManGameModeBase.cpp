// Copyright Epic Games, Inc. All Rights Reserved.


#include "PacManGameModeBase.h"
#include "Foodie.h"
#include "PacManPawn.h"
#include "Kismet/GameplayStatics.h"

void APacManGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	DeadFoodies = GetAllFoodies();

}


void APacManGameModeBase::HandleGameOver()
{

	
		UE_LOG(LogTemp, Warning, TEXT("You win"));
	

}


int32 APacManGameModeBase::GetAllFoodies()
{
	TArray<AActor*>AllFodies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFoodie::StaticClass(),AllFodies);
	return AllFodies.Num();

}



