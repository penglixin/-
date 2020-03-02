// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "Public/Common/ItemInfo.h"
#include "ItemUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UItemUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(Meta = (BindWidget))
		UImage* Image_Pic;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_Name;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_Desc;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_1;
	UPROPERTY()
		UButton* UseBtn;
	//ÅÐ¶Ïleix
	uint8 IdType;
	EItemType ItemType;

	class AXPlayerController* XController;
protected:

	virtual bool Initialize() override;

public:
	UFUNCTION()
		void UseBtnOnClickEvent();

	void IsHPFull();
	void IsMPFull();


};
