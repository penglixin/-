// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DDActor_generated_h
#error "DDActor.generated.h already included, missing '#pragma once' in DDActor.h"
#endif
#define DATADRIVEN_DDActor_generated_h

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_RPC_WRAPPERS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADDActor(); \
	friend struct Z_Construct_UClass_ADDActor_Statics; \
public: \
	DECLARE_CLASS(ADDActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(ADDActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADDActor*>(this); }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADDActor(); \
	friend struct Z_Construct_UClass_ADDActor_Statics; \
public: \
	DECLARE_CLASS(ADDActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(ADDActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADDActor*>(this); }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADDActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADDActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADDActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADDActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADDActor(ADDActor&&); \
	NO_API ADDActor(const ADDActor&); \
public:


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADDActor(ADDActor&&); \
	NO_API ADDActor(const ADDActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADDActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADDActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADDActor)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_PRIVATE_PROPERTY_OFFSET
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_10_PROLOG
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_RPC_WRAPPERS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_INCLASS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_INCLASS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class ADDActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
