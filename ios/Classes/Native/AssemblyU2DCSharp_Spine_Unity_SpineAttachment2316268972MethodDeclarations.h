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

// Spine.Unity.SpineAttachment
struct SpineAttachment_t2316268972;
// System.String
struct String_t;
// Spine.Attachment
struct Attachment_t2584075367;
// Spine.SkeletonData
struct SkeletonData_t548167897;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Spine_Unity_SpineAttachment_Hier1199866616.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData548167897.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonDataAsset901153269.h"

// System.Void Spine.Unity.SpineAttachment::.ctor(System.Boolean,System.Boolean,System.Boolean,System.String,System.String)
extern "C"  void SpineAttachment__ctor_m1689055236 (SpineAttachment_t2316268972 * __this, bool ___currentSkinOnly0, bool ___returnAttachmentPath1, bool ___placeholdersOnly2, String_t* ___slotField3, String_t* ___dataField4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SpineAttachment/Hierarchy Spine.Unity.SpineAttachment::GetHierarchy(System.String)
extern "C"  Hierarchy_t1199866616  SpineAttachment_GetHierarchy_m3430663475 (Il2CppObject * __this /* static, unused */, String_t* ___fullPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Unity.SpineAttachment::GetAttachment(System.String,Spine.SkeletonData)
extern "C"  Attachment_t2584075367 * SpineAttachment_GetAttachment_m1659909283 (Il2CppObject * __this /* static, unused */, String_t* ___attachmentPath0, SkeletonData_t548167897 * ___skeletonData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Unity.SpineAttachment::GetAttachment(System.String,Spine.Unity.SkeletonDataAsset)
extern "C"  Attachment_t2584075367 * SpineAttachment_GetAttachment_m87985158 (Il2CppObject * __this /* static, unused */, String_t* ___attachmentPath0, SkeletonDataAsset_t901153269 * ___skeletonDataAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
