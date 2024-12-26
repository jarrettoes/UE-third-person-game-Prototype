/*	(C) Copywrite Jarrett Williams
*
*
*
*
*/

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "players_attributes.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
		
UCLASS()
class F_GAME_PT_API Uplayers_attributes : public UAttributeSet
{
	GENERATED_BODY()

public:

	Uplayers_attributes(); 

	UPROPERTY(BlueprintReadOnly, Category = "Attribute", ReplicatedUsing = OnRep_health)
	FGameplayAttributeData attribute_health; 
	ATTRIBUTE_ACCESSORS(Uplayers_attributes, attribute_health)
	
	UPROPERTY(BlueprintReadOnly, Category = "Attribute", ReplicatedUsing = OnRep_maxHealth)
	FGameplayAttributeData attribute_maxHealth; 
	ATTRIBUTE_ACCESSORS(Uplayers_attributes, attribute_maxHealth)

	UPROPERTY(BlueprintReadOnly, Category = "Attribute", ReplicatedUsing = onRep_stamina)
	FGameplayAttributeData attribute_stamina; 
	ATTRIBUTE_ACCESSORS(Uplayers_attributes, attribute_stamina)

	UPROPERTY(BlueprintReadOnly, Category = "Attribute", ReplicatedUsing = onRep_maxStamina)
	FGameplayAttributeData attribute_maxStamina;
	ATTRIBUTE_ACCESSORS(Uplayers_attributes, attribute_maxStamina)

	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

protected:

	UFUNCTION()
	virtual void onRep_health(const FGameplayAttributeData old_health);
	UFUNCTION()
	virtual void onRep_maxHealth(const FGameplayAttributeData old_maxHealth);

	UFUNCTION()
	virtual void onRep_stamina(const FGameplayAttributeData old_stamina);
	UFUNCTION()
	virtual void onRep_maxStamina(const FGameplayAttributeData old_maxStamina);

};
