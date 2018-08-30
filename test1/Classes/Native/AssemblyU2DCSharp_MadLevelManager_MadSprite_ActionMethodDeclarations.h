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

// MadLevelManager.MadSprite/Action
struct Action_t11_27;
// System.Object
struct Object_t;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MadLevelManager.MadSprite/Action::.ctor(System.Object,System.IntPtr)
extern "C" void Action__ctor_m11_1194 (Action_t11_27 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite/Action::Invoke(MadLevelManager.MadSprite)
extern "C" void Action_Invoke_m11_1195 (Action_t11_27 * __this, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Action_t11_27(Il2CppObject* delegate, MadSprite_t11_13 * ___sprite);
// System.IAsyncResult MadLevelManager.MadSprite/Action::BeginInvoke(MadLevelManager.MadSprite,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_BeginInvoke_m11_1196 (Action_t11_27 * __this, MadSprite_t11_13 * ___sprite, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite/Action::EndInvoke(System.IAsyncResult)
extern "C" void Action_EndInvoke_m11_1197 (Action_t11_27 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
