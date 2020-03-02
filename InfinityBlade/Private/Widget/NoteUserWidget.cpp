// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/NoteUserWidget.h"
#include "Components/Button.h"




bool UNoteUserWidget::Initialize()
{
	if (!Super::Initialize())
		return false;

	closeButton = (UButton*)GetWidgetFromName(TEXT("CloseBtn"));
	noteTextBlock = (UTextBlock*)GetWidgetFromName(TEXT("NoteText"));

	closeButton->OnClicked.AddDynamic(this, &UNoteUserWidget::CloseBtnOnClickEvent);

	return true;
}

void UNoteUserWidget::CloseBtnOnClickEvent()
{
	this->SetVisibility(ESlateVisibility::Hidden);
}