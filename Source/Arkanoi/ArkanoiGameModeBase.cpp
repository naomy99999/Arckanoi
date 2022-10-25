// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArkanoiGameModeBase.h"
#include "Pila.h"
#include "Math/Vector.h"
#include "Brick.h"
#include <map>

void AArkanoiGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	const FVector Ubicacion(-80.0f,0.0f,340.0f);
	const FRotator Rotacion(0.0f, 0.0f, 0.0f);
	
	const FVector Ubicacion1(-30.0f, 0.0f, 340.0f);
	const FRotator Rotacion1(0.0f, 0.0f, 0.0f);
	const FVector Ubicacion2(20.0f, 0.0f, 340.0f);
	const FRotator Rotacion2(0.0f, 0.0f, 0.0f);
	const FVector Ubicacion3(70.0f, 0.0f, 340.0f);
	const FRotator Rotacion3(0.0f, 0.0f, 0.0f);
	const FVector Ubicacion4(120.0f, 0.0f, 340.0f);
	const FRotator Rotacion4(0.0f, 0.0f, 0.0f);
	const FVector Ubicacion5(-130.0f, 0.0f, 320.0f);
	const FRotator Rotacion5(0.0f, 0.0f, 0.0f);
	const FVector Ubicacion6(-80.0f, 0.0f, 320.0f);
	const FRotator Rotacion6(0.0f, 0.0f, 0.0f);
	const FVector Ubicacion7(-30.0f, 0.0f, 320.0f);
	const FRotator Rotacion7(0.0f, 0.0f, 0.0f);
	const FVector Ubicacion8(20.0f, 0.0f, 320.0f);
	const FRotator Rotacion8(0.0f, 0.0f, 0.0f);
	const FVector Ubicacion9(70.0f, 0.0f, 320.0f);
	const FRotator Rotacion9(0.0f, 0.0f, 0.0f);
	
	/*const FVector Ubicacion(-80.0f, 0.0f, 340.0f);
	const FRotator Rotacion(0.0f, 0.0f, 0.0f);*/

	UWorld* const World = GetWorld();

	if (World != nullptr) {
		ladrillo1 = World->SpawnActor<ABrick>(Ubicacion, Rotacion);
		ladrillo1->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("ladrillo 1 fue creado"));
		ladrillo2 = World->SpawnActor<ABrick>(Ubicacion1, Rotacion1);
		ladrillo2->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Turquoise, TEXT("ladrillo 2 fue creado"));
		ladrillo3 = World->SpawnActor<ABrick>(Ubicacion2, Rotacion2);
		ladrillo3->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Turquoise, TEXT("ladrillo 3 fue creado"));
		ladrillo4 = World->SpawnActor<ABrick>(Ubicacion3, Rotacion3);
		ladrillo4->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Turquoise, TEXT("ladrillo 4 fue creado"));
		ladrillo5 = World->SpawnActor<ABrick>(Ubicacion4, Rotacion4);
		ladrillo5->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Turquoise, TEXT("ladrillo 5 fue creado"));
		ladrillo6 = World->SpawnActor<ABrick>(Ubicacion5, Rotacion5);
		ladrillo6->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Turquoise, TEXT("ladrillo 6 fue creado"));
		ladrillo7 = World->SpawnActor<ABrick>(Ubicacion6, Rotacion6);
		ladrillo7->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Turquoise, TEXT("ladrillo 7 fue creado"));
		ladrillo8 = World->SpawnActor<ABrick>(Ubicacion7, Rotacion7);
		ladrillo8->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Turquoise, TEXT("ladrillo 8 fue creado"));
		ladrillo9 = World->SpawnActor<ABrick>(Ubicacion8, Rotacion8);
		ladrillo9->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Turquoise, TEXT("ladrillo 9 fue creado"));

		
		
		
	}
}
