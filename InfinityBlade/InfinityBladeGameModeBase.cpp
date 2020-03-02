// Fill out your copyright notice in the Description page of Project Settings.

#include "InfinityBladeGameModeBase.h"
#include "Public/Widget/StartUserWidget.h"
#include "Public/Widget/ZhuCeUserWidget.h"
#include "Public/Widget/NoteUserWidget.h"
#include "Public/Widget/LoginUserWidget.h"
#include "Public/Widget/AdminUserWidget.h"
#include "Public/Widget/NoNameUserWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/NamedSlot.h"
#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "Kismet/GameplayStatics.h"
#include "Public/Save/UserInfoSaveGame.h"
#include "Public/CustomGameInstance.h"
#include "TimerManager.h"



AInfinityBladeGameModeBase::AInfinityBladeGameModeBase()
{
	StartWidget = CreateWidget<UStartUserWidget>(GetWorld(), LoadClass<UStartUserWidget>(this,TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Start/StartUI.StartUI_C'")));
	ZhuCeWidget = CreateWidget<UZhuCeUserWidget>(GetWorld(), LoadClass<UZhuCeUserWidget>(this,TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Start/ZhuCeUI.ZhuCeUI_C'")));
	LoginWidget = CreateWidget<ULoginUserWidget>(GetWorld(), LoadClass<ULoginUserWidget>(this,TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Start/LoginUI.LoginUI_C'")));
	AdminWidget = CreateWidget<UAdminUserWidget>(GetWorld(), LoadClass<UAdminUserWidget>(this,TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Start/AdminUI.AdminUI_C'")));
	NoNameWidget = CreateWidget<UNoNameUserWidget>(GetWorld(), LoadClass<UNoNameUserWidget>(this, TEXT("WidgetBlueprint'/Game/Blueprint/Widgets/Start/NoNameUI.NoNameUI_C'")));

	SlotName = "UserInfo";
	UserIndex = 0;
}

void AInfinityBladeGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	StartWidget->AddToViewport();
	StartWidget->ZhuCeButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::Start_ZhuCeBtnOnClickEvent);
	StartWidget->StartButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::Start_StartBtnOnClickEvent);
	StartWidget->AdminButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::Start_AdminBtnOnClickEvent);

	ZhuCeWidget->BackButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::ZhuCe_BackBtnOnClickEvent);
	ZhuCeWidget->OkButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::ZhuCe_OkBtnOnClickEvent);

	LoginWidget->BackButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::Login_BackBtnOnClickEvent);
	LoginWidget->LoginButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::Login_LoginBtnOnClickEvent);

	AdminWidget->OkButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::Admin_OkBtnOnClickEvent);
	AdminWidget->BackButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::Admin_BackBtnOkClick);

	NoNameWidget->BackButton->OnClicked.AddDynamic(this, &AInfinityBladeGameModeBase::NoName_BackBtnOkClick);

	GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;

	UserInfoSaveGame = Cast<UUserInfoSaveGame>(UGameplayStatics::CreateSaveGameObject(UUserInfoSaveGame::StaticClass()));

}

void AInfinityBladeGameModeBase::Start_ZhuCeBtnOnClickEvent()
{
	StartWidget->RemoveFromViewport();
	ZhuCeWidget->AddToViewport();
}

void AInfinityBladeGameModeBase::Start_StartBtnOnClickEvent()
{
	LoginWidget->LoginButton->SetIsEnabled(true);
	StartWidget->RemoveFromViewport();
	LoginWidget->AddToViewport();
}

void AInfinityBladeGameModeBase::Start_AdminBtnOnClickEvent()
{
	AdminWidget->AddToViewport();
	StartWidget->RemoveFromViewport();
}

void AInfinityBladeGameModeBase::ZhuCe_BackBtnOnClickEvent()
{
	ZhuCeWidget->NameText->SetText(FText::FromString(""));
	ZhuCeWidget->PasswordText->SetText(FText::FromString(""));
	ZhuCeWidget->RePasswordText->SetText(FText::FromString(""));
	ZhuCeWidget->OkButton->SetIsEnabled(true);

	ZhuCeWidget->RemoveFromViewport();
	StartWidget->AddToViewport();
}

void AInfinityBladeGameModeBase::ZhuCe_OkBtnOnClickEvent()
{
	FString nameText = ZhuCeWidget->NameText->GetText().ToString();
	FString passwText = ZhuCeWidget->PasswordText->GetText().ToString();
	FString repassText = ZhuCeWidget->RePasswordText->GetText().ToString();

	if (nameText.IsEmpty())
	{
		ZhuCeWidget->NoteWidget->SetVisibility(ESlateVisibility::Visible);
		ZhuCeWidget->NoteWidget->noteTextBlock->SetText(FText::FromString("the NickName is null!"));
		return;
	}
	if (passwText.Len() < 3 || passwText.Len() > 12)
	{
		ZhuCeWidget->NoteWidget->SetVisibility(ESlateVisibility::Visible);
		ZhuCeWidget->NoteWidget->noteTextBlock->SetText(FText::FromString("the password length is between 3-12!"));
		return;
	}
	if (!passwText.Equals(repassText))
	{
		ZhuCeWidget->NoteWidget->SetVisibility(ESlateVisibility::Visible);
		ZhuCeWidget->NoteWidget->noteTextBlock->SetText(FText::FromString("the password is not same!"));
		return;
	}
	SaveUserInfo(nameText, passwText);
}

