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

// Spine.AtlasRegion
struct AtlasRegion_t3803683715;
// Spine.Attachment
struct Attachment_t2584075367;
// Spine.RegionAttachment
struct RegionAttachment_t3278399543;
// Spine.MeshAttachment
struct MeshAttachment_t1666512816;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Material
struct Material_t193706927;
// Spine.AtlasPage
struct AtlasPage_t1041509742;
// UnityEngine.Shader
struct Shader_t2430389951;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Attachment2584075367.h"
#include "AssemblyU2DCSharp_Spine_RegionAttachment3278399543.h"
#include "AssemblyU2DCSharp_Spine_MeshAttachment1666512816.h"
#include "AssemblyU2DCSharp_Spine_AtlasRegion3803683715.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharp_Spine_AtlasPage1041509742.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::GetRegion(Spine.Attachment)
extern "C"  AtlasRegion_t3803683715 * AttachmentRegionExtensions_GetRegion_m2787954222 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___attachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::GetRegion(Spine.RegionAttachment)
extern "C"  AtlasRegion_t3803683715 * AttachmentRegionExtensions_GetRegion_m2200983470 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::GetRegion(Spine.MeshAttachment)
extern "C"  AtlasRegion_t3803683715 * AttachmentRegionExtensions_GetRegion_m3296625509 (Il2CppObject * __this /* static, unused */, MeshAttachment_t1666512816 * ___meshAttachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.Attachment,Spine.AtlasRegion,System.Boolean)
extern "C"  void AttachmentRegionExtensions_SetRegion_m694044808 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___attachment0, AtlasRegion_t3803683715 * ___region1, bool ___updateOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.RegionAttachment,Spine.AtlasRegion,System.Boolean)
extern "C"  void AttachmentRegionExtensions_SetRegion_m1116036216 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___attachment0, AtlasRegion_t3803683715 * ___region1, bool ___updateOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.MeshAttachment,Spine.AtlasRegion,System.Boolean)
extern "C"  void AttachmentRegionExtensions_SetRegion_m3024597401 (Il2CppObject * __this /* static, unused */, MeshAttachment_t1666512816 * ___attachment0, AtlasRegion_t3803683715 * ___region1, bool ___updateUVs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(UnityEngine.Sprite,UnityEngine.Material)
extern "C"  RegionAttachment_t3278399543 * AttachmentRegionExtensions_ToRegionAttachment_m2690702118 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___sprite0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(UnityEngine.Sprite,Spine.AtlasPage)
extern "C"  RegionAttachment_t3278399543 * AttachmentRegionExtensions_ToRegionAttachment_m2933085667 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___sprite0, AtlasPage_t1041509742 * ___page1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachmentPMAClone(UnityEngine.Sprite,UnityEngine.Shader)
extern "C"  RegionAttachment_t3278399543 * AttachmentRegionExtensions_ToRegionAttachmentPMAClone_m2163559949 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___sprite0, Shader_t2430389951 * ___shader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(Spine.AtlasRegion,System.String,System.Single)
extern "C"  RegionAttachment_t3278399543 * AttachmentRegionExtensions_ToRegionAttachment_m487919881 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, String_t* ___attachmentName1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetScale(Spine.RegionAttachment,UnityEngine.Vector2)
extern "C"  void AttachmentRegionExtensions_SetScale_m3642613837 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, Vector2_t2243707579  ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetScale(Spine.RegionAttachment,System.Single,System.Single)
extern "C"  void AttachmentRegionExtensions_SetScale_m2427525637 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetPositionOffset(Spine.RegionAttachment,UnityEngine.Vector2)
extern "C"  void AttachmentRegionExtensions_SetPositionOffset_m815789969 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, Vector2_t2243707579  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetPositionOffset(Spine.RegionAttachment,System.Single,System.Single)
extern "C"  void AttachmentRegionExtensions_SetPositionOffset_m3516158257 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetRotation(Spine.RegionAttachment,System.Single)
extern "C"  void AttachmentRegionExtensions_SetRotation_m3578956498 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, float ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
