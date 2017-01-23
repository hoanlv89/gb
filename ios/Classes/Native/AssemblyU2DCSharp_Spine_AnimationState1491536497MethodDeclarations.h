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

// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.AnimationStateData
struct AnimationStateData_t3672895841;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t3162965251;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t737668607;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t818460179;
// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.RotateTimeline
struct RotateTimeline_t2591156164;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.String
struct String_t;
// Spine.Animation
struct Animation_t4237671184;
// Spine.Event
struct Event_t1819867114;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationStateData3672895841.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_TrackEntryDe737668607.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_TrackEntryEv818460179.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry4106063311.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharp_Spine_RotateTimeline2591156164.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Spine_Animation4237671184.h"
#include "AssemblyU2DCSharp_Spine_Event1819867114.h"

// System.Void Spine.AnimationState::.ctor(Spine.AnimationStateData)
extern "C"  void AnimationState__ctor_m3133765403 (AnimationState_t1491536497 * __this, AnimationStateData_t3672895841 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AnimationStateData Spine.AnimationState::get_Data()
extern "C"  AnimationStateData_t3672895841 * AnimationState_get_Data_m49875813 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::get_Tracks()
extern "C"  ExposedList_1_t3162965251 * AnimationState_get_Tracks_m1057763389 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.AnimationState::get_TimeScale()
extern "C"  float AnimationState_get_TimeScale_m1468988347 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::set_TimeScale(System.Single)
extern "C"  void AnimationState_set_TimeScale_m2082544526 (AnimationState_t1491536497 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Start(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_Start_m420457110 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Start(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_Start_m3309404889 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Event(Spine.AnimationState/TrackEntryEventDelegate)
extern "C"  void AnimationState_add_Event_m884166454 (AnimationState_t1491536497 * __this, TrackEntryEventDelegate_t818460179 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Event(Spine.AnimationState/TrackEntryEventDelegate)
extern "C"  void AnimationState_remove_Event_m2129576817 (AnimationState_t1491536497 * __this, TrackEntryEventDelegate_t818460179 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::HandleAnimationsChanged()
extern "C"  void AnimationState_HandleAnimationsChanged_m3496202820 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::Update(System.Single)
extern "C"  void AnimationState_Update_m906366681 (AnimationState_t1491536497 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::UpdateMixingFrom(Spine.TrackEntry,System.Single)
extern "C"  void AnimationState_UpdateMixingFrom_m1385654251 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, float ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::Apply(Spine.Skeleton)
extern "C"  void AnimationState_Apply_m220423395 (AnimationState_t1491536497 * __this, Skeleton_t1387859465 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.AnimationState::ApplyMixingFrom(Spine.TrackEntry,Spine.Skeleton)
extern "C"  float AnimationState_ApplyMixingFrom_m850023751 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, Skeleton_t1387859465 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::ApplyRotateTimeline(Spine.RotateTimeline,Spine.Skeleton,System.Single,System.Single,System.Boolean,System.Single[],System.Int32,System.Boolean)
extern "C"  void AnimationState_ApplyRotateTimeline_m1454070778 (Il2CppObject * __this /* static, unused */, RotateTimeline_t2591156164 * ___rotateTimeline0, Skeleton_t1387859465 * ___skeleton1, float ___time2, float ___alpha3, bool ___setupPose4, SingleU5BU5D_t577127397* ___timelinesRotation5, int32_t ___i6, bool ___firstFrame7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::QueueEvents(Spine.TrackEntry,System.Single)
extern "C"  void AnimationState_QueueEvents_m2353625592 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, float ___animationTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::ClearTracks()
extern "C"  void AnimationState_ClearTracks_m3274896230 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::ClearTrack(System.Int32)
extern "C"  void AnimationState_ClearTrack_m3774191866 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::SetCurrent(System.Int32,Spine.TrackEntry,System.Boolean)
extern "C"  void AnimationState_SetCurrent_m534121316 (AnimationState_t1491536497 * __this, int32_t ___index0, TrackEntry_t4106063311 * ___current1, bool ___interrupt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::SetAnimation(System.Int32,System.String,System.Boolean)
extern "C"  TrackEntry_t4106063311 * AnimationState_SetAnimation_m3052035168 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, String_t* ___animationName1, bool ___loop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::SetAnimation(System.Int32,Spine.Animation,System.Boolean)
extern "C"  TrackEntry_t4106063311 * AnimationState_SetAnimation_m47942749 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, Animation_t4237671184 * ___animation1, bool ___loop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::AddAnimation(System.Int32,System.String,System.Boolean,System.Single)
extern "C"  TrackEntry_t4106063311 * AnimationState_AddAnimation_m1663809652 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, String_t* ___animationName1, bool ___loop2, float ___delay3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::AddAnimation(System.Int32,Spine.Animation,System.Boolean,System.Single)
extern "C"  TrackEntry_t4106063311 * AnimationState_AddAnimation_m187137587 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, Animation_t4237671184 * ___animation1, bool ___loop2, float ___delay3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::SetEmptyAnimation(System.Int32,System.Single)
extern "C"  TrackEntry_t4106063311 * AnimationState_SetEmptyAnimation_m1071159467 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, float ___mixDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::AddEmptyAnimation(System.Int32,System.Single,System.Single)
extern "C"  TrackEntry_t4106063311 * AnimationState_AddEmptyAnimation_m4057598701 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, float ___mixDuration1, float ___delay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::SetEmptyAnimations(System.Single)
extern "C"  void AnimationState_SetEmptyAnimations_m3111256030 (AnimationState_t1491536497 * __this, float ___mixDuration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::ExpandToIndex(System.Int32)
extern "C"  TrackEntry_t4106063311 * AnimationState_ExpandToIndex_m3799138702 (AnimationState_t1491536497 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::NewTrackEntry(System.Int32,Spine.Animation,System.Boolean,Spine.TrackEntry)
extern "C"  TrackEntry_t4106063311 * AnimationState_NewTrackEntry_m3037609502 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, Animation_t4237671184 * ___animation1, bool ___loop2, TrackEntry_t4106063311 * ___last3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::DisposeNext(Spine.TrackEntry)
extern "C"  void AnimationState_DisposeNext_m345186233 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::AnimationsChanged()
extern "C"  void AnimationState_AnimationsChanged_m1457924714 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::SetTimelinesFirst(Spine.TrackEntry)
extern "C"  void AnimationState_SetTimelinesFirst_m3192798377 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::CheckTimelinesFirst(Spine.TrackEntry)
extern "C"  void AnimationState_CheckTimelinesFirst_m2210069545 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::CheckTimelinesUsage(Spine.TrackEntry)
extern "C"  void AnimationState_CheckTimelinesUsage_m2944425458 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::GetCurrent(System.Int32)
extern "C"  TrackEntry_t4106063311 * AnimationState_GetCurrent_m2209671570 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.AnimationState::ToString()
extern "C"  String_t* AnimationState_ToString_m3321129754 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnStart(Spine.TrackEntry)
extern "C"  void AnimationState_OnStart_m2406458498 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnInterrupt(Spine.TrackEntry)
extern "C"  void AnimationState_OnInterrupt_m1585340479 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnEnd(Spine.TrackEntry)
extern "C"  void AnimationState_OnEnd_m175665875 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnDispose(Spine.TrackEntry)
extern "C"  void AnimationState_OnDispose_m3103813595 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnComplete(Spine.TrackEntry)
extern "C"  void AnimationState_OnComplete_m2358536801 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnEvent(Spine.TrackEntry,Spine.Event)
extern "C"  void AnimationState_OnEvent_m1295276515 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Interrupt(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_Interrupt_m2052493153 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Interrupt(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_Interrupt_m2855434822 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_End(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_End_m298844401 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_End(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_End_m76740748 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Dispose(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_Dispose_m2880404929 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Dispose(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_Dispose_m496396708 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Complete(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_Complete_m2232346627 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Complete(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_Complete_m1661642520 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::.cctor()
extern "C"  void AnimationState__cctor_m3247922386 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
