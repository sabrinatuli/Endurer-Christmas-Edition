#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadFont
struct MadFont_t11_183;
// MadLevelManager.MadAtlas
struct MadAtlas_t11_166;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1_827;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1_1030;

#include "AssemblyU2DCSharp_MadLevelManager_MadSprite.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadText_Align.h"
#include "UnityEngine_UnityEngine_Rect.h"

// MadLevelManager.MadText
struct  MadText_t11_16  : public MadSprite_t11_13
{
	// MadLevelManager.MadFont MadLevelManager.MadText::font
	MadFont_t11_183 * ___font_60;
	// MadLevelManager.MadAtlas MadLevelManager.MadText::atlas
	MadAtlas_t11_166 * ___atlas_61;
	// System.String MadLevelManager.MadText::text
	String_t* ___text_62;
	// MadLevelManager.MadText/Align MadLevelManager.MadText::align
	int32_t ___align_63;
	// System.Single MadLevelManager.MadText::scale
	float ___scale_64;
	// System.Single MadLevelManager.MadText::letterSpacing
	float ___letterSpacing_65;
	// System.Boolean MadLevelManager.MadText::wordWrap
	bool ___wordWrap_66;
	// System.Single MadLevelManager.MadText::wordWrapLength
	float ___wordWrapLength_67;
	// System.Int32 MadLevelManager.MadText::hash
	int32_t ___hash_68;
	// System.Int32 MadLevelManager.MadText::linesCount
	int32_t ___linesCount_69;
	// UnityEngine.Rect MadLevelManager.MadText::bounds
	Rect_t7_35  ___bounds_70;
	// System.Collections.Generic.List`1<System.String> MadLevelManager.MadText::lines
	List_1_t1_827 * ___lines_71;
	// System.Collections.Generic.List`1<System.Single> MadLevelManager.MadText::lineWidths
	List_1_t1_1030 * ___lineWidths_72;
	// System.String MadLevelManager.MadText::fontTextureGUID
	String_t* ___fontTextureGUID_73;
};
