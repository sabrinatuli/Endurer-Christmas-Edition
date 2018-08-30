﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.TimeZone
struct TimeZone_t1_765;
// System.Globalization.DaylightTime
struct DaylightTime_t1_212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m1_5403 (TimeZone_t1_765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m1_5404 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1_765 * TimeZone_get_CurrentTimeZone_m1_5405 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m1_5406 (TimeZone_t1_765 * __this, DateTime_t1_129  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m1_5407 (Object_t * __this /* static, unused */, DateTime_t1_129  ___time, DaylightTime_t1_212 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t1_129  TimeZone_ToLocalTime_m1_5408 (TimeZone_t1_765 * __this, DateTime_t1_129  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t1_129  TimeZone_ToUniversalTime_m1_5409 (TimeZone_t1_765 * __this, DateTime_t1_129  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t1_213  TimeZone_GetLocalTimeDiff_m1_5410 (TimeZone_t1_765 * __this, DateTime_t1_129  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t1_213  TimeZone_GetLocalTimeDiff_m1_5411 (TimeZone_t1_765 * __this, DateTime_t1_129  ___time, TimeSpan_t1_213  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;