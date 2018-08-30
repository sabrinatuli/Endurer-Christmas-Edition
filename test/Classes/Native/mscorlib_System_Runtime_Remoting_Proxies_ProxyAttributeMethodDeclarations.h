﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t1_472;
// System.MarshalByRefObject
struct MarshalByRefObject_t1_59;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1_466;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1_481;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1_419;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t1_815;

#include "codegen/il2cpp-codegen.h"

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C" MarshalByRefObject_t1_59 * ProxyAttribute_CreateInstance_m1_3371 (ProxyAttribute_t1_472 * __this, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C" RealProxy_t1_466 * ProxyAttribute_CreateProxy_m1_3372 (ProxyAttribute_t1_472 * __this, ObjRef_t1_481 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1_419 * ___serverContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m1_3373 (ProxyAttribute_t1_472 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m1_3374 (ProxyAttribute_t1_472 * __this, Context_t1_419 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;