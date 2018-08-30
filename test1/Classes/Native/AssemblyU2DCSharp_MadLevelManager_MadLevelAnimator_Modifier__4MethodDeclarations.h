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

// MadLevelManager.MadLevelAnimator/Modifier/ValueSetter
struct ValueSetter_t11_98;
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

// System.Void MadLevelManager.MadLevelAnimator/Modifier/ValueSetter::.ctor(System.Object,System.IntPtr)
extern "C" void ValueSetter__ctor_m11_480 (ValueSetter_t11_98 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAnimator/Modifier/ValueSetter::Invoke(MadLevelManager.MadAnim,System.Single)
extern "C" void ValueSetter_Invoke_m11_481 (ValueSetter_t11_98 * __this, MadAnim_t11_71 * ___animation, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ValueSetter_t11_98(Il2CppObject* delegate, MadAnim_t11_71 * ___animation, float ___value);
// System.IAsyncResult MadLevelManager.MadLevelAnimator/Modifier/ValueSetter::BeginInvoke(MadLevelManager.MadAnim,System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * ValueSetter_BeginInvoke_m11_482 (ValueSetter_t11_98 * __this, MadAnim_t11_71 * ___animation, float ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAnimator/Modifier/ValueSetter::EndInvoke(System.IAsyncResult)
extern "C" void ValueSetter_EndInvoke_m11_483 (ValueSetter_t11_98 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
