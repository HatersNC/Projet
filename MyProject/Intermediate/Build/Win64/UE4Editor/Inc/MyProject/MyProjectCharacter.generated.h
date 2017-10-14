// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectCharacter_generated_h
#error "MyProjectCharacter.generated.h already included, missing '#pragma once' in MyProjectCharacter.h"
#endif
#define MYPROJECT_MyProjectCharacter_generated_h

#define MyProject_Source_MyProject_MyProjectCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetPlayerDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setPlayerDamage(Z_Param_newDamage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetPlayerDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->getPlayerDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetPlayerLife) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newLife); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setPlayerLife(Z_Param_newLife); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetPlayerLife) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->getPlayerLife(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetPlayerDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setPlayerDamage(Z_Param_newDamage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetPlayerDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->getPlayerDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetPlayerLife) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newLife); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setPlayerLife(Z_Param_newLife); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetPlayerLife) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->getPlayerLife(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectCharacter(); \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectCharacter(); \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public:


#define MyProject_Source_MyProject_MyProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectCharacter)


#define MyProject_Source_MyProject_MyProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AMyProjectCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AMyProjectCharacter, CursorToWorld); }


#define MyProject_Source_MyProject_MyProjectCharacter_h_9_PROLOG
#define MyProject_Source_MyProject_MyProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectCharacter_h_12_INCLASS \
	MyProject_Source_MyProject_MyProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
