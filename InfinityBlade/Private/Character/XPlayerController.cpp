// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Character/XPlayerController.h"
#include "Public/Character/PlayerCharacter.h"
#include "Public/Widget/MainUserWidget.h"
#include "Public/Widget/BackpackUserWidget.h"
#include "Public/Widget/ItemUserWidget.h"
#include "Public/Widget/SettingUserWidget.h"
#include "Public/Widget/ShopUserWidget.h"
#include "Public/Widget/ShopItemUserWidget.h"
#include "Public/Weapons/XWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/Button.h"
#include "Components/CapsuleComponent.h"
#include "Public/Character/XAnimInstance.h"
#include "Public/Character/XPlayerState.h"
#include "Public/Enemy/AICharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"
#include "Public/Common/ItemInfo.h"
#include "Public/CustomGameInstance.h"


void AXPlayerController::BeginPlay()
{
	Super::BeginPlay();
	bShowMouseCursor = true;

	character = Cast<APlayerCharacter>(GetPawn());
	AnimInstance = Cast<UXAnimInstance>(character->GetMesh()->GetAnimInstance());
	playerstate = Cast<AXPlayerState>(this->PlayerState);
	XGameInstance = Cast<UCustomGameInstance>(GetWorld()->GetGameInstance());

	MainWidget = CreateWidget<UMainUserWidget>(GetGameInstance(), LoadClass<UMainUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Main/MainUI.MainUI_C'")));
	MainWidget->AddToViewport();

	FString NickName2 = TEXT("ID:") + XGameInstance->ContextMap.FindOrAdd("NickName");
	//FString NickName3 = **(XGameInstance->ContextMap.Find("NickName"));

	MainWidget->TextBlock_ID->SetText(FText::FromString(NickName2));

	BackpackWidget = CreateWidget<UBackpackUserWidget>(GetGameInstance(), LoadClass<UBackpackUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Main/BackpackUI.BackpackUI_C'")));
	SettingWidget = CreateWidget<USettingUserWidget>(GetGameInstance(), LoadClass<USettingUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Main/SettingUI.SettingUI_C'")));
	ShopWidget = CreateWidget<UShopUserWidget>(GetGameInstance(), LoadClass<UShopUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Main/ShopUI.ShopUI_C'")));

	//绑定武器
	Weapon = GetWorld()->SpawnActor<AXWeapon>(character->WeaponClass);
	FAttachmentTransformRules AttachRule(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget,true);
	Weapon->AttachToComponent(character->GetMesh(), AttachRule, TEXT("hand_rSocket"));
	//绑定武器Overlap事件
	Weapon->WeaponCapsule->OnComponentBeginOverlap.AddDynamic(this, &AXPlayerController::WeaponBeginOverlap);
	
	//FInputModeGameAndUI InputMode;
	//InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	//InputMode.SetHideCursorDuringCapture(false);
	//SetInputMode(InputMode);

	InitButtonClickEvent();
	InitState();
	UpdateUI();
}

void AXPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (playerstate->GetCurrentMP() < character->MinMP)
	{
		playerstate->SetCurrentMP(playerstate->GetCurrentMP() + DeltaSeconds * 0.1f);
		UpdateUI();
	}
	if (bIsSkill1)
	{
		Fun_CD_One(DeltaSeconds);
	}
	if (bIsSkill2)
	{
		Fun_CD_Two(DeltaSeconds);
	}
	if(bIsSkill3)
	{
		Fun_CD_Three(DeltaSeconds);
	}
	if(bIsSkill4)
	{
		Fun_CD_Four(DeltaSeconds);
	}
}

void AXPlayerController::InitButtonClickEvent()
{
	if (MainWidget->Button_Attack)
	{
		MainWidget->Button_Attack->OnClicked.AddDynamic(this, &AXPlayerController::AttackBtnOnClickEvent);
	}
	if(MainWidget->Button_Skill1)
	{
		MainWidget->Button_Skill1->OnClicked.AddDynamic(this, &AXPlayerController::SkillOneBtnOnClickEvent);
		//MainWidget->Button_Skill1->OnPressed.__Internal_AddDynamic(this, &AXPlayerController::SkillOneBtnOnClickEvent, FName("SkillOneBtnOnClickEvent"));
	}
	if (MainWidget->Button_Skill2)
	{
		MainWidget->Button_Skill2->OnClicked.AddDynamic(this, &AXPlayerController::SkillTwoBtnOnClickEvent);
	}
	if(MainWidget->Button_Skill3)
	{
		MainWidget->Button_Skill3->OnClicked.AddDynamic(this, &AXPlayerController::SkillThreeBtnOnClickEvent);
	}
	if(MainWidget->Button_Skill4)
	{
		MainWidget->Button_Skill4->OnClicked.AddDynamic(this, &AXPlayerController::SkillFourBtnOnClickEvent);
	}
	if(MainWidget->Button_Backpack)
	{
		MainWidget->Button_Backpack->OnClicked.AddDynamic(this, &AXPlayerController::BackpackBtnOnClickEvent);
	}
	if(MainWidget->Button_Setting)
	{
		MainWidget->Button_Setting->OnClicked.AddDynamic(this, &AXPlayerController::SettingBtnOnClickEvent);
	}
	if (MainWidget->Button_Shop)
	{
		MainWidget->Button_Shop->OnClicked.AddDynamic(this, &AXPlayerController::ShopBtnOnClickEvent);
	}
}

void AXPlayerController::InitState()
{
	playerstate->SetCurrentHP(character->TotalHP);
	playerstate->SetCurrentMP(character->TotalMP);
	playerstate->SetAttackDamage(character->NormalAttack);
}

void AXPlayerController::UpdateUI()
{
	MainWidget->ProgressBar_HP->SetPercent(1.0f - (playerstate->GetCurrentHP() / character->TotalHP));
	MainWidget->ProgressBar_MP->SetPercent(1.0f - (playerstate->GetCurrentMP() / character->TotalMP));
	BackpackWidget->TextBlock_Health->SetText(FText::FromString(FString::SanitizeFloat(playerstate->GetCurrentHP())));
	BackpackWidget->TextBlock_Magic->SetText(FText::FromString(FString::SanitizeFloat(playerstate->GetCurrentMP())));
	BackpackWidget->TextBlock_Attack->SetText(FText::FromString(FString::SanitizeFloat(playerstate->GetAttackDamage())));
	BackpackWidget->TextBlock_Coin->SetText(FText::FromString(FString::SanitizeFloat(character->Coin)));
}

void AXPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &AXPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AXPlayerController::MoveRight);


}

//bool AXPlayerController::InputTouch(uint32 Handle, ETouchType::Type Type, const FVector2D & TouchLocation, float Force, FDateTime DeviceTimestamp, uint32 TouchpadIndex)
//{
//	return false;
//}

void AXPlayerController::MoveForward(float value)
{
	FRotator Rotation = GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	character->AddMovementInput(Direction, value);

}

void AXPlayerController::MoveRight(float value)
{
	FRotator Rotation = GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	character->AddMovementInput(Direction, value);
}

void AXPlayerController::AttackBtnOnClickEvent()
{
	//当正在播放攻击动作时不能连招，只有播放完当前攻击动作的一瞬间在可能触发连招
	if (AnimInstance->bIsPlaying)
	{	
		return;
	}
	//获得Montage
	UAnimMontage* Montage = character->AttackMontage;
	//获得当前播放的节
	FName CurrentSection = AnimInstance->Montage_GetCurrentSection(Montage);
	LockAI();
	if(CurrentSection.IsNone())
	{
		AnimInstance->Montage_Play(Montage);
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, "1=" + FString::SanitizeFloat(playerstate->GetAttackDamage()));
	}
	else if(CurrentSection.IsEqual(FName("FirstAttack")) && AnimInstance->bIsEnableSecondAttack)
	{
		AnimInstance->Montage_JumpToSection(FName("SecondAttack"),Montage);
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, "2=" + FString::SanitizeFloat(playerstate->GetAttackDamage()));
	}
	else if(CurrentSection.IsEqual(FName("SecondAttack")) && AnimInstance->bIsEnableThirdAttack )
	{
		AnimInstance->Montage_JumpToSection(FName("ThirdAttack"),Montage);
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, "3=" + FString::SanitizeFloat(playerstate->GetAttackDamage()));
	}
	else if (CurrentSection.IsEqual(FName("ThirdAttack")) && AnimInstance->bIsEnableFourthAttack )
	{
		AnimInstance->Montage_JumpToSection(FName("FourthAttack"),Montage);
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, "4=" + FString::SanitizeFloat(playerstate->GetAttackDamage()));
	}
	else if (CurrentSection.IsEqual(FName("FourthAttack")) && AnimInstance->bIsEnableFifthAttack)
	{
		AnimInstance->Montage_JumpToSection(FName("FifthAttack"),Montage);
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, "5=" + FString::SanitizeFloat(playerstate->GetAttackDamage()));
	}
}

