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

// MadLevelManager.MadLevelAnimator/Modifier/Executor
struct Executor_t11_96;
// System.Object
struct Object_t;
// MadLevelManager.MadAnim
struct MadAnim_t11_71;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MadLevelManager.MadLevelAnimator/Modifier/Executor::.ctor(System.Object,System.IntPtr)
extern "C" void Executor__ctor_m11_472 (Executor_t11_96 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAnimator/Modifier/Executor::Invoke(MadLevelManager.MadAnim,System.Single)
extern "C" void Executor_Invoke_m11_473 (Executor_t11_96 * __this, MadAnim_t11_71 * ___animation, float ___modifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Executor_t11_96(Il2CppObject* delegate, MadAnim_t11_71 * ___animation, float ___modifier);
// System.IAsyncResult MadLevelManager.MadLevelAnimator/Modifier/Executor::BeginInvoke(MadLevelManager.MadAnim,System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * Executor_BeginInvoke_m11_474 (Executor_t11_96 * __this, MadAnim_t11_71 * ___animation, float ___modifier, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAnimator/Modifier/Executor::EndInvoke(System.IAsyncResult)
extern "C" void Executor_EndInvoke_m11_475 (Executor_t11_96 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
