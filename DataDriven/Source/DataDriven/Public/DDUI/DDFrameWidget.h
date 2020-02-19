// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDUserWidget.h"
#include "DDFrameWidget.generated.h"


class UCanvasPanel;
class UImage;
class UOverlay;
class UDDPanelWidget;
/**
 *
 */
UCLASS()
class DATADRIVEN_API UDDFrameWidget : public UDDUserWidget
{
	GENERATED_BODY()

public:

	virtual bool Initialize() override;

	//��ǰ����
	UFUNCTION()
		void AdvanceLoadPanel(FName PanelName);

	//��ʾ��� ��� = UI�������
	UFUNCTION()
		void ShowUIPanel(FName PanelName);

	//����UI
	UFUNCTION()
		void HideUIPanel(FName PanelName);

	//����UI
	UFUNCTION()
		void ExitUIPanel(FName PanelName);

	//��ǰ�������ص�����
	UFUNCTION()
		void AcceptAdvancePanel(FName BackName, UUserWidget* BackWidget);

	//��ʾʱ���ػص�����
	UFUNCTION()
		void AcceptPanelWidget(FName BackName, UUserWidget* BackWidget);

	//����UI������ٺ�ĸ��ؼ�
	UFUNCTION()
		void ExitCallBack(ELayoutType LayoutType, UPanelWidget* InLayout);

protected:

	//ִ�н���UI
	void DoEnterUIPanel(FName PanelName);

	//ִ����ʾUI
	void DoShowUIPanel(FName PanelName);

	//����Ԥ���ص����յ���ʾ����������ʱ, ����ѭ������Ƿ�������, ��������������ʾ
	void WaitShowPanel();

	//�������, ��һ��
	void EnterPanelDoNothing(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget);
	void EnterPanelDoNothing(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget);

	void EnterPanelHideOther(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget);
	void EnterPanelHideOther(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget);

	void EnterPanelReverse(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget);
	void EnterPanelReverse(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget);

	//��ʾUI
	void ShowPanelDoNothing(UDDPanelWidget* PanelWidget);
	void ShowPanelHideOther(UDDPanelWidget* PanelWidget);
	void ShowPanelReverse(UDDPanelWidget* PanelWidget);

	//����UI
	void HidePanelDoNothing(UDDPanelWidget* PanelWidget);
	void HidePanelHideOther(UDDPanelWidget* PanelWidget);
	void HidePanelReverse(UDDPanelWidget* PanelWidget);

	//����UI
	void ExitPanelDoNothing(UDDPanelWidget* PanelWidget);
	void ExitPanelHideOther(UDDPanelWidget* PanelWidget);
	void ExitPanelReverse(UDDPanelWidget* PanelWidget);

	//��������
	void ActiveMask(UCanvasPanel* WorkLayout, EPanelLucenyType LucenyType);
	void ActiveMask(UOverlay* WorkLayout, EPanelLucenyType LucenyType);

	//ת������, �����ַ����ڴ����UI������һ��
	void TransferMask(UDDPanelWidget* PanelWidget);

	//��MaskPanel�Ƴ�, �����Layout�����Ϊ��, ˵��MaskPanel׼����ӵ����Layout
	void RemoveMaskPanel(UPanelWidget* WorkLayout = NULL);

protected:

	//���ڵ�
	UCanvasPanel* RootCanvas;

	//����Overlay�ؼ�
	UPROPERTY()
		TArray<UOverlay*> ActiveOverlay;
	UPROPERTY()
		TArray<UOverlay*> UnActiveOverlay;

	//����Canvas�ؼ�
	UPROPERTY()
		TArray<UCanvasPanel*> ActiveCanvas;
	UPROPERTY()
		TArray<UCanvasPanel*> UnActiveCanvas;

	//����UI���, ��FName�����Ǹ����ע�ᵽ��ܵ�ObjectName
	TMap<FName, UDDPanelWidget*> AllPanelGroup;

	//�Ѿ���ʾ��UI
	TMap<FName, UDDPanelWidget*> ShowPanelGroup;

	//����ջ
	TMap<FName, UDDPanelWidget*> PopPanelStack;

	//�Ѿ����ع���UI��������
	TArray<FName> LoadedPanelName;

	//������ǰ���ص����Ѿ��յ���ʾ����Ľ�����, ���Ԥ��ʾ��
	TArray<FName> WaitShowPanelName;

	//����ͼƬ
	UPROPERTY()
		UImage* MaskPanel;

	//͸����ֵ
	FLinearColor NormalLucency;
	FLinearColor TranslucenceLucency;
	FLinearColor ImPenetrableLucency;

	//����ѭ���������������ʾ��������ʱѭ����������
	FName WaitShowTaskName;

};
