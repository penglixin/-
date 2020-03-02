// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"

#include "ShopUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UShopUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
		UButton* CloseBtn;

	UPROPERTY(Meta = (BindWidget))
		UScrollBox* ScrollBox_0;

protected:

	virtual bool Initialize() override;

public:

	UFUNCTION()
		void CloseBtnOnClickEvent();
};
