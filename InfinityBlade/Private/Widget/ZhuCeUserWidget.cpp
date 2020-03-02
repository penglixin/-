// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/ZhuCeUserWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/CircularThrobber.h"
#include "Components/TextBlock.h"
#include "Public/Common/UserInfoStruct.h"
#include "Public/Widget/NoteUserWidget.h"



bool UZhuCeUserWidget::Initialize()
{
	if(!Super::Initialize())
	{
		return false;
	}
	BackButton = (UButton*)GetWidgetFromName(TEXT("BackBtn"));
	OkButton = (UButton*)GetWidgetFromName(TEXT("OkBtn"));
	NameText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("NameInput")));
	PasswordText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("PassWordInput")));
	RePasswordText = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("RePasswordInput")));

	NoteWidget = (UNoteUserWidget*)GetWidgetFromName(TEXT("NoteUI"));

	NameText->SetText(FText::FromString(""));
	PasswordText->SetText(FText::FromString(""));
	RePasswordText->SetText(FText::FromString(""));

	return true;
}