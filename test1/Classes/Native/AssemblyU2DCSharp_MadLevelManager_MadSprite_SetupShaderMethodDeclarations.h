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

// MadLevelManager.MadSprite/SetupShader
struct SetupShader_t11_203;
// System.Object
struct Object_t;
// UnityEngine.Material
struct Material_t7_38;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MadLevelManager.MadSprite/SetupShader::.ctor(System.Object,System.IntPtr)
extern "C" void SetupShader__ctor_m11_1198 (SetupShader_t11_203 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite/SetupShader::Invoke(UnityEngine.Material)
extern "C" void SetupShader_Invoke_m11_1199 (SetupShader_t11_203 * __this, Material_t7_38 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SetupShader_t11_203(Il2CppObject* delegate, Material_t7_38 * ___material);
// System.IAsyncResult MadLevelManager.MadSprite/SetupShader::BeginInvoke(UnityEngine.Material,System.AsyncCallback,System.Object)
extern "C" Object_t * SetupShader_BeginInvoke_m11_1200 (SetupShader_t11_203 * __this, Material_t7_38 * ___material, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite/SetupShader::EndInvoke(System.IAsyncResult)
extern "C" void SetupShader_EndInvoke_m11_1201 (SetupShader_t11_203 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
