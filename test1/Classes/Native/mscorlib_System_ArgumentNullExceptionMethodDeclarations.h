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

// System.ArgumentNullException
struct ArgumentNullException_t1_691;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentNullException::.ctor()
extern "C" void ArgumentNullException__ctor_m1_4624 (ArgumentNullException_t1_691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" void ArgumentNullException__ctor_m1_4625 (ArgumentNullException_t1_691 * __this, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
extern "C" void ArgumentNullException__ctor_m1_4626 (ArgumentNullException_t1_691 * __this, String_t* ___paramName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentNullException__ctor_m1_4627 (ArgumentNullException_t1_691 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
