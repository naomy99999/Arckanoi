// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOI_Paddle_generated_h
#error "Paddle.generated.h already included, missing '#pragma once' in Paddle.h"
#endif
#define ARKANOI_Paddle_generated_h

#define Arkanoi_Source_Arkanoi_Paddle_h_12_SPARSE_DATA
#define Arkanoi_Source_Arkanoi_Paddle_h_12_RPC_WRAPPERS
#define Arkanoi_Source_Arkanoi_Paddle_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Arkanoi_Source_Arkanoi_Paddle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoi"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define Arkanoi_Source_Arkanoi_Paddle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoi"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define Arkanoi_Source_Arkanoi_Paddle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public:


#define Arkanoi_Source_Arkanoi_Paddle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle)


#define Arkanoi_Source_Arkanoi_Paddle_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Paddle() { return STRUCT_OFFSET(APaddle, SM_Paddle); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(APaddle, FloatingMovement); }


#define Arkanoi_Source_Arkanoi_Paddle_h_9_PROLOG
#define Arkanoi_Source_Arkanoi_Paddle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoi_Source_Arkanoi_Paddle_h_12_PRIVATE_PROPERTY_OFFSET \
	Arkanoi_Source_Arkanoi_Paddle_h_12_SPARSE_DATA \
	Arkanoi_Source_Arkanoi_Paddle_h_12_RPC_WRAPPERS \
	Arkanoi_Source_Arkanoi_Paddle_h_12_INCLASS \
	Arkanoi_Source_Arkanoi_Paddle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arkanoi_Source_Arkanoi_Paddle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoi_Source_Arkanoi_Paddle_h_12_PRIVATE_PROPERTY_OFFSET \
	Arkanoi_Source_Arkanoi_Paddle_h_12_SPARSE_DATA \
	Arkanoi_Source_Arkanoi_Paddle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Arkanoi_Source_Arkanoi_Paddle_h_12_INCLASS_NO_PURE_DECLS \
	Arkanoi_Source_Arkanoi_Paddle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOI_API UClass* StaticClass<class APaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arkanoi_Source_Arkanoi_Paddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
