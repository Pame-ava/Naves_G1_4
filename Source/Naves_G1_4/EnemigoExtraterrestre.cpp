// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoExtraterrestre.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

// Sets default values
AEnemigoExtraterrestre::AEnemigoExtraterrestre()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaEnemigoExtraterrestre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigoExtraterrestre"));
	RootComponent = MallaEnemigoExtraterrestre;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshDona(TEXT("/Engine/BasicShapes/Sphere.Sphere"));

	if (MeshDona.Succeeded())
	{
		MallaEnemigoExtraterrestre->SetStaticMesh(MeshDona.Object);
	}


	// Escala para que se vea mejor
	MallaEnemigoExtraterrestre->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));

	// Configuración inicial del movimiento
	VelocidadAvance = 50.0f;
	AmplitudZigZag = 150.0f;
	FrecuenciaZigZag = 2.0f;
	RadioCircular = 60.0f;
	VelocidadCircular = 3.0f;
	VelocidadRotacion = FRotator(0.0f, 120.0f, 180.0f);

	TiempoTranscurrido = 0.0f;

}

// Called when the game starts or when spawned
void AEnemigoExtraterrestre::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoExtraterrestre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverExtraterrestre(DeltaTime);
	//Disparar();

}
void AEnemigoExtraterrestre::MoverExtraterrestre(float DeltaTime)
{
	if (!PlayerPawn) return;

	TiempoTranscurrido += DeltaTime;

	// Calcular ángulo de la órbita
	float Angulo = TiempoTranscurrido * VelocidadAngular;

	// Posición alrededor del jugador
	FVector Centro = PlayerPawn->GetActorLocation();
	FVector NuevaPosicion;
	NuevaPosicion.X = Centro.X + FMath::Cos(Angulo) * RadioOrbita;
	NuevaPosicion.Y = Centro.Y + FMath::Sin(Angulo) * RadioOrbita;
	NuevaPosicion.Z = Centro.Z + AlturaOrbita;

	//  limites para teletransportarse al otro lado del mundo
	if (NuevaPosicion.X < WorldLimitesMin.X) NuevaPosicion.X = WorldLimitesMax.X;
	else if (NuevaPosicion.X > WorldLimitesMax.X) NuevaPosicion.X = WorldLimitesMin.X;

	if (NuevaPosicion.Y < WorldLimitesMin.Y) NuevaPosicion.Y = WorldLimitesMax.Y;
	else if (NuevaPosicion.Y > WorldLimitesMax.Y) NuevaPosicion.Y = WorldLimitesMin.Y;

	if (NuevaPosicion.Z < WorldLimitesMin.Z) NuevaPosicion.Z = WorldLimitesMax.Z;
	else if (NuevaPosicion.Z > WorldLimitesMax.Z) NuevaPosicion.Z = WorldLimitesMin.Z;

	// Aplicar nueva posición
	SetActorLocation(NuevaPosicion);

	// Rotación constante
	AddActorLocalRotation(VelocidadRotacion * DeltaTime);
}

