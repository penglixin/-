// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "Engine/GameViewportClient.h"
#include "BomberGameViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class BOMBER_API UBomberGameViewportClient : public UGameViewportClient
{
	GENERATED_BODY()

	virtual bool InputKey
	(
		FViewport* Viewport,
		int32 Controllerid,
		FKey Key,
		EInputEvent Event,
		float AmountDepressed,
		bool bGamepad
	) override;

	virtual bool InputAxis
	(
		FViewport* Viewport,
		int32 Controllerid,
		FKey Key,
		float Delta,
		float DeltaTime,
		int32 NumSamples,
		bool bGamepad
	) override;
	

	
};
