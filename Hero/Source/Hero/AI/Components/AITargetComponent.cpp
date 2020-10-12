#include "AITargetComponent.h"

UAITargetComponent::UAITargetComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


AActor* UAITargetComponent::GetTarget() const
{
    return m_pTarget;
}

void UAITargetComponent::SetTarget(AActor* Target)
{
    m_pTarget = Target;
}

void UAITargetComponent::BeginPlay()
{
	Super::BeginPlay();
}

