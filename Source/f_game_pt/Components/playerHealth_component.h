/*	(C) Copywrite Jarrett Williams
*
*
*
*
*/
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "playerHealth_component.generated.h"

class Uplayers_attributes;
class UAbilitySystemComponent;  

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class F_GAME_PT_API UplayerHealth_component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UplayerHealth_component();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void health_drain(float value); 
	void health_recharge(float deltaTime); 

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "attribute")
	TSubclassOf<Uplayers_attributes> attribute_subclass;
	
	float getMaxHealth() const {return m_maxHealth;}
	float getCurrentHealth() const {return m_currentHealth;}

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	float m_maxHealth, m_currentHealth; 

	UAbilitySystemComponent* Ability_sys; 
	Uplayers_attributes* main_attribute_set; 
		
};