void AXPlayerController::SkillOneBtnOnClickEvent()
{
	if(AnimInstance->bIsPlaying)
	{
		return;
	}
	if (playerstate->GetCurrentMP() >= character->MP_SkillOne && character->SkillOneMontage != nullptr)
	{
		bIsSkill1 = true;
		AnimInstance->Montage_Play(character->SkillOneMontage, 1.f);
	}
	else
	{
		MainWidget->NotEnough->SetVisibility(ESlateVisibility::Visible);
		GetWorldTimerManager().SetTimer(NoteHandle, this, &AXPlayerController::SetNoteHiden, 1.f, false, 3.f);
	}
}

void AXPlayerController::SkillTwoBtnOnClickEvent()
{
	if(AnimInstance->bIsPlaying)
	{
		return;
	}
	if (playerstate->GetCurrentHP() < character->TotalHP && playerstate->GetCurrentMP() >= character->MP_SkillTwo && character->SkillTwoMontage != nullptr)
	{
		bIsSkill2 = true;
		AnimInstance->Montage_Play(character->SkillTwoMontage, 1.f);
	}
	else if(playerstate->GetCurrentHP() == character->TotalHP)
	{
		MainWidget->FullBlood->SetVisibility(ESlateVisibility::Visible);
		GetWorldTimerManager().SetTimer(NoteHandle, this, &AXPlayerController::SetNoteHiden, 1.f, false, 3.f);
	}
	else
	{
		MainWidget->NotEnough->SetVisibility(ESlateVisibility::Visible);
		GetWorldTimerManager().SetTimer(NoteHandle, this, &AXPlayerController::SetNoteHiden, 1.f, false, 3.f);
	}
}

