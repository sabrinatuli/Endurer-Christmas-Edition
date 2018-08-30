#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Component[]
struct ComponentU5BU5D_t5_320;
// UnityEngine.Transform
struct Transform_t5_73;
// UnityEngine.GameObject
struct GameObject_t5_103;
// UnityEngine.Mesh
struct Mesh_t5_27;
// UnityEngine.ParticleSystem
struct ParticleSystem_t5_111;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t5_321;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// ToonCharacterController
struct  ToonCharacterController_t10_7  : public MonoBehaviour_t5_96
{
	// UnityEngine.Component[] ToonCharacterController::boneRig
	ComponentU5BU5D_t5_320* ___boneRig_2;
	// System.Single ToonCharacterController::mass
	float ___mass_3;
	// UnityEngine.Transform ToonCharacterController::projector
	Transform_t5_73 * ___projector_4;
	// UnityEngine.Transform ToonCharacterController::root
	Transform_t5_73 * ___root_5;
	// UnityEngine.Color ToonCharacterController::_bloodColor
	Color_t5_50  ____bloodColor_6;
	// UnityEngine.GameObject ToonCharacterController::_model
	GameObject_t5_103 * ____model_7;
	// UnityEngine.Mesh ToonCharacterController::_bodyMesh
	Mesh_t5_27 * ____bodyMesh_8;
	// UnityEngine.ParticleSystem ToonCharacterController::_explodeHeadPS
	ParticleSystem_t5_111 * ____explodeHeadPS_9;
	// UnityEngine.GameObject ToonCharacterController::_head
	GameObject_t5_103 * ____head_10;
	// UnityEngine.Transform ToonCharacterController::_headBone
	Transform_t5_73 * ____headBone_11;
	// UnityEngine.GameObject[] ToonCharacterController::_disableWhenDecapitated
	GameObjectU5BU5D_t5_321* ____disableWhenDecapitated_12;
	// UnityEngine.ParticleSystem ToonCharacterController::_bodyPS
	ParticleSystem_t5_111 * ____bodyPS_13;
	// System.Boolean ToonCharacterController::_decapitated
	bool ____decapitated_14;
	// UnityEngine.Color ToonCharacterController::colorOriginal
	Color_t5_50  ___colorOriginal_15;
	// UnityEngine.Color ToonCharacterController::color
	Color_t5_50  ___color_16;
	// System.Single ToonCharacterController::_R
	float ____R_17;
	// System.Single ToonCharacterController::_G
	float ____G_18;
	// System.Single ToonCharacterController::_B
	float ____B_19;
	// System.Boolean ToonCharacterController::_randomColor
	bool ____randomColor_20;
	// System.Int32 ToonCharacterController::_blinkCounter
	int32_t ____blinkCounter_21;
	// System.Int32 ToonCharacterController::_stopBlink
	int32_t ____stopBlink_22;
};
