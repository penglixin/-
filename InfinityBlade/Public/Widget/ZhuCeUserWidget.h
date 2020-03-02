// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ZhuCeUserWidget.generated.h"


class UButton;
class UEditableTextBox;
class UCircularThrobber;
class UNoteUserWidget;
/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UZhuCeUserWidget : public UUserWidget
{
	GENERATED_BODY()
	


public:
	UPROPERTY()
		UButton*  BackButton;
	UPROPERTY()
		UButton* OkButton;
	UPROPERTY()
		UEditableTextBox* NameText;
	UPROPERTY()
		UEditableTextBox* PasswordText;
	UPROPERTY()
		UEditableTextBox* RePasswordText;
	UPROPERTY()
		UNoteUserWidget* NoteWidget;

protected:

	virtual bool Initialize() override;


public:


};
