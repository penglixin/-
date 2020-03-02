// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoginUserWidget.generated.h"

class UButton;
class UEditableTextBox;
class UNoteUserWidget;
/**
 * 
 */
UCLASS()
class INFINITYBLADE_API ULoginUserWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:

	UPROPERTY()
		UButton* BackButton;
	UPROPERTY()
		UButton* LoginButton;
	UPROPERTY()
		UEditableTextBox* NameInputText;
	UPROPERTY()
		UEditableTextBox* PasswordInputText;

	UPROPERTY()
		UNoteUserWidget* Login_NoteWidget;
protected:

	virtual bool Initialize() override;



};
