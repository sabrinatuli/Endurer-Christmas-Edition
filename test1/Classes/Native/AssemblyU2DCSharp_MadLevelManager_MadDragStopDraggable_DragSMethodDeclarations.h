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

// MadLevelManager.MadDragStopDraggable/DragStopCallback
struct DragStopCallback_t11_174;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MadLevelManager.MadDragStopDraggable/DragStopCallback::.ctor(System.Object,System.IntPtr)
extern "C" void DragStopCallback__ctor_m11_1008 (DragStopCallback_t11_174 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDragStopDraggable/DragStopCallback::Invoke(System.Int32)
extern "C" void DragStopCallback_Invoke_m11_1009 (DragStopCallback_t11_174 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DragStopCallback_t11_174(Il2CppObject* delegate, int32_t ___index);
// System.IAsyncResult MadLevelManager.MadDragStopDraggable/DragStopCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * DragStopCallback_BeginInvoke_m11_1010 (DragStopCallback_t11_174 * __this, int32_t ___index, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDragStopDraggable/DragStopCallback::EndInvoke(System.IAsyncResult)
extern "C" void DragStopCallback_EndInvoke_m11_1011 (DragStopCallback_t11_174 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
