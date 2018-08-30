#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t5_321;
// UnityEngine.Material[]
struct MaterialU5BU5D_t5_319;
// UnityEngine.Color[]
struct ColorU5BU5D_t5_317;
// System.String
struct String_t;
// UnityEngine.GUITexture
struct GUITexture_t5_41;
// UnityEngine.GameObject
struct GameObject_t5_103;
// UnityEngine.Material
struct Material_t5_36;
// UnityEngine.GUIStyle
struct GUIStyle_t5_193;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// GameObjectSpawner_Characters
struct  GameObjectSpawner_Characters_t10_5  : public MonoBehaviour_t5_96
{
	// UnityEngine.GameObject[] GameObjectSpawner_Characters::particles
	GameObjectU5BU5D_t5_321* ___particles_2;
	// UnityEngine.Material[] GameObjectSpawner_Characters::materials
	MaterialU5BU5D_t5_319* ___materials_3;
	// UnityEngine.Color[] GameObjectSpawner_Characters::cameraColors
	ColorU5BU5D_t5_317* ___cameraColors_4;
	// System.Int32 GameObjectSpawner_Characters::maxButtons
	int32_t ___maxButtons_5;
	// System.Boolean GameObjectSpawner_Characters::spawnOnAwake
	bool ___spawnOnAwake_6;
	// System.Boolean GameObjectSpawner_Characters::showInfo
	bool ___showInfo_7;
	// System.String GameObjectSpawner_Characters::removeTextFromButton
	String_t* ___removeTextFromButton_8;
	// System.String GameObjectSpawner_Characters::removeTextFromMaterialButton
	String_t* ___removeTextFromMaterialButton_9;
	// System.Single GameObjectSpawner_Characters::autoChangeDelay
	float ___autoChangeDelay_10;
	// UnityEngine.GUITexture GameObjectSpawner_Characters::image
	GUITexture_t5_41 * ___image_11;
	// System.Int32 GameObjectSpawner_Characters::page
	int32_t ___page_12;
	// System.Int32 GameObjectSpawner_Characters::pages
	int32_t ___pages_13;
	// System.String GameObjectSpawner_Characters::currentGOInfo
	String_t* ___currentGOInfo_14;
	// UnityEngine.GameObject GameObjectSpawner_Characters::currentGO
	GameObject_t5_103 * ___currentGO_15;
	// UnityEngine.Color GameObjectSpawner_Characters::currentColor
	Color_t5_50  ___currentColor_16;
	// System.Boolean GameObjectSpawner_Characters::isPS
	bool ___isPS_17;
	// UnityEngine.Material GameObjectSpawner_Characters::material
	Material_t5_36 * ___material_18;
	// System.Boolean GameObjectSpawner_Characters::_active
	bool ____active_19;
	// System.Int32 GameObjectSpawner_Characters::counter
	int32_t ___counter_20;
	// System.Int32 GameObjectSpawner_Characters::matCounter
	int32_t ___matCounter_21;
	// System.Int32 GameObjectSpawner_Characters::colorCounter
	int32_t ___colorCounter_22;
	// UnityEngine.GUIStyle GameObjectSpawner_Characters::bigStyle
	GUIStyle_t5_193 * ___bigStyle_23;
};
