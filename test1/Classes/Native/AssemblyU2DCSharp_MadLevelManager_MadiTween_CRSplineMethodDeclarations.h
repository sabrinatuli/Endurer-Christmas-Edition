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

// MadLevelManager.MadiTween/CRSpline
struct CRSpline_t11_209;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t7_191;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MadLevelManager.MadiTween/CRSpline::.ctor(UnityEngine.Vector3[])
extern "C" void CRSpline__ctor_m11_1297 (CRSpline_t11_209 * __this, Vector3U5BU5D_t7_191* ___pts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadiTween/CRSpline::Interp(System.Single)
extern "C" Vector3_t7_66  CRSpline_Interp_m11_1298 (CRSpline_t11_209 * __this, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
