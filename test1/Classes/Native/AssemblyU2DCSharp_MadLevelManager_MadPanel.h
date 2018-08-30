#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<MadLevelManager.MadPanel>
struct List_1_t1_1029;
// System.Collections.Generic.HashSet`1<MadLevelManager.MadSprite>
struct HashSet_1_t4_30;
// MadLevelManager.MadMaterialStore
struct MadMaterialStore_t11_189;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;
// UnityEngine.Camera
struct Camera_t7_100;
// MadLevelManager.MadPanel/Event1`1<MadLevelManager.MadSprite>
struct Event1_1_t11_192;

#include "AssemblyU2DCSharp_MadLevelManager_MadNode.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadPanel_RenderMode.h"

// MadLevelManager.MadPanel
struct  MadPanel_t11_161  : public MadNode_t11_47
{
	// MadLevelManager.MadPanel/RenderMode MadLevelManager.MadPanel::renderMode
	int32_t ___renderMode_5;
	// System.Boolean MadLevelManager.MadPanel::halfPixelOffset
	bool ___halfPixelOffset_6;
	// System.Boolean MadLevelManager.MadPanel::hideInvisibleSprites
	bool ___hideInvisibleSprites_7;
	// System.Boolean MadLevelManager.MadPanel::ignoreInput
	bool ___ignoreInput_8;
	// System.Collections.Generic.HashSet`1<MadLevelManager.MadSprite> MadLevelManager.MadPanel::sprites
	HashSet_1_t4_30 * ___sprites_9;
	// MadLevelManager.MadMaterialStore MadLevelManager.MadPanel::_materialStore
	MadMaterialStore_t11_189 * ____materialStore_10;
	// MadLevelManager.MadSprite MadLevelManager.MadPanel::_focusedSprite
	MadSprite_t11_13 * ____focusedSprite_11;
	// System.Int32 MadLevelManager.MadPanel::_focusedSpriteModCount
	int32_t ____focusedSpriteModCount_12;
	// UnityEngine.Camera MadLevelManager.MadPanel::_currentCamera
	Camera_t7_100 * ____currentCamera_13;
	// System.Collections.Generic.HashSet`1<MadLevelManager.MadSprite> MadLevelManager.MadPanel::hoverSprites
	HashSet_1_t4_30 * ___hoverSprites_14;
	// System.Boolean MadLevelManager.MadPanel::haveTouch
	bool ___haveTouch_15;
	// System.Collections.Generic.HashSet`1<MadLevelManager.MadSprite> MadLevelManager.MadPanel::touchDownSprites
	HashSet_1_t4_30 * ___touchDownSprites_16;
	// MadLevelManager.MadPanel/Event1`1<MadLevelManager.MadSprite> MadLevelManager.MadPanel::onFocusChanged
	Event1_1_t11_192 * ___onFocusChanged_17;
};
struct MadPanel_t11_161_StaticFields{
	// System.Collections.Generic.List`1<MadLevelManager.MadPanel> MadLevelManager.MadPanel::panels
	List_1_t1_1029 * ___panels_4;
};
