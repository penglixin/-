// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DDCharacter_generated_h
#error "DDCharacter.generated.h already included, missing '#pragma once' in DDCharacter.h"
#endif
#define DATADRIVEN_DDCharacter_generated_h

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_RPC_WRAPPERS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADDCharacter(); \
	friend struct Z_Construct_UClass_ADDCharacter_Statics; \
public: \
	DECLARE_CLASS(ADDCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(ADDCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ADDCharacter*>(this); }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADDCharacter(); \
	friend struct Z_Construct_UClass_ADDCharacter_Statics; \
public: \
	DECLARE_CLASS(ADDCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(ADDCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ADDCharacter*>(this); }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADDCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADDCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADDCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADDCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADDCharacter(ADDCharacter&&); \
	NO_API ADDCharacter(const ADDCharacter&); \
public:


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADDCharacter(ADDCharacter&&); \
	NO_API ADDCharacter(const ADDCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADDCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADDCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADDCharacter)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_PRIVATE_PROPERTY_OFFSET
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_10_PROLOG
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_RPC_WRAPPERS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_INCLASS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_INCLASS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class ADDCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
