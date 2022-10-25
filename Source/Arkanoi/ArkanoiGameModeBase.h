// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArkanoiGameModeBase.generated.h"



/**
 * 
 */
class ABrick;
UCLASS()
class ARKANOI_API AArkanoiGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void BeginPlay();
	
	ABrick* ladrillo1;
	ABrick* ladrillo2;
	ABrick* ladrillo3;
	ABrick* ladrillo4;
	ABrick* ladrillo5;
	ABrick* ladrillo6;
	ABrick* ladrillo7;
	ABrick* ladrillo8;
	ABrick* ladrillo9;
	ABrick* ladrillo10;


};
