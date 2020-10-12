// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HERO_HeroGameMode_generated_h
#error "HeroGameMode.generated.h already included, missing '#pragma once' in HeroGameMode.h"
#endif
#define HERO_HeroGameMode_generated_h

#define Hero_Source_Hero_HeroGameMode_h_12_SPARSE_DATA
#define Hero_Source_Hero_HeroGameMode_h_12_RPC_WRAPPERS
#define Hero_Source_Hero_HeroGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Hero_Source_Hero_HeroGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroGameMode(); \
	friend struct Z_Construct_UClass_AHeroGameMode_Statics; \
public: \
	DECLARE_CLASS(AHeroGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hero"), HERO_API) \
	DECLARE_SERIALIZER(AHeroGameMode)


#define Hero_Source_Hero_HeroGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHeroGameMode(); \
	friend struct Z_Construct_UClass_AHeroGameMode_Statics; \
public: \
	DECLARE_CLASS(AHeroGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hero"), HERO_API) \
	DECLARE_SERIALIZER(AHeroGameMode)


#define Hero_Source_Hero_HeroGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HERO_API AHeroGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HERO_API, AHeroGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HERO_API AHeroGameMode(AHeroGameMode&&); \
	HERO_API AHeroGameMode(const AHeroGameMode&); \
public:


#define Hero_Source_Hero_HeroGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HERO_API AHeroGameMode(AHeroGameMode&&); \
	HERO_API AHeroGameMode(const AHeroGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HERO_API, AHeroGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroGameMode)


#define Hero_Source_Hero_HeroGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Hero_Source_Hero_HeroGameMode_h_9_PROLOG
#define Hero_Source_Hero_HeroGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hero_Source_Hero_HeroGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Hero_Source_Hero_HeroGameMode_h_12_SPARSE_DATA \
	Hero_Source_Hero_HeroGameMode_h_12_RPC_WRAPPERS \
	Hero_Source_Hero_HeroGameMode_h_12_INCLASS \
	Hero_Source_Hero_HeroGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hero_Source_Hero_HeroGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hero_Source_Hero_HeroGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Hero_Source_Hero_HeroGameMode_h_12_SPARSE_DATA \
	Hero_Source_Hero_HeroGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hero_Source_Hero_HeroGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Hero_Source_Hero_HeroGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HERO_API UClass* StaticClass<class AHeroGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hero_Source_Hero_HeroGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
