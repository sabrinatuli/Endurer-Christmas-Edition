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

// System.Resources.ResourceReader/ResourceEnumerator
struct ResourceEnumerator_t1_367;
// System.Resources.ResourceReader
struct ResourceReader_t1_368;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Resources.ResourceReader/ResourceEnumerator::.ctor(System.Resources.ResourceReader)
extern "C" void ResourceEnumerator__ctor_m1_3018 (ResourceEnumerator_t1_367 * __this, ResourceReader_t1_368 * ___readerToEnumerate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Resources.ResourceReader/ResourceEnumerator::get_Entry()
extern "C" DictionaryEntry_t1_169  ResourceEnumerator_get_Entry_m1_3019 (ResourceEnumerator_t1_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Key()
extern "C" Object_t * ResourceEnumerator_get_Key_m1_3020 (ResourceEnumerator_t1_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Value()
extern "C" Object_t * ResourceEnumerator_get_Value_m1_3021 (ResourceEnumerator_t1_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Current()
extern "C" Object_t * ResourceEnumerator_get_Current_m1_3022 (ResourceEnumerator_t1_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::MoveNext()
extern "C" bool ResourceEnumerator_MoveNext_m1_3023 (ResourceEnumerator_t1_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::Reset()
extern "C" void ResourceEnumerator_Reset_m1_3024 (ResourceEnumerator_t1_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::FillCache()
extern "C" void ResourceEnumerator_FillCache_m1_3025 (ResourceEnumerator_t1_367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
