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

// UnityEngine.Mesh
struct Mesh_t7_29;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t7_101;
// UnityEngine.Texture
struct Texture_t7_36;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;
// UnityEngine.Material
struct Material_t7_38;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t7_334;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_MeshTopology.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"
#include "UnityEngine_UnityEngine_RenderBuffer.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C" void Graphics_DrawMeshNow_m7_179 (Object_t * __this /* static, unused */, Mesh_t7_29 * ___mesh, Matrix4x4_t7_68  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow2_m7_180 (Object_t * __this /* static, unused */, Mesh_t7_29 * ___mesh, Matrix4x4_t7_68  ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m7_181 (Object_t * __this /* static, unused */, Mesh_t7_29 * ___mesh, Matrix4x4_t7_68 * ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C" void Graphics_DrawProceduralIndirect_m7_182 (Object_t * __this /* static, unused */, int32_t ___topology, ComputeBuffer_t7_101 * ___bufferWithArgs, int32_t ___argsOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C" void Graphics_DrawTexture_m7_183 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t7_34 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" void Graphics_Blit_m7_184 (Object_t * __this /* static, unused */, Texture_t7_36 * ___source, RenderTexture_t7_51 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m7_185 (Object_t * __this /* static, unused */, Texture_t7_36 * ___source, RenderTexture_t7_51 * ___dest, Material_t7_38 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m7_186 (Object_t * __this /* static, unused */, Texture_t7_36 * ___source, RenderTexture_t7_51 * ___dest, Material_t7_38 * ___mat, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m7_187 (Object_t * __this /* static, unused */, Texture_t7_36 * ___source, RenderTexture_t7_51 * ___dest, Material_t7_38 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_BlitMultiTap_m7_188 (Object_t * __this /* static, unused */, Texture_t7_36 * ___source, RenderTexture_t7_51 * ___dest, Material_t7_38 * ___mat, Vector2U5BU5D_t7_334* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_Internal_BlitMultiTap_m7_189 (Object_t * __this /* static, unused */, Texture_t7_36 * ___source, RenderTexture_t7_51 * ___dest, Material_t7_38 * ___mat, Vector2U5BU5D_t7_334* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C" void Graphics_Internal_SetNullRT_m7_190 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,System.Int32)
extern "C" void Graphics_Internal_SetRTSimple_m7_191 (Object_t * __this /* static, unused */, RenderBuffer_t7_258 * ___color, RenderBuffer_t7_258 * ___depth, int32_t ___mip, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_SetRandomWriteTarget_m7_192 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t7_101 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C" void Graphics_ClearRandomWriteTargets_m7_193 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_Internal_SetRandomWriteTargetBuffer_m7_194 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t7_101 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m7_195 (Object_t * __this /* static, unused */, RenderBuffer_t7_258  ___colorBuffer, RenderBuffer_t7_258  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m7_196 (Object_t * __this /* static, unused */, RenderTexture_t7_51 * ___rt, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C" void Graphics_SetRenderTarget_m7_197 (Object_t * __this /* static, unused */, RenderTexture_t7_51 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
