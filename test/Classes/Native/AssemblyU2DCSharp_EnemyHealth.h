#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t5_137;
// UnityEngine.ParticleSystem
struct ParticleSystem_t5_111;
// UnityEngine.UI.Slider
struct Slider_t6_125;
// UnityEngine.GameObject
struct GameObject_t5_103;
// UnityEngine.Animator
struct Animator_t5_155;
// UnityEngine.AudioSource
struct AudioSource_t5_139;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t5_121;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t5_29;
// WaveManager
struct WaveManager_t11_14;
// ScoreManager
struct ScoreManager_t11_15;
// PickupManager
struct PickupManager_t11_16;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// EnemyHealth
struct  EnemyHealth_t11_11  : public MonoBehaviour_t5_96
{
	// System.Int32 EnemyHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 EnemyHealth::currentHealth
	int32_t ___currentHealth_3;
	// System.Single EnemyHealth::sinkSpeed
	float ___sinkSpeed_4;
	// System.Int32 EnemyHealth::scoreValue
	int32_t ___scoreValue_5;
	// UnityEngine.AudioClip EnemyHealth::deathClip
	AudioClip_t5_137 * ___deathClip_6;
	// UnityEngine.AudioClip EnemyHealth::burnClip
	AudioClip_t5_137 * ___burnClip_7;
	// UnityEngine.ParticleSystem EnemyHealth::deathParticles
	ParticleSystem_t5_111 * ___deathParticles_8;
	// UnityEngine.ParticleSystem EnemyHealth::hitParticles
	ParticleSystem_t5_111 * ___hitParticles_9;
	// UnityEngine.UI.Slider EnemyHealth::healthBarSlider
	Slider_t6_125 * ___healthBarSlider_10;
	// UnityEngine.GameObject EnemyHealth::eye
	GameObject_t5_103 * ___eye_11;
	// UnityEngine.UI.Slider EnemyHealth::sliderInstance
	Slider_t6_125 * ___sliderInstance_12;
	// System.Boolean EnemyHealth::isDead
	bool ___isDead_13;
	// System.Boolean EnemyHealth::isBurning
	bool ___isBurning_14;
	// UnityEngine.Color EnemyHealth::rimColor
	Color_t5_50  ___rimColor_15;
	// System.Single EnemyHealth::cutoffValue
	float ___cutoffValue_16;
	// UnityEngine.Animator EnemyHealth::anim
	Animator_t5_155 * ___anim_17;
	// UnityEngine.AudioSource EnemyHealth::enemyAudio
	AudioSource_t5_139 * ___enemyAudio_18;
	// UnityEngine.CapsuleCollider EnemyHealth::capsuleCollider
	CapsuleCollider_t5_121 * ___capsuleCollider_19;
	// UnityEngine.SkinnedMeshRenderer EnemyHealth::myRenderer
	SkinnedMeshRenderer_t5_29 * ___myRenderer_20;
	// UnityEngine.GameObject EnemyHealth::enemyHealthbarManager
	GameObject_t5_103 * ___enemyHealthbarManager_21;
	// WaveManager EnemyHealth::waveManager
	WaveManager_t11_14 * ___waveManager_22;
	// ScoreManager EnemyHealth::scoreManager
	ScoreManager_t11_15 * ___scoreManager_23;
	// PickupManager EnemyHealth::pickupManager
	PickupManager_t11_16 * ___pickupManager_24;
};
