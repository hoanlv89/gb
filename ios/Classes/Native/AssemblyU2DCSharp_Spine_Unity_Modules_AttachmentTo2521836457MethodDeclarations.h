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

// Spine.Skin
struct Skin_t730126667;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.AnimationState
struct AnimationState_t1491536497;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharp_Spine_AnimationState1491536497.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Spine_Skin730126667.h"

// Spine.Skin Spine.Unity.Modules.AttachmentTools.SkinExtensions::UnshareSkin(Spine.Skeleton,System.Boolean,System.Boolean,Spine.AnimationState)
extern "C"  Skin_t730126667 * SkinExtensions_UnshareSkin_m2747605841 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, bool ___includeDefaultSkin1, bool ___unshareAttachments2, AnimationState_t1491536497 * ___state3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.Unity.Modules.AttachmentTools.SkinExtensions::GetClonedSkin(Spine.Skeleton,System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  Skin_t730126667 * SkinExtensions_GetClonedSkin_m2299580569 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, String_t* ___newSkinName1, bool ___includeDefaultSkin2, bool ___cloneAttachments3, bool ___cloneMeshesAsLinked4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.Unity.Modules.AttachmentTools.SkinExtensions::GetClone(Spine.Skin)
extern "C"  Skin_t730126667 * SkinExtensions_GetClone_m241467961 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.SkinExtensions::CopyTo(Spine.Skin,Spine.Skin,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void SkinExtensions_CopyTo_m828377098 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___source0, Skin_t730126667 * ___destination1, bool ___overwrite2, bool ___cloneAttachments3, bool ___cloneMeshesAsLinked4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
