// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/base_character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebase_character() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	F_GAME_PT_API UClass* Z_Construct_UClass_Abase_character();
	F_GAME_PT_API UClass* Z_Construct_UClass_Abase_character_NoRegister();
	F_GAME_PT_API UClass* Z_Construct_UClass_Uplayers_attributes_NoRegister();
	F_GAME_PT_API UClass* Z_Construct_UClass_Uplayers_camera_NoRegister();
	F_GAME_PT_API UEnum* Z_Construct_UEnum_f_game_pt_movement_states();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_f_game_pt();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_movement_states;
	static UEnum* movement_states_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_movement_states.OuterSingleton)
		{
			Z_Registration_Info_UEnum_movement_states.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_f_game_pt_movement_states, (UObject*)Z_Construct_UPackage__Script_f_game_pt(), TEXT("movement_states"));
		}
		return Z_Registration_Info_UEnum_movement_states.OuterSingleton;
	}
	template<> F_GAME_PT_API UEnum* StaticEnum<movement_states>()
	{
		return movement_states_StaticEnum();
	}
	struct Z_Construct_UEnum_f_game_pt_movement_states_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_f_game_pt_movement_states_Statics::Enumerators[] = {
		{ "movement_states::idle", (int64)movement_states::idle },
		{ "movement_states::walking", (int64)movement_states::walking },
		{ "movement_states::sprinting", (int64)movement_states::sprinting },
		{ "movement_states::melee_attack", (int64)movement_states::melee_attack },
		{ "movement_states::jumping", (int64)movement_states::jumping },
		{ "movement_states::shooting", (int64)movement_states::shooting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_f_game_pt_movement_states_Statics::Enum_MetaDataParams[] = {
		{ "idle.Name", "movement_states::idle" },
		{ "jumping.Name", "movement_states::jumping" },
		{ "melee_attack.Name", "movement_states::melee_attack" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
		{ "shooting.Name", "movement_states::shooting" },
		{ "sprinting.Name", "movement_states::sprinting" },
		{ "walking.Name", "movement_states::walking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_f_game_pt_movement_states_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_f_game_pt,
		nullptr,
		"movement_states",
		"movement_states",
		Z_Construct_UEnum_f_game_pt_movement_states_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_f_game_pt_movement_states_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_f_game_pt_movement_states_Statics::Enum_MetaDataParams), Z_Construct_UEnum_f_game_pt_movement_states_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_f_game_pt_movement_states()
	{
		if (!Z_Registration_Info_UEnum_movement_states.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_movement_states.InnerSingleton, Z_Construct_UEnum_f_game_pt_movement_states_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_movement_states.InnerSingleton;
	}
	void Abase_character::StaticRegisterNativesAbase_character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Abase_character);
	UClass* Z_Construct_UClass_Abase_character_NoRegister()
	{
		return Abase_character::StaticClass();
	}
	struct Z_Construct_UClass_Abase_character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_main_camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_main_camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_main_springArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_main_springArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reset_camera_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_reset_camera_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_move_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_move_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_look_mouse_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_look_mouse_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_look_controller_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_look_controller_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sprint_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sprint_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dodge_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dodge_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_step_back_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_step_back_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_air_evade_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_air_evade_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guard_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_guard_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jump_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jump_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ground_attack_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ground_attack_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attack_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attack_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zoom_in_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_zoom_in_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_melee_attack_input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_melee_attack_input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ability_sys_comp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ability_sys_comp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_main_attributes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_main_attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Abase_character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_f_game_pt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/base_character.h" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_main_camera_MetaData[] = {
		{ "Category", "camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_main_camera = { "main_camera", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, main_camera), Z_Construct_UClass_Uplayers_camera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_main_camera_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_main_camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_main_springArm_MetaData[] = {
		{ "Category", "camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_main_springArm = { "main_springArm", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, main_springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_main_springArm_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_main_springArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_InputMapping_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_InputMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_reset_camera_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_reset_camera_input = { "reset_camera_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, reset_camera_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_reset_camera_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_reset_camera_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_move_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_move_input = { "move_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, move_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_move_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_move_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_look_mouse_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_look_mouse_input = { "look_mouse_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, look_mouse_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_look_mouse_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_look_mouse_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_look_controller_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_look_controller_input = { "look_controller_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, look_controller_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_look_controller_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_look_controller_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_sprint_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_sprint_input = { "sprint_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, sprint_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_sprint_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_sprint_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_dodge_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_dodge_input = { "dodge_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, dodge_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_dodge_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_dodge_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_step_back_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_step_back_input = { "step_back_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, step_back_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_step_back_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_step_back_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_air_evade_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_air_evade_input = { "air_evade_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, air_evade_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_air_evade_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_air_evade_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_guard_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_guard_input = { "guard_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, guard_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_guard_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_guard_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_jump_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_jump_input = { "jump_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, jump_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_jump_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_jump_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_ground_attack_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_ground_attack_input = { "ground_attack_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, ground_attack_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_ground_attack_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_ground_attack_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_attack_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_attack_input = { "attack_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, attack_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_attack_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_attack_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_zoom_in_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_zoom_in_input = { "zoom_in_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, zoom_in_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_zoom_in_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_zoom_in_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_melee_attack_input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_melee_attack_input = { "melee_attack_input", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, melee_attack_input), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_melee_attack_input_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_melee_attack_input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_ability_sys_comp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_ability_sys_comp = { "ability_sys_comp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, ability_sys_comp), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_ability_sys_comp_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_ability_sys_comp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abase_character_Statics::NewProp_main_attributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/base_character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abase_character_Statics::NewProp_main_attributes = { "main_attributes", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abase_character, main_attributes), Z_Construct_UClass_Uplayers_attributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::NewProp_main_attributes_MetaData), Z_Construct_UClass_Abase_character_Statics::NewProp_main_attributes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Abase_character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_main_camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_main_springArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_reset_camera_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_move_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_look_mouse_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_look_controller_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_sprint_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_dodge_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_step_back_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_air_evade_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_guard_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_jump_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_ground_attack_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_attack_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_zoom_in_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_melee_attack_input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_ability_sys_comp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abase_character_Statics::NewProp_main_attributes,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_Abase_character_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(Abase_character, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_Abase_character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Abase_character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Abase_character_Statics::ClassParams = {
		&Abase_character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Abase_character_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::Class_MetaDataParams), Z_Construct_UClass_Abase_character_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abase_character_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Abase_character()
	{
		if (!Z_Registration_Info_UClass_Abase_character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Abase_character.OuterSingleton, Z_Construct_UClass_Abase_character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Abase_character.OuterSingleton;
	}
	template<> F_GAME_PT_API UClass* StaticClass<Abase_character>()
	{
		return Abase_character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Abase_character);
	Abase_character::~Abase_character() {}
	struct Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_Statics::EnumInfo[] = {
		{ movement_states_StaticEnum, TEXT("movement_states"), &Z_Registration_Info_UEnum_movement_states, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1275696407U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Abase_character, Abase_character::StaticClass, TEXT("Abase_character"), &Z_Registration_Info_UClass_Abase_character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Abase_character), 2892714133U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_4143308(TEXT("/Script/f_game_pt"),
		Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
