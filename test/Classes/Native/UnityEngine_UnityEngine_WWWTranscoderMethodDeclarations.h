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

// System.Byte[]
struct ByteU5BU5D_t1_73;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1_222;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C" void WWWTranscoder__cctor_m5_608 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C" ByteU5BU5D_t1_73* WWWTranscoder_Byte2Hex_m5_609 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t1_73* ___hexChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::URLEncode(System.String,System.Text.Encoding)
extern "C" String_t* WWWTranscoder_URLEncode_m5_610 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t1_222 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C" ByteU5BU5D_t1_73* WWWTranscoder_Encode_m5_611 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_73* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t1_73* ___forbidden, bool ___uppercase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" bool WWWTranscoder_ByteArrayContains_m5_612 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_73* ___array, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
