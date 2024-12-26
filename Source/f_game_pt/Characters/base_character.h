/*	(C) Copywrite Jarrett Williams
*
* 
*
*
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnhancedInputComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Components/TimelineComponent.h"
#include "base_character.generated.h"

class APlayerController; 
class UInputMappingContext; 
class UCameraComponent; 
class Uplayers_camera;
class USpringArmComponent; 
class UArrowComponent; 
class UInputAction; 
class Uplayers_attributes;
class UAbilitySystemComponent;

UENUM()
enum class movement_states : uint16
{
	idle,
	walking,
	sprinting,
	melee_attack,
	jumping,
	shooting
};

UCLASS()
class F_GAME_PT_API Abase_character : public ACharacter , public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Abase_character();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "camera")
	Uplayers_camera* main_camera; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "camera")
	USpringArmComponent* main_springArm; 

	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "EnhancedInput")
	UInputMappingContext* InputMapping; 

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* reset_camera_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* move_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* look_mouse_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* look_controller_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* sprint_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* dodge_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* step_back_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* air_evade_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* guard_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* jump_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* ground_attack_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* attack_input;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* zoom_in_input; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* melee_attack_input;


	// for attributes
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override; 
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float init_maxWalk(float amount) 
	{
		m_maxWalkSpeed = amount; 
		return m_maxWalkSpeed; 
	}
	
	float init_maxHealth(float health)
	{
		m_maxHealth = health; 
		return m_maxHealth; 
	}

	
	void move(const FInputActionValue& value); 
	void look_mouse(const FInputActionValue& value); 
	void look_controller(const FInputActionValue& value);
	void on_sprint(); 
	void end_sprint(); 
	void dodge(); 
	void on_air_dodge(); 
	void step_back(); 
	void on_guard();
	void end_guard(); 
	void jump(); 
	void slam_attack();
	void melee_attack(); 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* ability_sys_comp;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	Uplayers_attributes* main_attributes;

	
private:
	//for movement inputs
	virtual void Landed(const FHitResult& Hit) override; 
	virtual void NotifyJumpApex() override;
	virtual void OnJumped_Implementation() override;

	void handle_all_update_functions(float deltaTime); 

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE bool checkSprint()const					{return m_bCanSprint;  } 
	FORCEINLINE bool checkAttack()const					{return m_bCanAttack;  }
	FORCEINLINE bool checkDodge()const					{return m_bCanDodge;   }
	FORCEINLINE bool checkStepBack()const				{return m_bCanStepBack;}
	FORCEINLINE bool checkJump()const					{return m_bCanJump;	   }	
	FORCEINLINE float getMaxWalkSpeed()const			{return m_maxWalkSpeed;}
	FORCEINLINE float getMaxHealth()const				{return m_maxHealth;   }


	FORCEINLINE USpringArmComponent* getSpringArm()	{return main_springArm;}

private:
// for spring_arm_component; 

	FVector default_springArm_loc = FVector(0.f, 0.f, 45.f);
	FRotator default_springArm_Rot = FRotator(0.f, 0.f, -35.f);
	
private:
	
	bool m_bCanSprint; 
	bool m_bCanAttack; 
	bool m_bCanDodge; 
	bool m_bCanStepBack; 
	bool m_bCanResetCamera; 
	bool m_bCanJump; 
	bool m_bCanGuard; 
	bool m_bCanAirDash;
	bool m_bCanZoomIn;

	float m_maxWalkSpeed;
	float m_maxHealth;  
	int m_jumpCount; 

	float m_air_dash_duration, m_air_dash_time_elapse; 
	
	FVector m_cameraDefaultOffset;
	FVector m_cameraZoomedOffeset; 
	float zoomed_in_targetArm;

	FVector m_springArmPos;
	FRotator m_springArmRot; 

	FTimerHandle t_jump_reset; 

	bool m_bZoomIn; 
		

	bool m_isUsingMouse; 

	APlayerController* pc; 
	
};
