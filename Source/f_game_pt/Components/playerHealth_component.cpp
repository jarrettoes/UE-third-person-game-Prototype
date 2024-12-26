// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/playerHealth_component.h"
#include "Components/players_attributes.h"
#include "AbilitySystemComponent.h"

// Sets default values for this component's properties
UplayerHealth_component::UplayerHealth_component()
: m_maxHealth(), m_currentHealth(m_maxHealth)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game start
void UplayerHealth_component::BeginPlay()
{
	Super::BeginPlay();

	if (attribute_subclass) // call in the subclass of our attributeSet class
	{
		Ability_sys = GetOwner()->FindComponentByClass<UAbilitySystemComponent>(); //find the owner with this component. it will be the base character
		if (Ability_sys)
		{
			main_attribute_set = NewObject<Uplayers_attributes>(this, attribute_subclass); 
			Ability_sys->AddSpawnedAttribute(main_attribute_set); 
		}
	}

	main_attribute_set->Setattribute_maxHealth(100.f);
	m_maxHealth = main_attribute_set->Getattribute_health(); 
}

void UplayerHealth_component::health_drain(float value)
{
	main_attribute_set->Setattribute_health(m_currentHealth - value);  // we can set the health to
	if (m_maxHealth <= 0.0)
	{
		// make a function that handles death
	}
}

void UplayerHealth_component::health_recharge(float deltaTime)
{
	if (m_currentHealth < m_maxHealth) main_attribute_set->Setattribute_health(m_currentHealth++);

}

// Called every frame
void UplayerHealth_component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	health_recharge(DeltaTime); 
}

