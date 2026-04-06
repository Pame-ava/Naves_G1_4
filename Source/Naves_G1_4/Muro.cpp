// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

// Sets default values
AMuro::AMuro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    MallaMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaMuro"));
    RootComponent = MallaMuro;

    // Usar un cubo como base del muro
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (MallaAsset.Succeeded())
    {
        MallaMuro->SetStaticMesh(MallaAsset.Object);
    }

    // Escala para que parezca un muro largo y delgado
    MallaMuro->SetRelativeScale3D(FVector(5.0f, 0.5f, 2.0f));

    // Asignar material de ladrillos
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
    if (MaterialAsset.Succeeded())
    {
        MallaMuro->SetMaterial(0, MaterialAsset.Object);
    }
}



// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    MoverMuro(DeltaTime);

}

void AMuro::MoverMuro(float DeltaTime)
{
    FVector PosicionActual = GetActorLocation();
    FVector Objetivo = Destino; // usar el destino asignado por el GameMode

    float Distancia = FVector::Dist(PosicionActual, Objetivo);

    if (Distancia <= Tolerancia)
    {
        // puedes cambiar a un nuevo destino aquí si quieres
    }
    else
    {
        FVector Direccion = (Objetivo - PosicionActual).GetSafeNormal();
        FVector NuevaUbicacion = PosicionActual + Direccion * VelocidadMovimiento * DeltaTime;
        SetActorLocation(NuevaUbicacion);
    }
}


