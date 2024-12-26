// Fill out your copyright notice in the Description page of Project Settings.


#include "Camera/players_camera.h"
#include "Characters/base_character.h"
#include "GameFramework/PlayerController.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/SpringArmComponent.h"

Uplayers_camera::Uplayers_camera()
{
	this->bUsePawnControlRotation = false;
	SetFieldOfView(90); 

	m_cameraDefaultOffset = FVector(0.0f, 0.0f, 0.0f);
	m_cameraZoomedOffeset = FVector(528.0f, 65.f, 76.f);

	m_bCanZoomIn = false;
}

void Uplayers_camera::BeginPlay()
{
	Super::BeginPlay();

	bc_ref = Cast<Abase_character>(GetOwner());
	if (bc_ref == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("the reference to the base character returned null!"));
		return;
	}

	player_controller = Cast<APlayerController>(bc_ref->GetController());
	if (player_controller == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("the reference to the player controller returned null! (probably check the base character ref!)"));
		return;
	}
}



void Uplayers_camera::reset_camera()
{
	if (player_controller)
	{
		m_bCanResetCamera = true;
		UArrowComponent* camera_loc_desire = bc_ref->GetArrowComponent(); //the arrow is the location we want the camera to be in initalily and when you reset the camera
		if (camera_loc_desire)
		{
			target_rot = camera_loc_desire->GetComponentRotation();
			inital_rot = player_controller->GetControlRotation();
		}
	}
}

void Uplayers_camera::zoom_in()
{
	if (player_controller)
	{
		UE_LOG(LogTemp, Warning, TEXT("ZOOMED IN"));
		bc_ref->bUseControllerRotationYaw = true;
		bc_ref->bUseControllerRotationPitch = true;  
		m_bCanZoomIn = true; 
	}
}

void Uplayers_camera::zoom_out()
{
	if (player_controller)
	{
		UE_LOG(LogTemp, Warning, TEXT("ZOOMED OUT"));
		bc_ref->bUseControllerRotationYaw = false;
		bc_ref->bUseControllerRotationPitch = false; 
		m_bCanZoomIn = false;
	}
}

void Uplayers_camera::handle_resetCamera(float deltaTime)
{
	if (m_bCanResetCamera)
	{
		FRotator current_rotation = player_controller->GetControlRotation();
		FRotator final_rotation = FMath::RInterpTo(current_rotation, target_rot, deltaTime, 15.0f);
		player_controller->SetControlRotation(final_rotation);

		if (final_rotation.Equals(target_rot, 1.0f))
		{
			m_bCanResetCamera = false;
		}
	}
}

void Uplayers_camera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction); 

	handle_resetCamera(DeltaTime); 
	
	if (m_bCanZoomIn)
	{
		//for smooth zooming in we want to use the interp functions
		FVector changed_camera = FMath::Lerp(this->GetRelativeLocation(), m_cameraZoomedOffeset, 0.35f);
		this->SetRelativeLocation(changed_camera);
	}
	else
	{
		FVector changed_camera = FMath::Lerp(this->GetRelativeLocation(), m_cameraDefaultOffset, 0.35f);
		this->SetRelativeLocation(changed_camera);
	}
}