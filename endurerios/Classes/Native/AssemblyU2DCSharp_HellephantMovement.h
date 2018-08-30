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
// PlayerHealth
struct PlayerHealth_t11_228;
// EnemyHealth
struct EnemyHealth_t11_229;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t7_31;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// HellephantMovement
struct  HellephantMovement_t11_237  : public MonoBehaviour_t7_106
{
	// System.Single HellephantMovement::moveSpeed
	float ___moveSpeed_2;
	// System.Single HellephantMovement::rotateSpeed
	float ___rotateSpeed_3;
	// System.Boolean HellephantMovement::shouldMove
	bool ___shouldMove_4;
	// UnityEngine.Transform HellephantMovement::player
	Transform_t7_81 * ___player_5;
	// PlayerHealth HellephantMovement::playerHealth
	PlayerHealth_t11_228 * ___playerHealth_6;
	// EnemyHealth HellephantMovement::enemyHealth
	EnemyHealth_t11_229 * ___enemyHealth_7;
	// UnityEngine.SkinnedMeshRenderer HellephantMovement::myRenderer
	SkinnedMeshRenderer_t7_31 * ___myRenderer_8;
	// UnityEngine.Vector3 HellephantMovement::position
	Vector3_t7_66  ___position_9;
	// System.Single HellephantMovement::currentSpeed
	float ___currentSpeed_10;
};
