// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroDivisible.h"
#include "Engine/World.h"

AMuroDivisible::AMuroDivisible()
{
}

void AMuroDivisible::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!bDividido)
    {
        float Distancia = FVector::Dist(GetActorLocation(), Destino);
        if (Distancia <= Tolerancia)
        {
            bDividido = true;

            UWorld* World = GetWorld();
            if (World)
            {
                FVector Pos = GetActorLocation();
                FRotator Rot = GetActorRotation();

                // Crear dos muros nuevos a los lados
                FVector Offset1 = FVector(200, 0, 0);
                FVector Offset2 = FVector(-200, 0, 0);

                World->SpawnActor<AMuro>(AMuro::StaticClass(), Pos + Offset1, Rot);
                World->SpawnActor<AMuro>(AMuro::StaticClass(), Pos + Offset2, Rot);
            }
        }
    }
}

