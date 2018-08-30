#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t7_81;
// UnityEngine.Animator
struct Animator_t7_168;
// UnityEngine.Rigidbody
struct Rigidbody_t7_127;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// PlayerMovement
struct  PlayerMovement_t11_252  : public MonoBehaviour_t7_106
{
	// System.Single PlayerMovement::speed
	float ___speed_2;
	// UnityEngine.Transform PlayerMovement::myTransform
	Transform_t7_81 * ___myTransform_3;
	// UnityEngine.Vector3 PlayerMovement::movement
	Vector3_t7_66  ___movement_4;
	// UnityEngine.Vector2 PlayerMovement::lookJoyPosition
	Vector2_t7_65  ___lookJoyPosition_5;
	// System.Single PlayerMovement::camRotationX
	float ___camRotationX_6;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t7_168 * ___anim_7;
	// UnityEngine.Vector2 PlayerMovement::joystickRightPos
	Vector2_t7_65  ___joystickRightPos_8;
	// UnityEngine.Rigidbody PlayerMovement::playerRigidbody
	Rigidbody_t7_127 * ___playerRigidbody_9;
	// UnityEngine.Transform PlayerMovement::mainCamera
	Transform_t7_81 * ___mainCamera_10;
	// UnityEngine.Transform PlayerMovement::playerCameraPivot
	Transform_t7_81 * ___playerCameraPivot_11;
	// System.Single PlayerMovement::moveSpeed
	float ___moveSpeed_12;
	// System.Single PlayerMovement::cameraRotationSpeed
	float ___cameraRotationSpeed_13;
	// System.Int32 PlayerMovement::floorMask
	int32_t ___floorMask_14;
	// System.Single PlayerMovement::camRayLength
	float ___camRayLength_15;
};
