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

// MadLevelManager.MadLevelProfile/DefaultBackend
struct DefaultBackend_t11_133;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadLevelProfile/DefaultBackend::.ctor()
extern "C" void DefaultBackend__ctor_m11_742 (DefaultBackend_t11_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile/DefaultBackend::Start()
extern "C" void DefaultBackend_Start_m11_743 (DefaultBackend_t11_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/DefaultBackend::LoadProfile(System.String)
extern "C" String_t* DefaultBackend_LoadProfile_m11_744 (DefaultBackend_t11_133 * __this, String_t* ___profileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile/DefaultBackend::SaveProfile(System.String,System.String)
extern "C" void DefaultBackend_SaveProfile_m11_745 (DefaultBackend_t11_133 * __this, String_t* ___profileName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile/DefaultBackend::Flush()
extern "C" void DefaultBackend_Flush_m11_746 (DefaultBackend_t11_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile/DefaultBackend::CanWorkInEditMode()
extern "C" bool DefaultBackend_CanWorkInEditMode_m11_747 (DefaultBackend_t11_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
