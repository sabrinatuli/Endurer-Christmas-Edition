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

// System.Linq.SortSequenceContext`2<System.Object,System.Int32>
struct SortSequenceContext_2_t4_64;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t4_36;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1_1685;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t4_52;
// System.Object[]
struct ObjectU5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Int32>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m4_269_gshared (SortSequenceContext_2_t4_64 * __this, Func_2_t4_36 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t4_52 * ___child_context, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m4_269(__this, ___selector, ___comparer, ___direction, ___child_context, method) (( void (*) (SortSequenceContext_2_t4_64 *, Func_2_t4_36 *, Object_t*, int32_t, SortContext_1_t4_52 *, const MethodInfo*))SortSequenceContext_2__ctor_m4_269_gshared)(__this, ___selector, ___comparer, ___direction, ___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Int32>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m4_270_gshared (SortSequenceContext_2_t4_64 * __this, ObjectU5BU5D_t1_159* ___elements, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m4_270(__this, ___elements, method) (( void (*) (SortSequenceContext_2_t4_64 *, ObjectU5BU5D_t1_159*, const MethodInfo*))SortSequenceContext_2_Initialize_m4_270_gshared)(__this, ___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Int32>::Compare(System.Int32,System.Int32)
extern "C" int32_t SortSequenceContext_2_Compare_m4_271_gshared (SortSequenceContext_2_t4_64 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m4_271(__this, ___first_index, ___second_index, method) (( int32_t (*) (SortSequenceContext_2_t4_64 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m4_271_gshared)(__this, ___first_index, ___second_index, method)
