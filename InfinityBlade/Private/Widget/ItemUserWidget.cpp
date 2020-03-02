// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/ItemUserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Public/Character/XPlayerController.h"
#include "Public/Character/PlayerCharacter.h"
#include "Public/Character/XPlayerState.h"


bool UItemUserWidget::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}
	UseBtn = (UButton*)GetWidgetFromName(TEXT("Button_Use"));
	UseBtn->OnClicked.AddDynamic(this, &UItemUserWidget::UseBtnOnClickEvent);
	return true;
}

void UItemUserWidget::UseBtnOnClickEvent()
{
	XController = Cast<AXPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	switch (ItemType)
	{
	case EItemType::HP:IsHPFull();
		break;
	case EItemType::MP:IsMPFull();
		break;
	}
}

void UItemUserWidget::IsHPFull()
{
	if (XController->playerstate->GetCurrentHP() == XController->character->TotalHP)
	{
		TextBlock_1->SetText(FText::FromString("HP is full!"));
		TextBlock_1->SetVisibility(ESlateVisibility::Visible);
		return;
	}
	XController->playerstate->SetCurrentHP(XController->character->TotalHP);
	XController->UpdateUI();
	this->RemoveFromParent();
	for (int i = 0;i < XController->character->ItemArray.Num();i++)
	{
		if (IdType == XController->character->ItemArray[i].Id)
		{
			XController->character->ItemArray.RemoveAt(i);
			return;
		}
	}
}

void UItemUserWidget::IsMPFull()
{
	if (XController->playerstate->GetCurrentMP() == XController->character->TotalMP)
	{
		TextBlock_1->SetText(FText::FromString("MP is full!"));
		TextBlock_1->SetVisibility(ESlateVisibility::Visible);
		return;
	}
	XController->playerstate->SetCurrentMP(XController->character->TotalMP);
	XController->UpdateUI();
	this->RemoveFromParent();
	for (int i = 0;i < XController->character->ItemArray.Num();i++)
	{
		if (IdType == XController->character->ItemArray[i].Id)
		{
			XController->character->ItemArray.RemoveAt(i);
			return;
		}
	}
}
