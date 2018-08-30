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

// MadLevelManager.MadLevelQuery/PropertyProcessor
struct PropertyProcessor_t11_148;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void MadLevelManager.MadLevelQuery/PropertyProcessor::.ctor(System.Object,System.IntPtr)
extern "C" void PropertyProcessor__ctor_m11_869 (PropertyProcessor_t11_148 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelQuery/PropertyProcessor::Invoke(System.String,System.String,System.String)
extern "C" void PropertyProcessor_Invoke_m11_870 (PropertyProcessor_t11_148 * __this, String_t* ___level, String_t* ___name, String_t* ___propertyValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PropertyProcessor_t11_148(Il2CppObject* delegate, String_t* ___level, String_t* ___name, String_t* ___propertyValue);
// System.IAsyncResult MadLevelManager.MadLevelQuery/PropertyProcessor::BeginInvoke(System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * PropertyProcessor_BeginInvoke_m11_871 (PropertyProcessor_t11_148 * __this, String_t* ___level, String_t* ___name, String_t* ___propertyValue, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelQuery/PropertyProcessor::EndInvoke(System.IAsyncResult)
extern "C" void PropertyProcessor_EndInvoke_m11_872 (PropertyProcessor_t11_148 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
