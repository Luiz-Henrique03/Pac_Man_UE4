// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostsAIController.h"
#include "Kismet/GameplayStatics.h"
#include "PacManPawn.h"

void AGhostsAIController::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle GhostDelay;
	GetWorld()->GetTimerManager().SetTimer(GhostDelay, this,&AGhostsAIController::HuntPacMan,DelayToHunt,false);

}

void AGhostsAIController::HuntPacMan()
{
	PacManPawnReference = Cast<APacManPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	SetFocus(PacManPawnReference);
	MoveToActor(PacManPawnReference, 0,false);
}


