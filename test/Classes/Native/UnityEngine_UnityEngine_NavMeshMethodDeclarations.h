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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_NavMeshHit.h"

// System.Boolean UnityEngine.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.NavMeshHit&,System.Single,System.Int32)
extern "C" bool NavMesh_SamplePosition_m5_1013 (Object_t * __this /* static, unused */, Vector3_t5_58  ___sourcePosition, NavMeshHit_t5_131 * ___hit, float ___maxDistance, int32_t ___areaMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMesh::INTERNAL_CALL_SamplePosition(UnityEngine.Vector3&,UnityEngine.NavMeshHit&,System.Single,System.Int32)
extern "C" bool NavMesh_INTERNAL_CALL_SamplePosition_m5_1014 (Object_t * __this /* static, unused */, Vector3_t5_58 * ___sourcePosition, NavMeshHit_t5_131 * ___hit, float ___maxDistance, int32_t ___areaMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
