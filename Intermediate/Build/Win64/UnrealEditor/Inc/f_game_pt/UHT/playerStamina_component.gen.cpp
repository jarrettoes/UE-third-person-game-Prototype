// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/playerStamina_component.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayerStamina_component() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	F_GAME_PT_API UClass* Z_Construct_UClass_Uplayers_attributes_NoRegister();
	F_GAME_PT_API UClass* Z_Construct_UClass_UplayerStamina_component();
	F_GAME_PT_API UClass* Z_Construct_UClass_UplayerStamina_component_NoRegister();
	UPackage* Z_Construct_UPackage__Script_f_game_pt();
// End Cross Module References
	void UplayerStamina_component::StaticRegisterNativesUplayerStamina_component()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UplayerStamina_component);
	UClass* Z_Construct_UClass_UplayerStamina_component_NoRegister()
	{
		return UplayerStamina_component::StaticClass();
	}
	struct Z_Construct_UClass_UplayerStamina_component_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attribute_subclass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_attribute_subclass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UplayerStamina_component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_f_game_pt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UplayerStamina_component_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UplayerStamina_component_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/playerStamina_component.h" },
		{ "ModuleRelativePath", "Components/playerStamina_component.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UplayerStamina_component_Statics::NewProp_attribute_subclass_MetaData[] = {
		{ "Category", "attribute" },
		{ "ModuleRelativePath", "Components/playerStamina_component.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UplayerStamina_component_Statics::NewProp_attribute_subclass = { "attribute_subclass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UplayerStamina_component, attribute_subclass), Z_Construct_UClass_UClass, Z_Construct_UClass_Uplayers_attributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UplayerStamina_component_Statics::NewProp_attribute_subclass_MetaData), Z_Construct_UClass_UplayerStamina_component_Statics::NewProp_attribute_subclass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UplayerStamina_component_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UplayerStamina_component_Statics::NewProp_attribute_subclass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UplayerStamina_component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UplayerStamina_component>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UplayerStamina_component_Statics::ClassParams = {
		&UplayerStamina_component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UplayerStamina_component_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UplayerStamina_component_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UplayerStamina_component_Statics::Class_MetaDataParams), Z_Construct_UClass_UplayerStamina_component_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UplayerStamina_component_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UplayerStamina_component()
	{
		if (!Z_Registration_Info_UClass_UplayerStamina_component.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UplayerStamina_component.OuterSingleton, Z_Construct_UClass_UplayerStamina_component_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UplayerStamina_component.OuterSingleton;
	}
	template<> F_GAME_PT_API UClass* StaticClass<UplayerStamina_component>()
	{
		return UplayerStamina_component::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UplayerStamina_component);
	UplayerStamina_component::~UplayerStamina_component() {}
	struct Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerStamina_component_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerStamina_component_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UplayerStamina_component, UplayerStamina_component::StaticClass, TEXT("UplayerStamina_component"), &Z_Registration_Info_UClass_UplayerStamina_component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UplayerStamina_component), 3335981923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerStamina_component_h_1335956146(TEXT("/Script/f_game_pt"),
		Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerStamina_component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerStamina_component_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
