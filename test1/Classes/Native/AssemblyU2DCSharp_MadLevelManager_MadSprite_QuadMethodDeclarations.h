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

// MadLevelManager.MadSprite/Quad
struct Quad_t11_198;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t7_334;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadSprite/Quad::.ctor(System.Boolean)
extern "C" void Quad__ctor_m11_1190 (Quad_t11_198 * __this, bool ___invert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite/Quad::.ctor(MadLevelManager.MadSprite/Quad)
extern "C" void Quad__ctor_m11_1191 (Quad_t11_198 * __this, Quad_t11_198 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] MadLevelManager.MadSprite/Quad::Points(System.Single,System.Single,System.Single,System.Single)
extern "C" Vector2U5BU5D_t7_334* Quad_Points_m11_1192 (Quad_t11_198 * __this, float ___left, float ___top, float ___right, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadSprite/Quad::Y(System.Single)
extern "C" float Quad_Y_m11_1193 (Quad_t11_198 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
