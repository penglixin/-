// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "BackpackUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UBackpackUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
		UButton* CloseBtn;
	UPROPERTY()
		UScrollBox* ItemList;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_Health;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_Magic;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_Attack;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_Coin;
protected:

	virtual bool Initialize() override;
public:

	UFUNCTION()
		void CloseBtnOnClickEvent();

};
