#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t7_49;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t7_84;
// UnityEngine.Material
struct Material_t7_38;
// MadLevelManager.MadFontData
struct MadFontData_t11_184;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadFont_InputType.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadFont_CreateStatus.h"

// MadLevelManager.MadFont
struct  MadFont_t11_183  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadFont/InputType MadLevelManager.MadFont::inputType
	int32_t ___inputType_2;
	// UnityEngine.Texture2D MadLevelManager.MadFont::texture
	Texture2D_t7_49 * ___texture_3;
	// System.Boolean MadLevelManager.MadFont::forceWhite
	bool ___forceWhite_4;
	// System.String MadLevelManager.MadFont::glyphs
	String_t* ___glyphs_5;
	// System.Int32 MadLevelManager.MadFont::linesCount
	int32_t ___linesCount_6;
	// System.Single MadLevelManager.MadFont::fillFactorTolerance
	float ___fillFactorTolerance_7;
	// UnityEngine.TextAsset MadLevelManager.MadFont::fntFile
	TextAsset_t7_84 * ___fntFile_8;
	// MadLevelManager.MadFont/CreateStatus MadLevelManager.MadFont::createStatus
	int32_t ___createStatus_9;
	// System.Boolean MadLevelManager.MadFont::created
	bool ___created_10;
	// UnityEngine.Material MadLevelManager.MadFont::material
	Material_t7_38 * ___material_11;
	// System.String MadLevelManager.MadFont::dimensions
	String_t* ___dimensions_12;
	// MadLevelManager.MadFontData MadLevelManager.MadFont::_data
	MadFontData_t11_184 * ____data_13;
	// System.Boolean MadLevelManager.MadFont::<initialized>k__BackingField
	bool ___U3CinitializedU3Ek__BackingField_14;
	// System.Boolean MadLevelManager.MadFont::<dirty>k__BackingField
	bool ___U3CdirtyU3Ek__BackingField_15;
};
