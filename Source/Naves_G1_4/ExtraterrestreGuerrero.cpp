// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtraterrestreGuerrero.h"
#include "Engine/World.h"
#include "Proyectil.h"


AExtraterrestreGuerrero::AExtraterrestreGuerrero()
{
    // Cambiar la malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (MallaAsset.Succeeded())
    {
        MallaEnemigoExtraterrestre->SetStaticMesh(MallaAsset.Object);
    }

    // Asignar material metálico
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
    if (MaterialAsset.Succeeded())
    {
        MallaEnemigoExtraterrestre->SetMaterial(0, MaterialAsset.Object);
    }

    IntervaloDisparo = 2.0f;
    TiempoAcumuladoDisparo = 0.0f;
}

void AExtraterrestreGuerrero::MoverExtraterrestre(float DeltaTime)
{
    Super::MoverExtraterrestre(DeltaTime); // movimiento orbital base

    TiempoAcumuladoDisparo += DeltaTime;
    if (TiempoAcumuladoDisparo >= IntervaloDisparo)
    {
        Disparar();
        TiempoAcumuladoDisparo = 0.0f;
    }
}

void AExtraterrestreGuerrero::Disparar()
{
    // Ráfaga de 6 proyectiles en abanico
    FVector SpawnLocation = GetActorLocation();
    for (int i = -3; i <= 3; i++)
    {
        FRotator Rotacion = GetActorRotation() + FRotator(0, i * 15, 0);
        GetWorld()->SpawnActor<AProyectil>(AProyectil::StaticClass(), SpawnLocation, Rotacion);
    }
}
