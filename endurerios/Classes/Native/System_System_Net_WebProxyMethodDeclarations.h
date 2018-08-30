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

// System.Net.WebProxy
struct WebProxy_t3_50;
// System.Uri
struct Uri_t3_3;
// System.String[]
struct StringU5BU5D_t1_202;
// System.Net.ICredentials
struct ICredentials_t3_51;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m3_212 (WebProxy_t3_50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m3_213 (WebProxy_t3_50 * __this, Uri_t3_3 * ___address, bool ___bypassOnLocal, StringU5BU5D_t1_202* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m3_214 (WebProxy_t3_50 * __this, SerializationInfo_t1_179 * ___serializationInfo, StreamingContext_t1_511  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m3_215 (WebProxy_t3_50 * __this, SerializationInfo_t1_179 * ___serializationInfo, StreamingContext_t1_511  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m3_216 (WebProxy_t3_50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t3_3 * WebProxy_GetProxy_m3_217 (WebProxy_t3_50 * __this, Uri_t3_3 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m3_218 (WebProxy_t3_50 * __this, Uri_t3_3 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m3_219 (WebProxy_t3_50 * __this, SerializationInfo_t1_179 * ___serializationInfo, StreamingContext_t1_511  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m3_220 (WebProxy_t3_50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
