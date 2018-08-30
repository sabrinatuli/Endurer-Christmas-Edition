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
struct ParticleSystem_t5_111;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t5_322;
// UnityEngine.Transform
struct Transform_t5_73;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t1_910;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Single UnityEngine.ParticleSystem::get_duration()
extern "C" float ParticleSystem_get_duration_m5_915 (ParticleSystem_t5_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C" void ParticleSystem_set_enableEmission_m5_916 (ParticleSystem_t5_111 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C" void ParticleSystem_set_startSize_m5_917 (ParticleSystem_t5_111 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startColor(UnityEngine.Color)
extern "C" void ParticleSystem_set_startColor_m5_918 (ParticleSystem_t5_111 * __this, Color_t5_50  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)
extern "C" void ParticleSystem_INTERNAL_set_startColor_m5_919 (ParticleSystem_t5_111 * __this, Color_t5_50 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m5_920 (ParticleSystem_t5_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m5_921 (ParticleSystem_t5_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m5_922 (ParticleSystem_t5_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m5_923 (ParticleSystem_t5_111 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" void ParticleSystem_Stop_m5_924 (ParticleSystem_t5_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m5_925 (ParticleSystem_t5_111 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t5_322* ParticleSystem_GetParticleSystems_m5_926 (Object_t * __this /* static, unused */, ParticleSystem_t5_111 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m5_927 (Object_t * __this /* static, unused */, Transform_t5_73 * ___transform, List_1_t1_910 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
