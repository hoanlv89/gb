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

// Spine.AttachmentTimeline
struct AttachmentTimeline_t3865491660;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.AttachmentTimeline::.ctor(System.Int32)
extern "C"  void AttachmentTimeline__ctor_m1017261347 (AttachmentTimeline_t3865491660 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.AttachmentTimeline::get_SlotIndex()
extern "C"  int32_t AttachmentTimeline_get_SlotIndex_m2265011143 (AttachmentTimeline_t3865491660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::set_SlotIndex(System.Int32)
extern "C"  void AttachmentTimeline_set_SlotIndex_m314426642 (AttachmentTimeline_t3865491660 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.AttachmentTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* AttachmentTimeline_get_Frames_m1057524569 (AttachmentTimeline_t3865491660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::set_Frames(System.Single[])
extern "C"  void AttachmentTimeline_set_Frames_m2295296874 (AttachmentTimeline_t3865491660 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Spine.AttachmentTimeline::get_AttachmentNames()
extern "C"  StringU5BU5D_t1642385972* AttachmentTimeline_get_AttachmentNames_m1400636573 (AttachmentTimeline_t3865491660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::set_AttachmentNames(System.String[])
extern "C"  void AttachmentTimeline_set_AttachmentNames_m591837678 (AttachmentTimeline_t3865491660 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.AttachmentTimeline::get_FrameCount()
extern "C"  int32_t AttachmentTimeline_get_FrameCount_m1293719967 (AttachmentTimeline_t3865491660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.AttachmentTimeline::get_PropertyId()
extern "C"  int32_t AttachmentTimeline_get_PropertyId_m242590019 (AttachmentTimeline_t3865491660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::SetFrame(System.Int32,System.Single,System.String)
extern "C"  void AttachmentTimeline_SetFrame_m34958835 (AttachmentTimeline_t3865491660 * __this, int32_t ___frameIndex0, float ___time1, String_t* ___attachmentName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AttachmentTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void AttachmentTimeline_Apply_m3384350190 (AttachmentTimeline_t3865491660 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
