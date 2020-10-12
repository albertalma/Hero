// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HERO_HeroCharacter_generated_h
#error "HeroCharacter.generated.h already included, missing '#pragma once' in HeroCharacter.h"
#endif
#define HERO_HeroCharacter_generated_h

#define Hero_Source_Hero_HeroCharacter_h_12_SPARSE_DATA
#define Hero_Source_Hero_HeroCharacter_h_12_RPC_WRAPPERS
#define Hero_Source_Hero_HeroCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Hero_Source_Hero_HeroCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroCharacter(); \
	friend struct Z_Construct_UClass_AHeroCharacter_Statics; \
public: \
	DECLARE_CLASS(AHeroCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hero"), NO_API) \
	DECLARE_SERIALIZER(AHeroCharacter)


#define Hero_Source_Hero_HeroCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHeroCharacter(); \
	friend struct Z_Construct_UClass_AHeroCharacter_Statics; \
public: \
	DECLARE_CLASS(AHeroCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hero"), NO_API) \
	DECLARE_SERIALIZER(AHeroCharacter)


#define Hero_Source_Hero_HeroCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroCharacter(AHeroCharacter&&); \
	NO_API AHeroCharacter(const AHeroCharacter&); \
public:


#define Hero_Source_Hero_HeroCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroCharacter(AHeroCharacter&&); \
	NO_API AHeroCharacter(const AHeroCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroCharacter)


#define Hero_Source_Hero_HeroCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AHeroCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AHeroCharacter, FollowCamera); }


#define Hero_Source_Hero_HeroCharacter_h_9_PROLOG
#define Hero_Source_Hero_HeroCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hero_Source_Hero_HeroCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Hero_Source_Hero_HeroCharacter_h_12_SPARSE_DATA \
	Hero_Source_Hero_HeroCharacter_h_12_RPC_WRAPPERS \
	Hero_Source_Hero_HeroCharacter_h_12_INCLASS \
	Hero_Source_Hero_HeroCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hero_Source_Hero_HeroCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hero_Source_Hero_HeroCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Hero_Source_Hero_HeroCharacter_h_12_SPARSE_DATA \
	Hero_Source_Hero_HeroCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hero_Source_Hero_HeroCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Hero_Source_Hero_HeroCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HERO_API UClass* StaticClass<class AHeroCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hero_Source_Hero_HeroCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
