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

// UnityEngine.ParticleSystem
struct ParticleSystem_t7_123;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t7_341;
// UnityEngine.Transform
struct Transform_t7_81;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t1_917;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Single UnityEngine.ParticleSystem::get_duration()
extern "C" float ParticleSystem_get_duration_m7_1140 (ParticleSystem_t7_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C" void ParticleSystem_set_enableEmission_m7_1141 (ParticleSystem_t7_123 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C" void ParticleSystem_set_startSize_m7_1142 (ParticleSystem_t7_123 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startColor(UnityEngine.Color)
extern "C" void ParticleSystem_set_startColor_m7_1143 (ParticleSystem_t7_123 * __this, Color_t7_57  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)
extern "C" void ParticleSystem_INTERNAL_set_startColor_m7_1144 (ParticleSystem_t7_123 * __this, Color_t7_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m7_1145 (ParticleSystem_t7_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m7_1146 (ParticleSystem_t7_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m7_1147 (ParticleSystem_t7_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m7_1148 (ParticleSystem_t7_123 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" void ParticleSystem_Stop_m7_1149 (ParticleSystem_t7_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m7_1150 (ParticleSystem_t7_123 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t7_341* ParticleSystem_GetParticleSystems_m7_1151 (Object_t * __this /* static, unused */, ParticleSystem_t7_123 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m7_1152 (Object_t * __this /* static, unused */, Transform_t7_81 * ___transform, List_1_t1_917 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
