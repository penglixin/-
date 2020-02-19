// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELayoutType : uint8;
class UPanelWidget;
class UUserWidget;
#ifdef DATADRIVEN_DDFrameWidget_generated_h
#error "DDFrameWidget.generated.h already included, missing '#pragma once' in DDFrameWidget.h"
#endif
#define DATADRIVEN_DDFrameWidget_generated_h

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExitCallBack) \
	{ \
		P_GET_ENUM(ELayoutType,Z_Param_LayoutType); \
		P_GET_OBJECT(UPanelWidget,Z_Param_InLayout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitCallBack(ELayoutType(Z_Param_LayoutType),Z_Param_InLayout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcceptPanelWidget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BackName); \
		P_GET_OBJECT(UUserWidget,Z_Param_BackWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AcceptPanelWidget(Z_Param_BackName,Z_Param_BackWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcceptAdvancePanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BackName); \
		P_GET_OBJECT(UUserWidget,Z_Param_BackWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AcceptAdvancePanel(Z_Param_BackName,Z_Param_BackWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitUIPanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PanelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitUIPanel(Z_Param_PanelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideUIPanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PanelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideUIPanel(Z_Param_PanelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowUIPanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PanelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowUIPanel(Z_Param_PanelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdvanceLoadPanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PanelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdvanceLoadPanel(Z_Param_PanelName); \
		P_NATIVE_END; \
	}


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExitCallBack) \
	{ \
		P_GET_ENUM(ELayoutType,Z_Param_LayoutType); \
		P_GET_OBJECT(UPanelWidget,Z_Param_InLayout); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitCallBack(ELayoutType(Z_Param_LayoutType),Z_Param_InLayout); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcceptPanelWidget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BackName); \
		P_GET_OBJECT(UUserWidget,Z_Param_BackWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AcceptPanelWidget(Z_Param_BackName,Z_Param_BackWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcceptAdvancePanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BackName); \
		P_GET_OBJECT(UUserWidget,Z_Param_BackWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AcceptAdvancePanel(Z_Param_BackName,Z_Param_BackWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitUIPanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PanelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitUIPanel(Z_Param_PanelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideUIPanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PanelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideUIPanel(Z_Param_PanelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowUIPanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PanelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowUIPanel(Z_Param_PanelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdvanceLoadPanel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PanelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdvanceLoadPanel(Z_Param_PanelName); \
		P_NATIVE_END; \
	}


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDDFrameWidget(); \
	friend struct Z_Construct_UClass_UDDFrameWidget_Statics; \
public: \
	DECLARE_CLASS(UDDFrameWidget, UDDUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDFrameWidget)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDDFrameWidget(); \
	friend struct Z_Construct_UClass_UDDFrameWidget_Statics; \
public: \
	DECLARE_CLASS(UDDFrameWidget, UDDUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDFrameWidget)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDFrameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDFrameWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDFrameWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDFrameWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDFrameWidget(UDDFrameWidget&&); \
	NO_API UDDFrameWidget(const UDDFrameWidget&); \
public:


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDFrameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDFrameWidget(UDDFrameWidget&&); \
	NO_API UDDFrameWidget(const UDDFrameWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDFrameWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDFrameWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDFrameWidget)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveOverlay() { return STRUCT_OFFSET(UDDFrameWidget, ActiveOverlay); } \
	FORCEINLINE static uint32 __PPO__UnActiveOverlay() { return STRUCT_OFFSET(UDDFrameWidget, UnActiveOverlay); } \
	FORCEINLINE static uint32 __PPO__ActiveCanvas() { return STRUCT_OFFSET(UDDFrameWidget, ActiveCanvas); } \
	FORCEINLINE static uint32 __PPO__UnActiveCanvas() { return STRUCT_OFFSET(UDDFrameWidget, UnActiveCanvas); } \
	FORCEINLINE static uint32 __PPO__MaskPanel() { return STRUCT_OFFSET(UDDFrameWidget, MaskPanel); }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_17_PROLOG
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_RPC_WRAPPERS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_INCLASS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_INCLASS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDDFrameWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDUI_DDFrameWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
