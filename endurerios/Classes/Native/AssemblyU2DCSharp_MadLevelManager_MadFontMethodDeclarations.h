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

// MadLevelManager.MadFont
struct MadFont_t11_183;
// MadLevelManager.MadFontData
struct MadFontData_t11_184;
// MadLevelManager.MadFont/Glyph
struct Glyph_t11_180;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadFont::.ctor()
extern "C" void MadFont__ctor_m11_1090 (MadFont_t11_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadFontData MadLevelManager.MadFont::get_data()
extern "C" MadFontData_t11_184 * MadFont_get_data_m11_1091 (MadFont_t11_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadFont::get_textureAspect()
extern "C" float MadFont_get_textureAspect_m11_1092 (MadFont_t11_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadFont::get_initialized()
extern "C" bool MadFont_get_initialized_m11_1093 (MadFont_t11_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFont::set_initialized(System.Boolean)
extern "C" void MadFont_set_initialized_m11_1094 (MadFont_t11_183 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadFont::get_dirty()
extern "C" bool MadFont_get_dirty_m11_1095 (MadFont_t11_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFont::set_dirty(System.Boolean)
extern "C" void MadFont_set_dirty_m11_1096 (MadFont_t11_183 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadFont::GetHashCode()
extern "C" int32_t MadFont_GetHashCode_m11_1097 (MadFont_t11_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadFont/Glyph MadLevelManager.MadFont::GlyphFor(System.Char)
extern "C" Glyph_t11_180 * MadFont_GlyphFor_m11_1098 (MadFont_t11_183 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadFont/Glyph MadLevelManager.MadFont::Space()
extern "C" Glyph_t11_180 * MadFont_Space_m11_1099 (MadFont_t11_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
