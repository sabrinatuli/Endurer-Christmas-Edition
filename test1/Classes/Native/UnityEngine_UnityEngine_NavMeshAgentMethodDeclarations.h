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

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t7_143;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C" bool NavMeshAgent_SetDestination_m7_1241 (NavMeshAgent_t7_143 * __this, Vector3_t7_66  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C" bool NavMeshAgent_INTERNAL_CALL_SetDestination_m7_1242 (Object_t * __this /* static, unused */, NavMeshAgent_t7_143 * ___self, Vector3_t7_66 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_velocity()
extern "C" Vector3_t7_66  NavMeshAgent_get_velocity_m7_1243 (NavMeshAgent_t7_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void NavMeshAgent_INTERNAL_get_velocity_m7_1244 (NavMeshAgent_t7_143 * __this, Vector3_t7_66 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_speed(System.Single)
extern "C" void NavMeshAgent_set_speed_m7_1245 (NavMeshAgent_t7_143 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
