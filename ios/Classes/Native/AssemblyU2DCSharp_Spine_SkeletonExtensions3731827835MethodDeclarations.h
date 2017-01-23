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

// Spine.VertexAttachment
struct VertexAttachment_t2755655897;
// Spine.Animation
struct Animation_t4237671184;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;
// Spine.Slot
struct Slot_t306639170;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_VertexAttachment2755655897.h"
#include "AssemblyU2DCSharp_Spine_TransformMode1744404211.h"
#include "AssemblyU2DCSharp_Spine_Animation4237671184.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharp_Spine_Slot306639170.h"
#include "mscorlib_System_String2029220233.h"

// System.Boolean Spine.SkeletonExtensions::IsWeighted(Spine.VertexAttachment)
extern "C"  bool SkeletonExtensions_IsWeighted_m2492964442 (Il2CppObject * __this /* static, unused */, VertexAttachment_t2755655897 * ___va0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonExtensions::InheritsRotation(Spine.TransformMode)
extern "C"  bool SkeletonExtensions_InheritsRotation_m680586553 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonExtensions::InheritsScale(Spine.TransformMode)
extern "C"  bool SkeletonExtensions_InheritsScale_m2214482533 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::Apply(Spine.Animation,Spine.Skeleton,System.Single,System.Single,System.Boolean,Spine.ExposedList`1<Spine.Event>)
extern "C"  void SkeletonExtensions_Apply_m3340526832 (Il2CppObject * __this /* static, unused */, Animation_t4237671184 * ___animation0, Skeleton_t1387859465 * ___skeleton1, float ___lastTime2, float ___time3, bool ___loop4, ExposedList_1_t876769054 * ___events5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetDrawOrderToSetupPose(Spine.Skeleton)
extern "C"  void SkeletonExtensions_SetDrawOrderToSetupPose_m2090304756 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetColorToSetupPose(Spine.Slot)
extern "C"  void SkeletonExtensions_SetColorToSetupPose_m1585840174 (Il2CppObject * __this /* static, unused */, Slot_t306639170 * ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetAttachmentToSetupPose(Spine.Slot)
extern "C"  void SkeletonExtensions_SetAttachmentToSetupPose_m2992736544 (Il2CppObject * __this /* static, unused */, Slot_t306639170 * ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetSlotAttachmentToSetupPose(Spine.Skeleton,System.Int32)
extern "C"  void SkeletonExtensions_SetSlotAttachmentToSetupPose_m859665732 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, int32_t ___slotIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::PoseWithAnimation(Spine.Skeleton,System.String,System.Single,System.Boolean)
extern "C"  void SkeletonExtensions_PoseWithAnimation_m1727404510 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, String_t* ___animationName1, float ___time2, bool ___loop3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetKeyedItemsToSetupPose(Spine.Animation,Spine.Skeleton)
extern "C"  void SkeletonExtensions_SetKeyedItemsToSetupPose_m1886456443 (Il2CppObject * __this /* static, unused */, Animation_t4237671184 * ___animation0, Skeleton_t1387859465 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
