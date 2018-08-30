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

// MadLevelManager.MadMaterialStore
struct MadMaterialStore_t11_189;
// UnityEngine.Material
struct Material_t7_38;
// UnityEngine.Texture
struct Texture_t7_36;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadMaterialStore::.ctor()
extern "C" void MadMaterialStore__ctor_m11_1139 (MadMaterialStore_t11_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadMaterialStore::OnDestroy()
extern "C" void MadMaterialStore_OnDestroy_m11_1140 (MadMaterialStore_t11_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material MadLevelManager.MadMaterialStore::CreateUnique(UnityEngine.Texture,System.String,System.Int32&)
extern "C" Material_t7_38 * MadMaterialStore_CreateUnique_m11_1141 (MadMaterialStore_t11_189 * __this, Texture_t7_36 * ___texture, String_t* ___shaderName, int32_t* ___variation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material MadLevelManager.MadMaterialStore::MaterialFor(UnityEngine.Texture,System.String)
extern "C" Material_t7_38 * MadMaterialStore_MaterialFor_m11_1142 (MadMaterialStore_t11_189 * __this, Texture_t7_36 * ___texture, String_t* ___shaderName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material MadLevelManager.MadMaterialStore::MaterialFor(UnityEngine.Texture,System.String,System.Int32)
extern "C" Material_t7_38 * MadMaterialStore_MaterialFor_m11_1143 (MadMaterialStore_t11_189 * __this, Texture_t7_36 * ___texture, String_t* ___shaderName, int32_t ___variation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material MadLevelManager.MadMaterialStore::CreateMaterial(UnityEngine.Texture,System.String,System.Int32)
extern "C" Material_t7_38 * MadMaterialStore_CreateMaterial_m11_1144 (MadMaterialStore_t11_189 * __this, Texture_t7_36 * ___texture, String_t* ___shaderName, int32_t ___variation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
