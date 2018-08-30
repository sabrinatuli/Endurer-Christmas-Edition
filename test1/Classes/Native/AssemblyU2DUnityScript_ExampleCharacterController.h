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
// UnityEngine.Rigidbody
struct Rigidbody_t7_127;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// ExampleCharacterController
struct  ExampleCharacterController_t10_27  : public MonoBehaviour_t7_106
{
	// UnityEngine.Transform ExampleCharacterController::myTransform
	Transform_t7_81 * ___myTransform_2;
	// UnityEngine.Rigidbody ExampleCharacterController::myRigidbody
	Rigidbody_t7_127 * ___myRigidbody_3;
	// UnityEngine.Transform ExampleCharacterController::playerCameraPivot
	Transform_t7_81 * ___playerCameraPivot_4;
	// UnityEngine.Transform ExampleCharacterController::mainCamera
	Transform_t7_81 * ___mainCamera_5;
	// UnityEngine.Vector3 ExampleCharacterController::cameraForward
	Vector3_t7_66  ___cameraForward_6;
	// System.Single ExampleCharacterController::moveSpeed
	float ___moveSpeed_7;
	// System.Single ExampleCharacterController::cameraRotationSpeed
	float ___cameraRotationSpeed_8;
	// System.Single ExampleCharacterController::jumpHeight
	float ___jumpHeight_9;
};
