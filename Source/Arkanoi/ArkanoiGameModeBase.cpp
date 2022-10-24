// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArkanoiGameModeBase.h"
#include "Pila.h"
#include "Math/Vector.h"
#include "Brick.h"

void AArkanoiGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	const FVector Ubicacion(-80.0f,20.0f,140.0f);
	const FRotator Rotacion(0.0f, 0.0f, 0.0f);
	
	/*const FVector Ubicacion(-80.0f, 0.0f, 340.0f);
	const FRotator Rotacion(0.0f, 0.0f, 0.0f);*/

	UWorld* const World = GetWorld();

	if (World != nullptr) {
		ladrillo1 = World->SpawnActor<ABrick>(Ubicacion, Rotacion);
		ladrillo1->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Turquoise, TEXT("ladrillo 1 fue creado"));
	}
}
