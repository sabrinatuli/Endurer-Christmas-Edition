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

// UnityEngine.Rigidbody
struct Rigidbody_t7_127;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_ForceMode.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_velocity_m7_1188 (Rigidbody_t7_127 * __this, Vector3_t7_66  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m7_1189 (Rigidbody_t7_127 * __this, Vector3_t7_66 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
extern "C" void Rigidbody_set_mass_m7_1190 (Rigidbody_t7_127 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
extern "C" bool Rigidbody_get_useGravity_m7_1191 (Rigidbody_t7_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C" void Rigidbody_set_useGravity_m7_1192 (Rigidbody_t7_127 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m7_1193 (Rigidbody_t7_127 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddForce_m7_1194 (Rigidbody_t7_127 * __this, Vector3_t7_66  ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" void Rigidbody_AddForce_m7_1195 (Rigidbody_t7_127 * __this, Vector3_t7_66  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m7_1196 (Object_t * __this /* static, unused */, Rigidbody_t7_127 * ___self, Vector3_t7_66 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddForce_m7_1197 (Rigidbody_t7_127 * __this, float ___x, float ___y, float ___z, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddTorque_m7_1198 (Rigidbody_t7_127 * __this, Vector3_t7_66  ___torque, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C" void Rigidbody_AddTorque_m7_1199 (Rigidbody_t7_127 * __this, Vector3_t7_66  ___torque, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddTorque_m7_1200 (Object_t * __this /* static, unused */, Rigidbody_t7_127 * ___self, Vector3_t7_66 * ___torque, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddTorque_m7_1201 (Rigidbody_t7_127 * __this, float ___x, float ___y, float ___z, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Rigidbody_AddForceAtPosition_m7_1202 (Rigidbody_t7_127 * __this, Vector3_t7_66  ___force, Vector3_t7_66  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m7_1203 (Object_t * __this /* static, unused */, Rigidbody_t7_127 * ___self, Vector3_t7_66 * ___force, Vector3_t7_66 * ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C" Vector3_t7_66  Rigidbody_get_position_m7_1204 (Rigidbody_t7_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_position_m7_1205 (Rigidbody_t7_127 * __this, Vector3_t7_66 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" void Rigidbody_MovePosition_m7_1206 (Rigidbody_t7_127 * __this, Vector3_t7_66  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_CALL_MovePosition_m7_1207 (Object_t * __this /* static, unused */, Rigidbody_t7_127 * ___self, Vector3_t7_66 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C" void Rigidbody_MoveRotation_m7_1208 (Rigidbody_t7_127 * __this, Quaternion_t7_67  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_CALL_MoveRotation_m7_1209 (Object_t * __this /* static, unused */, Rigidbody_t7_127 * ___self, Quaternion_t7_67 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
