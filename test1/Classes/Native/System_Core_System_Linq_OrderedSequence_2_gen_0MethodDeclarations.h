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

// System.Linq.OrderedSequence`2<System.Object,System.Int32>
struct OrderedSequence_2_t4_63;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1_995;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t4_36;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1_1685;
// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t4_51;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t4_52;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C" void OrderedSequence_2__ctor_m4_265_gshared (OrderedSequence_2_t4_63 * __this, Object_t* ___source, Func_2_t4_36 * ___key_selector, Object_t* ___comparer, int32_t ___direction, const MethodInfo* method);
#define OrderedSequence_2__ctor_m4_265(__this, ___source, ___key_selector, ___comparer, ___direction, method) (( void (*) (OrderedSequence_2_t4_63 *, Object_t*, Func_2_t4_36 *, Object_t*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m4_265_gshared)(__this, ___source, ___key_selector, ___comparer, ___direction, method)
// System.Void System.Linq.OrderedSequence`2<System.Object,System.Int32>::.ctor(System.Linq.OrderedEnumerable`1<TElement>,System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C" void OrderedSequence_2__ctor_m4_266_gshared (OrderedSequence_2_t4_63 * __this, OrderedEnumerable_1_t4_51 * ___parent, Object_t* ___source, Func_2_t4_36 * ___keySelector, Object_t* ___comparer, int32_t ___direction, const MethodInfo* method);
#define OrderedSequence_2__ctor_m4_266(__this, ___parent, ___source, ___keySelector, ___comparer, ___direction, method) (( void (*) (OrderedSequence_2_t4_63 *, OrderedEnumerable_1_t4_51 *, Object_t*, Func_2_t4_36 *, Object_t*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m4_266_gshared)(__this, ___parent, ___source, ___keySelector, ___comparer, ___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Int32>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C" SortContext_1_t4_52 * OrderedSequence_2_CreateContext_m4_267_gshared (OrderedSequence_2_t4_63 * __this, SortContext_1_t4_52 * ___current, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m4_267(__this, ___current, method) (( SortContext_1_t4_52 * (*) (OrderedSequence_2_t4_63 *, SortContext_1_t4_52 *, const MethodInfo*))OrderedSequence_2_CreateContext_m4_267_gshared)(__this, ___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Int32>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" Object_t* OrderedSequence_2_Sort_m4_268_gshared (OrderedSequence_2_t4_63 * __this, Object_t* ___source, const MethodInfo* method);
#define OrderedSequence_2_Sort_m4_268(__this, ___source, method) (( Object_t* (*) (OrderedSequence_2_t4_63 *, Object_t*, const MethodInfo*))OrderedSequence_2_Sort_m4_268_gshared)(__this, ___source, method)
