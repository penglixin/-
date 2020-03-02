// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/LoginUserWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Public/Widget/NoteUserWidget.h"


bool ULoginUserWidget::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}

	BackButton = (UButton*)GetWidgetFromName(TEXT("BackBtn"));
	LoginButton = (UButton*)GetWidgetFromName(TEXT("LoginBtn"));
	NameInputText = (UEditableTextBox*)GetWidgetFromName(TEXT("NameInput"));
	PasswordInputText = (UEditableTextBox*)GetWidgetFromName(TEXT("PassWordInput"));
	Login_NoteWidget = (UNoteUserWidget*)GetWidgetFromName(TEXT("NoteUI"));
	return true;
}