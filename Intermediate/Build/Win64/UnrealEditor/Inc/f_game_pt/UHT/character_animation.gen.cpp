// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/character_animation.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecharacter_animation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	F_GAME_PT_API UClass* Z_Construct_UClass_Ucharacter_animation();
	F_GAME_PT_API UClass* Z_Construct_UClass_Ucharacter_animation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_f_game_pt();
// End Cross Module References
	void Ucharacter_animation::StaticRegisterNativesUcharacter_animation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ucharacter_animation);
	UClass* Z_Construct_UClass_Ucharacter_animation_NoRegister()
	{
		return Ucharacter_animation::StaticClass();
	}
	struct Z_Construct_UClass_Ucharacter_animation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ucharacter_animation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_f_game_pt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ucharacter_animation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ucharacter_animation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/character_animation.h" },
		{ "ModuleRelativePath", "Animation/character_animation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ucharacter_animation_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "speed for animation" },
		{ "ModuleRelativePath", "Animation/character_animation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ucharacter_animation_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ucharacter_animation, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ucharacter_animation_Statics::NewProp_speed_MetaData), Z_Construct_UClass_Ucharacter_animation_Statics::NewProp_speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ucharacter_animation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ucharacter_animation_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ucharacter_animation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ucharacter_animation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ucharacter_animation_Statics::ClassParams = {
		&Ucharacter_animation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Ucharacter_animation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Ucharacter_animation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ucharacter_animation_Statics::Class_MetaDataParams), Z_Construct_UClass_Ucharacter_animation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ucharacter_animation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Ucharacter_animation()
	{
		if (!Z_Registration_Info_UClass_Ucharacter_animation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ucharacter_animation.OuterSingleton, Z_Construct_UClass_Ucharacter_animation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ucharacter_animation.OuterSingleton;
	}
	template<> F_GAME_PT_API UClass* StaticClass<Ucharacter_animation>()
	{
		return Ucharacter_animation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ucharacter_animation);
	Ucharacter_animation::~Ucharacter_animation() {}
	struct Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Animation_character_animation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Animation_character_animation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ucharacter_animation, Ucharacter_animation::StaticClass, TEXT("Ucharacter_animation"), &Z_Registration_Info_UClass_Ucharacter_animation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ucharacter_animation), 3977430939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Animation_character_animation_h_4183881896(TEXT("/Script/f_game_pt"),
		Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Animation_character_animation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Animation_character_animation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
