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

// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t12_65;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t7_385;
// UnityEngine.Mesh
struct Mesh_t7_29;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.Triangles::.ctor()
extern "C" void Triangles__ctor_m12_198 (Triangles_t12_65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Triangles::.cctor()
extern "C" void Triangles__cctor_m12_199 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
extern "C" bool Triangles_HasMeshes_m12_200 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Triangles::Cleanup()
extern "C" void Triangles_Cleanup_m12_201 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::GetMeshes(System.Int32,System.Int32)
extern "C" MeshU5BU5D_t7_385* Triangles_GetMeshes_m12_202 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" Mesh_t7_29 * Triangles_GetMesh_m12_203 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
