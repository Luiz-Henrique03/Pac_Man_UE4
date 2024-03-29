// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PacManPawn.generated.h"

class APacManGameModeBase;

UCLASS()
class PACMAN_API APacManPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APacManPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	
public:

	void SetDirection(const FVector Direction);
	bool IsFrozen() { return Frozen; }
	UFUNCTION(BlueprintCallable)
	void SetFrozen(bool Value) {Frozen = Value;}
	bool Frozen = true;

private:
	UFUNCTION()
		void OnOverLapBegin(AActor* PlayerActor, AActor* OtherActor);

	



};
