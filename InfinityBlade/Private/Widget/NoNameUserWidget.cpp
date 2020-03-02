// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/NoNameUserWidget.h"
#include "Components/Button.h"
#include "Components/ScrollBox.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"



bool UNoNameUserWidget::Initialize()
{
	if(!Super::Initialize())
	{
		return false;
	}
	CheckButton = (UButton*)GetWidgetFromName(TEXT("CheckBtn"));
	DelButton = (UButton*)GetWidgetFromName(TEXT("DelBtn"));
	BackButton = (UButton*)GetWidgetFromName(TEXT("BackBtn"));
	UserList = (UScrollBox*)GetWidgetFromName(TEXT("ScrollBox_UserList"));
	DelText = (UTextBlock*)GetWidgetFromName(TEXT("TextBlock_Del"));

	DelButton->OnClicked.AddDynamic(this, &UNoNameUserWidget::DelBtnOnClickEvevt);

	return true;
}

void UNoNameUserWidget::DelBtnOnClickEvevt()
{
	if(UGameplayStatics::DeleteGameInSlot("UserInfo",0))
	{
		DelText->SetText(FText::FromString("Deleted Successful!"));
		UserList->SetVisibility(ESlateVisibility::Hidden);
	}
}