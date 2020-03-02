// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Public/Common/ItemInfo.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "ShopItemUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UShopItemUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	FItemInfo Info;


	UPROPERTY(Meta = (BindWidget))
		UImage* Image_Pic;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_Name;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_Desc;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_1;
	UPROPERTY()
		UButton* BuyBtn;
protected:

	virtual bool Initialize() override;

public:
	UFUNCTION()
		void ShopBtnOnClickEvent();

};
