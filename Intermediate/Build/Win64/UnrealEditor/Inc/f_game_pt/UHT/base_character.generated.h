// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/base_character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef F_GAME_PT_base_character_generated_h
#error "base_character.generated.h already included, missing '#pragma once' in base_character.h"
#endif
#define F_GAME_PT_base_character_generated_h

#define FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_SPARSE_DATA
#define FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_ACCESSORS
#define FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAbase_character(); \
	friend struct Z_Construct_UClass_Abase_character_Statics; \
public: \
	DECLARE_CLASS(Abase_character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/f_game_pt"), NO_API) \
	DECLARE_SERIALIZER(Abase_character) \
	virtual UObject* _getUObject() const override { return const_cast<Abase_character*>(this); }


#define FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Abase_character(Abase_character&&); \
	NO_API Abase_character(const Abase_character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Abase_character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Abase_character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Abase_character) \
	NO_API virtual ~Abase_character();


#define FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_39_PROLOG
#define FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_SPARSE_DATA \
	FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_ACCESSORS \
	FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_INCLASS_NO_PURE_DECLS \
	FID_f_game_pt_Source_f_game_pt_Characters_base_character_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> F_GAME_PT_API UClass* StaticClass<class Abase_character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_f_game_pt_Source_f_game_pt_Characters_base_character_h


#define FOREACH_ENUM_MOVEMENT_STATES(op) \
	op(movement_states::idle) \
	op(movement_states::walking) \
	op(movement_states::sprinting) \
	op(movement_states::melee_attack) \
	op(movement_states::jumping) \
	op(movement_states::shooting) 

enum class movement_states : uint16;
template<> struct TIsUEnumClass<movement_states> { enum { Value = true }; };
template<> F_GAME_PT_API UEnum* StaticEnum<movement_states>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
