/*	(C) Copywrite Jarrett Williams
*
*
*
*
*/

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "character_animation.generated.h"

class Abase_character; 

UCLASS()
class F_GAME_PT_API Ucharacter_animation : public UAnimInstance
{
	GENERATED_BODY()

public:
	Ucharacter_animation(); 
	


	virtual void NativeUpdateAnimation(float deltaTime) override; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "speed for animation")
	float speed;

private:
	
	Abase_character* bc_ref; 	
	
};
