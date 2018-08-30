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
struct Bullet_t11_245;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void Bullet::.ctor()
extern "C" void Bullet__ctor_m11_1749 (Bullet_t11_245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Awake()
extern "C" void Bullet_Awake_m11_1750 (Bullet_t11_245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Start()
extern "C" void Bullet_Start_m11_1751 (Bullet_t11_245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Update()
extern "C" void Bullet_Update_m11_1752 (Bullet_t11_245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Bullet::ShouldIgnoreHit(UnityEngine.RaycastHit)
extern "C" bool Bullet_ShouldIgnoreHit_m11_1753 (Bullet_t11_245 * __this, RaycastHit_t7_135  ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnHit(UnityEngine.RaycastHit)
extern "C" void Bullet_OnHit_m11_1754 (Bullet_t11_245 * __this, RaycastHit_t7_135  ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Dissipate()
extern "C" void Bullet_Dissipate_m11_1755 (Bullet_t11_245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::DelayedDestroy()
extern "C" void Bullet_DelayedDestroy_m11_1756 (Bullet_t11_245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
