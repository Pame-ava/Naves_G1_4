// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroFantasma.h"
#include "Components/StaticMeshComponent.h"

AMuroFantasma::AMuroFantasma()
{
}

void AMuroFantasma::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TiempoAcumulado += DeltaTime;

    if (TiempoAcumulado >= Intervalo)
    {
        bInvisible = !bInvisible;
        MallaMuro->SetVisibility(!bInvisible);
        TiempoAcumulado = 0.0f;
    }
}

