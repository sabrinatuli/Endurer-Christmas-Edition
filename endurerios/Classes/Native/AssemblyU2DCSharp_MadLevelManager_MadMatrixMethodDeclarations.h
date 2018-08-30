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

// MadLevelManager.MadMatrix
struct MadMatrix_t11_220;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void MadLevelManager.MadMatrix::.ctor()
extern "C" void MadMatrix__ctor_m11_1626 (MadMatrix_t11_220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadMatrix::Translate(UnityEngine.Matrix4x4&,System.Single,System.Single,System.Single)
extern "C" void MadMatrix_Translate_m11_1627 (Object_t * __this /* static, unused */, Matrix4x4_t7_68 * ___matrix, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadMatrix::Translate(UnityEngine.Matrix4x4&,UnityEngine.Vector3)
extern "C" void MadMatrix_Translate_m11_1628 (Object_t * __this /* static, unused */, Matrix4x4_t7_68 * ___matrix, Vector3_t7_66  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadMatrix::Rotate(UnityEngine.Matrix4x4&,System.Single,System.Single,System.Single)
extern "C" void MadMatrix_Rotate_m11_1629 (Object_t * __this /* static, unused */, Matrix4x4_t7_68 * ___matrix, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadMatrix::Rotate(UnityEngine.Matrix4x4&,UnityEngine.Vector3)
extern "C" void MadMatrix_Rotate_m11_1630 (Object_t * __this /* static, unused */, Matrix4x4_t7_68 * ___matrix, Vector3_t7_66  ___rotate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadMatrix::Rotate(UnityEngine.Matrix4x4&,UnityEngine.Quaternion)
extern "C" void MadMatrix_Rotate_m11_1631 (Object_t * __this /* static, unused */, Matrix4x4_t7_68 * ___matrix, Quaternion_t7_67  ___rotate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadMatrix::Scale(UnityEngine.Matrix4x4&,System.Single,System.Single,System.Single)
extern "C" void MadMatrix_Scale_m11_1632 (Object_t * __this /* static, unused */, Matrix4x4_t7_68 * ___matrix, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadMatrix::Scale(UnityEngine.Matrix4x4&,UnityEngine.Vector3)
extern "C" void MadMatrix_Scale_m11_1633 (Object_t * __this /* static, unused */, Matrix4x4_t7_68 * ___matrix, Vector3_t7_66  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
