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

// Spine.DeformTimeline
struct DeformTimeline_t3600846982;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Single[][]
struct SingleU5BU5DU5BU5D_t2115305192;
// Spine.VertexAttachment
struct VertexAttachment_t2755655897;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_VertexAttachment2755655897.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.DeformTimeline::.ctor(System.Int32)
extern "C"  void DeformTimeline__ctor_m1981473073 (DeformTimeline_t3600846982 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DeformTimeline::get_SlotIndex()
extern "C"  int32_t DeformTimeline_get_SlotIndex_m3055679969 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_SlotIndex(System.Int32)
extern "C"  void DeformTimeline_set_SlotIndex_m159895390 (DeformTimeline_t3600846982 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.DeformTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* DeformTimeline_get_Frames_m67235711 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_Frames(System.Single[])
extern "C"  void DeformTimeline_set_Frames_m1189933690 (DeformTimeline_t3600846982 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[][] Spine.DeformTimeline::get_Vertices()
extern "C"  SingleU5BU5DU5BU5D_t2115305192* DeformTimeline_get_Vertices_m4028686902 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_Vertices(System.Single[][])
extern "C"  void DeformTimeline_set_Vertices_m1413341785 (DeformTimeline_t3600846982 * __this, SingleU5BU5DU5BU5D_t2115305192* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.VertexAttachment Spine.DeformTimeline::get_Attachment()
extern "C"  VertexAttachment_t2755655897 * DeformTimeline_get_Attachment_m4239351173 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_Attachment(Spine.VertexAttachment)
extern "C"  void DeformTimeline_set_Attachment_m1765576514 (DeformTimeline_t3600846982 * __this, VertexAttachment_t2755655897 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DeformTimeline::get_PropertyId()
extern "C"  int32_t DeformTimeline_get_PropertyId_m3410185801 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::SetFrame(System.Int32,System.Single,System.Single[])
extern "C"  void DeformTimeline_SetFrame_m2030954158 (DeformTimeline_t3600846982 * __this, int32_t ___frameIndex0, float ___time1, SingleU5BU5D_t577127397* ___vertices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void DeformTimeline_Apply_m1060255870 (DeformTimeline_t3600846982 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
