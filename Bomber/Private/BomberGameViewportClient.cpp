// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BomberGameViewportClient.h"

bool UBomberGameViewportClient::InputKey(FViewport * Viewport, int32 Controllerid, FKey Key, EInputEvent Event, float AmountDepressed, bool bGamepad)
{
	if (IgnoreInput() || bGamepad || Key.IsMouseButton()) {  //只修改键盘输入，如果是忽略输入，触摸板输入，鼠标点击输入(这三种都不是键盘输入)则不修改
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
	if (IgnoreInput() || bGamepad || Key.IsMouseButton()) {  //只修改键盘输入，如果是忽略输入，触摸板输入，鼠标点击输入(这三种都不是键盘输入)则不修改
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
