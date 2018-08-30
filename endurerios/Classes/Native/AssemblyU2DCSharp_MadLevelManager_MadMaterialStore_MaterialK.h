#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t7_36;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// MadLevelManager.MadMaterialStore/MaterialKey
struct  MaterialKey_t11_188  : public Object_t
{
	// UnityEngine.Texture MadLevelManager.MadMaterialStore/MaterialKey::texture
	Texture_t7_36 * ___texture_0;
	// System.String MadLevelManager.MadMaterialStore/MaterialKey::shaderName
	String_t* ___shaderName_1;
	// System.Int32 MadLevelManager.MadMaterialStore/MaterialKey::variation
	int32_t ___variation_2;
};
