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

// MadLevelManager.MadLevelAnimator/Modifier/ValueGetter
struct ValueGetter_t11_97;
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

// System.Void MadLevelManager.MadLevelAnimator/Modifier/ValueGetter::.ctor(System.Object,System.IntPtr)
extern "C" void ValueGetter__ctor_m11_476 (ValueGetter_t11_97 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelAnimator/Modifier/ValueGetter::Invoke(MadLevelManager.MadAnim)
extern "C" float ValueGetter_Invoke_m11_477 (ValueGetter_t11_97 * __this, MadAnim_t11_71 * ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float pinvoke_delegate_wrapper_ValueGetter_t11_97(Il2CppObject* delegate, MadAnim_t11_71 * ___animation);
// System.IAsyncResult MadLevelManager.MadLevelAnimator/Modifier/ValueGetter::BeginInvoke(MadLevelManager.MadAnim,System.AsyncCallback,System.Object)
extern "C" Object_t * ValueGetter_BeginInvoke_m11_478 (ValueGetter_t11_97 * __this, MadAnim_t11_71 * ___animation, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelAnimator/Modifier/ValueGetter::EndInvoke(System.IAsyncResult)
extern "C" float ValueGetter_EndInvoke_m11_479 (ValueGetter_t11_97 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
