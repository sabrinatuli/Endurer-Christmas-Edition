#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadPanel
struct MadPanel_t11_161;
// UnityEngine.Texture2D
struct Texture2D_t7_49;
// MadLevelManager.MadAtlas
struct MadAtlas_t11_166;
// System.String
struct String_t;
// MadLevelManager.MadSprite/SetupShader
struct SetupShader_t11_203;
// MadLevelManager.MadSprite/Action
struct Action_t11_27;

#include "AssemblyU2DCSharp_MadLevelManager_MadNode.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadSprite_PivotPoint.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadSprite_InputType.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadSprite_EventFlags.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadSprite_FillType.h"

// MadLevelManager.MadSprite
struct  MadSprite_t11_13  : public MadNode_t11_47
{
	// MadLevelManager.MadPanel MadLevelManager.MadSprite::panel
	MadPanel_t11_161 * ___panel_4;
	// MadLevelManager.MadPanel MadLevelManager.MadSprite::cachedPanel
	MadPanel_t11_161 * ___cachedPanel_5;
	// System.Boolean MadLevelManager.MadSprite::visible
	bool ___visible_6;
	// System.Boolean MadLevelManager.MadSprite::editorSelectable
	bool ___editorSelectable_7;
	// MadLevelManager.MadSprite/PivotPoint MadLevelManager.MadSprite::pivotPoint
	int32_t ___pivotPoint_8;
	// UnityEngine.Vector2 MadLevelManager.MadSprite::customPivotPoint
	Vector2_t7_65  ___customPivotPoint_9;
	// UnityEngine.Color MadLevelManager.MadSprite::tint
	Color_t7_57  ___tint_10;
	// MadLevelManager.MadSprite/InputType MadLevelManager.MadSprite::inputType
	int32_t ___inputType_11;
	// UnityEngine.Texture2D MadLevelManager.MadSprite::texture
	Texture2D_t7_49 * ___texture_12;
	// UnityEngine.Texture2D MadLevelManager.MadSprite::lastTexture
	Texture2D_t7_49 * ___lastTexture_13;
	// MadLevelManager.MadAtlas MadLevelManager.MadSprite::textureAtlas
	MadAtlas_t11_166 * ___textureAtlas_14;
	// System.String MadLevelManager.MadSprite::textureAtlasSpriteGUID
	String_t* ___textureAtlasSpriteGUID_15;
	// System.String MadLevelManager.MadSprite::lastTextureAtlasSpriteGUID
	String_t* ___lastTextureAtlasSpriteGUID_16;
	// UnityEngine.Vector2 MadLevelManager.MadSprite::textureOffset
	Vector2_t7_65  ___textureOffset_17;
	// UnityEngine.Vector2 MadLevelManager.MadSprite::textureRepeat
	Vector2_t7_65  ___textureRepeat_18;
	// System.Boolean MadLevelManager.MadSprite::hasPremultipliedAlpha
	bool ___hasPremultipliedAlpha_19;
	// System.Int32 MadLevelManager.MadSprite::guiDepth
	int32_t ___guiDepth_20;
	// MadLevelManager.MadSprite/EventFlags MadLevelManager.MadSprite::eventFlags
	int32_t ___eventFlags_21;
	// System.Single MadLevelManager.MadSprite::left
	float ___left_22;
	// System.Single MadLevelManager.MadSprite::top
	float ___top_23;
	// System.Single MadLevelManager.MadSprite::right
	float ___right_24;
	// System.Single MadLevelManager.MadSprite::bottom
	float ___bottom_25;
	// System.Single MadLevelManager.MadSprite::liveLeft
	float ___liveLeft_26;
	// System.Single MadLevelManager.MadSprite::liveBottom
	float ___liveBottom_27;
	// System.Single MadLevelManager.MadSprite::liveRight
	float ___liveRight_28;
	// System.Single MadLevelManager.MadSprite::liveTop
	float ___liveTop_29;
	// System.Boolean MadLevelManager.MadSprite::hasLiveBounds
	bool ___hasLiveBounds_30;
	// System.Boolean MadLevelManager.MadSprite::triedToGetLiveBounds
	bool ___triedToGetLiveBounds_31;
	// MadLevelManager.MadSprite/FillType MadLevelManager.MadSprite::fillType
	int32_t ___fillType_32;
	// System.Single MadLevelManager.MadSprite::fillValue
	float ___fillValue_33;
	// System.Single MadLevelManager.MadSprite::radialFillOffset
	float ___radialFillOffset_34;
	// System.Single MadLevelManager.MadSprite::radialFillLength
	float ___radialFillLength_35;
	// System.Boolean MadLevelManager.MadSprite::actionsInitialized
	bool ___actionsInitialized_36;
	// System.String MadLevelManager.MadSprite::shaderName
	String_t* ___shaderName_37;
	// MadLevelManager.MadSprite/SetupShader MadLevelManager.MadSprite::setupShaderFunction
	SetupShader_t11_203 * ___setupShaderFunction_38;
	// System.Int32 MadLevelManager.MadSprite::materialVariation
	int32_t ___materialVariation_39;
	// UnityEngine.Vector2 MadLevelManager.MadSprite::_initialSize
	Vector2_t7_65  ____initialSize_40;
	// System.Boolean MadLevelManager.MadSprite::_hasFocus
	bool ____hasFocus_41;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::_onMouseEnter
	Action_t11_27 * ____onMouseEnter_42;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::_onMouseExit
	Action_t11_27 * ____onMouseExit_43;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::_onTouchEnter
	Action_t11_27 * ____onTouchEnter_44;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::_onTouchExit
	Action_t11_27 * ____onTouchExit_45;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::_onMouseDown
	Action_t11_27 * ____onMouseDown_46;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::_onMouseUp
	Action_t11_27 * ____onMouseUp_47;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::_onTap
	Action_t11_27 * ____onTap_48;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::_onFocus
	Action_t11_27 * ____onFocus_49;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::_onFocusLost
	Action_t11_27 * ____onFocusLost_50;
};
struct MadSprite_t11_13_StaticFields{
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::<>f__am$cache2F
	Action_t11_27 * ___U3CU3Ef__amU24cache2F_51;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::<>f__am$cache30
	Action_t11_27 * ___U3CU3Ef__amU24cache30_52;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::<>f__am$cache31
	Action_t11_27 * ___U3CU3Ef__amU24cache31_53;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::<>f__am$cache32
	Action_t11_27 * ___U3CU3Ef__amU24cache32_54;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::<>f__am$cache33
	Action_t11_27 * ___U3CU3Ef__amU24cache33_55;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::<>f__am$cache34
	Action_t11_27 * ___U3CU3Ef__amU24cache34_56;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::<>f__am$cache35
	Action_t11_27 * ___U3CU3Ef__amU24cache35_57;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::<>f__am$cache36
	Action_t11_27 * ___U3CU3Ef__amU24cache36_58;
	// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::<>f__am$cache37
	Action_t11_27 * ___U3CU3Ef__amU24cache37_59;
};
