#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t7_123;
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

// KrampusMovement
struct  KrampusMovement_t11_239  : public MonoBehaviour_t7_106
{
	// System.Single KrampusMovement::moveSpeed
	float ___moveSpeed_2;
	// System.Single KrampusMovement::rotateSpeed
	float ___rotateSpeed_3;
	// UnityEngine.ParticleSystem KrampusMovement::shingParticles
	ParticleSystem_t7_123 * ___shingParticles_4;
	// System.Boolean KrampusMovement::shouldMove
	bool ___shouldMove_5;
	// UnityEngine.Transform KrampusMovement::player
	Transform_t7_81 * ___player_6;
	// PlayerHealth KrampusMovement::playerHealth
	PlayerHealth_t11_228 * ___playerHealth_7;
	// EnemyHealth KrampusMovement::enemyHealth
	EnemyHealth_t11_229 * ___enemyHealth_8;
	// UnityEngine.SkinnedMeshRenderer KrampusMovement::myRenderer
	SkinnedMeshRenderer_t7_31 * ___myRenderer_9;
	// UnityEngine.Vector3 KrampusMovement::position
	Vector3_t7_66  ___position_10;
	// System.Single KrampusMovement::currentSpeed
	float ___currentSpeed_11;
};
