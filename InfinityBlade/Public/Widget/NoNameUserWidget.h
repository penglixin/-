// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NoNameUserWidget.generated.h"


class UButton;
class UScrollBox;
/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UNoNameUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
		UButton* CheckButton;
	UPROPERTY()
		UButton* DelButton;
	UPROPERTY()
		UButton* BackButton;
	UPROPERTY()
		UScrollBox* UserList;
	UPROPERTY()
		class UTextBlock* DelText;

protected:
	virtual bool Initialize() override;

public:

	UFUNCTION()
		void DelBtnOnClickEvevt();

};
