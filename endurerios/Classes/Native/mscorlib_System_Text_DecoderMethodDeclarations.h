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

// System.Text.Decoder
struct Decoder_t1_223;
// System.Text.DecoderFallback
struct DecoderFallback_t1_639;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1_640;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m1_4225 (Decoder_t1_223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m1_4226 (Decoder_t1_223 * __this, DecoderFallback_t1_639 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1_640 * Decoder_get_FallbackBuffer_m1_4227 (Decoder_t1_223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
