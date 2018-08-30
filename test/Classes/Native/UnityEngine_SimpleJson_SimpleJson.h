#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t5_215;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t5_214;

#include "mscorlib_System_Object.h"

// SimpleJson.SimpleJson
struct  SimpleJson_t5_213  : public Object_t
{
};
struct SimpleJson_t5_213_StaticFields{
	// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	Object_t * ____currentJsonSerializerStrategy_0;
	// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t5_214 * ____pocoJsonSerializerStrategy_1;
};
