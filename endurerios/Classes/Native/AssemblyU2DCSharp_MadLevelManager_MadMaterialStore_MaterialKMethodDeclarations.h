#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MadLevelManager.MadMaterialStore/MaterialKey
struct MaterialKey_t11_188;
// UnityEngine.Texture
struct Texture_t7_36;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadMaterialStore/MaterialKey::.ctor(UnityEngine.Texture,System.String,System.Int32)
extern "C" void MaterialKey__ctor_m11_1136 (MaterialKey_t11_188 * __this, Texture_t7_36 * ___texture, String_t* ___shaderName, int32_t ___variation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadMaterialStore/MaterialKey::Equals(System.Object)
extern "C" bool MaterialKey_Equals_m11_1137 (MaterialKey_t11_188 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadMaterialStore/MaterialKey::GetHashCode()
extern "C" int32_t MaterialKey_GetHashCode_m11_1138 (MaterialKey_t11_188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
