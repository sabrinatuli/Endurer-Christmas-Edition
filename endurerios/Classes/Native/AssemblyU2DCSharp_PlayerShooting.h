#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t7_335;
// UnityEngine.UI.Image
struct Image_t8_64;
// UnityEngine.GameObject
struct GameObject_t7_113;
// UnityEngine.Transform
struct Transform_t7_81;
// UnityEngine.ParticleSystem
struct ParticleSystem_t7_123;
// UnityEngine.LineRenderer
struct LineRenderer_t7_33;
// UnityEngine.AudioSource
struct AudioSource_t7_152;
// UnityEngine.Light
struct Light_t7_112;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Color.h"

// PlayerShooting
struct  PlayerShooting_t11_253  : public MonoBehaviour_t7_106
{
	// UnityEngine.Color[] PlayerShooting::bulletColors
	ColorU5BU5D_t7_335* ___bulletColors_2;
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
	LayerMask_t7_64  ___shootableMask_10;
	// UnityEngine.UI.Image PlayerShooting::bounceImage
	Image_t8_64 * ___bounceImage_11;
	// UnityEngine.UI.Image PlayerShooting::pierceImage
	Image_t8_64 * ___pierceImage_12;
	// UnityEngine.GameObject PlayerShooting::bullet
	GameObject_t7_113 * ___bullet_13;
	// UnityEngine.Transform PlayerShooting::bulletSpawnAnchor
	Transform_t7_81 * ___bulletSpawnAnchor_14;
	// System.Single PlayerShooting::timer
	float ___timer_15;
	// UnityEngine.Ray PlayerShooting::shootRay
	Ray_t7_71  ___shootRay_16;
	// UnityEngine.Vector2 PlayerShooting::joystickRightPos
	Vector2_t7_65  ___joystickRightPos_17;
	// UnityEngine.RaycastHit PlayerShooting::shootHit
	RaycastHit_t7_135  ___shootHit_18;
	// UnityEngine.ParticleSystem PlayerShooting::gunParticles
	ParticleSystem_t7_123 * ___gunParticles_19;
	// UnityEngine.LineRenderer PlayerShooting::gunLine
	LineRenderer_t7_33 * ___gunLine_20;
	// UnityEngine.AudioSource PlayerShooting::gunAudio
	AudioSource_t7_152 * ___gunAudio_21;
	// UnityEngine.Light PlayerShooting::gunLight
	Light_t7_112 * ___gunLight_22;
	// System.Single PlayerShooting::effectsDisplayTime
	float ___effectsDisplayTime_23;
	// System.Single PlayerShooting::bounceTimer
	float ___bounceTimer_24;
	// System.Single PlayerShooting::pierceTimer
	float ___pierceTimer_25;
	// System.Boolean PlayerShooting::bounce
	bool ___bounce_26;
	// System.Boolean PlayerShooting::piercing
	bool ___piercing_27;
	// UnityEngine.Color PlayerShooting::bulletColor
	Color_t7_57  ___bulletColor_28;
};
