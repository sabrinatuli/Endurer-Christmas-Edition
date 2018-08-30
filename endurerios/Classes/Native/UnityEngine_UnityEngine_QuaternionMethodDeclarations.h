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
extern "C" void Quaternion__ctor_m7_436 (Quaternion_t7_67 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t7_67  Quaternion_get_identity_m7_437 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m7_438 (Object_t * __this /* static, unused */, Quaternion_t7_67  ___a, Quaternion_t7_67  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" Quaternion_t7_67  Quaternion_AngleAxis_m7_439 (Object_t * __this /* static, unused */, float ___angle, Vector3_t7_66  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t7_67  Quaternion_INTERNAL_CALL_AngleAxis_m7_440 (Object_t * __this /* static, unused */, float ___angle, Vector3_t7_66 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t7_67  Quaternion_FromToRotation_m7_441 (Object_t * __this /* static, unused */, Vector3_t7_66  ___fromDirection, Vector3_t7_66  ___toDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_FromToRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t7_67  Quaternion_INTERNAL_CALL_FromToRotation_m7_442 (Object_t * __this /* static, unused */, Vector3_t7_66 * ___fromDirection, Vector3_t7_66 * ___toDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" Quaternion_t7_67  Quaternion_LookRotation_m7_443 (Object_t * __this /* static, unused */, Vector3_t7_66  ___forward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t7_67  Quaternion_INTERNAL_CALL_LookRotation_m7_444 (Object_t * __this /* static, unused */, Vector3_t7_66 * ___forward, Vector3_t7_66 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t7_67  Quaternion_Slerp_m7_445 (Object_t * __this /* static, unused */, Quaternion_t7_67  ___a, Quaternion_t7_67  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t7_67  Quaternion_INTERNAL_CALL_Slerp_m7_446 (Object_t * __this /* static, unused */, Quaternion_t7_67 * ___a, Quaternion_t7_67 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t7_67  Quaternion_Lerp_m7_447 (Object_t * __this /* static, unused */, Quaternion_t7_67  ___a, Quaternion_t7_67  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t7_67  Quaternion_INTERNAL_CALL_Lerp_m7_448 (Object_t * __this /* static, unused */, Quaternion_t7_67 * ___a, Quaternion_t7_67 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t7_67  Quaternion_Inverse_m7_449 (Object_t * __this /* static, unused */, Quaternion_t7_67  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t7_67  Quaternion_INTERNAL_CALL_Inverse_m7_450 (Object_t * __this /* static, unused */, Quaternion_t7_67 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m7_451 (Quaternion_t7_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t7_66  Quaternion_get_eulerAngles_m7_452 (Quaternion_t7_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t7_67  Quaternion_Euler_m7_453 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t7_67  Quaternion_Euler_m7_454 (Object_t * __this /* static, unused */, Vector3_t7_66  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t7_66  Quaternion_Internal_ToEulerRad_m7_455 (Object_t * __this /* static, unused */, Quaternion_t7_67  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t7_66  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m7_456 (Object_t * __this /* static, unused */, Quaternion_t7_67 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t7_67  Quaternion_Internal_FromEulerRad_m7_457 (Object_t * __this /* static, unused */, Vector3_t7_66  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t7_67  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m7_458 (Object_t * __this /* static, unused */, Vector3_t7_66 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m7_459 (Quaternion_t7_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m7_460 (Quaternion_t7_67 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t7_67  Quaternion_op_Multiply_m7_461 (Object_t * __this /* static, unused */, Quaternion_t7_67  ___lhs, Quaternion_t7_67  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t7_66  Quaternion_op_Multiply_m7_462 (Object_t * __this /* static, unused */, Quaternion_t7_67  ___rotation, Vector3_t7_66  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m7_463 (Object_t * __this /* static, unused */, Quaternion_t7_67  ___lhs, Quaternion_t7_67  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
