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

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t3_88;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3_11;
// System.String[]
struct StringU5BU5D_t1_202;
// System.Text.RegularExpressions.Match
struct Match_t3_13;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t3_87;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t3_154;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C" void BaseMachine__ctor_m3_455 (BaseMachine_t3_88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_Replace_m3_456 (BaseMachine_t3_88 * __this, Regex_t3_11 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.BaseMachine::Split(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" StringU5BU5D_t1_202* BaseMachine_Split_m3_457 (BaseMachine_t3_88 * __this, Regex_t3_11 * ___regex, String_t* ___input, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t3_13 * BaseMachine_Scan_m3_458 (BaseMachine_t3_88 * __this, Regex_t3_11 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C" String_t* BaseMachine_LTRReplace_m3_459 (BaseMachine_t3_88 * __this, Regex_t3_11 * ___regex, String_t* ___input, MatchAppendEvaluator_t3_87 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_RTLReplace_m3_460 (BaseMachine_t3_88 * __this, Regex_t3_11 * ___regex, String_t* ___input, MatchEvaluator_t3_154 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