void AXPlayerController::SkillThreeBtnOnClickEvent()
{
	if (AnimInstance->bIsPlaying)
	{
		return;
	}
	if (playerstate->GetCurrentMP() >= character->MP_SkillThree && character->SkillThreeMontage != nullptr)
	{
		bIsSkill3 = true;
		AnimInstance->Montage_Play(character->SkillThreeMontage, 1.f);
	}
	else
	{
		MainWidget->NotEnough->SetVisibility(ESlateVisibility::Visible);
		GetWorldTimerManager().SetTimer(NoteHandle, this, &AXPlayerController::SetNoteHiden, 1.f, false, 3.f);
	}
}

void AXPlayerController::SkillFourBtnOnClickEvent()
{
	if (AnimInstance->bIsPlaying)
	{
		return;
	}
	if (playerstate->GetCurrentMP() >= character->MP_SkillFour && character->SkillFourMontage != nullptr)
	{
		bIsSkill4 = true;
		AnimInstance->Montage_Play(character->SkillFourMontage, 1.f);
	}
	else
	{
		MainWidget->NotEnough->SetVisibility(ESlateVisibility::Visible);
		GetWorldTimerManager().SetTimer(NoteHandle, this, &AXPlayerController::SetNoteHiden, 1.f, false, 3.f);
	}
}

