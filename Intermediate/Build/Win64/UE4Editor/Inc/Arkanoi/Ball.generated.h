// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef ARKANOI_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define ARKANOI_Ball_generated_h

#define Arkanoi_Source_Arkanoi_Ball_h_15_SPARSE_DATA
#define Arkanoi_Source_Arkanoi_Ball_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Arkanoi_Source_Arkanoi_Ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Arkanoi_Source_Arkanoi_Ball_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoi"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Arkanoi_Source_Arkanoi_Ball_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoi"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Arkanoi_Source_Arkanoi_Ball_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Arkanoi_Source_Arkanoi_Ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Arkanoi_Source_Arkanoi_Ball_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Ball() { return STRUCT_OFFSET(ABall, SM_Ball); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABall, ProjectileMovement); }


#define Arkanoi_Source_Arkanoi_Ball_h_12_PROLOG
#define Arkanoi_Source_Arkanoi_Ball_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoi_Source_Arkanoi_Ball_h_15_PRIVATE_PROPERTY_OFFSET \
	Arkanoi_Source_Arkanoi_Ball_h_15_SPARSE_DATA \
	Arkanoi_Source_Arkanoi_Ball_h_15_RPC_WRAPPERS \
	Arkanoi_Source_Arkanoi_Ball_h_15_INCLASS \
	Arkanoi_Source_Arkanoi_Ball_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arkanoi_Source_Arkanoi_Ball_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoi_Source_Arkanoi_Ball_h_15_PRIVATE_PROPERTY_OFFSET \
	Arkanoi_Source_Arkanoi_Ball_h_15_SPARSE_DATA \
	Arkanoi_Source_Arkanoi_Ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Arkanoi_Source_Arkanoi_Ball_h_15_INCLASS_NO_PURE_DECLS \
	Arkanoi_Source_Arkanoi_Ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOI_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arkanoi_Source_Arkanoi_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
