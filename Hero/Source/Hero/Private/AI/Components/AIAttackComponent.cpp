// Copyright Albert Alma Ltd.

#include "AI/Components/AIAttackComponent.h"

// Sets default values for this component's properties
UAIAttackComponent::UAIAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UAIAttackComponent::CanAttack() const
{
    return GetWorld()->GetTimerManager().GetTimerRemaining(AttackCooldownTimerHandle) <= 0.f;
}

void UAIAttackComponent::Attack()
{
    StartCooldown();
}

void UAIAttackComponent::BeginPlay()
{
    Super::BeginPlay();
    StartCooldown();
}

void UAIAttackComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}

void UAIAttackComponent::StartCooldown()
{
    float CooldownDeviation = FMath::RandRange(-AttackCooldownDeviation, AttackCooldownDeviation);
    GetWorld()->GetTimerManager().SetTimer(AttackCooldownTimerHandle, this, &UAIAttackComponent::OnCooldownFinished, AttackCooldown + CooldownDeviation, false, AttackCooldown + CooldownDeviation);
}

void UAIAttackComponent::OnCooldownFinished()
{

}

