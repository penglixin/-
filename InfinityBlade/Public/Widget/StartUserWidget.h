// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StartUserWidget.generated.h"


class UButton;
/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UStartUserWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:

	UPROPERTY()
		UButton* StartButton;
	UPROPERTY()
		UButton* ZhuCeButton;
	UPROPERTY()
		UButton* ExitButton;
	UPROPERTY()
		UButton* AdminButton;


protected:
	virtual bool Initialize() override;

public:
	UFUNCTION()
		void ExitButtonOnClick();
};
