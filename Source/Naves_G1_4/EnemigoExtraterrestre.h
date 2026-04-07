// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigoExtraterrestre.generated.h"

class UStaticMeshComponent;
class APawn;
UCLASS()
class NAVES_G1_4_API AEnemigoExtraterrestre : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoExtraterrestre();
	UStaticMeshComponent* MallaEnemigoExtraterrestre;

	float VelocidadMovimiento = 100.0f;

	FVector WorldLimitesMin = FVector(-1000, -1000, 0);
	FVector WorldLimitesMax = FVector(1000, 1000, 600);

	float VelocidadAvance;
	float AmplitudZigZag;
	float FrecuenciaZigZag;
	float RadioCircular;
	float VelocidadCircular;
	FRotator VelocidadRotacion;

	FVector PosicionInicial;
	float TiempoTranscurrido;
	// Parámetros de movimiento orbital
	float RadioOrbita;
	float VelocidadAngular;
	float AlturaOrbita;

	// Referencia al jugador
	APawn* PlayerPawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void MoverExtraterrestre(float DeltaTime);
	//virtual void Disparar();
};


