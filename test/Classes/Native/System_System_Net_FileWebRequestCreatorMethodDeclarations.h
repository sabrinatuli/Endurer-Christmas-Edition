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

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t2_26;
// System.Net.WebRequest
struct WebRequest_t2_22;
// System.Uri
struct Uri_t2_23;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m2_98 (FileWebRequestCreator_t2_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t2_22 * FileWebRequestCreator_Create_m2_99 (FileWebRequestCreator_t2_26 * __this, Uri_t2_23 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