void AInfinityBladeGameModeBase::SaveUserInfo(FString Nickname, FString pasw)
{
	if (UGameplayStatics::DoesSaveGameExist(SlotName, UserIndex))
	{
		UserInfoSaveGame = Cast<UUserInfoSaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex));
	}
	else
	{
		UserInfoSaveGame = Cast<UUserInfoSaveGame>(UGameplayStatics::CreateSaveGameObject(UUserInfoSaveGame::StaticClass()));
	}
	FUserInfoStruct ainfo;
	ainfo.NickName = Nickname;
	ainfo.PassWord = pasw;
	if(UserInfoSaveGame->IsExist(Nickname))
	{
		ZhuCeWidget->NoteWidget->SetVisibility(ESlateVisibility::Visible);
		ZhuCeWidget->NoteWidget->noteTextBlock->SetText(FText::FromString("the NickName is Exist!"));
		return;
	}
	ZhuCeWidget->OkButton->SetIsEnabled(false);
	UserInfoSaveGame->SaveToUserInfo(ainfo);
	UGameplayStatics::SaveGameToSlot(UserInfoSaveGame, SlotName, UserIndex);
	ZhuCeWidget->NoteWidget->SetVisibility(ESlateVisibility::Visible);
	ZhuCeWidget->NoteWidget->noteTextBlock->SetText(FText::FromString("Register Successful!"));
}

void AInfinityBladeGameModeBase::Login_BackBtnOnClickEvent()
{
	LoginWidget->NameInputText->SetText(FText::FromString(""));
	LoginWidget->PasswordInputText->SetText(FText::FromString(""));
	LoginWidget->RemoveFromViewport();
	StartWidget->AddToViewport();
}

void AInfinityBladeGameModeBase::Login_LoginBtnOnClickEvent()
{
	if (UGameplayStatics::DoesSaveGameExist(SlotName, UserIndex))
	{
		UserInfoSaveGame = Cast<UUserInfoSaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex));
	}
	else
	{
		UserInfoSaveGame = Cast<UUserInfoSaveGame>(UGameplayStatics::CreateSaveGameObject(UUserInfoSaveGame::StaticClass()));
	}
	FString nickName = LoginWidget->NameInputText->GetText().ToString();
	FString passWord = LoginWidget->PasswordInputText->GetText().ToString();
	if (nickName.IsEmpty() || passWord.IsEmpty())
	{
		LoginWidget->Login_NoteWidget->SetVisibility(ESlateVisibility::Visible);
		LoginWidget->Login_NoteWidget->noteTextBlock->SetText(FText::FromString("Please fill in your information!"));
		return;
	}
	if(!UserInfoSaveGame->IsExist(nickName))
	{
		LoginWidget->Login_NoteWidget->SetVisibility(ESlateVisibility::Visible);
		LoginWidget->Login_NoteWidget->noteTextBlock->SetText(FText::FromString("the User is not Exist!"));
		return;
	}
	if(!UserInfoSaveGame->CheckNameAndPassword(nickName,passWord))
	{
		LoginWidget->Login_NoteWidget->SetVisibility(ESlateVisibility::Visible);
		LoginWidget->Login_NoteWidget->noteTextBlock->SetText(FText::FromString("the password is error!"));
		return;
	}
	LoginNickName = nickName;
	LoginWidget->BackButton->SetIsEnabled(false);
	LoginWidget->LoginButton->SetIsEnabled(false);
	UCustomGameInstance* GameInstance = Cast<UCustomGameInstance>(GetWorld()->GetGameInstance());
	GameInstance->ContextMap.Add("NickName", LoginNickName);
	GetWorldTimerManager().SetTimer(MyHandle, this, &AInfinityBladeGameModeBase::OpenLevelOneSeconds, 1.0f, false,1.5f);
}

void AInfinityBladeGameModeBase::OpenLevelOneSeconds()
{
	UGameplayStatics::OpenLevel(this, "ElvenRuins");
}

void AInfinityBladeGameModeBase::Admin_OkBtnOnClickEvent()
{
	FString mima = AdminWidget->Adminpassword->GetText().ToString();
	if(mima.IsEmpty())
	{
		AdminWidget->namedSlot->SetVisibility(ESlateVisibility::Visible);
		AdminWidget->tishiText->SetText(FText::FromString("the password is empty!"));
		return;
	}
	if(!mima.Equals("123123"))
	{
		AdminWidget->namedSlot->SetVisibility(ESlateVisibility::Visible);
		AdminWidget->tishiText->SetText(FText::FromString("the password is error!"));
		return;
	}
	AdminWidget->RemoveFromViewport();
	NoNameWidget->AddToViewport();
	AdminWidget->Adminpassword->SetText((FText::FromString("")));
}

void AInfinityBladeGameModeBase::Admin_BackBtnOkClick()
{
	AdminWidget->Adminpassword->SetText(FText::FromString(""));
	AdminWidget->RemoveFromViewport();
	StartWidget->AddToViewport();
}

void AInfinityBladeGameModeBase::NoName_BackBtnOkClick()
{
	StartWidget->AddToViewport();
	NoNameWidget->RemoveFromViewport();
	NoNameWidget->DelText->SetText(FText::FromString(""));
	NoNameWidget->UserList->SetVisibility(ESlateVisibility::Hidden);

}