// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball.generated.h"

class UProjectileMovementComponent;


UCLASS()
class ARKANOI_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	ABall();

	// Sets default values for this actor's properties
	virtual void Launch();
	bool BallLaunched;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Ball;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UProjectileMovementComponent* ProjectileMovement;


	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime);

	UFUNCTION()
		UStaticMeshComponent* GetBall();


};
