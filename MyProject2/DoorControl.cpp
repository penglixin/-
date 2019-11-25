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
void UDoorControl::BeginPlay()  //�൱��Start()
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
	//�ж�ĳ��Actor(������DefaultPawn)�Ƿ���Trigger����
	if (TriggerVolume!=nullptr && TriggerVolume->IsOverlappingActor(DefaultPawn))
	{
		OnOpen.Broadcast();    //��ʾ��OnOpen�¼�����
		LastOpenDoorTime = GetWorld()->GetTimeSeconds();    //�ѵ�ǰʱ�̸�ֵ����ο��ŵ�ʱ��
	}
	if(GetWorld()->GetTimeSeconds()-LastOpenDoorTime>OpenDoorTime && GetTotalMass()<25)   //�����ǰʱ�̼�ȥ��һ�ο���ʱ�̴���1s�����
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

