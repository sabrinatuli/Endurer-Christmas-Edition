#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t5_73;
// PlayerHealth
struct PlayerHealth_t11_10;
// EnemyHealth
struct EnemyHealth_t11_11;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t5_130;
// UnityEngine.Animator
struct Animator_t5_155;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t5_29;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// EnemyMovement
struct  EnemyMovement_t11_17  : public MonoBehaviour_t5_96
{
	// UnityEngine.LayerMask EnemyMovement::shootableMask
	LayerMask_t5_56  ___shootableMask_2;
	// System.Single EnemyMovement::roamSpeed
	float ___roamSpeed_3;
	// System.Single EnemyMovement::attackSpeed
	float ___attackSpeed_4;
	// UnityEngine.Transform EnemyMovement::player
	Transform_t5_73 * ___player_5;
	// PlayerHealth EnemyMovement::playerHealth
	PlayerHealth_t11_10 * ___playerHealth_6;
	// EnemyHealth EnemyMovement::enemyHealth
	EnemyHealth_t11_11 * ___enemyHealth_7;
	// UnityEngine.NavMeshAgent EnemyMovement::nav
	NavMeshAgent_t5_130 * ___nav_8;
	// UnityEngine.Animator EnemyMovement::anim
	Animator_t5_155 * ___anim_9;
	// UnityEngine.SkinnedMeshRenderer EnemyMovement::myRenderer
	SkinnedMeshRenderer_t5_29 * ___myRenderer_10;
	// UnityEngine.Ray EnemyMovement::shootRay
	Ray_t5_63  ___shootRay_11;
	// UnityEngine.RaycastHit EnemyMovement::shootHit
	RaycastHit_t5_122  ___shootHit_12;
	// UnityEngine.Vector3 EnemyMovement::position
	Vector3_t5_58  ___position_13;
	// System.Boolean EnemyMovement::hasValidTarget
	bool ___hasValidTarget_14;
	// System.Boolean EnemyMovement::foundPlayer
	bool ___foundPlayer_15;
};
