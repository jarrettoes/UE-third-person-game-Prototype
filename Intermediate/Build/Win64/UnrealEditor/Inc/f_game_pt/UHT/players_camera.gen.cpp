// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/players_camera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayers_camera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	F_GAME_PT_API UClass* Z_Construct_UClass_Uplayers_camera();
	F_GAME_PT_API UClass* Z_Construct_UClass_Uplayers_camera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_f_game_pt();
// End Cross Module References
	void Uplayers_camera::StaticRegisterNativesUplayers_camera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Uplayers_camera);
	UClass* Z_Construct_UClass_Uplayers_camera_NoRegister()
	{
		return Uplayers_camera::StaticClass();
	}
	struct Z_Construct_UClass_Uplayers_camera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Uplayers_camera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_f_game_pt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_camera_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uplayers_camera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/players_camera.h" },
		{ "ModuleRelativePath", "Camera/players_camera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Uplayers_camera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Uplayers_camera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Uplayers_camera_Statics::ClassParams = {
		&Uplayers_camera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uplayers_camera_Statics::Class_MetaDataParams), Z_Construct_UClass_Uplayers_camera_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Uplayers_camera()
	{
		if (!Z_Registration_Info_UClass_Uplayers_camera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Uplayers_camera.OuterSingleton, Z_Construct_UClass_Uplayers_camera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Uplayers_camera.OuterSingleton;
	}
	template<> F_GAME_PT_API UClass* StaticClass<Uplayers_camera>()
	{
		return Uplayers_camera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Uplayers_camera);
	Uplayers_camera::~Uplayers_camera() {}
	struct Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Camera_players_camera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Camera_players_camera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Uplayers_camera, Uplayers_camera::StaticClass, TEXT("Uplayers_camera"), &Z_Registration_Info_UClass_Uplayers_camera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Uplayers_camera), 1445704540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Camera_players_camera_h_2899499835(TEXT("/Script/f_game_pt"),
		Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Camera_players_camera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Camera_players_camera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
