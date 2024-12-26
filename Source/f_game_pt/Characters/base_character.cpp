// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/base_character.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "Camera/players_camera.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "Components/players_attributes.h"


namespace look_rate
{
	const float base_x = 45.f; 
	const float base_y = 45.f; 
}

// Sets default values
Abase_character::Abase_character()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false; 
	bUseControllerRotationYaw = true;  
	bUseControllerRotationRoll = false; 
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->GravityScale = 6.f; 
	GetCharacterMovement()->JumpZVelocity = 1600.f; 


	main_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("main springarm")); 
	main_springArm->SetupAttachment(RootComponent); 
	main_springArm->TargetArmLength = 800;  
	main_springArm->bUsePawnControlRotation = true;

	 
	main_camera = CreateDefaultSubobject<Uplayers_camera>(TEXT("main camera")); 
	main_camera->SetupAttachment(main_springArm, USpringArmComponent::SocketName);

	ability_sys_comp = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("attributes")); 
	ability_sys_comp->SetIsReplicated(true);
	ability_sys_comp->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	main_attributes = CreateDefaultSubobject<Uplayers_attributes>(TEXT("main_attributes"));

		
	init_maxWalk(600);
	init_maxHealth(100); 

	m_air_dash_duration = 0.3f; 
	m_air_dash_time_elapse = 0.0f; 

	m_cameraDefaultOffset = FVector(0.0f, 0.0f, 0.0f);
	m_cameraZoomedOffeset = FVector(728.0f, 67.f, 76.f);
	zoomed_in_targetArm = 100;

	m_bCanAirDash = false;
	m_bZoomIn = false; 

}

UAbilitySystemComponent* Abase_character::GetAbilitySystemComponent() const
{
	return ability_sys_comp; 
}

// Called when the game starts or when spawned
void Abase_character::BeginPlay()
{
	Super::BeginPlay();
	
	APlayerController* pc_mapping = Cast<APlayerController>(GetController()); 
	
	if (pc_mapping)
	{
		UEnhancedInputLocalPlayerSubsystem* Enhanced_subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc_mapping->GetLocalPlayer()); 
		Enhanced_subsys->AddMappingContext(InputMapping, 0); 
	}
}

void Abase_character::NotifyJumpApex()
{
	Super::NotifyJumpApex();
}

void Abase_character::OnJumped_Implementation()
{
	Super::OnJumped_Implementation(); 
}

void Abase_character::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit); 
}

void Abase_character::move(const FInputActionValue& value)
{
	FVector2D Value = value.Get<FVector2D>(); 

	if (Controller)
	{
		if (Value.X != 0.f)
		{
			const FRotator Char_rot = GetControlRotation();
			const FRotator Char_yaw_rot(0.f, Char_rot.Yaw, 0.f); 
			const FVector Char_dir_x = FRotationMatrix(Char_yaw_rot).GetUnitAxis(EAxis::Y);
			AddMovementInput(Char_dir_x, Value.X); 
		}
		
		if (Value.Y != 0.f)
		{
			const FRotator Char_rot = GetControlRotation();
			const FRotator Char_yaw_rot(0.f, Char_rot.Yaw, 0.f); 
			const FVector Char_dir_y = FRotationMatrix(Char_yaw_rot).GetUnitAxis(EAxis::X);
			AddMovementInput(Char_dir_y, Value.Y);
		}
	}
}

void Abase_character::look_mouse(const FInputActionValue& value)
{
	FVector2D Value = value.Get<FVector2D>(); 

	if (Controller)
	{
		m_isUsingMouse = true;
		if (Value.X != 0.f) AddControllerYawInput(Value.X);
		if (Value.Y != 0.f) AddControllerPitchInput(Value.Y); 
	}
}

void Abase_character::look_controller( const FInputActionValue& value)
{
	FVector2D Value = value.Get<FVector2D>(); 

	if (Controller)
	{	
		m_isUsingMouse = false; 
		if(Value.X != 0.f) AddControllerYawInput(Value.X * look_rate::base_x * GetWorld()->GetDeltaSeconds()); 
		if(Value.Y != 0.f) AddControllerPitchInput(Value.Y * look_rate::base_y * GetWorld()->GetDeltaSeconds()); 

		if (!m_isUsingMouse)
		{
			main_springArm->bEnableCameraLag = true; 
			main_springArm->CameraRotationLagSpeed = 5.f;
			main_springArm->CameraLagMaxDistance = 6.f;
		}
		
	}
}

void Abase_character::on_sprint()
{
	if (Controller)
	{
		if (GetCharacterMovement()->IsMovingOnGround() && GetVelocity().Size() > 0.0)
		{
			GetCharacterMovement()->MaxWalkSpeed = 1000.f;
			UE_LOG(LogTemp, Warning, TEXT("we're sprinting"));
			m_bCanSprint = true;
			main_camera->setCanZoomin(false); 
		}
		else 
		{
			end_sprint();
		} 
	}
}

