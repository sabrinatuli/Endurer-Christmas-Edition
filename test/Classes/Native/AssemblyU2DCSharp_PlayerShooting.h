#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t5_317;
// UnityEngine.UI.Image
struct Image_t6_64;
// UnityEngine.GameObject
struct GameObject_t5_103;
// UnityEngine.Transform
struct Transform_t5_73;
// UnityEngine.ParticleSystem
struct ParticleSystem_t5_111;
// UnityEngine.LineRenderer
struct LineRenderer_t5_31;
// UnityEngine.AudioSource
struct AudioSource_t5_139;
// UnityEngine.Light
struct Light_t5_102;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Color.h"

// PlayerShooting
struct  PlayerShooting_t11_33  : public MonoBehaviour_t5_96
{
	// UnityEngine.Color[] PlayerShooting::bulletColors
	ColorU5BU5D_t5_317* ___bulletColors_2;
	// System.Single PlayerShooting::bounceDuration
	float ___bounceDuration_3;
	// System.Single PlayerShooting::pierceDuration
	float ___pierceDuration_4;
	// System.Int32 PlayerShooting::damagePerShot
	int32_t ___damagePerShot_5;
	// System.Int32 PlayerShooting::numberOfBullets
	int32_t ___numberOfBullets_6;
	// System.Single PlayerShooting::timeBetweenBullets
	float ___timeBetweenBullets_7;
	// System.Single PlayerShooting::angleBetweenBullets
	float ___angleBetweenBullets_8;
	// System.Single PlayerShooting::range
	float ___range_9;
	// UnityEngine.LayerMask PlayerShooting::shootableMask
	LayerMask_t5_56  ___shootableMask_10;
	// UnityEngine.UI.Image PlayerShooting::bounceImage
	Image_t6_64 * ___bounceImage_11;
	// UnityEngine.UI.Image PlayerShooting::pierceImage
	Image_t6_64 * ___pierceImage_12;
	// UnityEngine.GameObject PlayerShooting::bullet
	GameObject_t5_103 * ___bullet_13;
	// UnityEngine.Transform PlayerShooting::bulletSpawnAnchor
	Transform_t5_73 * ___bulletSpawnAnchor_14;
	// System.Single PlayerShooting::timer
	float ___timer_15;
	// UnityEngine.Ray PlayerShooting::shootRay
	Ray_t5_63  ___shootRay_16;
	// UnityEngine.RaycastHit PlayerShooting::shootHit
	RaycastHit_t5_122  ___shootHit_17;
	// UnityEngine.ParticleSystem PlayerShooting::gunParticles
	ParticleSystem_t5_111 * ___gunParticles_18;
	// UnityEngine.LineRenderer PlayerShooting::gunLine
	LineRenderer_t5_31 * ___gunLine_19;
	// UnityEngine.AudioSource PlayerShooting::gunAudio
	AudioSource_t5_139 * ___gunAudio_20;
	// UnityEngine.Light PlayerShooting::gunLight
	Light_t5_102 * ___gunLight_21;
	// System.Single PlayerShooting::effectsDisplayTime
	float ___effectsDisplayTime_22;
	// System.Single PlayerShooting::bounceTimer
	float ___bounceTimer_23;
	// System.Single PlayerShooting::pierceTimer
	float ___pierceTimer_24;
	// System.Boolean PlayerShooting::bounce
	bool ___bounce_25;
	// System.Boolean PlayerShooting::piercing
	bool ___piercing_26;
	// UnityEngine.Color PlayerShooting::bulletColor
	Color_t5_50  ___bulletColor_27;
};
