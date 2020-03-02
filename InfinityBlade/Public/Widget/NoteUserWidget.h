// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "NoteUserWidget.generated.h"

class UButton;
class UTextBlock;
/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UNoteUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
		UButton*  closeButton;
	UPROPERTY()
		UTextBlock* noteTextBlock;

protected:

	virtual bool Initialize() override;


public:

	UFUNCTION()
		void CloseBtnOnClickEvent();

};
