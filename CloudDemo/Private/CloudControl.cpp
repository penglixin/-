 // Fill out your copyright notice in the Description page of Project Settings.

#include "Public/CloudControl.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACloudControl::ACloudControl()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	LaunchVelocity = FVector(0, 0, 1500);
	AirSpeed = 3500.0f;
	GroundSpeed = 300.0f;
	Score = 0;
	isOver = false;

}

// Called when the game starts or when spawned
void ACloudControl::BeginPlay()
{
	Super::BeginPlay();
	PC = Cast<APlayerController>(GetController());
	PC->bShowMouseCursor = true;
}

void ACloudControl::MoveTowardsCursor()
{
	FVector MouseLocation;
	FVector MouseDirection;
	PC->DeprojectMousePositionToWorld(MouseLocation,MouseDirection);//��ȡ��������������λ��
	float YDirection=FMath::Clamp((MouseLocation.Y - GetActorLocation().Y), -1.0f, 1.0f);   //��ȡ�������Y����֮���������-1~1
	float ScaleValue = FMath::Clamp(FMath::Abs(MouseLocation.Y - GetActorLocation().Y) / 100, 0.0f, 1.0f);
	FVector Direction = FVector(0.0f, YDirection, 0.0f);   //��YDirectionת��������
	AddMovementInput(Direction, ScaleValue);    //����ҳ���������ƶ�
}

void ACloudControl::MoveUpOnKeyPress()
{
	if (GetVelocity().Z == 0 && !isStart) {
		Launch();
	}
	if (!isStart) {
		isStart = true;
	}
	
}

void ACloudControl::SetSpeed()
{
	if (GetCharacterMovement()->IsFalling()) {   //������
		GetCharacterMovement()->MaxWalkSpeed = AirSpeed;
	}
	else  //�ڵ���
	{
		if (isStart) {
			GameOver();
		}
		GetCharacterMovement()->MaxWalkSpeed = GroundSpeed;
	}
}

void ACloudControl::GameOver()
{
	isOver = true;
	SetActorRotation(FRotator::ZeroRotator);
	DisplayRestartButton();
}

void ACloudControl::ReStart()
{
	Score = 0;
	isOver = false;
	isStart = false;
	EnableInput(PC);
}

void ACloudControl::Launch()
{
	LaunchCharacter(LaunchVelocity,false,true);
}

void ACloudControl::IncreaseScore()
{
	Score++;
}

int ACloudControl::GetScore() const
{
	return Score;
}

// Called every frame
void ACloudControl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!isOver) {
		MoveTowardsCursor();
		SetSpeed();
	}
}
  
// Called to bind functionality to input
void ACloudControl::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACloudControl::MoveUpOnKeyPress);
}

