// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/playerHealth_component.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayerHealth_component() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	F_GAME_PT_API UClass* Z_Construct_UClass_UplayerHealth_component();
	F_GAME_PT_API UClass* Z_Construct_UClass_UplayerHealth_component_NoRegister();
	F_GAME_PT_API UClass* Z_Construct_UClass_Uplayers_attributes_NoRegister();
	UPackage* Z_Construct_UPackage__Script_f_game_pt();
// End Cross Module References
	void UplayerHealth_component::StaticRegisterNativesUplayerHealth_component()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UplayerHealth_component);
	UClass* Z_Construct_UClass_UplayerHealth_component_NoRegister()
	{
		return UplayerHealth_component::StaticClass();
	}
	struct Z_Construct_UClass_UplayerHealth_component_Statics
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
	UObject* (*const Z_Construct_UClass_UplayerHealth_component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_f_game_pt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UplayerHealth_component_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UplayerHealth_component_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/playerHealth_component.h" },
		{ "ModuleRelativePath", "Components/playerHealth_component.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UplayerHealth_component_Statics::NewProp_attribute_subclass_MetaData[] = {
		{ "Category", "attribute" },
		{ "ModuleRelativePath", "Components/playerHealth_component.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UplayerHealth_component_Statics::NewProp_attribute_subclass = { "attribute_subclass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UplayerHealth_component, attribute_subclass), Z_Construct_UClass_UClass, Z_Construct_UClass_Uplayers_attributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UplayerHealth_component_Statics::NewProp_attribute_subclass_MetaData), Z_Construct_UClass_UplayerHealth_component_Statics::NewProp_attribute_subclass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UplayerHealth_component_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UplayerHealth_component_Statics::NewProp_attribute_subclass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UplayerHealth_component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UplayerHealth_component>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UplayerHealth_component_Statics::ClassParams = {
		&UplayerHealth_component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UplayerHealth_component_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UplayerHealth_component_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UplayerHealth_component_Statics::Class_MetaDataParams), Z_Construct_UClass_UplayerHealth_component_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UplayerHealth_component_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UplayerHealth_component()
	{
		if (!Z_Registration_Info_UClass_UplayerHealth_component.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UplayerHealth_component.OuterSingleton, Z_Construct_UClass_UplayerHealth_component_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UplayerHealth_component.OuterSingleton;
	}
	template<> F_GAME_PT_API UClass* StaticClass<UplayerHealth_component>()
	{
		return UplayerHealth_component::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UplayerHealth_component);
	UplayerHealth_component::~UplayerHealth_component() {}
	struct Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerHealth_component_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerHealth_component_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UplayerHealth_component, UplayerHealth_component::StaticClass, TEXT("UplayerHealth_component"), &Z_Registration_Info_UClass_UplayerHealth_component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UplayerHealth_component), 931772713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerHealth_component_h_4104874685(TEXT("/Script/f_game_pt"),
		Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerHealth_component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Components_playerHealth_component_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
