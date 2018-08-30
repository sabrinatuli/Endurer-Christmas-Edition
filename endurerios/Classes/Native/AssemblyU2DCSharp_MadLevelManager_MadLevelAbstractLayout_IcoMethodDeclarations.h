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

// MadLevelManager.MadLevelAbstractLayout/IconActivationEvent
struct IconActivationEvent_t11_43;
// System.Object
struct Object_t;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void MadLevelManager.MadLevelAbstractLayout/IconActivationEvent::.ctor(System.Object,System.IntPtr)
extern "C" void IconActivationEvent__ctor_m11_110 (IconActivationEvent_t11_43 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout/IconActivationEvent::Invoke(MadLevelManager.MadLevelIcon,System.String)
extern "C" void IconActivationEvent_Invoke_m11_111 (IconActivationEvent_t11_43 * __this, MadLevelIcon_t11_44 * ___icon, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_IconActivationEvent_t11_43(Il2CppObject* delegate, MadLevelIcon_t11_44 * ___icon, String_t* ___levelName);
// System.IAsyncResult MadLevelManager.MadLevelAbstractLayout/IconActivationEvent::BeginInvoke(MadLevelManager.MadLevelIcon,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * IconActivationEvent_BeginInvoke_m11_112 (IconActivationEvent_t11_43 * __this, MadLevelIcon_t11_44 * ___icon, String_t* ___levelName, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout/IconActivationEvent::EndInvoke(System.IAsyncResult)
extern "C" void IconActivationEvent_EndInvoke_m11_113 (IconActivationEvent_t11_43 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
