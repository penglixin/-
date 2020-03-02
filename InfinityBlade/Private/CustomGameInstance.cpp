// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/CustomGameInstance.h"
#include "Public/Widget/LoadUserWidget.h"
#include "Components/TextBlock.h"
#include "Components/CircularThrobber.h"


void UCustomGameInstance::Init()
{
	UGameInstance::Init();
	//开始加载地图的委托
	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UCustomGameInstance::PreLoadMap);
	//结束加载地图的委托
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UCustomGameInstance::PostLoadMap);

	loadWidget = CreateWidget<ULoadUserWidget>(this,LoadClass<ULoadUserWidget>(this,TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Start/LoadUI.LoadUI_C'")));
}

void UCustomGameInstance::PreLoadMap(const FString& Map)
{
	//World'/Game/InfinityBladeGrassLands/Maps/ElvenRuins.ElvenRuins'
	//World'/Game/Maps/Level1.Level1'
	if (Map.Equals("/Game/InfinityBladeGrassLands/Maps/ElvenRuins"))
	{
		//创建屏幕加载属性
		FLoadingScreenAttributes loadingAtr;
		//手动点击跳过加载
		loadingAtr.bWaitForManualStop = true;
		//设置加载的Widget
		loadingAtr.WidgetLoadingScreen = loadWidget->TakeWidget();
		//设置加载时的屏幕显示
		GetMoviePlayer()->SetupLoadingScreen(loadingAtr);
	}

}

void UCustomGameInstance::PostLoadMap(UWorld * world)
{

}

bool UCustomGameInstance::GetLoadStatus()
{
	return GetMoviePlayer()->IsLoadingFinished();
}