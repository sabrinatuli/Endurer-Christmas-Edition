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

// MadLevelManager.MadLevelAnimator/ModifierFunction
struct ModifierFunction_t11_100;
// System.Object
struct Object_t;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MadLevelManager.MadLevelAnimator/ModifierFunction::.ctor(System.Object,System.IntPtr)
extern "C" void ModifierFunction__ctor_m11_488 (ModifierFunction_t11_100 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelAnimator/ModifierFunction::Invoke(MadLevelManager.MadLevelIcon)
extern "C" float ModifierFunction_Invoke_m11_489 (ModifierFunction_t11_100 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float pinvoke_delegate_wrapper_ModifierFunction_t11_100(Il2CppObject* delegate, MadLevelIcon_t11_44 * ___icon);
// System.IAsyncResult MadLevelManager.MadLevelAnimator/ModifierFunction::BeginInvoke(MadLevelManager.MadLevelIcon,System.AsyncCallback,System.Object)
extern "C" Object_t * ModifierFunction_BeginInvoke_m11_490 (ModifierFunction_t11_100 * __this, MadLevelIcon_t11_44 * ___icon, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelAnimator/ModifierFunction::EndInvoke(System.IAsyncResult)
extern "C" float ModifierFunction_EndInvoke_m11_491 (ModifierFunction_t11_100 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
