// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDUserWidget.h"
#include "DDPanelWidget.generated.h"

/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDPanelWidget : public UDDUserWidget
{
	GENERATED_BODY()
	
public:

	//UI�����������
	virtual void PanelEnter();   //��һ�ν������, ֻ��ִ��һ��
	virtual void PanelDisplay(); //�ڶ����Լ��Ժ�N����ʾ�ڽ���
	virtual void PanelHidden();  //����
	virtual void PanelFreeze();  //����
	virtual void PanelResume();  //�ⶳ
	virtual void PanelExit();    //����

	//�����ص�����
	UFUNCTION(BlueprintImplementableEvent)
		float DisplayEnterMovie();

	UFUNCTION(BlueprintImplementableEvent)
		float DisplayLeaveMovie();



public:

	UPROPERTY(EditAnywhere)
		FUINature UINature;

protected:

	//����UI���
	void SetSelfHidden();

	//���ٶ����ص�����
	void RemoveCallBack();

	void ShowSelfPanel();

	void HideSelfPanel();

	void ExitSelfPanel();

	void AdvanceLoadPanel(FName PanelName);

	void ShowUIPanel(FName PanelName);

	void HideUIPanel(FName PanelName);

	void ExitUIPanel(FName PanelName);

protected:

	//���ض���������
	static FName PanelHiddenName;
	//UIFrame���������ڵ�ģ��ID, Լ����HUD��, ��ֵ��1
	static int32 UIFrameModuleIndex;
	//UIFrame�������Ķ�����, Լ����UIFrame
	static FName UIFrameName;
	//���ٻص���������
	static FName ExitCallBackName;
	//��ʾUI������
	static FName ShowUIPanelName;
	//����UI������
	static FName HideUIPanelName;
	//����UI������
	static FName ExitUIPanelName;
	//Ԥ���ط�����
	static FName AdvanceLoadPanelName;


protected:

	DDOBJFUNC_TWO(ExitCallBack, ELayoutType, LayoutType, UPanelWidget*, WorkLayout);

	DDOBJFUNC_ONE(OperatorUIPanel, FName, PanelName);

};
