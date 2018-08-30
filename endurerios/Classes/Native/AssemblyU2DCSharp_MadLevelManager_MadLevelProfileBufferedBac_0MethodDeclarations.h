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

// MadLevelManager.MadLevelProfileBufferedBackend
struct MadLevelProfileBufferedBackend_t11_138;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadLevelProfileBufferedBackend::.ctor()
extern "C" void MadLevelProfileBufferedBackend__ctor_m11_825 (MadLevelProfileBufferedBackend_t11_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelProfileBufferedBackend::get_maxTimePause()
extern "C" float MadLevelProfileBufferedBackend_get_maxTimePause_m11_826 (MadLevelProfileBufferedBackend_t11_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfileBufferedBackend::set_maxTimePause(System.Single)
extern "C" void MadLevelProfileBufferedBackend_set_maxTimePause_m11_827 (MadLevelProfileBufferedBackend_t11_138 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MadLevelManager.MadLevelProfileBufferedBackend::Run()
extern "C" Object_t * MadLevelProfileBufferedBackend_Run_m11_828 (MadLevelProfileBufferedBackend_t11_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfileBufferedBackend::SaveProfile(System.String,System.String)
extern "C" void MadLevelProfileBufferedBackend_SaveProfile_m11_829 (MadLevelProfileBufferedBackend_t11_138 * __this, String_t* ___profileName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfileBufferedBackend::Flush()
extern "C" void MadLevelProfileBufferedBackend_Flush_m11_830 (MadLevelProfileBufferedBackend_t11_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
