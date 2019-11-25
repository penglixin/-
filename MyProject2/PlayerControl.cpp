// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerControl.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Components/PrimitiveComponent.h"
// Sets default values for this component's properties
UPlayerControl::UPlayerControl()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerControl::BeginPlay()
{
	Super::BeginPlay();

	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	HandleComponent = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	if (InputComponent) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Input Component is found！"));
		InputComponent->BindAction("Grab", IE_Pressed, this,&UPlayerControl::Press);  //将Press函数与Grab绑定
		InputComponent->BindAction("Grab", IE_Released, this, &UPlayerControl::Release);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Input Component can not found！"));
	}
	
}


// Called every frame
void UPlayerControl::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	//DrawDebugLine(GetWorld(), StartPos, End, FColor(255, 0, 0), false, 0, 0, 10);  //画线

	//HandleComponent->GrabbedComponent 判断是否抓取了物体，调用了GrabComponentAtLocationWithRotation后就不为空
	if (HandleComponent && HandleComponent->GrabbedComponent) {
		HandleComponent->SetTargetLocation(GetEndPos());
	}
	
}

FVector UPlayerControl::GetStartPos()
{
	FVector StartPos;   //Player的位置
	FRotator ViewRotator;  //Player的旋转
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(StartPos, ViewRotator);
	return StartPos;
}

FVector UPlayerControl::GetEndPos()
{
	FVector StartPos;   //Player的位置
	FRotator ViewRotator;  //Player的旋转
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(StartPos, ViewRotator);
	return StartPos + ViewRotator.Vector() * 100;
}

FHitResult  UPlayerControl::LineTest()
{
	FHitResult Hit;  //储存碰撞信息，即碰撞到的物体 
	GetWorld()->LineTraceSingleByObjectType(
		Hit,
		GetStartPos(),
		GetEndPos(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		FCollisionQueryParams(FName(TEXT("")), false, GetOwner())
	);
	AActor* actor = Hit.GetActor();
	if (actor != nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Hit Result:%s"), *actor->GetName());
	}
	return Hit;
}

void UPlayerControl::Press()
{
	UE_LOG(LogTemp, Warning, TEXT("Mouse Button is Pressed!"));
	FRotator NewRotator = FRotator(0, 0, 0);//y,z,x
	FHitResult Hit = LineTest();
	UPrimitiveComponent*  GrabtoComponent = Hit.GetComponent();
	if (Hit.GetActor() && HandleComponent!=nullptr) {
		//按下鼠标左键执行此方法，当Hit不为空，则抓取物体
		HandleComponent->GrabComponentAtLocationWithRotation(GrabtoComponent, NAME_None, GrabtoComponent->GetOwner()->GetActorLocation(), NewRotator);

	}
}

void UPlayerControl::Release()
{
	UE_LOG(LogTemp, Error, TEXT("Mouse Button is Released!"));
	if (HandleComponent) {
		HandleComponent->ReleaseComponent();
	}
}

