// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/VehicleGameMode.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "ConstructorHelpers.h"


AVehicleGameMode::AVehicleGameMode() {
	CountTime = 3;
	static ConstructorHelpers::FObjectFinder<USoundCue> CutSounds(TEXT("/Game/Sound/CutDown/UI_Countdown_Cue"));
	CutTimeSound = CutSounds.Object;

	static ConstructorHelpers::FObjectFinder<USoundCue> FinishTimeSounds(TEXT("/Game/Sound/CutDown/UI_CountdownFinish_Cue"));
	FinishSound = FinishTimeSounds.Object;

	CurrentState = CarStates::Wait;
}


void AVehicleGameMode::StartPlay() {
	Super::StartPlay(); 

	GetWorldTimerManager().SetTimer(TimeCount,this,&AVehicleGameMode::CutTime,1.0f,true,1.5f);// 1.0f调用一次；true循环；第一次1.5f延迟调用
}

void AVehicleGameMode::CutTime() {

	if (CountTime == 0) {
		CurrentState = CarStates::Playing;
		if(FinishSound)
			UGameplayStatics::PlaySoundAtLocation(this, FinishSound, FVector(0, 0, 0));
		GetWorldTimerManager().ClearTimer(TimeCount);
	}
	else
	{
		if(CutTimeSound)
			UGameplayStatics::PlaySoundAtLocation(this, CutTimeSound, FVector(0, 0, 0));
		CountTime--;
	}
}