void AXPlayerController::BackpackBtnOnClickEvent()
{
	UpdateUI();
	BackpackWidget->ItemList->ClearChildren();
	for (int i=0;i<character->ItemArray.Num();i++)
	{
		FItemInfo Info = character->ItemArray[i];
		UItemUserWidget* itemUI = CreateWidget<UItemUserWidget>(GetGameInstance(), LoadClass<UItemUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Main/ItemUI.ItemUI_C'")));
		itemUI->Image_Pic->SetBrushFromTexture(Info.Pic);
		itemUI->TextBlock_Name->SetText(Info.Name);
		itemUI->TextBlock_Desc->SetText(Info.Desc);
		itemUI->IdType = Info.Id;
		itemUI->ItemType = Info.type;
		BackpackWidget->ItemList->AddChild(itemUI);
	}
	BackpackWidget->AddToViewport();
}

void AXPlayerController::SettingBtnOnClickEvent()
{
	SettingWidget->AddToViewport();
	SettingWidget->DistanceSlider->SetValue(character->Dis_Value);
	SettingWidget->HighSlider->SetValue(character->High_Value);
}

void AXPlayerController::ShopBtnOnClickEvent()
{
	ShopWidget->ScrollBox_0->ClearChildren();
	for (int i = 0;i < 4;i++)
	{
		UShopItemUserWidget* ShopItem = CreateWidget<UShopItemUserWidget>(GetGameInstance(), LoadClass<UShopItemUserWidget>(nullptr, TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Main/ShopItem.ShopItem_C'")));
		FItemInfo NewInfo;
		NewInfo.Pic = character->Icons[i];
		NewInfo.Name = character->Names[i];
		NewInfo.Desc = character->Descs[i % 2];
		NewInfo.type = (i % 2 == 0 ? EItemType::HP : EItemType::MP);
		ShopItem->Image_Pic->SetBrushFromTexture(character->Icons[i]);
		ShopItem->TextBlock_Name->SetText(character->Names[i]);
		ShopItem->TextBlock_Desc->SetText(character->Descs[i % 2]);

		ShopItem->Info = NewInfo;
		ShopWidget->ScrollBox_0->AddChild(ShopItem);
	}
	ShopWidget->AddToViewport();
}

void AXPlayerController::WeaponBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (AnimInstance->bIsAttacking) 
	{
		UGameplayStatics::ApplyDamage(OtherActor, playerstate->GetAttackDamage(), this, character, nullptr);
	}
}

//锁定敌人
void AXPlayerController::LockAI()
{
	FVector location = character->GetActorLocation();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAICharacter::StaticClass(),AiArray);
	int32 AiNum = AiArray.Num();
	if(AiNum>0)
	{
		AActor* MinDisActor = AiArray[0];
		float MinDistance = FVector::Dist(location, AiArray[0]->GetActorLocation());
		//遍历所有敌人
		for (int i=0;i<AiNum;i++)
		{
			//判断AI是否死亡
			if(Cast<AAICharacter>(AiArray[i])->bIsDead)
			{
				continue;
			}
			//获取距离
			float TempDistance = FVector::Dist(location, AiArray[i]->GetActorLocation());
			if(MinDistance>=TempDistance)
			{
				MinDistance = TempDistance;
				MinDisActor = AiArray[i];
			}
		}
		if(!Cast<AAICharacter>(MinDisActor)->bIsDead)
		{
			//设置玩家只能左右转动
			FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(location, MinDisActor->GetActorLocation());
			if (MinDistance >= 150.0f && MinDistance <= 400.0f)
			{
				character->TranslateRotation(Rotation);
				character->RotationTimelime.PlayFromStart();
			}
			if (MinDistance<150.0f)
			{
				//设置玩家Rotation
				Rotation.Pitch = character->GetCapsuleComponent()->GetComponentRotation().Pitch;
				Rotation.Roll = character->GetCapsuleComponent()->GetComponentRotation().Roll;
				character->GetCapsuleComponent()->SetRelativeRotation(Rotation);
			}
		}
	}
}

void AXPlayerController::Fun_CD_One(float DeltaSeconds)
{
	MainWidget->CDBar_One->SetVisibility(ESlateVisibility::Visible);
	if (CurrentCD_1 <= character->CD_One)
	{
		CurrentCD_1 += DeltaSeconds;
		MainWidget->CDBar_One->SetPercent(1.f - CurrentCD_1 / character->CD_One);
		//MainWidget->TextBlock_Cold->SetVisibility(ESlateVisibility::Visible);
	}
	if (CurrentCD_1 >= character->CD_One)
	{
		MainWidget->CDBar_One->SetVisibility(ESlateVisibility::Hidden);
		//MainWidget->TextBlock_Cold->SetVisibility(ESlateVisibility::Hidden);
		MainWidget->CDBar_One->SetPercent(1.f);
		bIsSkill1 = false;
		CurrentCD_1 = 0.f;
	}
}

void AXPlayerController::Fun_CD_Two(float DeltaSeconds)
{
	MainWidget->CDBar_Two->SetVisibility(ESlateVisibility::Visible);
	if (CurrentCD_2 <= character->CD_Two)
	{
		CurrentCD_2 += DeltaSeconds;
		MainWidget->CDBar_Two->SetPercent(1.f - CurrentCD_2 / character->CD_Two);
		//MainWidget->TextBlock_Cold->SetVisibility(ESlateVisibility::Visible);
	}
	if (CurrentCD_2 >= character->CD_Two)
	{
		MainWidget->CDBar_Two->SetVisibility(ESlateVisibility::Hidden);
		//MainWidget->TextBlock_Cold->SetVisibility(ESlateVisibility::Hidden);
		MainWidget->CDBar_Two->SetPercent(1.f);
		bIsSkill2 = false;
		CurrentCD_2 = 0.f;
	}
}

void AXPlayerController::Fun_CD_Three(float DeltaSeconds)
{
	MainWidget->CDBar_Three->SetVisibility(ESlateVisibility::Visible);
	if (CurrentCD_3 <= character->CD_Three)
	{
		CurrentCD_3 += DeltaSeconds;
		MainWidget->CDBar_Three->SetPercent(1.f - CurrentCD_3 / character->CD_Three);
		//MainWidget->TextBlock_Cold->SetVisibility(ESlateVisibility::Visible);
	}
	if (CurrentCD_3 >= character->CD_Three)
	{
		MainWidget->CDBar_Three->SetVisibility(ESlateVisibility::Hidden);
		//MainWidget->TextBlock_Cold->SetVisibility(ESlateVisibility::Hidden);
		MainWidget->CDBar_Three->SetPercent(1.f);
		bIsSkill3 = false;
		CurrentCD_3 = 0.f;
	}
}

void AXPlayerController::Fun_CD_Four(float DeltaSeconds)
{
	MainWidget->CDBar_Four->SetVisibility(ESlateVisibility::Visible);
	if (CurrentCD_4 <= character->CD_Four)
	{
		CurrentCD_4 += DeltaSeconds;
		MainWidget->CDBar_Four->SetPercent(1.f - CurrentCD_4 / character->CD_Four);
		//MainWidget->TextBlock_Cold->SetVisibility(ESlateVisibility::Visible);
	}
	if (CurrentCD_4 >= character->CD_Four)
	{
		MainWidget->CDBar_Four->SetVisibility(ESlateVisibility::Hidden);
		//MainWidget->TextBlock_Cold->SetVisibility(ESlateVisibility::Hidden);
		MainWidget->CDBar_Four->SetPercent(1.f);
		bIsSkill4 = false;
		CurrentCD_4 = 0.f;
	}
}

void AXPlayerController::SetNoteHiden()
{
	MainWidget->NotEnough->SetVisibility(ESlateVisibility::Hidden);
}
