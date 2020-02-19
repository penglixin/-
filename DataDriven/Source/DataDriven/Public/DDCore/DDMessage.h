// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DDMM.h"
#include "GameFramework/PlayerController.h"
#include "DDMessage.generated.h"


#pragma region InputBinder

DECLARE_DELEGATE(FDDInputEvent)

UCLASS()
class DATADRIVEN_API UDDInputBinder : public UObject
{
	GENERATED_BODY()

public:

	UDDInputBinder();

	void PressEvent();

	void ReleaseEvent();

public:

	uint8 InputCount;

	uint8 TotalCount;

	//��Ϸ��ͣʱ�Ƿ�ִ�а����¼�
	uint8 bExecuteWhenPause;

	FDDInputEvent InputDele;

public:

	template<class UserClass>
	void InitBinder(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, uint8 InCount)
	{
		TotalCount = InCount;
		InputDele.BindUObject(UserObj, InMethod);
	}

};



#pragma endregion


/**
 *
 */
UCLASS()
class DATADRIVEN_API UDDMessage : public UObject, public IDDMM
{
	GENERATED_BODY()

public:

	UDDMessage();

	virtual void MessageInit();

	virtual void MessageBeginPlay();

	virtual void MessageTick(float DeltaSeconds);

	//ע����ýӿ�
	template<typename RetType, typename... VarTypes>
	DDCallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);

	//ע�᷽���ӿ�
	template<typename RetType, typename... VarTypes>
	DDFunHandle RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun);

	//����һ��Э��, ����true˵�������ɹ�, ����false˵���Ѿ���ͬ������ͬЭ����������Э�̴���
	bool StartCoroutine(FName ObjectName, FName CoroName, DDCoroTask* CoroTask);

	//ֹͣһ��Э��, ����true˵��ֹͣЭ�̳ɹ�, ����false˵��Э�����Ѿ�ֹͣ
	bool StopCoroutine(FName ObjectName, FName CoroName);

	//ֹͣ�ö��������Э��
	void StopAllCorotine(FName ObjectName);

	//��ʼһ����ʱ����, ����true˵���ɹ�, ����false˵���Ѿ�����ͬ������ͬ������������
	bool StartInvoke(FName ObjectName, FName InvokeName, DDInvokeTask* InvokeTask);

	//ֹͣһ����ʱ
	bool StopInvoke(FName ObjectName, FName InvokeName);

	//ֹͣĳ�����µ�������ʱ����
	void StopAllInvoke(FName ObjectName);

	//��Axis�����¼�
	template<class UserClass>
	FInputAxisBinding& BindAxis(UserClass* UserObj, typename FInputAxisHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName AxisName);

	//�󶨴����¼�
	template<class UserClass>
	FInputTouchBinding& BindTouch(UserClass* UserObj, typename FInputTouchHandlerSignature::TUObjectMethodDelegate< UserClass >::FMethodPtr InMethod, const EInputEvent KeyEvent);

	//��Antion�����¼�
	template<class UserClass>
	FInputActionBinding& BindAction(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName ActionName, const EInputEvent KeyEvent);

	//�󶨵��������¼�
	template<class UserClass>
	FInputKeyBinding& BindInput(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FKey Key, const EInputEvent KeyEvent);

	//�󶨶������
	template<class UserClass>
	UDDInputBinder& BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, TArray<FKey>& KeyGroup, FName ObjectName);

	//����������а����¼�
	void UnBindInput(FName ObjectName);


protected:

	//�¼�����
	DDMsgQuene* MsgQuene;

	//Э������, ��1���������, ֵ�ļ�FName��Ӧ����Э�����������
	TMap<FName, TMap<FName, DDCoroTask*>> CoroStack;

	//��ʱ����
	TMap<FName, TMap<FName, DDInvokeTask*>> InvokeStack;

	//�󶨰����¼�����
	TMap<FName, TArray<UDDInputBinder*>> BinderGroup;

	//PlayerControllerָ��
	APlayerController* PlayerController;

};

template<typename RetType, typename... VarTypes>
DDCallHandle<RetType, VarTypes...>
UDDMessage::RegisterCallPort(FName CallName)
{
	return MsgQuene->RegisterCallPort<RetType, VarTypes...>(CallName);
}

template<typename RetType, typename... VarTypes>
DDFunHandle UDDMessage::RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	return MsgQuene->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
}

template<class UserClass>
FInputAxisBinding& UDDMessage::BindAxis(UserClass* UserObj, typename FInputAxisHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName AxisName)
{
	return PlayerController->InputComponent->BindAxis(AxisName, UserObj, InMethod);
}

template<class UserClass>
FInputTouchBinding& UDDMessage::BindTouch(UserClass* UserObj, typename FInputTouchHandlerSignature::TUObjectMethodDelegate< UserClass >::FMethodPtr InMethod, const EInputEvent KeyEvent)
{
	return PlayerController->InputComponent->BindTouch(KeyEvent, UserObj, InMethod);
}

template<class UserClass>
FInputActionBinding& UDDMessage::BindAction(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName ActionName, const EInputEvent KeyEvent)
{
	return PlayerController->InputComponent->BindAction(ActionName ,KeyEvent, UserObj, InMethod);
}

template<class UserClass>
FInputKeyBinding& UDDMessage::BindInput(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FKey Key, const EInputEvent KeyEvent)
{
	return PlayerController->InputComponent->BindKey(Key, KeyEvent, UserObj, InMethod);
}

template<class UserClass>
UDDInputBinder& UDDMessage::BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, TArray<FKey>& KeyGroup, FName ObjectName)
{
	UDDInputBinder* InputBinder = NewObject<UDDInputBinder>();
	InputBinder->InitBinder(UserObj, InMethod, KeyGroup.Num());
	InputBinder->AddToRoot();
	for (int i = 0; i < KeyGroup.Num(); ++i)
	{
		PlayerController->InputComponent->BindKey(KeyGroup[i], IE_Pressed, InputBinder, &UDDInputBinder::PressEvent).bExecuteWhenPaused = true;
		PlayerController->InputComponent->BindKey(KeyGroup[i], IE_Released, InputBinder, &UDDInputBinder::ReleaseEvent).bExecuteWhenPaused = true;
	}
	if (!BinderGroup.Contains(ObjectName))
	{
		TArray<UDDInputBinder*> BinderList;
		BinderGroup.Add(ObjectName, BinderList);
	}
	BinderGroup.Find(ObjectName)->Push(InputBinder);
	return *InputBinder;
}
