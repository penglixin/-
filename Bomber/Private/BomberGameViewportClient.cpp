// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BomberGameViewportClient.h"

bool UBomberGameViewportClient::InputKey(FViewport * Viewport, int32 Controllerid, FKey Key, EInputEvent Event, float AmountDepressed, bool bGamepad)
{
	if (IgnoreInput() || bGamepad || Key.IsMouseButton()) {  //ֻ�޸ļ������룬����Ǻ������룬���������룬���������(�����ֶ����Ǽ�������)���޸�
		return Super::InputKey(Viewport, Controllerid, Key, Event, AmountDepressed, bGamepad);
	}
	else
	{
		UEngine* const Engine = GetOuterUEngine();
		int32  PlayerNum = Engine ? Engine->GetNumGamePlayers(this) : 0;
		bool bRet=true;
		for(int32 i = 0; i < PlayerNum;i++) {
			bRet = Super::InputKey(Viewport, i, Key, Event, AmountDepressed, bGamepad) && bRet;
		}
		return bRet;
	}
}

bool UBomberGameViewportClient::InputAxis(FViewport * Viewport, int32 Controllerid, FKey Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad)
{
	if (IgnoreInput() || bGamepad || Key.IsMouseButton()) {  //ֻ�޸ļ������룬����Ǻ������룬���������룬���������(�����ֶ����Ǽ�������)���޸�
		return Super::InputAxis(Viewport, Controllerid, Key, Delta, DeltaTime, NumSamples, bGamepad);
	}
	else
	{
		UEngine* const Engine = GetOuterUEngine();
		int32  PlayerNum = Engine ? Engine->GetNumGamePlayers(this) : 0;
		bool bRet=true;
		for (int32 i = 0; i < PlayerNum;i++) {
			bRet = Super::InputAxis(Viewport, i, Key, Delta, DeltaTime, NumSamples, bGamepad) && bRet;
		}
		return bRet;
	}
}
