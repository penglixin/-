// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WealthWidget.generated.h"


class AWealthActor;
class UTexture2D;
class UImage;
class UOverlay;


/**
 * 
 */
UCLASS()
class ASYNCASSETLOAD_API UWealthWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:

	UPROPERTY(Meta = (BindWidget))
		UImage* Image_123;
	UPROPERTY(Meta = (BindWidget))
		UOverlay* Overlay_0;

	AWealthActor* WealthActor;

protected:

	virtual bool Initialize() override;

public:

	void AssighTexture(UTexture2D* InTexture);
	void AssignOverlay_0(UUserWidget* InWidget);

};
