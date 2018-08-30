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

// System.Linq.QuickSort`1<System.Object>
struct QuickSort_1_t4_54;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1_995;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t4_52;
// System.Int32[]
struct Int32U5BU5D_t1_162;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" void QuickSort_1__ctor_m4_175_gshared (QuickSort_1_t4_54 * __this, Object_t* ___source, SortContext_1_t4_52 * ___context, const MethodInfo* method);
#define QuickSort_1__ctor_m4_175(__this, ___source, ___context, method) (( void (*) (QuickSort_1_t4_54 *, Object_t*, SortContext_1_t4_52 *, const MethodInfo*))QuickSort_1__ctor_m4_175_gshared)(__this, ___source, ___context, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern "C" Int32U5BU5D_t1_162* QuickSort_1_CreateIndexes_m4_176_gshared (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method);
#define QuickSort_1_CreateIndexes_m4_176(__this /* static, unused */, ___length, method) (( Int32U5BU5D_t1_162* (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))QuickSort_1_CreateIndexes_m4_176_gshared)(__this /* static, unused */, ___length, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern "C" void QuickSort_1_PerformSort_m4_177_gshared (QuickSort_1_t4_54 * __this, const MethodInfo* method);
#define QuickSort_1_PerformSort_m4_177(__this, method) (( void (*) (QuickSort_1_t4_54 *, const MethodInfo*))QuickSort_1_PerformSort_m4_177_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m4_178_gshared (QuickSort_1_t4_54 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define QuickSort_1_CompareItems_m4_178(__this, ___first_index, ___second_index, method) (( int32_t (*) (QuickSort_1_t4_54 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_CompareItems_m4_178_gshared)(__this, ___first_index, ___second_index, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m4_179_gshared (QuickSort_1_t4_54 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_MedianOfThree_m4_179(__this, ___left, ___right, method) (( int32_t (*) (QuickSort_1_t4_54 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_MedianOfThree_m4_179_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m4_180_gshared (QuickSort_1_t4_54 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Sort_m4_180(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t4_54 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Sort_m4_180_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m4_181_gshared (QuickSort_1_t4_54 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_InsertionSort_m4_181(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t4_54 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_InsertionSort_m4_181_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C" void QuickSort_1_Swap_m4_182_gshared (QuickSort_1_t4_54 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Swap_m4_182(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t4_54 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Swap_m4_182_gshared)(__this, ___left, ___right, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" Object_t* QuickSort_1_Sort_m4_183_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t4_52 * ___context, const MethodInfo* method);
#define QuickSort_1_Sort_m4_183(__this /* static, unused */, ___source, ___context, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t4_52 *, const MethodInfo*))QuickSort_1_Sort_m4_183_gshared)(__this /* static, unused */, ___source, ___context, method)
