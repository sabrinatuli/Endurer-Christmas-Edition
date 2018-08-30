#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Char,MadLevelManager.MadFontData/Char>
struct Dictionary_2_t1_1026;
// System.Collections.Generic.Dictionary`2<System.Char,System.Collections.Generic.Dictionary`2<System.Char,MadLevelManager.MadFontData/Kerning>>
struct Dictionary_2_t1_1027;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1_162;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1_1018;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1_79;

#include "mscorlib_System_Object.h"

// MadLevelManager.MadFontData
struct  MadFontData_t11_184  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<System.Char,MadLevelManager.MadFontData/Char> MadLevelManager.MadFontData::charTable
	Dictionary_2_t1_1026 * ___charTable_0;
	// System.Collections.Generic.Dictionary`2<System.Char,System.Collections.Generic.Dictionary`2<System.Char,MadLevelManager.MadFontData/Kerning>> MadLevelManager.MadFontData::kerningTable
	Dictionary_2_t1_1027 * ___kerningTable_1;
	// System.String MadLevelManager.MadFontData::infoFace
	String_t* ___infoFace_2;
	// System.Int32 MadLevelManager.MadFontData::infoSize
	int32_t ___infoSize_3;
	// System.Boolean MadLevelManager.MadFontData::infoBold
	bool ___infoBold_4;
	// System.Boolean MadLevelManager.MadFontData::infoItalic
	bool ___infoItalic_5;
	// System.String MadLevelManager.MadFontData::infoCharset
	String_t* ___infoCharset_6;
	// System.Boolean MadLevelManager.MadFontData::infoUnicode
	bool ___infoUnicode_7;
	// System.Int32 MadLevelManager.MadFontData::infoStretchH
	int32_t ___infoStretchH_8;
	// System.Boolean MadLevelManager.MadFontData::infoSmooth
	bool ___infoSmooth_9;
	// System.Boolean MadLevelManager.MadFontData::infoAA
	bool ___infoAA_10;
	// System.Int32[] MadLevelManager.MadFontData::infoPadding
	Int32U5BU5D_t1_162* ___infoPadding_11;
	// System.Int32[] MadLevelManager.MadFontData::infoSpacing
	Int32U5BU5D_t1_162* ___infoSpacing_12;
	// System.Int32 MadLevelManager.MadFontData::commonLineHeight
	int32_t ___commonLineHeight_13;
	// System.Int32 MadLevelManager.MadFontData::commonBase
	int32_t ___commonBase_14;
	// System.Int32 MadLevelManager.MadFontData::commonScaleW
	int32_t ___commonScaleW_15;
	// System.Int32 MadLevelManager.MadFontData::commonScaleH
	int32_t ___commonScaleH_16;
	// System.Int32 MadLevelManager.MadFontData::commonPages
	int32_t ___commonPages_17;
	// System.Boolean MadLevelManager.MadFontData::commonPacked
	bool ___commonPacked_18;
	// System.Int32 MadLevelManager.MadFontData::pageId
	int32_t ___pageId_19;
	// System.String MadLevelManager.MadFontData::pageFile
	String_t* ___pageFile_20;
	// System.Int32 MadLevelManager.MadFontData::charsCount
	int32_t ___charsCount_21;
	// System.Int32 MadLevelManager.MadFontData::kerningCount
	int32_t ___kerningCount_22;
	// System.String MadLevelManager.MadFontData::lineType
	String_t* ___lineType_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> MadLevelManager.MadFontData::lineMap
	Dictionary_2_t1_1018 * ___lineMap_24;
};
struct MadFontData_t11_184_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadFontData::<>f__switch$map0
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map0_25;
};
