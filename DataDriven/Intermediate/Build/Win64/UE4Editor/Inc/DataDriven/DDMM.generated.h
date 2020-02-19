// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DDMM_generated_h
#error "DDMM.generated.h already included, missing '#pragma once' in DDMM.h"
#endif
#define DATADRIVEN_DDMM_generated_h

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_RPC_WRAPPERS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVEN_API UDDMM(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDMM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVEN_API, UDDMM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDMM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATADRIVEN_API UDDMM(UDDMM&&); \
	DATADRIVEN_API UDDMM(const UDDMM&); \
public:


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVEN_API UDDMM(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATADRIVEN_API UDDMM(UDDMM&&); \
	DATADRIVEN_API UDDMM(const UDDMM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVEN_API, UDDMM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDMM); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDMM)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDDMM(); \
	friend struct Z_Construct_UClass_UDDMM_Statics; \
public: \
	DECLARE_CLASS(UDDMM, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataDriven"), DATADRIVEN_API) \
	DECLARE_SERIALIZER(UDDMM)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_GENERATED_UINTERFACE_BODY() \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_GENERATED_UINTERFACE_BODY() \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDDMM() {} \
public: \
	typedef UDDMM UClassType; \
	typedef IDDMM ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IDDMM() {} \
public: \
	typedef UDDMM UClassType; \
	typedef IDDMM ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_13_PROLOG
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_RPC_WRAPPERS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDDMM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
