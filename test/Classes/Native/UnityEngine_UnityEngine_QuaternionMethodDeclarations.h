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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m5_320 (Quaternion_t5_59 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t5_59  Quaternion_get_identity_m5_321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m5_322 (Object_t * __this /* static, unused */, Quaternion_t5_59  ___a, Quaternion_t5_59  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" Quaternion_t5_59  Quaternion_AngleAxis_m5_323 (Object_t * __this /* static, unused */, float ___angle, Vector3_t5_58  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t5_59  Quaternion_INTERNAL_CALL_AngleAxis_m5_324 (Object_t * __this /* static, unused */, float ___angle, Vector3_t5_58 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t5_59  Quaternion_FromToRotation_m5_325 (Object_t * __this /* static, unused */, Vector3_t5_58  ___fromDirection, Vector3_t5_58  ___toDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_FromToRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t5_59  Quaternion_INTERNAL_CALL_FromToRotation_m5_326 (Object_t * __this /* static, unused */, Vector3_t5_58 * ___fromDirection, Vector3_t5_58 * ___toDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" Quaternion_t5_59  Quaternion_LookRotation_m5_327 (Object_t * __this /* static, unused */, Vector3_t5_58  ___forward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t5_59  Quaternion_INTERNAL_CALL_LookRotation_m5_328 (Object_t * __this /* static, unused */, Vector3_t5_58 * ___forward, Vector3_t5_58 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t5_59  Quaternion_Slerp_m5_329 (Object_t * __this /* static, unused */, Quaternion_t5_59  ___a, Quaternion_t5_59  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t5_59  Quaternion_INTERNAL_CALL_Slerp_m5_330 (Object_t * __this /* static, unused */, Quaternion_t5_59 * ___a, Quaternion_t5_59 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t5_59  Quaternion_Lerp_m5_331 (Object_t * __this /* static, unused */, Quaternion_t5_59  ___a, Quaternion_t5_59  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t5_59  Quaternion_INTERNAL_CALL_Lerp_m5_332 (Object_t * __this /* static, unused */, Quaternion_t5_59 * ___a, Quaternion_t5_59 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t5_59  Quaternion_Inverse_m5_333 (Object_t * __this /* static, unused */, Quaternion_t5_59  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t5_59  Quaternion_INTERNAL_CALL_Inverse_m5_334 (Object_t * __this /* static, unused */, Quaternion_t5_59 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m5_335 (Quaternion_t5_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t5_58  Quaternion_get_eulerAngles_m5_336 (Quaternion_t5_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t5_59  Quaternion_Euler_m5_337 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t5_58  Quaternion_Internal_ToEulerRad_m5_338 (Object_t * __this /* static, unused */, Quaternion_t5_59  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t5_58  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5_339 (Object_t * __this /* static, unused */, Quaternion_t5_59 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t5_59  Quaternion_Internal_FromEulerRad_m5_340 (Object_t * __this /* static, unused */, Vector3_t5_58  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t5_59  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5_341 (Object_t * __this /* static, unused */, Vector3_t5_58 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m5_342 (Quaternion_t5_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m5_343 (Quaternion_t5_59 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t5_59  Quaternion_op_Multiply_m5_344 (Object_t * __this /* static, unused */, Quaternion_t5_59  ___lhs, Quaternion_t5_59  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t5_58  Quaternion_op_Multiply_m5_345 (Object_t * __this /* static, unused */, Quaternion_t5_59  ___rotation, Vector3_t5_58  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m5_346 (Object_t * __this /* static, unused */, Quaternion_t5_59  ___lhs, Quaternion_t5_59  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