void Abase_character::end_sprint()
{
	if (Controller)
	{
		if (!GetCharacterMovement()->IsMovingOnGround() || m_bCanSprint || main_camera->checkCanZoomin())
		{
			GetCharacterMovement()->MaxWalkSpeed = 600.f;
			UE_LOG(LogTemp, Warning, TEXT("we're not sprinting"));
			m_bCanSprint = false; 
		}
	
	}
}

void Abase_character::dodge()
{
	if (Controller && GetVelocity().Size() > 0.0 && GetCharacterMovement()->IsMovingOnGround())
	{
		m_bCanDodge = true; 
		LaunchCharacter(GetActorForwardVector() * 1800.f, true, true);	
	}
}

void Abase_character::on_air_dodge()
{	
	if (Controller && GetVelocity().Size() > 0.0 && GetCharacterMovement()->IsFalling())
	{	
		m_bCanAirDash = true; 
		m_air_dash_time_elapse = 0.f;
		
		float dash_speed = GetCharacterMovement()->MaxWalkSpeed = 3000.f; 

		LaunchCharacter(GetActorForwardVector() * dash_speed, true, true);
		GetCharacterMovement()->GravityScale = 0.0f;
	}
	
}

void Abase_character::step_back()
{
	if (Controller && GetVelocity().Size() <= 0.0 && GetCharacterMovement()->IsMovingOnGround())
	{
		m_bCanStepBack = true; 

		LaunchCharacter(-GetActorForwardVector() * 800.f, true, true); 
	}
}

void Abase_character::on_guard()
{
	if (Controller)
	{
		if (GetCharacterMovement()->IsMovingOnGround())
		{
			GetCharacterMovement()->MaxWalkSpeed = 400.f;
			m_bCanGuard = true; 
		}
	}
}

void Abase_character::end_guard()
{
	if (Controller)
	{
		if (m_bCanGuard)
		{
			GetCharacterMovement()->MaxWalkSpeed = 600.f; 
		}
	}
}

void Abase_character::jump()
{
	if (Controller && GetCharacterMovement()->IsMovingOnGround())
	{
		Jump(); 
		m_bCanDodge = false; 
		m_bCanSprint = false; 
		m_bCanStepBack = false; 
	}
	
}

void Abase_character::slam_attack()
{
	if (Controller && GetCharacterMovement()->IsFalling())
	{
		GetCharacterMovement()->GravityScale = 10.0f; 
	}
}

void Abase_character::melee_attack()
{
	if (Controller)
	{
		if (GetCharacterMovement()->IsMovingOnGround())
		{
			end_sprint();
			main_camera->setCanZoomin(false); 
		}
	}
}

void Abase_character::handle_all_update_functions(float deltaTime)
{
	if (m_bCanAirDash)
	{
		m_air_dash_time_elapse += deltaTime; 
		if (m_air_dash_time_elapse >= m_air_dash_duration)
		{
			m_bCanAirDash = false; 
			GetCharacterMovement()->GravityScale = 6.f; 
			GetCharacterMovement()->MaxWalkSpeed = 800.f; 
		}
	}
}

// Called every frame
void Abase_character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	handle_all_update_functions(DeltaTime); 

}

// Called to bind functionality to input
void Abase_character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* E_Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		E_Input->BindAction(move_input, ETriggerEvent::Triggered, this, &Abase_character::move); 
		E_Input->BindAction(look_mouse_input, ETriggerEvent::Triggered, this, &Abase_character::look_mouse);
		E_Input->BindAction(look_controller_input, ETriggerEvent::Triggered, this, &Abase_character::look_controller); 
		E_Input->BindAction(sprint_input, ETriggerEvent::Started, this, &Abase_character::on_sprint); 
		E_Input->BindAction(sprint_input, ETriggerEvent::Completed, this, &Abase_character::end_sprint); 
		E_Input->BindAction(dodge_input, ETriggerEvent::Triggered, this, &Abase_character::dodge); 
		E_Input->BindAction(step_back_input, ETriggerEvent::Triggered, this, &Abase_character::step_back); 
		E_Input->BindAction(guard_input, ETriggerEvent::Started, this, &Abase_character::on_guard);
		E_Input->BindAction(guard_input, ETriggerEvent::Completed, this, &Abase_character::end_guard); 
		E_Input->BindAction(reset_camera_input, ETriggerEvent::Triggered, main_camera, &Uplayers_camera::reset_camera); 
		E_Input->BindAction(jump_input, ETriggerEvent::Triggered, this, &Abase_character::jump); 
		E_Input->BindAction(air_evade_input, ETriggerEvent::Triggered, this, &Abase_character::on_air_dodge);
		E_Input->BindAction(zoom_in_input, ETriggerEvent::Started, main_camera, &Uplayers_camera::zoom_in); 
		E_Input->BindAction(zoom_in_input, ETriggerEvent::Completed, main_camera, &Uplayers_camera::zoom_out);
		E_Input->BindAction(melee_attack_input, ETriggerEvent::Triggered, this, &Abase_character::melee_attack);
	}
}
