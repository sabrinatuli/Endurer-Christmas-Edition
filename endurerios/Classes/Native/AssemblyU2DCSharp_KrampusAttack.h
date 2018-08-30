#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7_113;
// UnityEngine.AudioClip
struct AudioClip_t7_150;
// EnemyHealth
struct EnemyHealth_t11_229;
// UnityEngine.Animator
struct Animator_t7_168;
// HellephantMovement
struct HellephantMovement_t11_237;
// UnityEngine.AudioSource
struct AudioSource_t7_152;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// KrampusAttack
struct  KrampusAttack_t11_238  : public MonoBehaviour_t7_106
{
	// System.Single KrampusAttack::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 KrampusAttack::bulletsPerVolley
	int32_t ___bulletsPerVolley_3;
	// System.Single KrampusAttack::timeBetweenBullets
	float ___timeBetweenBullets_4;
	// System.Int32 KrampusAttack::numberOfBullets
	int32_t ___numberOfBullets_5;
	// System.Single KrampusAttack::angleBetweenBullets
	float ___angleBetweenBullets_6;
	// UnityEngine.GameObject KrampusAttack::bullet
	GameObject_t7_113 * ___bullet_7;
	// System.Int32 KrampusAttack::attacksPerSpecialAttack
	int32_t ___attacksPerSpecialAttack_8;
	// UnityEngine.AudioClip KrampusAttack::shootClip
	AudioClip_t7_150 * ___shootClip_9;
	// UnityEngine.AudioClip KrampusAttack::specialClip
	AudioClip_t7_150 * ___specialClip_10;
	// UnityEngine.GameObject KrampusAttack::player
	GameObject_t7_113 * ___player_11;
	// EnemyHealth KrampusAttack::enemyHealth
	EnemyHealth_t11_229 * ___enemyHealth_12;
	// System.Boolean KrampusAttack::playerInRange
	bool ___playerInRange_13;
	// UnityEngine.Animator KrampusAttack::anim
	Animator_t7_168 * ___anim_14;
	// System.Single KrampusAttack::attackTimer
	float ___attackTimer_15;
	// System.Single KrampusAttack::bulletTimer
	float ___bulletTimer_16;
	// System.Int32 KrampusAttack::attackCount
	int32_t ___attackCount_17;
	// System.Int32 KrampusAttack::bulletCount
	int32_t ___bulletCount_18;
	// HellephantMovement KrampusAttack::helleMovement
	HellephantMovement_t11_237 * ___helleMovement_19;
	// System.Single KrampusAttack::floatHeight
	float ___floatHeight_20;
	// System.Single KrampusAttack::landingTime
	float ___landingTime_21;
	// System.Boolean KrampusAttack::usedSpecial
	bool ___usedSpecial_22;
	// System.Boolean KrampusAttack::landed
	bool ___landed_23;
	// UnityEngine.AudioSource KrampusAttack::enemyAudio
	AudioSource_t7_152 * ___enemyAudio_24;
};
