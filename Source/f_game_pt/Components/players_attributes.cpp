// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/players_attributes.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffectExtension.h"

Uplayers_attributes::Uplayers_attributes()
: attribute_maxHealth(0.0), attribute_health(attribute_maxHealth), attribute_maxStamina(0.0), attribute_stamina(attribute_maxStamina)
{
}

void Uplayers_attributes::onRep_health(const FGameplayAttributeData old_health)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(Uplayers_attributes, attribute_health, old_health); 
}

void Uplayers_attributes::onRep_maxHealth(const FGameplayAttributeData old_maxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(Uplayers_attributes, attribute_maxHealth, old_maxHealth); 
}

void Uplayers_attributes::onRep_stamina(const FGameplayAttributeData old_stamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(Uplayers_attributes, attribute_stamina, old_stamina);
}

void Uplayers_attributes::onRep_maxStamina(const FGameplayAttributeData old_maxStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(Uplayers_attributes, attribute_maxStamina, old_maxStamina);
}

void Uplayers_attributes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps); 
	
	DOREPLIFETIME(Uplayers_attributes, attribute_health);
	DOREPLIFETIME(Uplayers_attributes, attribute_maxHealth);
	DOREPLIFETIME(Uplayers_attributes, attribute_stamina);
	DOREPLIFETIME(Uplayers_attributes, attribute_maxStamina);
}

void Uplayers_attributes::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	
	/*/if (Data.EvaluatedData.Attribute == Getattribute_maxHealthAttribute()) // we want the health data so we can say what we want it to do
	{
		Setattribute_health(FMath::Max(Getattribute_maxHealthAttribute(), 0.f)); 
	}
	if (Data.EvaluatedData.Attribute == Getattribute_stamina())
	{
		Setattribute_stamina()
	}*/
}
