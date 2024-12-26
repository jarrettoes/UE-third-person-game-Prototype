/*	(C) Copywrite Jarrett Williams
*
*
*
*
*/

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "players_camera.generated.h"

class Abase_character; 
class USpringArmComponent; 


UCLASS()
class F_GAME_PT_API Uplayers_camera : public UCameraComponent
{
	GENERATED_BODY()

public:
	
	Uplayers_camera(); 

	void reset_camera();
	void zoom_in();
	void zoom_out(); 
	void lock_on(); 
	// next to do locking on and off 

	FORCEINLINE bool checkCameraReset()const	{ return m_bCanResetCamera; }
	FORCEINLINE bool checkCanZoomin()const		{ return m_bCanZoomIn;		}
	void setCanZoomin(bool can) { m_bCanZoomIn = can;}

protected:

	virtual void BeginPlay() override;
 
	void handle_resetCamera(float deltaTime);
	void handle_lockingOn(float deltaTime);
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override; 


private:

	FRotator target_rot;
	FRotator inital_rot;
	
	bool m_bCanResetCamera; 
	bool m_bCanZoomIn;

	FVector m_cameraDefaultOffset;
	FVector m_cameraZoomedOffeset;

	Abase_character* bc_ref; 
	APlayerController* player_controller;
	USpringArmComponent* spring_arm_ref; 
	
};
