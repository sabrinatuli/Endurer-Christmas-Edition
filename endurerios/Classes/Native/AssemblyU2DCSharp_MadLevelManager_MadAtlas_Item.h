#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Rect.h"

// MadLevelManager.MadAtlas/Item
struct  Item_t11_165  : public Object_t
{
	// System.String MadLevelManager.MadAtlas/Item::name
	String_t* ___name_0;
	// UnityEngine.Rect MadLevelManager.MadAtlas/Item::region
	Rect_t7_35  ___region_1;
	// System.Int32 MadLevelManager.MadAtlas/Item::pixelsWidth
	int32_t ___pixelsWidth_2;
	// System.Int32 MadLevelManager.MadAtlas/Item::pixelsHeight
	int32_t ___pixelsHeight_3;
	// System.String MadLevelManager.MadAtlas/Item::textureGUID
	String_t* ___textureGUID_4;
};
