#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadDragStopDraggable
struct MadDragStopDraggable_t11_56;
// UnityEngine.Texture2D
struct Texture2D_t7_49;
// MadLevelManager.MadSprite[]
struct MadSpriteU5BU5D_t11_20;
// MadLevelManager.MadTransform/Predicate`1<MadLevelManager.MadSprite>
struct Predicate_1_t11_57;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// MadLevelManager.MadLevelGridBullets
struct  MadLevelGridBullets_t11_55  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadDragStopDraggable MadLevelManager.MadLevelGridBullets::draggable
	MadDragStopDraggable_t11_56 * ___draggable_2;
	// UnityEngine.Texture2D MadLevelManager.MadLevelGridBullets::bulletTextureOff
	Texture2D_t7_49 * ___bulletTextureOff_3;
	// UnityEngine.Texture2D MadLevelManager.MadLevelGridBullets::bulletTextureOn
	Texture2D_t7_49 * ___bulletTextureOn_4;
	// UnityEngine.Vector2 MadLevelManager.MadLevelGridBullets::bulletDistance
	Vector2_t7_65  ___bulletDistance_5;
	// System.Int32 MadLevelManager.MadLevelGridBullets::guiDepth
	int32_t ___guiDepth_6;
	// System.Boolean MadLevelManager.MadLevelGridBullets::hideManagedObjects
	bool ___hideManagedObjects_7;
	// MadLevelManager.MadSprite[] MadLevelManager.MadLevelGridBullets::bulletSprites
	MadSpriteU5BU5D_t11_20* ___bulletSprites_8;
	// System.Int32 MadLevelManager.MadLevelGridBullets::currentHash
	int32_t ___currentHash_9;
};
struct MadLevelGridBullets_t11_55_StaticFields{
	// MadLevelManager.MadTransform/Predicate`1<MadLevelManager.MadSprite> MadLevelManager.MadLevelGridBullets::<>f__am$cache8
	Predicate_1_t11_57 * ___U3CU3Ef__amU24cache8_10;
};
