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

// Bullet
struct Bullet_t11_25;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void Bullet::.ctor()
extern "C" void Bullet__ctor_m11_107 (Bullet_t11_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Awake()
extern "C" void Bullet_Awake_m11_108 (Bullet_t11_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Start()
extern "C" void Bullet_Start_m11_109 (Bullet_t11_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Update()
extern "C" void Bullet_Update_m11_110 (Bullet_t11_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Bullet::ShouldIgnoreHit(UnityEngine.RaycastHit)
extern "C" bool Bullet_ShouldIgnoreHit_m11_111 (Bullet_t11_25 * __this, RaycastHit_t5_122  ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnHit(UnityEngine.RaycastHit)
extern "C" void Bullet_OnHit_m11_112 (Bullet_t11_25 * __this, RaycastHit_t5_122  ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Dissipate()
extern "C" void Bullet_Dissipate_m11_113 (Bullet_t11_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::DelayedDestroy()
extern "C" void Bullet_DelayedDestroy_m11_114 (Bullet_t11_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
