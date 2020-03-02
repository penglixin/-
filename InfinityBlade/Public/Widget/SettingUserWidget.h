// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Slider.h"
#include "SettingUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API USettingUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
		UButton* GoOn;
	UPROPERTY()
		UButton* ExitBtn;
	UPROPERTY()
		USlider* DistanceSlider;
	UPROPERTY()
		USlider* HighSlider;

	class APlayerCharacter* XCharacter;
protected:

	virtual bool Initialize() override;

public:

	UFUNCTION()
		void GoOnBtnOnClickedEvent();

	UFUNCTION()
		void ExitBtnOnClickenEvent();

	UFUNCTION()
		void DistanceSliderValueChanged();
	UFUNCTION()
		void HighSliderValueChanged();
};
