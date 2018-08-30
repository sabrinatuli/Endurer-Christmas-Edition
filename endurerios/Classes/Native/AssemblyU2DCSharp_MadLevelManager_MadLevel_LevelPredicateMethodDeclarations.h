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

// MadLevelManager.MadLevel/LevelPredicate
struct LevelPredicate_t11_86;
// System.Object
struct Object_t;
// MadLevelManager.MadLevelConfiguration/Level
struct Level_t11_14;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MadLevelManager.MadLevel/LevelPredicate::.ctor(System.Object,System.IntPtr)
extern "C" void LevelPredicate__ctor_m11_344 (LevelPredicate_t11_86 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel/LevelPredicate::Invoke(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool LevelPredicate_Invoke_m11_345 (LevelPredicate_t11_86 * __this, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_LevelPredicate_t11_86(Il2CppObject* delegate, Level_t11_14 * ___level);
// System.IAsyncResult MadLevelManager.MadLevel/LevelPredicate::BeginInvoke(MadLevelManager.MadLevelConfiguration/Level,System.AsyncCallback,System.Object)
extern "C" Object_t * LevelPredicate_BeginInvoke_m11_346 (LevelPredicate_t11_86 * __this, Level_t11_14 * ___level, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel/LevelPredicate::EndInvoke(System.IAsyncResult)
extern "C" bool LevelPredicate_EndInvoke_m11_347 (LevelPredicate_t11_86 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
