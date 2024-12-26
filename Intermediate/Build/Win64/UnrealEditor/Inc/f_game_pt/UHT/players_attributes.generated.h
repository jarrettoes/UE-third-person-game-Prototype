// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/players_attributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef F_GAME_PT_players_attributes_generated_h
#error "players_attributes.generated.h already included, missing '#pragma once' in players_attributes.h"
#endif
#define F_GAME_PT_players_attributes_generated_h

#define FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_SPARSE_DATA
#define FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonRep_maxStamina); \
	DECLARE_FUNCTION(execonRep_stamina); \
	DECLARE_FUNCTION(execonRep_maxHealth); \
	DECLARE_FUNCTION(execonRep_health);


#define FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_ACCESSORS
#define FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUplayers_attributes(); \
	friend struct Z_Construct_UClass_Uplayers_attributes_Statics; \
public: \
	DECLARE_CLASS(Uplayers_attributes, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/f_game_pt"), NO_API) \
	DECLARE_SERIALIZER(Uplayers_attributes) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		attribute_health=NETFIELD_REP_START, \
		attribute_maxHealth, \
		attribute_stamina, \
		attribute_maxStamina, \
		NETFIELD_REP_END=attribute_maxStamina	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(Uplayers_attributes) \
public:


#define FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Uplayers_attributes(Uplayers_attributes&&); \
	NO_API Uplayers_attributes(const Uplayers_attributes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Uplayers_attributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uplayers_attributes); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Uplayers_attributes) \
	NO_API virtual ~Uplayers_attributes();


#define FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_21_PROLOG
#define FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_SPARSE_DATA \
	FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_ACCESSORS \
	FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_INCLASS_NO_PURE_DECLS \
	FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> F_GAME_PT_API UClass* StaticClass<class Uplayers_attributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_f_game_pt_Source_f_game_pt_Components_players_attributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
