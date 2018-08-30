#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t5_111;
// UnityEngine.Transform
struct Transform_t5_73;
// PlayerHealth
struct PlayerHealth_t11_10;
// EnemyHealth
struct EnemyHealth_t11_11;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t5_29;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// HellephantMovement
struct  HellephantMovement_t11_19  : public MonoBehaviour_t5_96
{
	// System.Single HellephantMovement::moveSpeed
	float ___moveSpeed_2;
	// System.Single HellephantMovement::rotateSpeed
	float ___rotateSpeed_3;
	// UnityEngine.ParticleSystem HellephantMovement::shingParticles
	ParticleSystem_t5_111 * ___shingParticles_4;
	// System.Boolean HellephantMovement::shouldMove
	bool ___shouldMove_5;
	// UnityEngine.Transform HellephantMovement::player
	Transform_t5_73 * ___player_6;
	// PlayerHealth HellephantMovement::playerHealth
	PlayerHealth_t11_10 * ___playerHealth_7;
	// EnemyHealth HellephantMovement::enemyHealth
	EnemyHealth_t11_11 * ___enemyHealth_8;
	// UnityEngine.SkinnedMeshRenderer HellephantMovement::myRenderer
	SkinnedMeshRenderer_t5_29 * ___myRenderer_9;
	// UnityEngine.Vector3 HellephantMovement::position
	Vector3_t5_58  ___position_10;
	// System.Single HellephantMovement::currentSpeed
	float ___currentSpeed_11;
};
