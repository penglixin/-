// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DDDriver.h"
#include "DDModule.h"
#include "DDOO.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDDOO : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class DATADRIVEN_API IDDOO
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//ע�ᵽ���
	void RegisterToModule(FName ModName, FName ObjName = FName(), FName ClsName = FName());

	//ͬ��, ֻת��ģ��Index
	void RegisterToModule(int32 ModIndex, FName ObjName = FName(), FName ClsName = FName());

	//��ȡ������
	FName GetObjectName();

	//��ȡ����
	FName GetClassName();

	//��ȡģ��Index
	int32 GetModuleIndex() const;

	//��ȡObejct����
	UObject* GetObjectBody() const;

	//��ܻ�ȡ���纯��
	UWorld* GetDDWorld() const;

	//���ⲿָ��ģ��
	void AssignModule(UDDModule* Mod);

	//������������, ����ɹ��󷵻�true, ֹͣ����
	bool ActiveLife();

	//�����������ں���, ���ٳɹ��󷵻�true, ������ģ��ע��
	bool DestroyLife();

	//��������,��ģ�����������
	virtual void DDInit();//��ʼ��
	virtual void DDLoading();//���ذ󶨵���Դ
	virtual void DDRegister();//ע�����ݻ����¼�
	virtual void DDEnable();//�������

	virtual void DDTick(float DeltaSeconds);//֡����

	virtual void DDDisable();//ʧ�����
	virtual void DDUnRegister();//ע�����ݻ����¼�
	virtual void DDUnLoading();//���ٰ���Դ
	virtual void DDRelease();//�ͷ��Լ�

	//�������
	virtual void OnEnable();

	//ʧ�����
	virtual void OnDisable();

	//�����Լ�
	void DDDestroy();





public:

	//�Ƿ�����֡����,���Ҫ����֡������Ҫ�ڹ��캯������BeginPlay����,��UE4��Ĭ��Ϊfalse
	bool IsAllowTickEvent;

	//��������״̬
	EBaseObjectLife LifeState;

	//��������״̬
	EBaseObjectState RunState;

protected:

	//ִ�з��䷽��
	void ExecuteFunction(DDModuleAgreement Agreement, DDParam* Param);

	//ִ�з��䷽��
	void ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param);

	//ע����ýӿ�
	template<typename RetType, typename... VarTypes>
	DDCallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);

	//ע�᷽���ӿ�
	template<typename RetType, typename... VarTypes>
	DDFunHandle RegisterFunPort(int32 ModuleID, FName CallName, TFunction<RetType(VarTypes...)> InsFun);

	//����һ��Э��, ����true˵�������ɹ�, ����false˵���Ѿ���ͬ������ͬЭ����������Э�̴���
	bool StartCoroutine(FName CoroName, DDCoroTask* CoroTask);

	//ֹͣһ��Э��, ����true˵��ֹͣЭ�̳ɹ�, ����false˵��Э�����Ѿ�ֹͣ
	bool StopCoroutine(FName CoroName);

	//ֹͣ�ö��������Э��
	void StopAllCorotine();

	//��ʱ����
	template<class UserClass>
	bool InvokeDelay(FName InvokeName, float DelayTime, UserClass* UserObj, typename FDDInvokeEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod);

	//��ʱѭ������
	template<class UserClass>
	bool InvokeRepeat(FName InvokeName, float DelayTime, float RepeatTime, UserClass* UserObj, typename FDDInvokeEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod);

	//�ر���ʱ����
	bool StopInvoke(FName InvokeName);

	//�رն�����������ʱ����
	void StopAllInvoke();

	//��Axis�����¼�
	template<class UserClass>
	FInputAxisBinding& DDBindAxis(UserClass* UserObj, typename FInputAxisHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName AxisName);

	//�󶨴����¼�
	template<class UserClass>
	FInputTouchBinding& DDBindTouch(UserClass* UserObj, typename FInputTouchHandlerSignature::TUObjectMethodDelegate< UserClass >::FMethodPtr InMethod, const EInputEvent KeyEvent);

	//��Antion�����¼�
	template<class UserClass>
	FInputActionBinding& DDBindAction(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName ActionName, const EInputEvent KeyEvent);

	//�󶨵��������¼�
	template<class UserClass>
	FInputKeyBinding& DDBindInput(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FKey Key, const EInputEvent KeyEvent);

	//�󶨶������
	template<class UserClass>
	UDDInputBinder& DDBindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II);

	template<class UserClass>
	UDDInputBinder& DDBindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III);

	template<class UserClass>
	UDDInputBinder& DDBindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III, FKey Key_IV);

	template<class UserClass>
	UDDInputBinder& DDBindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III, FKey Key_IV, FKey Key_V);

	//���ö������ж������
	void UnBindInput();

	//�ⲿ����������ȡ��Դ����
	FWealthURL* GainWealthURL(FName WealthName);
	void GainWealthURL(FName WealthKind, TArray<FWealthURL*>& OutURL);

	//����Object������Դ�ӿ�
	void LoadObjectWealth(FName WealthName, FName FunName);
	void LoadObjectWealthKind(FName WealthKind, FName FunName);

	//����Class������Դ�ӿ�
	void LoadClassWealth(FName WealthName, FName FunName);
	void LoadClassWealthKind(FName WealthKind, FName FunName);

	//����һ������ʵ��
	void BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName FunName);
	void BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName FunName, FTransform SpawnTransform);

	//����ͬ��Դ�������Ķ���ʵ��, ͬ�������µ�ÿ����Դ���Ӵ���һ������ʵ��
	void BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName);
	void BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName, FTransform SpawnTransform);
	void BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName, TArray<FTransform> SpawnTransforms);

	//�������ͬ��Դ���Ķ���ʵ��
	void BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName);
	void BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName, FTransform SpawnTransform);
	void BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName, TArray<FTransform> SpawnTransforms);


