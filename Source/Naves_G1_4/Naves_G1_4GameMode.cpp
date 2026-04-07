// Copyright Epic Games, Inc. All Rights Reserved.

#include "Naves_G1_4GameMode.h"
#include "Naves_G1_4Pawn.h"
#include "Muro.h"
#include "MuroRapido.h"
#include "MuroFantasma.h"
#include "MuroDivisible.h"
#include "Engine/World.h"

ANaves_G1_4GameMode::ANaves_G1_4GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANaves_G1_4Pawn::StaticClass();
    PrimaryActorTick.bCanEverTick = true;
}
void ANaves_G1_4GameMode::BeginPlay()
{
	Super::BeginPlay();
	GenerarMuros();
}
void ANaves_G1_4GameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Control de movimiento desde el GameMode
    for (AMuro* Muro : Muros)
    {
        if (Muro)
        {
            Muro->MoverMuro(DeltaTime);
        }
    }
}
void ANaves_G1_4GameMode::GenerarMuros()
{
    UWorld* World = GetWorld();
    if (!World) return;

    for (int32 i = 0; i < NumeroMuros; i++)
    {
        FVector Ubicacion(
            FMath::RandRange(-LimiteSpawn, LimiteSpawn),
            FMath::RandRange(-LimiteSpawn, LimiteSpawn),
            0.0f
        );

        FRotator Rotacion = FRotator::ZeroRotator;
        AMuro* NuevoMuro = nullptr;

        // Alternar tipos de muros
        if (i % 3 == 0)
        {
            NuevoMuro = World->SpawnActor<AMuroRapido>(AMuroRapido::StaticClass(), Ubicacion, Rotacion);
        }
        else if (i % 3 == 1)
        {
            NuevoMuro = World->SpawnActor<AMuroFantasma>(AMuroFantasma::StaticClass(), Ubicacion, Rotacion);
        }
        else
        {
            NuevoMuro = World->SpawnActor<AMuroDivisible>(AMuroDivisible::StaticClass(), Ubicacion, Rotacion);
        }

        if (NuevoMuro)
        {
            // Dar destino aleatorio
            FVector DestinoAleatorio(
                FMath::RandRange(-LimiteSpawn, LimiteSpawn),
                FMath::RandRange(-LimiteSpawn, LimiteSpawn),
                0.0f
            );

            NuevoMuro->Destino = DestinoAleatorio;
            Muros.Add(NuevoMuro);

            UE_LOG(LogTemp, Warning, TEXT("Muro %d spawnado (%s)"), i, *NuevoMuro->GetName());
        }
    }
}