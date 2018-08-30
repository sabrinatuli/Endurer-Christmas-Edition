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

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3_163;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3_162;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m3_944_gshared (LinkedListNode_1_t3_163 * __this, LinkedList_1_t3_162 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m3_944(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t3_163 *, LinkedList_1_t3_162 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m3_944_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m3_945_gshared (LinkedListNode_1_t3_163 * __this, LinkedList_1_t3_162 * ___list, Object_t * ___value, LinkedListNode_1_t3_163 * ___previousNode, LinkedListNode_1_t3_163 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m3_945(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t3_163 *, LinkedList_1_t3_162 *, Object_t *, LinkedListNode_1_t3_163 *, LinkedListNode_1_t3_163 *, const MethodInfo*))LinkedListNode_1__ctor_m3_945_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m3_946_gshared (LinkedListNode_1_t3_163 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m3_946(__this, method) (( void (*) (LinkedListNode_1_t3_163 *, const MethodInfo*))LinkedListNode_1_Detach_m3_946_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t3_162 * LinkedListNode_1_get_List_m3_947_gshared (LinkedListNode_1_t3_163 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m3_947(__this, method) (( LinkedList_1_t3_162 * (*) (LinkedListNode_1_t3_163 *, const MethodInfo*))LinkedListNode_1_get_List_m3_947_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m3_948_gshared (LinkedListNode_1_t3_163 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m3_948(__this, method) (( Object_t * (*) (LinkedListNode_1_t3_163 *, const MethodInfo*))LinkedListNode_1_get_Value_m3_948_gshared)(__this, method)
