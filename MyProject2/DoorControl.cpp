// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorControl.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Components/PrimitiveComponent.h"
//#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UDoorControl::UDoorControl()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
	
}


// Called when the game starts
void UDoorControl::BeginPlay()  //相当于Start()
{
	Super::BeginPlay();
	Owner = GetOwner();
	DefaultPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	UE_LOG(LogTemp, Warning, TEXT("Hello %s"),*Owner->GetName());
}


// Called every frame
void UDoorControl::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	//判断某个Actor(这里是DefaultPawn)是否在Trigger里面
	if (TriggerVolume!=nullptr && TriggerVolume->IsOverlappingActor(DefaultPawn))
	{
		OnOpen.Broadcast();    //表示将OnOpen事件触发
		LastOpenDoorTime = GetWorld()->GetTimeSeconds();    //把当前时刻赋值给这次开门的时刻
	}
	if(GetWorld()->GetTimeSeconds()-LastOpenDoorTime>OpenDoorTime && GetTotalMass()<25)   //如果当前时刻减去上一次开门时刻大于1s则关门
	{
		OnClose.Broadcast();
	}
}

void UDoorControl::OpenDoor()
{
	//Roll=x,Pitch=y,Yaw=z
	FRotator NewRotator = FRotator(0, 90, 0);//y,z,x
	Owner->SetActorRotation(NewRotator);
	
}

void UDoorControl::CloseDoor()
{
	FRotator NewRotator = FRotator(0, 0, 0);//y,z,x
	Owner->SetActorRotation(NewRotator);
}

float UDoorControl::GetTotalMass()
{
	if (TriggerVolume == nullptr)
		return 0;
	TArray<AActor*> Actors;
	TriggerVolume->GetOverlappingActors(Actors);
	float TotalMass = 0;
	for (const auto& actor : Actors) {
		TotalMass += actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	return TotalMass;
}

