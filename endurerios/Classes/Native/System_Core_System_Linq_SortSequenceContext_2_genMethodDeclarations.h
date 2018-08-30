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

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t4_53;
// System.Func`2<System.Object,System.Object>
struct Func_2_t4_39;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t1_1282;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t4_52;
// System.Object[]
struct ObjectU5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m4_172_gshared (SortSequenceContext_2_t4_53 * __this, Func_2_t4_39 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t4_52 * ___child_context, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m4_172(__this, ___selector, ___comparer, ___direction, ___child_context, method) (( void (*) (SortSequenceContext_2_t4_53 *, Func_2_t4_39 *, Object_t*, int32_t, SortContext_1_t4_52 *, const MethodInfo*))SortSequenceContext_2__ctor_m4_172_gshared)(__this, ___selector, ___comparer, ___direction, ___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m4_173_gshared (SortSequenceContext_2_t4_53 * __this, ObjectU5BU5D_t1_159* ___elements, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m4_173(__this, ___elements, method) (( void (*) (SortSequenceContext_2_t4_53 *, ObjectU5BU5D_t1_159*, const MethodInfo*))SortSequenceContext_2_Initialize_m4_173_gshared)(__this, ___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern "C" int32_t SortSequenceContext_2_Compare_m4_174_gshared (SortSequenceContext_2_t4_53 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m4_174(__this, ___first_index, ___second_index, method) (( int32_t (*) (SortSequenceContext_2_t4_53 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m4_174_gshared)(__this, ___first_index, ___second_index, method)
