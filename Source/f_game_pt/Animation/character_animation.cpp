// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/character_animation.h"
#include "Characters/base_character.h"

Ucharacter_animation::Ucharacter_animation()
{
	speed = 0.f;
}

void Ucharacter_animation::NativeUpdateAnimation(float deltaTime)
{
	Super::NativeUpdateAnimation(deltaTime);

	bc_ref = Cast<Abase_character>(TryGetPawnOwner());
	if (bc_ref == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("bc_ref was null!"));
		return;  
	}
	
	speed = bc_ref->getMaxWalkSpeed(); //for any character get the max walk speed and adjust accordingly 
	
}
