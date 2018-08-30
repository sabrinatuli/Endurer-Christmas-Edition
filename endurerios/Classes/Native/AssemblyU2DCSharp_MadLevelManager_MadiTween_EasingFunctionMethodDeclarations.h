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

// MadLevelManager.MadiTween/EasingFunction
struct EasingFunction_t11_74;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MadLevelManager.MadiTween/EasingFunction::.ctor(System.Object,System.IntPtr)
extern "C" void EasingFunction__ctor_m11_1299 (EasingFunction_t11_74 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadiTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
extern "C" float EasingFunction_Invoke_m11_1300 (EasingFunction_t11_74 * __this, float ___start, float ___end, float ___Value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float pinvoke_delegate_wrapper_EasingFunction_t11_74(Il2CppObject* delegate, float ___start, float ___end, float ___Value);
// System.IAsyncResult MadLevelManager.MadiTween/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * EasingFunction_BeginInvoke_m11_1301 (EasingFunction_t11_74 * __this, float ___start, float ___end, float ___Value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadiTween/EasingFunction::EndInvoke(System.IAsyncResult)
extern "C" float EasingFunction_EndInvoke_m11_1302 (EasingFunction_t11_74 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
