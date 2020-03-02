// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AdminUserWidget.generated.h"

class UButton;
class UEditableTextBox;
class UNamedSlot;
class UTextBlock;
/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UAdminUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
		UButton* BackButton;
	UPROPERTY()
		UButton* OkButton;
	UPROPERTY()
		UButton* ExitButton;
	UPROPERTY()
		UEditableTextBox* Adminpassword;
	UPROPERTY()
		UNamedSlot* namedSlot;
	UPROPERTY()
		UTextBlock* tishiText;
protected:

	virtual bool Initialize() override;

public:

	UFUNCTION()
		void ExitBtnOnClickEvent();

};
