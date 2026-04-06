// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef NAVES_G1_4_Naves_G1_4Projectile_generated_h
#error "Naves_G1_4Projectile.generated.h already included, missing '#pragma once' in Naves_G1_4Projectile.h"
#endif
#define NAVES_G1_4_Naves_G1_4Projectile_generated_h

#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_SPARSE_DATA
#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaves_G1_4Projectile(); \
	friend struct Z_Construct_UClass_ANaves_G1_4Projectile_Statics; \
public: \
	DECLARE_CLASS(ANaves_G1_4Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Naves_G1_4"), NO_API) \
	DECLARE_SERIALIZER(ANaves_G1_4Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANaves_G1_4Projectile(); \
	friend struct Z_Construct_UClass_ANaves_G1_4Projectile_Statics; \
public: \
	DECLARE_CLASS(ANaves_G1_4Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Naves_G1_4"), NO_API) \
	DECLARE_SERIALIZER(ANaves_G1_4Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANaves_G1_4Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANaves_G1_4Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaves_G1_4Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaves_G1_4Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaves_G1_4Projectile(ANaves_G1_4Projectile&&); \
	NO_API ANaves_G1_4Projectile(const ANaves_G1_4Projectile&); \
public:


#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaves_G1_4Projectile(ANaves_G1_4Projectile&&); \
	NO_API ANaves_G1_4Projectile(const ANaves_G1_4Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaves_G1_4Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaves_G1_4Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaves_G1_4Projectile)


#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ANaves_G1_4Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ANaves_G1_4Projectile, ProjectileMovement); }


#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_12_PROLOG
#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_SPARSE_DATA \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_RPC_WRAPPERS \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_INCLASS \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_SPARSE_DATA \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_INCLASS_NO_PURE_DECLS \
	Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVES_G1_4_API UClass* StaticClass<class ANaves_G1_4Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Naves_G1_4_Source_Naves_G1_4_Naves_G1_4Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