protected:

	//���������UObject
	UObject* IBody;

	//�����Ӧ��ģ��
	UDDModule* IModule;

	//����������
	ADDDriver* IDriver;

	//��������
	FName IObjectName;

	//����������
	FName IClassName;

	//��Ӧģ������
	int32 ModuleIndex;


};

template<typename RetType, typename... VarTypes>
DDCallHandle<RetType, VarTypes...>
IDDOO::RegisterCallPort(FName CallName)
{
	return IModule->RegisterCallPort<RetType, VarTypes...>(CallName);
}

template<typename RetType, typename... VarTypes>
DDFunHandle IDDOO::RegisterFunPort(int32 ModuleID, FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	if (ModuleIndex == ModuleID)
		return IModule->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
	else
		return IDriver->RegisterFunPort<RetType, VarTypes...>(ModuleID, CallName, InsFun);
}

template<class UserClass>
bool IDDOO::InvokeDelay(FName InvokeName, float DelayTime, UserClass* UserObj, typename FDDInvokeEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod)
{
	DDInvokeTask* InvokeTask = new DDInvokeTask(DelayTime, false, 0.f);
	InvokeTask->InvokeEvent.BindUObject(UserObj, InMethod);
	return IModule->StartInvoke(GetObjectName(), InvokeName, InvokeTask);
}

template<class UserClass>
bool IDDOO::InvokeRepeat(FName InvokeName, float DelayTime, float RepeatTime, UserClass* UserObj, typename FDDInvokeEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod)
{
	DDInvokeTask* InvokeTask = new DDInvokeTask(DelayTime, true, RepeatTime);
	InvokeTask->InvokeEvent.BindUObject(UserObj, InMethod);
	return IModule->StartInvoke(GetObjectName(), InvokeName, InvokeTask);
}


template<class UserClass>
FInputAxisBinding& IDDOO::DDBindAxis(UserClass* UserObj, typename FInputAxisHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName AxisName)
{
	return IModule->BindAxis(UserObj, InMethod, AxisName);
}

template<class UserClass>
FInputTouchBinding& IDDOO::DDBindTouch(UserClass* UserObj, typename FInputTouchHandlerSignature::TUObjectMethodDelegate< UserClass >::FMethodPtr InMethod, const EInputEvent KeyEvent)
{
	return IModule->BindTouch(UserObj, InMethod, KeyEvent);
}

template<class UserClass>
FInputActionBinding& IDDOO::DDBindAction(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName ActionName, const EInputEvent KeyEvent)
{
	return IModule->BindAction(UserObj, InMethod, ActionName, KeyEvent);
}

template<class UserClass>
FInputKeyBinding& IDDOO::DDBindInput(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FKey Key, const EInputEvent KeyEvent)
{
	return IModule->BindInput(UserObj, InMethod, Key, KeyEvent);
}

template<class UserClass>
UDDInputBinder& IDDOO::DDBindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II)
{
	TArray<FKey> KeyGroup;
	KeyGroup.Push(Key_I);
	KeyGroup.Push(Key_II);
	return IModule->BindInput(UserObj, InMethod, KeyGroup, GetObjectName());
}

template<class UserClass>
UDDInputBinder& IDDOO::DDBindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III)
{
	TArray<FKey> KeyGroup;
	KeyGroup.Push(Key_I);
	KeyGroup.Push(Key_II);
	KeyGroup.Push(Key_III);
	return IModule->BindInput(UserObj, InMethod, KeyGroup, GetObjectName());
}

template<class UserClass>
UDDInputBinder& IDDOO::DDBindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III, FKey Key_IV)
{
	TArray<FKey> KeyGroup;
	KeyGroup.Push(Key_I);
	KeyGroup.Push(Key_II);
	KeyGroup.Push(Key_III);
	KeyGroup.Push(Key_IV);
	return IModule->BindInput(UserObj, InMethod, KeyGroup, GetObjectName());
}

template<class UserClass>
UDDInputBinder& IDDOO::DDBindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III, FKey Key_IV, FKey Key_V)
{
	TArray<FKey> KeyGroup;
	KeyGroup.Push(Key_I);
	KeyGroup.Push(Key_II);
	KeyGroup.Push(Key_III);
	KeyGroup.Push(Key_IV);
	KeyGroup.Push(Key_V);
	return IModule->BindInput(UserObj, InMethod, KeyGroup, GetObjectName());
}
