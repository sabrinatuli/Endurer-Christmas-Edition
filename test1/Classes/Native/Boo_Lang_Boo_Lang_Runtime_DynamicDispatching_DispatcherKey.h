#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>
struct IEqualityComparer_1_t1_883;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1_31;

#include "mscorlib_System_Object.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct  DispatcherKey_t5_6  : public Object_t
{
	// System.Type Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_type
	Type_t * ____type_1;
	// System.String Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_name
	String_t* ____name_2;
	// System.Type[] Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_arguments
	TypeU5BU5D_t1_31* ____arguments_3;
};
struct DispatcherKey_t5_6_StaticFields{
	// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey> Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::EqualityComparer
	Object_t* ___EqualityComparer_0;
};
