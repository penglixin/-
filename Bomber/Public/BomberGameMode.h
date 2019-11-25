// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberGameMode.generated.h"


class UBomberManHUD;

UENUM()
enum class EPowerupType :uint8 {
	MoreBomb,
	LongBlast,
	Remote,
	Speed
};
/**
 * 
 */
UCLASS()
class BOMBER_API ABomberGameMode : public AGameModeBase
{
	GENERATED_BODY()

		ABomberGameMode();
protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Powerup")
		float DropChance = 0.4f;

	UPROPERTY(EditAnywhere, Category = "Time")
		float TotalTime = 300.0f;

	FText TimeText;

	UBomberManHUD* BomberHUD;


	class UBomberSaveGame* SaveGame;


	FString SlotName = "MatchValue";
	int UserIndex = 0;

	void IncrementP1Score();
	void IncrementP2Score();

	void UpdateScore();

	void OnGameEnd();
public:

	FORCEINLINE float GetDropChance() {	return DropChance; }


	virtual void Tick(float DeltaSeconds) override;

	void OnplayerDeath(AController* controller);

	void Restart();
	void Next();
};
