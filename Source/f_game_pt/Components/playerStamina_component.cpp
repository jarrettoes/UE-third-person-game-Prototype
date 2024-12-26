// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/playerStamina_component.h"
#include "Components/players_attributes.h"
#include "AbilitySystemComponent.h"

// Sets default values for this component's properties
UplayerStamina_component::UplayerStamina_component()
: m_maxStamina(0.0), m_currentStamina(0.0)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UplayerStamina_component::BeginPlay()
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

	main_attribute_set->Setattribute_maxStamina(50.f);
	m_maxStamina = main_attribute_set->Getattribute_maxStamina();
	m_currentStamina = m_maxStamina;  
}

void UplayerStamina_component::drain_stamina(float deltaTime)
{
	main_attribute_set->Setattribute_stamina(FMath::FInterpConstantTo(m_currentStamina, 0.0f, deltaTime, 0.15f)); 
}

void UplayerStamina_component::regain_stamina(float deltaTime)
{
	main_attribute_set->Setattribute_stamina(FMath::FInterpConstantTo())
}


// Called every frame
void UplayerStamina_component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

