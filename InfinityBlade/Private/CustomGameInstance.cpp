// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/CustomGameInstance.h"
#include "Public/Widget/LoadUserWidget.h"
#include "Components/TextBlock.h"
#include "Components/CircularThrobber.h"


void UCustomGameInstance::Init()
{
	UGameInstance::Init();
	//��ʼ���ص�ͼ��ί��
	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UCustomGameInstance::PreLoadMap);
	//�������ص�ͼ��ί��
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UCustomGameInstance::PostLoadMap);

	loadWidget = CreateWidget<ULoadUserWidget>(this,LoadClass<ULoadUserWidget>(this,TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Start/LoadUI.LoadUI_C'")));
}

void UCustomGameInstance::PreLoadMap(const FString& Map)
{
	//World'/Game/InfinityBladeGrassLands/Maps/ElvenRuins.ElvenRuins'
	//World'/Game/Maps/Level1.Level1'
	if (Map.Equals("/Game/InfinityBladeGrassLands/Maps/ElvenRuins"))
	{
		//������Ļ��������
		FLoadingScreenAttributes loadingAtr;
		//�ֶ������������
		loadingAtr.bWaitForManualStop = true;
		//���ü��ص�Widget
		loadingAtr.WidgetLoadingScreen = loadWidget->TakeWidget();
		//���ü���ʱ����Ļ��ʾ
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