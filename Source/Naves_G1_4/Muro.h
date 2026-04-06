// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.generated.h"

class UStaticMeshComponent;
UCLASS()
class NAVES_G1_4_API AMuro : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMuro();

	UStaticMeshComponent* MallaMuro;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void MoverMuro(float DeltaTime);

public:
	// Variables de movimiento

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Destino;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VelocidadMovimiento = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Tolerancia = 50.0f;

};
