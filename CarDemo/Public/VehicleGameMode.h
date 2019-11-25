// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VehicleGameMode.generated.h"


class USoundCue;


enum class CarStates :short {
	Wait,
	Playing,
};

/**
 * 
 */
UCLASS()
class CARDEMO_API AVehicleGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	AVehicleGameMode();
	FTimerHandle  TimeCount;
	void CutTime();
	UPROPERTY(BlueprintReadOnly, Category = "UI")
	int CountTime;


	USoundCue* CutTimeSound;
	USoundCue* FinishSound;
public:
	virtual void StartPlay() override;
	
	CarStates CurrentState;
};
