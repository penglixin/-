// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BomberSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class BOMBER_API UBomberSaveGame : public USaveGame
{
	GENERATED_BODY()
	
	
protected:
	
	UBomberSaveGame();
	UPROPERTY()
	int P1_Score;
	UPROPERTY()
	int P2_Score;


public:

	FORCEINLINE int GetP1_Score() { return P1_Score; }
	FORCEINLINE int GetP2_Score() { return P2_Score; }

	void SetP1_Score() {	P1_Score++; }
	void SetP2_Score() {	P2_Score++; }
};
