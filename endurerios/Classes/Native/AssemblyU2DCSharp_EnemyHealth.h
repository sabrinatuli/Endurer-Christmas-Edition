#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t7_150;
// UnityEngine.ParticleSystem
struct ParticleSystem_t7_123;
// UnityEngine.UI.Slider
struct Slider_t8_125;
// UnityEngine.GameObject
struct GameObject_t7_113;
// UnityEngine.Animator
struct Animator_t7_168;
// UnityEngine.AudioSource
struct AudioSource_t7_152;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t7_134;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t7_31;
// WaveManager
struct WaveManager_t11_232;
// ScoreManager
struct ScoreManager_t11_233;
// PickupManager
struct PickupManager_t11_234;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// EnemyHealth
struct  EnemyHealth_t11_229  : public MonoBehaviour_t7_106
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
	AudioClip_t7_150 * ___deathClip_6;
	// UnityEngine.AudioClip EnemyHealth::burnClip
	AudioClip_t7_150 * ___burnClip_7;
	// UnityEngine.ParticleSystem EnemyHealth::deathParticles
	ParticleSystem_t7_123 * ___deathParticles_8;
	// UnityEngine.ParticleSystem EnemyHealth::hitParticles
	ParticleSystem_t7_123 * ___hitParticles_9;
	// UnityEngine.UI.Slider EnemyHealth::healthBarSlider
	Slider_t8_125 * ___healthBarSlider_10;
	// UnityEngine.GameObject EnemyHealth::eye
	GameObject_t7_113 * ___eye_11;
	// UnityEngine.UI.Slider EnemyHealth::sliderInstance
	Slider_t8_125 * ___sliderInstance_12;
	// System.Boolean EnemyHealth::isDead
	bool ___isDead_13;
	// System.Boolean EnemyHealth::isBurning
	bool ___isBurning_14;
	// UnityEngine.Color EnemyHealth::rimColor
	Color_t7_57  ___rimColor_15;
	// System.Single EnemyHealth::cutoffValue
	float ___cutoffValue_16;
	// UnityEngine.Animator EnemyHealth::anim
	Animator_t7_168 * ___anim_17;
	// UnityEngine.AudioSource EnemyHealth::enemyAudio
	AudioSource_t7_152 * ___enemyAudio_18;
	// UnityEngine.CapsuleCollider EnemyHealth::capsuleCollider
	CapsuleCollider_t7_134 * ___capsuleCollider_19;
	// UnityEngine.SkinnedMeshRenderer EnemyHealth::myRenderer
	SkinnedMeshRenderer_t7_31 * ___myRenderer_20;
	// UnityEngine.GameObject EnemyHealth::enemyHealthbarManager
	GameObject_t7_113 * ___enemyHealthbarManager_21;
	// WaveManager EnemyHealth::waveManager
	WaveManager_t11_232 * ___waveManager_22;
	// ScoreManager EnemyHealth::scoreManager
	ScoreManager_t11_233 * ___scoreManager_23;
	// PickupManager EnemyHealth::pickupManager
	PickupManager_t11_234 * ___pickupManager_24;
};
