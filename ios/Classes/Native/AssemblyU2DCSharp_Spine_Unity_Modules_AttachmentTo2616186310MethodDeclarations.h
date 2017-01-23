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

// Spine.AtlasPage
struct AtlasPage_t1041509742;
// UnityEngine.Material
struct Material_t193706927;
// Spine.AtlasRegion
struct AtlasRegion_t3803683715;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Shader
struct Shader_t2430389951;
// Spine.Skin
struct Skin_t730126667;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// Spine.Attachment
struct Attachment_t2584075367;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "AssemblyU2DCSharp_Spine_AtlasPage1041509742.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "AssemblyU2DCSharp_Spine_Skin730126667.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "AssemblyU2DCSharp_Spine_AtlasRegion3803683715.h"
#include "AssemblyU2DCSharp_Spine_Attachment2584075367.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// Spine.AtlasPage Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToSpineAtlasPage(UnityEngine.Material)
extern "C"  AtlasPage_t1041509742 * SpriteAtlasRegionExtensions_ToSpineAtlasPage_m2606006586 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegion(UnityEngine.Sprite,Spine.AtlasPage)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegion_m3014554834 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, AtlasPage_t1041509742 * ___page1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegion(UnityEngine.Sprite,UnityEngine.Material)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegion_m3107969159 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegionPMAClone(UnityEngine.Sprite,UnityEngine.Shader)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegionPMAClone_m1045307374 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, Shader_t2430389951 * ___shader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegion(UnityEngine.Sprite,System.Boolean)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegion_m1844246220 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, bool ___isolatedTexture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetRepackedSkin(Spine.Skin,System.String,UnityEngine.Shader,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32)
extern "C"  Skin_t730126667 * SpriteAtlasRegionExtensions_GetRepackedSkin_m3341097353 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___o0, String_t* ___newName1, Shader_t2430389951 * ___shader2, Material_t193706927 ** ___m3, Texture2D_t3542995729 ** ___t4, int32_t ___maxAtlasSize5, int32_t ___padding6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToSprite(Spine.AtlasRegion,System.Single)
extern "C"  Sprite_t309593783 * SpriteAtlasRegionExtensions_ToSprite_m2774273900 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___ar0, float ___pixelsPerUnit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToTexture(Spine.AtlasRegion,System.Boolean)
extern "C"  Texture2D_t3542995729 * SpriteAtlasRegionExtensions_ToTexture_m1719773062 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___ar0, bool ___applyImmediately1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToTexture(UnityEngine.Sprite,System.Boolean)
extern "C"  Texture2D_t3542995729 * SpriteAtlasRegionExtensions_ToTexture_m2603483438 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, bool ___applyImmediately1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::IsRenderable(Spine.Attachment)
extern "C"  bool SpriteAtlasRegionExtensions_IsRenderable_m1544139434 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::SpineUnityFlipRect(UnityEngine.Rect,System.Int32)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_SpineUnityFlipRect_m3935137109 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, int32_t ___textureHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetUnityRect(Spine.AtlasRegion)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_GetUnityRect_m4165329031 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetUnityRect(Spine.AtlasRegion,System.Int32)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_GetUnityRect_m1860702086 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, int32_t ___textureHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetSpineAtlasRect(Spine.AtlasRegion,System.Boolean)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_GetSpineAtlasRect_m3242706001 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, bool ___includeRotate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::UVRectToTextureRect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_UVRectToTextureRect_m1797876412 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___uvRect0, int32_t ___texWidth1, int32_t ___texHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::TextureRectToUVRect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_TextureRectToUVRect_m1427937660 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___textureRect0, int32_t ___texWidth1, int32_t ___texHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::UVRectToAtlasRegion(UnityEngine.Rect,System.String,Spine.AtlasPage,System.Single,System.Single,System.Boolean)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_UVRectToAtlasRegion_m3047643127 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___uvRect0, String_t* ___name1, AtlasPage_t1041509742 * ___page2, float ___offsetX3, float ___offsetY4, bool ___rotate5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetAtlasRegion(Spine.Attachment)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_GetAtlasRegion_m1356936430 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetMainTexture(Spine.AtlasRegion)
extern "C"  Texture2D_t3542995729 * SpriteAtlasRegionExtensions_GetMainTexture_m2612123717 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ApplyPMA(UnityEngine.Texture2D,System.Boolean)
extern "C"  void SpriteAtlasRegionExtensions_ApplyPMA_m2591970667 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, bool ___applyImmediately1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float SpriteAtlasRegionExtensions_InverseLerp_m2861836400 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
