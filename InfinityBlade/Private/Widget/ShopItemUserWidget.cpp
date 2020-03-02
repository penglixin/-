// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/ShopItemUserWidget.h"
#include "Public/Character/PlayerCharacter.h"
#include "Public/Character/XPlayerController.h"
#include "Kismet/GameplayStatics.h"


bool UShopItemUserWidget::Initialize()
{
	if(!Super::Initialize())
	{
		return false;
	}
	BuyBtn = (UButton*)GetWidgetFromName(TEXT("Button_Shop"));
	BuyBtn->OnClicked.AddDynamic(this, &UShopItemUserWidget::ShopBtnOnClickEvent);

	return true;
}

void UShopItemUserWidget::ShopBtnOnClickEvent()
{
	AXPlayerController* XController = Cast<AXPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	TextBlock_1->SetVisibility(ESlateVisibility::Visible);
	Info.Id = XController->character->ItemArray.Num();
	XController->character->ItemArray.Add(Info);
	XController->character->Coin -= 88.8f;
}
