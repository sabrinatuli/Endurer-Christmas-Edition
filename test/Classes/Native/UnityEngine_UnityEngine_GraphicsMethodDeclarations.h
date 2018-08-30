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

// UnityEngine.Texture
struct Texture_t5_34;
// UnityEngine.RenderTexture
struct RenderTexture_t5_44;
// UnityEngine.Material
struct Material_t5_36;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"

// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C" void Graphics_DrawTexture_m5_157 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t5_32 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m5_158 (Object_t * __this /* static, unused */, Texture_t5_34 * ___source, RenderTexture_t5_44 * ___dest, Material_t5_36 * ___mat, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m5_159 (Object_t * __this /* static, unused */, Texture_t5_34 * ___source, RenderTexture_t5_44 * ___dest, Material_t5_36 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
