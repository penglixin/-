// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BomberPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BOMBER_API ABomberPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	void MoveVertical(float AixsValue);
	void MoveHorizontal(float AixsValue);

	virtual void SetupInputComponent() override;
	
	APawn* Pawn;
	void CreateBombInput();

	void RemoteExploredInput();
};
