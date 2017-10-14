// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyProjectCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectCharacter() {}
// Cross Module References
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectCharacter_getPlayerDamage();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectCharacter();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectCharacter_getPlayerLife();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectCharacter_setPlayerDamage();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectCharacter_setPlayerLife();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AMyProjectCharacter::StaticRegisterNativesAMyProjectCharacter()
	{
		UClass* Class = AMyProjectCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "getPlayerDamage", (Native)&AMyProjectCharacter::execgetPlayerDamage },
			{ "getPlayerLife", (Native)&AMyProjectCharacter::execgetPlayerLife },
			{ "setPlayerDamage", (Native)&AMyProjectCharacter::execsetPlayerDamage },
			{ "setPlayerLife", (Native)&AMyProjectCharacter::execsetPlayerLife },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AMyProjectCharacter_getPlayerDamage()
	{
		struct MyProjectCharacter_eventgetPlayerDamage_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AMyProjectCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getPlayerDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MyProjectCharacter_eventgetPlayerDamage_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, MyProjectCharacter_eventgetPlayerDamage_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Player"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyProjectCharacter_getPlayerLife()
	{
		struct MyProjectCharacter_eventgetPlayerLife_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AMyProjectCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getPlayerLife"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MyProjectCharacter_eventgetPlayerLife_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, MyProjectCharacter_eventgetPlayerLife_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Player"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyProjectCharacter_setPlayerDamage()
	{
		struct MyProjectCharacter_eventsetPlayerDamage_Parms
		{
			int32 newDamage;
		};
		UObject* Outer = Z_Construct_UClass_AMyProjectCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("setPlayerDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MyProjectCharacter_eventsetPlayerDamage_Parms));
			UProperty* NewProp_newDamage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(newDamage, MyProjectCharacter_eventsetPlayerDamage_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Player"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyProjectCharacter_setPlayerLife()
	{
		struct MyProjectCharacter_eventsetPlayerLife_Parms
		{
			int32 newLife;
		};
		UObject* Outer = Z_Construct_UClass_AMyProjectCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("setPlayerLife"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MyProjectCharacter_eventsetPlayerLife_Parms));
			UProperty* NewProp_newLife = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newLife"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(newLife, MyProjectCharacter_eventsetPlayerLife_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Player"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyProjectCharacter_NoRegister()
	{
		return AMyProjectCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AMyProjectCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyProjectCharacter_getPlayerDamage());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyProjectCharacter_getPlayerLife());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyProjectCharacter_setPlayerDamage());
				OuterClass->LinkChild(Z_Construct_UFunction_AMyProjectCharacter_setPlayerLife());

				UProperty* NewProp_CursorToWorld = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CursorToWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CursorToWorld, AMyProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_UDecalComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AMyProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_TopDownCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TopDownCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TopDownCameraComponent, AMyProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyProjectCharacter_getPlayerDamage(), "getPlayerDamage"); // 3798606820
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyProjectCharacter_getPlayerLife(), "getPlayerLife"); // 1600165754
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyProjectCharacter_setPlayerDamage(), "setPlayerDamage"); // 254153969
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyProjectCharacter_setPlayerLife(), "setPlayerLife"); // 3617172993
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyProjectCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("ToolTip"), TEXT("A decal that projects to the cursor location."));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera above the character"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("ToolTip"), TEXT("Top down camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectCharacter, 2878402677);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectCharacter(Z_Construct_UClass_AMyProjectCharacter, &AMyProjectCharacter::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
