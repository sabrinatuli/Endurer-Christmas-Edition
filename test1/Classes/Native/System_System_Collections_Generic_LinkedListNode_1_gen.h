#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<UnityEngine.Vector2>
struct LinkedList_1_t3_160;
// System.Collections.Generic.LinkedListNode`1<UnityEngine.Vector2>
struct LinkedListNode_1_t3_179;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Collections.Generic.LinkedListNode`1<UnityEngine.Vector2>
struct  LinkedListNode_1_t3_179  : public Object_t
{
	// T System.Collections.Generic.LinkedListNode`1::item
	Vector2_t7_65  ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::container
	LinkedList_1_t3_160 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::forward
	LinkedListNode_1_t3_179 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::back
	LinkedListNode_1_t3_179 * ___back_3;
};
