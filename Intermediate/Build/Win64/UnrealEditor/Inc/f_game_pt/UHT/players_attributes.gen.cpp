// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/players_attributes.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayers_attributes() {}
// Cross Module References
	F_GAME_PT_API UClass* Z_Construct_UClass_Uplayers_attributes();
	F_GAME_PT_API UClass* Z_Construct_UClass_Uplayers_attributes_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_f_game_pt();
// End Cross Module References
	DEFINE_FUNCTION(Uplayers_attributes::execonRep_maxStamina)
	{
		P_GET_STRUCT(FGameplayAttributeData,Z_Param_old_maxStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onRep_maxStamina(Z_Param_old_maxStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Uplayers_attributes::execonRep_stamina)
	{
		P_GET_STRUCT(FGameplayAttributeData,Z_Param_old_stamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onRep_stamina(Z_Param_old_stamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Uplayers_attributes::execonRep_maxHealth)
	{
		P_GET_STRUCT(FGameplayAttributeData,Z_Param_old_maxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onRep_maxHealth(Z_Param_old_maxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Uplayers_attributes::execonRep_health)
	{
		P_GET_STRUCT(FGameplayAttributeData,Z_Param_old_health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onRep_health(Z_Param_old_health);
		P_NATIVE_END;
	}
	void Uplayers_attributes::StaticRegisterNativesUplayers_attributes()
	{
		UClass* Class = Uplayers_attributes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onRep_health", &Uplayers_attributes::execonRep_health },
			{ "onRep_maxHealth", &Uplayers_attributes::execonRep_maxHealth },
			{ "onRep_maxStamina", &Uplayers_attributes::execonRep_maxStamina },
			{ "onRep_stamina", &Uplayers_attributes::execonRep_stamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics
	{
		struct players_attributes_eventonRep_health_Parms
		{
			FGameplayAttributeData old_health;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_old_health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_old_health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::NewProp_old_health_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::NewProp_old_health = { "old_health", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(players_attributes_eventonRep_health_Parms, old_health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::NewProp_old_health_MetaData), Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::NewProp_old_health_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::NewProp_old_health,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/players_attributes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Uplayers_attributes, nullptr, "onRep_health", nullptr, nullptr, Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::PropPointers), sizeof(Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::players_attributes_eventonRep_health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::Function_MetaDataParams), Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::players_attributes_eventonRep_health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Uplayers_attributes_onRep_health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Uplayers_attributes_onRep_health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics
	{
		struct players_attributes_eventonRep_maxHealth_Parms
		{
			FGameplayAttributeData old_maxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_old_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_old_maxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::NewProp_old_maxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::NewProp_old_maxHealth = { "old_maxHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(players_attributes_eventonRep_maxHealth_Parms, old_maxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::NewProp_old_maxHealth_MetaData), Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::NewProp_old_maxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::NewProp_old_maxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/players_attributes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Uplayers_attributes, nullptr, "onRep_maxHealth", nullptr, nullptr, Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::players_attributes_eventonRep_maxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::players_attributes_eventonRep_maxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics
	{
		struct players_attributes_eventonRep_maxStamina_Parms
		{
			FGameplayAttributeData old_maxStamina;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_old_maxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_old_maxStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::NewProp_old_maxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::NewProp_old_maxStamina = { "old_maxStamina", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(players_attributes_eventonRep_maxStamina_Parms, old_maxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::NewProp_old_maxStamina_MetaData), Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::NewProp_old_maxStamina_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::NewProp_old_maxStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/players_attributes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Uplayers_attributes, nullptr, "onRep_maxStamina", nullptr, nullptr, Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::players_attributes_eventonRep_maxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::players_attributes_eventonRep_maxStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics
	{
		struct players_attributes_eventonRep_stamina_Parms
		{
			FGameplayAttributeData old_stamina;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_old_stamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_old_stamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::NewProp_old_stamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::NewProp_old_stamina = { "old_stamina", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(players_attributes_eventonRep_stamina_Parms, old_stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::NewProp_old_stamina_MetaData), Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::NewProp_old_stamina_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::NewProp_old_stamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/players_attributes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Uplayers_attributes, nullptr, "onRep_stamina", nullptr, nullptr, Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::players_attributes_eventonRep_stamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::players_attributes_eventonRep_stamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Uplayers_attributes_onRep_stamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Uplayers_attributes_onRep_stamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Uplayers_attributes);
	UClass* Z_Construct_UClass_Uplayers_attributes_NoRegister()
	{
		return Uplayers_attributes::StaticClass();
	}
	struct Z_Construct_UClass_Uplayers_attributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attribute_health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_attribute_health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attribute_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_attribute_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attribute_stamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_attribute_stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attribute_maxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_attribute_maxStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Uplayers_attributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_f_game_pt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_attributes_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_Uplayers_attributes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Uplayers_attributes_onRep_health, "onRep_health" }, // 4186881181
		{ &Z_Construct_UFunction_Uplayers_attributes_onRep_maxHealth, "onRep_maxHealth" }, // 3074704025
		{ &Z_Construct_UFunction_Uplayers_attributes_onRep_maxStamina, "onRep_maxStamina" }, // 3929304504
		{ &Z_Construct_UFunction_Uplayers_attributes_onRep_stamina, "onRep_stamina" }, // 2661159433
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_attributes_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uplayers_attributes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/players_attributes.h" },
		{ "ModuleRelativePath", "Components/players_attributes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_health_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Components/players_attributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_health = { "attribute_health", "OnRep_health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uplayers_attributes, attribute_health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_health_MetaData), Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxHealth_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Components/players_attributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxHealth = { "attribute_maxHealth", "OnRep_maxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uplayers_attributes, attribute_maxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxHealth_MetaData), Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_stamina_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Components/players_attributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_stamina = { "attribute_stamina", "onRep_stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uplayers_attributes, attribute_stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_stamina_MetaData), Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_stamina_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxStamina_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Components/players_attributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxStamina = { "attribute_maxStamina", "onRep_maxStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uplayers_attributes, attribute_maxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxStamina_MetaData), Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxStamina_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Uplayers_attributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uplayers_attributes_Statics::NewProp_attribute_maxStamina,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Uplayers_attributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Uplayers_attributes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Uplayers_attributes_Statics::ClassParams = {
		&Uplayers_attributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Uplayers_attributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_attributes_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_attributes_Statics::Class_MetaDataParams), Z_Construct_UClass_Uplayers_attributes_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_attributes_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Uplayers_attributes()
	{
		if (!Z_Registration_Info_UClass_Uplayers_attributes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Uplayers_attributes.OuterSingleton, Z_Construct_UClass_Uplayers_attributes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Uplayers_attributes.OuterSingleton;
	}
	template<> F_GAME_PT_API UClass* StaticClass<Uplayers_attributes>()
	{
		return Uplayers_attributes::StaticClass();
	}

	void Uplayers_attributes::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_attribute_health(TEXT("attribute_health"));
		static const FName Name_attribute_maxHealth(TEXT("attribute_maxHealth"));
		static const FName Name_attribute_stamina(TEXT("attribute_stamina"));
		static const FName Name_attribute_maxStamina(TEXT("attribute_maxStamina"));

		const bool bIsValid = true
			&& Name_attribute_health == ClassReps[(int32)ENetFields_Private::attribute_health].Property->GetFName()
			&& Name_attribute_maxHealth == ClassReps[(int32)ENetFields_Private::attribute_maxHealth].Property->GetFName()
			&& Name_attribute_stamina == ClassReps[(int32)ENetFields_Private::attribute_stamina].Property->GetFName()
			&& Name_attribute_maxStamina == ClassReps[(int32)ENetFields_Private::attribute_maxStamina].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in Uplayers_attributes"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Uplayers_attributes);
	Uplayers_attributes::~Uplayers_attributes() {}
	struct Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Uplayers_attributes, Uplayers_attributes::StaticClass, TEXT("Uplayers_attributes"), &Z_Registration_Info_UClass_Uplayers_attributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Uplayers_attributes), 3520975149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_3557640714(TEXT("/Script/f_game_pt"),
		Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
