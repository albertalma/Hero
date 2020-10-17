// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITargetComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HERO_API UAITargetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

    UAITargetComponent();

    UFUNCTION(BlueprintCallable)
    AActor* GetTarget() const;

    void SetTarget(AActor* Target);

protected:

	virtual void BeginPlay() override;

private:

    UPROPERTY()
    AActor* m_pTarget;

};
