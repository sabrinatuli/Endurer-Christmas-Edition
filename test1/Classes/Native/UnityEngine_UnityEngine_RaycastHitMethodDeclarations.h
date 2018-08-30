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

// UnityEngine.Collider
struct Collider_t7_128;
// UnityEngine.Rigidbody
struct Rigidbody_t7_127;
// UnityEngine.Transform
struct Transform_t7_81;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t7_66  RaycastHit_get_point_m7_1221 (RaycastHit_t7_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t7_66  RaycastHit_get_normal_m7_1222 (RaycastHit_t7_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m7_1223 (RaycastHit_t7_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t7_128 * RaycastHit_get_collider_m7_1224 (RaycastHit_t7_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t7_127 * RaycastHit_get_rigidbody_m7_1225 (RaycastHit_t7_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t7_81 * RaycastHit_get_transform_m7_1226 (RaycastHit_t7_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
