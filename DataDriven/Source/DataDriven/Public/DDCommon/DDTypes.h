// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameEngine.h"
#include "Engine/DataAsset.h"
#include "Anchors.h"

#include "DDTypes.generated.h"

/**
 *
 */
UCLASS()
class DATADRIVEN_API UDDTypes : public UObject
{
	GENERATED_BODY()

};






//����Զ���Debug�����
#pragma region LogDebug

class DATADRIVEN_API DDRecord
{
private:
	//������
	static TSharedPtr<DDRecord> RecordInst;

	//���ɵ��ַ���
	FString RecordInfo;

	//��ʾʱ��
	float ShowTime;

	//��ʾ��ɫ
	FColor ShowColor;

public:

	//��ӡģʽ, 0 : Debug, 1 : Log, 2 : Warning, 3 : Error
	uint8 PatternID;

public:

	//���캯��
	inline DDRecord() {}

	~DDRecord() {}

	static TSharedPtr<DDRecord> Get();

	//�趨����
	inline void InitParam(float InTime, FColor InColor)
	{
		ShowTime = InTime;
		ShowColor = InColor;
	}

	//ִ�д�ӡ����
	inline void Output() {
		switch (PatternID)
		{
		case 0:
		{
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, ShowTime, ShowColor, RecordInfo);
		}
		break;
		case 1:
		{
			UE_LOG(LogTemp, Log, TEXT("%s"), *RecordInfo);
		}
		break;
		case 2:
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *RecordInfo);
		}
		break;
		case 3:
		{
			UE_LOG(LogTemp, Error, TEXT("%s"), *RecordInfo);
		}
		break;
		}
		//����ַ���
		RecordInfo.Empty();
	}

	//��д������<<
	inline DDRecord& operator<<(FString Info) { RecordInfo.Append(Info); return *this; }
	inline DDRecord& operator<<(FName Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(FText Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(const char* Info) { RecordInfo += Info; return *this; }
	inline DDRecord& operator<<(const char Info) { RecordInfo.AppendChar(Info); return *this; }
	inline DDRecord& operator<<(int32 Info) { RecordInfo.Append(FString::FromInt(Info)); return *this; }
	inline DDRecord& operator<<(float Info) { RecordInfo.Append(FString::SanitizeFloat(Info)); return *this; }
	inline DDRecord& operator<<(double Info) { RecordInfo.Append(FString::SanitizeFloat(Info)); return *this; }
	inline DDRecord& operator<<(bool Info) { RecordInfo.Append(Info ? FString("true") : FString("false")); return *this; }
	inline DDRecord& operator<<(FVector2D Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(FVector Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(FRotator Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(FQuat Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(FTransform Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(FMatrix Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(FColor Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(FLinearColor Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline DDRecord& operator<<(FMargin Info) { RecordInfo.Append((FString::SanitizeFloat(Info.Left) + FString(" , ") + FString::SanitizeFloat(Info.Top) + FString(" , ") + FString::SanitizeFloat(Info.Right) + FString(" , ") + FString::SanitizeFloat(Info.Bottom))); return *this; }

	//���
	inline void operator<<(DDRecord& Record) { Record.Output(); }
};


//DDRecord::Get() << FString("sfdewhe") << FName << int << float << DDRecord::Get();


#pragma endregion


#pragma region LifeTimePart

//BaseObject��������
UENUM()
enum class EBaseObjectLife : uint8
{
	None = 0, //��ʼ��״̬
	Init,
	Loading,
	Register,
	Enable,
	Disable,
	UnRegister,
	UnLoading
};


//BaseObject��������״̬
UENUM()
enum class EBaseObjectState : uint8
{
	Active = 0, //����
	Stable,     //�ȶ�
	Destroy     //����
};

#pragma endregion


#pragma region ReflectPart

//�������Э��
UENUM()
enum class EAgreementType : uint8
{
	SelfObject,        //������Ķ���ͨ��
	OtherObject,       //������Ķ���֮��Ķ���ͨ��
	ClassOtherObject,  //������Ķ������ͬ�����������ͨ��,�����������Ҫȷ���������Ķ�����ͬһ���,�����ͬ��Ͷ��ͨ��
	SelfClass,         //�������Ķ���ͨ��
	OtherClass,        //�������֮�����ͨ��
	All                //�����еĶ���ͨ��
};


//���ý��,��Ŀ����ʱ��ȷ��ÿ�ζ��ܵ��óɹ�
UENUM()
enum class ECallResult : uint8
{
	NoModule = 0, //ȱʧģ��
	LackObject,   //ȱʧ���ֶ���
	NoFunction,   //ȱʧ����
	Succeed       //���óɹ�
};

//ͨ�Ų����ṹ�����
struct DDParam
{
public:

	//���ý��
	ECallResult CallResult;

	//����ָ��
	void* ParamPtr;
};

//ͨ��Э��, Module����
struct DDModuleAgreement
{
public:

	//ģ��ID
	int32 ModuleIndex;

	//������
	FName FunctionName;

};

//ͨ��Э��, DDOO����
struct DDObjectAgreement
{
public:

	//ģ��ID
	int32 ModuleIndex;

	//Э������
	EAgreementType AgreementType;

	//��������
	TArray<FName> ObjectGroup;

	//������
	FName FunctionName;
};



#pragma endregion


#pragma region DDAnyFun

//�洢�������ͷ����ṹ��
struct DDAnyFun
{
	struct BaseFun
	{
	public:
		virtual ~BaseFun() {}
	};
	template<typename RetType, typename... VarTypes>
	struct ValFun : public BaseFun
	{
	public:
		TFunction<RetType(VarTypes...)> TarFun;
		ValFun(const TFunction<RetType(VarTypes...)> InsFun) : TarFun(InsFun) {}
		RetType Execute(VarTypes... Params)
		{
			return TarFun(Params...);
		}
	};
	BaseFun* FunPtr;
public:
	DDAnyFun() : FunPtr(NULL) {}
	template<typename RetType, typename... VarTypes>
	DDAnyFun(const TFunction<RetType(VarTypes...)> InsFun) : FunPtr(new ValFun<RetType, VarTypes...>(InsFun)) {}
	~DDAnyFun() { delete FunPtr; }
	template<typename RetType, typename... VarTypes>
	RetType Execute(VarTypes... Params)
	{
		ValFun<RetType, VarTypes...>* SubFunPtr = static_cast<ValFun<RetType, VarTypes...>*>(FunPtr);
		return SubFunPtr->Execute(Params...);
	}
	template<typename RetType, typename... VarTypes>
	TFunction<RetType(VarTypes...)>& GetFun()
	{
		ValFun<RetType, VarTypes...>* SubFunPtr = static_cast<ValFun<RetType, VarTypes...>*>(FunPtr);
		return SubFunPtr->TarFun;
	}
};

#pragma endregion

#pragma region DDMsgNode

//�¼��ڵ�
struct DDMsgNode
{
	//�����õĽӿ�����
	int32 CallCount;
	//�����б�
	TMap<int32, DDAnyFun*> FunQuene;
	//ע�᷽��
	template<typename RetType, typename... VarTypes>
	int32 RegisterFun(TFunction<RetType(VarTypes...)> InsFun);
	//ע������
	void UnRegisterFun(int32 FunID)
	{
		//���б��Ƴ�����
		DDAnyFun* DesPtr = *FunQuene.Find(FunID);
		FunQuene.Remove(FunID);
		delete DesPtr;
	}
	//��սڵ�
	void ClearNode()
	{
		for (TMap<int32, DDAnyFun*>::TIterator It(FunQuene); It; ++It)
		{
			delete It.Value();
		}
	}
	//ִ�з���
	template<typename RetType, typename... VarTypes>
	RetType Execute(VarTypes... Params);
	//�ж��Ƿ��а󶨵ĺ���
	bool IsBound() { return FunQuene.Num() > 0; }
	//����а󶨺�����ȥִ��
	template<typename RetType, typename... VarTypes>
	bool ExecuteIfBound(VarTypes... Params);
	//���캯��, ��ʼ��CallCountΪ0
	DDMsgNode() : CallCount(0) {}
};

template<typename RetType, typename... VarTypes>
int32 DDMsgNode::RegisterFun(TFunction<RetType(VarTypes...)> InsFun)
{
	//��ȡ����������������±�
	TArray<int32> FunKeyQuene;
	FunQuene.GenerateKeyArray(FunKeyQuene);
	//��ȡ���±�
	int32 NewID;
	for (int32 i = FunKeyQuene.Num(); i >= 0; --i)
	{
		if (!FunKeyQuene.Contains(i))
		{
			NewID = i;
			break;
		}
	}
	//���·�����ӵ��ڵ�
	FunQuene.Add(NewID, new DDAnyFun(InsFun));
	return NewID;
}

template<typename RetType, typename... VarTypes>
RetType DDMsgNode::Execute(VarTypes... Params)
{
	//����ִ�еڶ��������һ������
	TMap<int32, DDAnyFun*>::TIterator It(FunQuene);
	++It;
	for (; It; ++It)
	{
		It.Value()->Execute<RetType, VarTypes...>(Params...);
	}
	//��ȡ���е�һ������
	TMap<int32, DDAnyFun*>::TIterator IBegin(FunQuene);
	return IBegin.Value()->Execute<RetType, VarTypes...>(Params...);
}

template<typename RetType, typename... VarTypes>
bool DDMsgNode::ExecuteIfBound(VarTypes... Params)
{
	if (!IsBound()) return false;
	for (TMap<int32, DDAnyFun*>::TIterator It(FunQuene); It; ++It)
	{
		It.Value()->Execute<RetType, VarTypes...>(Params...);
	}
	return true;
}

#pragma endregion


#pragma region DDCallHandle

struct DDMsgQuene;

//���þ��
template<typename RetType, typename... VarTypes>
struct DDCallHandle
{
	//�¼�����
	DDMsgQuene* MsgQuene;
	//�ڵ���, ������
	FName CallName;
	//�Ƿ���Ч, ������д���ڲ���������״̬
	TSharedPtr<bool> IsActived;
	//ִ�з���
	RetType Execute(VarTypes... Params);
	//�Ƿ��Ѿ���
	bool IsBound();
	//����󶨾�ִ��
	bool ExecuteIfBound(VarTypes... Params);
	//ע�����ýӿ�
	void UnRegister();
	//�޲ι��캯��
	DDCallHandle() {}
	//���캯��
	DDCallHandle(DDMsgQuene* MQ, FName CN) {
		MsgQuene = MQ;
		CallName = CN;
		//����ʱ״̬Ϊ����״̬
		IsActived = MakeShareable<bool>(new bool(true));
	}
	//��д������
	DDCallHandle<RetType, VarTypes...>& operator=(const DDCallHandle<RetType, VarTypes...>& Other)
	{
		if (this == &Other)
			return *this;
		MsgQuene = Other.MsgQuene;
		CallName = Other.CallName;
		IsActived = Other.IsActived;
		return *this;
	}
};


template<typename RetType, typename... VarTypes>
void DDCallHandle<RetType, VarTypes...>::UnRegister()
{
	if (*IsActived.Get())
		MsgQuene->UnRegisterCallPort(CallName);
	*IsActived.Get() = false;
}

template<typename RetType, typename... VarTypes>
bool DDCallHandle<RetType, VarTypes...>::ExecuteIfBound(VarTypes... Params)
{
	if (!IsBound() || !*IsActived.Get())
		return false;
	MsgQuene->Execute<RetType, VarTypes...>(CallName, Params...);
	return true;
}

template<typename RetType, typename... VarTypes>
bool DDCallHandle<RetType, VarTypes...>::IsBound()
{
	if (!*IsActived.Get())
		return false;
	return MsgQuene->IsBound(CallName);
}

//ִ��Execute����֮ǰ�����ֶ�����IsBound()�ж��Ƿ��а󶨺���
template<typename RetType, typename... VarTypes>
RetType DDCallHandle<RetType, VarTypes...>::Execute(VarTypes... Params)
{
	return MsgQuene->Execute<RetType, VarTypes...>(CallName, Params...);
}

#pragma endregion

#pragma region DDMsgQuene

struct DDFunHandle;

//�¼�����
struct DDMsgQuene
{
	//�ڵ�����
	TMap<FName, DDMsgNode> MsgQuene;
	//ע����ýӿ�
	template<typename RetType, typename... VarTypes>
	DDCallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);
	//ע�᷽���ӿ�
	template<typename RetType, typename... VarTypes>
	DDFunHandle RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun);
	//ע�����ýӿ�
	void UnRegisterCallPort(FName CallName)
	{
		if (!MsgQuene.Contains(CallName))
			return;
		//��ȡ�¼��ڵ�
		DDMsgNode* MsgNode = MsgQuene.Find(CallName);
		//�ö�Ӧ�Ľڵ���ü�������һ, ���������С�ڵ���0, ���Ƴ����ýӿ�
		MsgNode->CallCount--;
		if (MsgNode->CallCount <= 0)
		{
			MsgNode->ClearNode();
			MsgQuene.Remove(CallName);
		}
	}
	//ע�������ӿ�
	void UnRegisterFunPort(FName CallName, int32 FunID)
	{
		if (MsgQuene.Contains(CallName))
			MsgQuene.Find(CallName)->UnRegisterFun(FunID);
	}
	//ִ�з����ӿ�
	template<typename RetType, typename... VarTypes>
	RetType Execute(FName CallName, VarTypes... Params);
	//�Ƿ��Ѿ��󶨷���
	bool IsBound(FName CallName) { return MsgQuene.Find(CallName)->IsBound(); }
};

template<typename RetType, typename... VarTypes>
DDCallHandle<RetType, VarTypes...>
DDMsgQuene::RegisterCallPort(FName CallName)
{
	//����Ѿ����ڶ�ӦCallName�ĵ��ýӿ�, �Ͱѵ��ü�����+1
	if (MsgQuene.Contains(CallName))
	{
		MsgQuene.Find(CallName)->CallCount++;
	}
	else
	{
		//�����µ��¼��ڵ㲢����ӵ�����
		MsgQuene.Add(CallName, DDMsgNode());
		//��������1
		MsgQuene.Find(CallName)->CallCount++;
	}
	//���ص��þ��
	return DDCallHandle<RetType, VarTypes...>(this, CallName);
}

template<typename RetType, typename... VarTypes>
DDFunHandle DDMsgQuene::RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	//��ȡ�µķ����±�
	int32 FunID;
	//���������CallName��Ӧ�Ľڵ�
	if (!MsgQuene.Contains(CallName))
	{
		//�����µ��¼��ڵ㲢����ӵ�����
		MsgQuene.Add(CallName, DDMsgNode());
	}
	//ֱ�ӽ��µķ���ע�ᵽ�ڵ�
	FunID = MsgQuene.Find(CallName)->RegisterFun(InsFun);
	//���ط������
	return DDFunHandle(this, CallName, FunID);
}

template<typename RetType, typename... VarTypes>
RetType DDMsgQuene::Execute(FName CallName, VarTypes... Params)
{
	return MsgQuene.Find(CallName)->Execute<RetType, VarTypes...>(Params...);
}

#pragma endregion

#pragma region DDFunHandle

//�������
struct DDFunHandle
{
	//��Ϣ����
	DDMsgQuene* MsgQuene;
	//��������
	FName CallName;
	//����ID
	int32 FunID;
	//�Ƿ���Ч
	TSharedPtr<bool> IsActived;
	//ע������
	void UnRegister()
	{
		if (*IsActived.Get())
			MsgQuene->UnRegisterFunPort(CallName, FunID);
		//����ʧ��
		*IsActived.Get() = false;
	}
	//�޲ι��캯��
	DDFunHandle() {}
	//�вι��캯��
	DDFunHandle(DDMsgQuene* MQ, FName CN, int32 FI)
	{
		MsgQuene = MQ;
		CallName = CN;
		FunID = FI;
		//����״̬Ϊ����
		IsActived = MakeShareable<bool>(new bool(true));
	}
	//��д=������
	DDFunHandle& operator=(const DDFunHandle& Other)
	{
		if (this == &Other)
			return *this;
		MsgQuene = Other.MsgQuene;
		CallName = Other.CallName;
		FunID = Other.FunID;
		IsActived = Other.IsActived;
		return *this;
	}
};

#pragma endregion


#pragma region Coroutine

//�ж�����ί��
DECLARE_DELEGATE_RetVal(bool, FCoroCondition)

struct DDCoroNode
{
	//����״̬
	bool IsActive;
	//ʣ��ʱ��, ʣ��֡
	float RemainTime;
	//����ί��
	FCoroCondition ConditionDele;
	//���캯��
	DDCoroNode() : IsActive(false) {}

	//�ӳٶ���֡����ִ��
	bool UpdateOperate(int32 SpaceTick)
	{
		if (!IsActive)
		{
			RemainTime = SpaceTick;
			IsActive = true;
			return true;
		}
		else
		{
			RemainTime -= 1;
			if (RemainTime > 0)
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}

	//�ӳ������� ,֡���º���, ����true, �ͼ�������, ����false, ִ�к�������
	bool UpdateOperate(float DeltaTime, float SpaceTime)
	{
		if (!IsActive)
		{
			RemainTime = SpaceTime;
			IsActive = true;
			return true;
		}
		else
		{
			RemainTime -= DeltaTime;
			if (RemainTime > 0)
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}

	//bool����ָ�����, ����Ϊtrue���������, Ϊfalse��ִ�к�������
	bool UpdateOperate(bool* Condition)
	{
		if (!IsActive)
		{
			IsActive = true;
			return true;
		}
		else
		{
			if (*Condition)
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}

	//ί�к�������, ��������true���������, ����false��ִ�к�������
	template<typename UserClass>
	bool UpdateOperate(UserClass* UserObj, typename FCoroCondition::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod)
	{
		if (!IsActive)
		{
			if (!ConditionDele.IsBound())
				ConditionDele.BindUObject(UserObj, InMethod);
			IsActive = true;
			return true;
		}
		else
		{
			if (ConditionDele.Execute())
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}

	//lambuda���ʽ����
	bool UpdateOperate(TFunction<bool()> InFunction)
	{
		if (!IsActive)
		{
			IsActive = true;
			return true;
		}
		else
		{
			if (InFunction())
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}

	//ֹͣЭ��
	bool UpdateOperate()
	{
		IsActive = false;
		return true;
	}

};

struct DDCoroTask
{
	//�Ƿ�����
	bool IsDestory;
	//���Э�̽ڵ�
	TArray<DDCoroNode*> CoroStack;
	//���캯��
	DDCoroTask(int32 CoroCount)
	{
		IsDestory = false;
		for (int i = 0; i <= CoroCount; ++i)
			CoroStack.Push(new DDCoroNode());
	}
	//��������
	virtual ~DDCoroTask()
	{
		for (int i = 0; i < CoroStack.Num(); ++i)
			delete CoroStack[i];
	}
	//ʵ�����е�֡����
	virtual void Work(float DeltaTime) {}
	//�Ƿ����״̬
	bool IsFinish()
	{
		bool Flag = true;
		for (int i = 0; i < CoroStack.Num(); ++i)
		{
			if (CoroStack[i]->IsActive)
			{
				Flag = false;
				break;
			}
		}
		return Flag;
	}
};

#pragma endregion


#pragma region Invoke

DECLARE_DELEGATE(FDDInvokeEvent)

struct DDInvokeTask
{
	//�Ƿ�����
	bool IsDestroy;
	//�ӳ�ִ�е�����
	float DelayTime;
	//�Ƿ�ѭ��
	bool IsRepeat;
	//ѭ��ʱ����
	float RepeatTime;
	//�Ƿ���ѭ���׶�
	bool IsRepeatState;
	//��ʱ��
	float TimeCount;
	//����ί��
	FDDInvokeEvent InvokeEvent;
	//���캯��
	DDInvokeTask(float InDelayTime, bool InIsRepeat, float InRepeatTime)
	{
		DelayTime = InDelayTime;
		IsRepeat = InIsRepeat;
		RepeatTime = InRepeatTime;
		IsRepeatState = false;
		TimeCount = 0.f;
		IsDestroy = false;
	}
	//֡���²�������
	bool UpdateOperate(float DeltaSeconds)
	{
		TimeCount += DeltaSeconds;
		if (!IsRepeatState)
		{
			if (TimeCount >= DelayTime)
			{
				InvokeEvent.ExecuteIfBound();
				TimeCount = 0.f;
				if (IsRepeat)
					IsRepeatState = true;
				else
					return true;
			}
		}
		else
		{
			if (TimeCount >= RepeatTime)
			{
				InvokeEvent.ExecuteIfBound();
				TimeCount = 0.f;
			}
		}
		return false;
	}
};


#pragma endregion


#pragma region Wealth

USTRUCT()
struct FWealthItem
{
	GENERATED_BODY()

public:

	//������
	UPROPERTY(EditAnywhere)
		FName ObjectName;

	//����
	UPROPERTY(EditAnywhere)
		FName ClassName;

};

USTRUCT()
struct FWealthObject : public FWealthItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSubclassOf<UObject> WealthClass;

};

USTRUCT()
struct FWealthActor : public FWealthItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> WealthClass;

	UPROPERTY(EditAnywhere)
		FTransform Transform;

};

USTRUCT()
struct FWealthWidget : public FWealthItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> WealthClass;

};

//Object��Դ�ṹ��
USTRUCT()
struct FObjectWealthEntry
{
	GENERATED_BODY()

public:

	//��Դ��
	UPROPERTY(EditAnywhere)
		FName WealthName;

	//��Դ������
	UPROPERTY(EditAnywhere)
		FName WealthKind;

	//��Դ����
	UPROPERTY(EditAnywhere)
		FStringAssetReference WealthPath;

	//���س����Ķ���
	UPROPERTY()
		UObject* WealthObject;
};

//UClass����ö��
UENUM()
enum class EWealthType : uint8 {
	Object,
	Actor,
	Widget
};

//Class��Դ�ṹ��
USTRUCT()
struct FClassWealthEntry
{
	GENERATED_BODY()

public:

	//��Դ���
	UPROPERTY(EditAnywhere)
		EWealthType WealthType;

	//��Դ��
	UPROPERTY(EditAnywhere)
		FName WealthName;

	//��Դ������
	UPROPERTY(EditAnywhere)
		FName WealthKind;

	//��Դ����
	UPROPERTY(EditAnywhere)
		TSoftClassPtr<UObject> WealthPtr;

	//���س����Ķ���
	UPROPERTY()
		UClass* WealthClass;
};

//����ȡ���ӽṹ��, ������ͬ�첽����
USTRUCT()
struct FWealthURL
{
	GENERATED_BODY()

public:

	//��Դ��
	UPROPERTY(EditAnywhere)
		FName WealthName;

	//��Դ������
	UPROPERTY(EditAnywhere)
		FName WealthKind;

	//��Դ����
	UPROPERTY(EditAnywhere)
		FStringAssetReference WealthPath;

	//��Դ����
	UPROPERTY(EditAnywhere)
		TSoftClassPtr<UObject> WealthPtr;

};


UCLASS()
class DATADRIVEN_API UWealthData : public UDataAsset
{
	GENERATED_BODY()

public:

	//ģ������, ���DataAsset�µ���Դ���ɵĶ���Ĭ��ע�ᵽModuleName��Ӧ��ģ��
	//���Ϊ����˵����Assetʹ���ڶ��ģ����, �Զ����ɵĶ���ע�ᵽ��Asset���õ�ģ����
	UPROPERTY(EditAnywhere)
		FName ModuleName;

	//�Զ����ɵ�Object
	UPROPERTY(EditAnywhere)
		TArray<FWealthObject> AutoObjectData;

	//�Զ����ɵ�Actor
	UPROPERTY(EditAnywhere)
		TArray<FWealthActor> AutoActorData;

	//�Զ����ɵ�Widget
	UPROPERTY(EditAnywhere)
		TArray<FWealthWidget> AutoWidgetData;

	//Object��Դ���Ӽ���
	UPROPERTY(EditAnywhere)
		TArray<FObjectWealthEntry> ObjectWealthData;

	//Class��Դ���Ӽ���
	UPROPERTY(EditAnywhere)
		TArray<FClassWealthEntry> ClassWealthData;

	//��Դ���Ӽ���
	UPROPERTY(EditAnywhere)
		TArray<FWealthURL> WealthURL;

};

#pragma endregion


#pragma region UIFrame


//��������
UENUM()
enum class ELayoutType : uint8 {
	Canvas,     //��ӦCanvasPanel
	Overlay,	//��ӦOverlay
};

//UI�㼶����, �Լ���̬���, һ��6�㹻����
UENUM()
enum class ELayoutLevel : uint8
{
	Level_0 = 0,
	Level_1,
	Level_2,
	Level_3,
	Level_All,//����㼶����������ShowGroup�Ķ���
};


//�������
UENUM()
enum class EPanelShowType : uint8 {
	DoNothing,   //��Ӱ���������
	HideOther,   //��������
	Reverse,     //�����л�, ��������
};

//��������͸����
UENUM()
enum class EPanelLucenyType : uint8 {
	Lucency,        //ȫ͸��, ���ܴ�͸
	Translucence,   //��͸�������ܴ�͸
	ImPenetrable,   //��͸���ȣ����ܴ�͸
	Pentrate,       //ȫ͸��, ���Դ�͸
};

//�������
USTRUCT()
struct FUINature
{
	GENERATED_BODY()

public:

	//��������
	UPROPERTY(EditAnywhere)
		ELayoutType LayoutType;

	//UI�㼶, ��HideOther���͵����ʹ��, ָ��Ӱ��ķ�Χ
	UPROPERTY(EditAnywhere)
		ELayoutLevel LayoutLevel;

	//�������
	UPROPERTY(EditAnywhere)
		EPanelShowType PanelShowType;

	//��������͸����
	UPROPERTY(EditAnywhere)
		EPanelLucenyType PanelLucenyType;

	//Canvasê��
	UPROPERTY(EditAnywhere)
		FAnchors Anchors;

	//Canvas��Offset(pos, size)  Overlay��padding
	UPROPERTY(EditAnywhere)
		FMargin Offsets;

	//Overlay��ˮƽ����
	UPROPERTY(EditAnywhere)
		TEnumAsByte<EHorizontalAlignment> HAlign;

	//Overlay�Ĵ�ֱ����
	UPROPERTY(EditAnywhere)
		TEnumAsByte<EVerticalAlignment> VAlign;

};



#pragma endregion