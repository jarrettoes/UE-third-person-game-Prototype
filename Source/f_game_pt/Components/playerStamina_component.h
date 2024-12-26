/*	(C) Copywrite Jarrett Williams
*
*
*
*
*/

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "playerStamina_component.generated.h"

class Uplayers_attributes;
class UAbilitySystemComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class F_GAME_PT_API UplayerStamina_component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UplayerStamina_component();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void drain_stamina(float deltaTime);
	void regain_stamina(float deltaTime); 

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "attribute")
	TSubclassOf<Uplayers_attributes> attribute_subclass;

	float getMaxStamina() const {return m_maxStamina;}
	float getCurrentStamina() const {return m_currentStamina;}
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	float m_maxStamina, m_currentStamina; 


	UAbilitySystemComponent* Ability_sys;
	Uplayers_attributes* main_attribute_set;
		
};
