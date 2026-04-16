// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtraterrestreSabio.h"
#include "Math/UnrealMathUtility.h"
#include "Proyectil.h"
#include "Engine/World.h"

AExtraterrestreSabio::AExtraterrestreSabio()
{
    // Cambiar la malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (MallaAsset.Succeeded())
    {
        MallaEnemigoExtraterrestre->SetStaticMesh(MallaAsset.Object);
    }

    // Asignar material rojo
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Red.M_Red'"));
    if (MaterialAsset.Succeeded())
    {
        MallaEnemigoExtraterrestre->SetMaterial(0, MaterialAsset.Object);
    }

    AmplitudZigZag = 200.0f;
    FrecuenciaZigZag = 3.0f;
}

void AExtraterrestreSabio::MoverExtraterrestre(float DeltaTime)
{
    if (!PlayerPawn) return;

    TiempoTranscurrido += DeltaTime;

    FVector Centro = PlayerPawn->GetActorLocation();
    FVector NuevaPosicion = Centro;

    // ZigZag en eje Y
    NuevaPosicion.X += FMath::Cos(TiempoTranscurrido * FrecuenciaZigZag) * AmplitudZigZag;
    NuevaPosicion.Y += FMath::Sin(TiempoTranscurrido * FrecuenciaZigZag) * AmplitudZigZag;
    NuevaPosicion.Z += AlturaOrbita;

    SetActorLocation(NuevaPosicion);
}
void AExtraterrestreSabio::Disparar()
{
}
