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

// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Animation
struct Animation_t4237671184;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t737668607;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t818460179;
// Spine.Event
struct Event_t1819867114;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_TrackEntryDe737668607.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_TrackEntryEv818460179.h"
#include "AssemblyU2DCSharp_Spine_Event1819867114.h"

// System.Void Spine.TrackEntry::.ctor()
extern "C"  void TrackEntry__ctor_m2158788363 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::Reset()
extern "C"  void TrackEntry_Reset_m1086172402 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TrackEntry::get_TrackIndex()
extern "C"  int32_t TrackEntry_get_TrackIndex_m3567603157 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Animation Spine.TrackEntry::get_Animation()
extern "C"  Animation_t4237671184 * TrackEntry_get_Animation_m3533136356 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.TrackEntry::get_Loop()
extern "C"  bool TrackEntry_get_Loop_m2650820400 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Loop(System.Boolean)
extern "C"  void TrackEntry_set_Loop_m1864790517 (TrackEntry_t4106063311 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_Delay()
extern "C"  float TrackEntry_get_Delay_m1126581269 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Delay(System.Single)
extern "C"  void TrackEntry_set_Delay_m2455607686 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_TrackTime()
extern "C"  float TrackEntry_get_TrackTime_m4078756898 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_TrackTime(System.Single)
extern "C"  void TrackEntry_set_TrackTime_m3018064109 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_TrackEnd()
extern "C"  float TrackEntry_get_TrackEnd_m4222136606 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_TrackEnd(System.Single)
extern "C"  void TrackEntry_set_TrackEnd_m233846275 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AnimationStart()
extern "C"  float TrackEntry_get_AnimationStart_m364940116 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_AnimationStart(System.Single)
extern "C"  void TrackEntry_set_AnimationStart_m2036836317 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AnimationEnd()
extern "C"  float TrackEntry_get_AnimationEnd_m81563265 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AnimationLast()
extern "C"  float TrackEntry_get_AnimationLast_m644679998 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_AnimationLast(System.Single)
extern "C"  void TrackEntry_set_AnimationLast_m3091919371 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AnimationTime()
extern "C"  float TrackEntry_get_AnimationTime_m1965614111 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_TimeScale()
extern "C"  float TrackEntry_get_TimeScale_m1992372989 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_TimeScale(System.Single)
extern "C"  void TrackEntry_set_TimeScale_m3975972108 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_Alpha()
extern "C"  float TrackEntry_get_Alpha_m277014740 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Alpha(System.Single)
extern "C"  void TrackEntry_set_Alpha_m3635862407 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_EventThreshold()
extern "C"  float TrackEntry_get_EventThreshold_m1135166167 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_EventThreshold(System.Single)
extern "C"  void TrackEntry_set_EventThreshold_m3561139016 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AttachmentThreshold()
extern "C"  float TrackEntry_get_AttachmentThreshold_m604729476 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_AttachmentThreshold(System.Single)
extern "C"  void TrackEntry_set_AttachmentThreshold_m2644584901 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_DrawOrderThreshold()
extern "C"  float TrackEntry_get_DrawOrderThreshold_m1964784205 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_DrawOrderThreshold(System.Single)
extern "C"  void TrackEntry_set_DrawOrderThreshold_m2389819522 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.TrackEntry::get_Next()
extern "C"  TrackEntry_t4106063311 * TrackEntry_get_Next_m482419464 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.TrackEntry::get_IsComplete()
extern "C"  bool TrackEntry_get_IsComplete_m1691383457 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_MixTime()
extern "C"  float TrackEntry_get_MixTime_m473409457 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_MixTime(System.Single)
extern "C"  void TrackEntry_set_MixTime_m1104857386 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_MixDuration()
extern "C"  float TrackEntry_get_MixDuration_m1270043042 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_MixDuration(System.Single)
extern "C"  void TrackEntry_set_MixDuration_m3523004733 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.TrackEntry::get_MixingFrom()
extern "C"  TrackEntry_t4106063311 * TrackEntry_get_MixingFrom_m3285558315 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Start(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_Start_m3565250552 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Start(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_Start_m165646035 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Event(Spine.AnimationState/TrackEntryEventDelegate)
extern "C"  void TrackEntry_add_Event_m3752667816 (TrackEntry_t4106063311 * __this, TrackEntryEventDelegate_t818460179 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Event(Spine.AnimationState/TrackEntryEventDelegate)
extern "C"  void TrackEntry_remove_Event_m1054786187 (TrackEntry_t4106063311 * __this, TrackEntryEventDelegate_t818460179 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnStart()
extern "C"  void TrackEntry_OnStart_m827909622 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnInterrupt()
extern "C"  void TrackEntry_OnInterrupt_m3941703945 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnEnd()
extern "C"  void TrackEntry_OnEnd_m1197377945 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnDispose()
extern "C"  void TrackEntry_OnDispose_m954273961 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnComplete()
extern "C"  void TrackEntry_OnComplete_m1397318911 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnEvent(Spine.Event)
extern "C"  void TrackEntry_OnEvent_m3040559425 (TrackEntry_t4106063311 * __this, Event_t1819867114 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::ResetRotationDirections()
extern "C"  void TrackEntry_ResetRotationDirections_m2866003914 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.TrackEntry::ToString()
extern "C"  String_t* TrackEntry_ToString_m3092571312 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Interrupt(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_Interrupt_m391877095 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Interrupt(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_Interrupt_m4232988760 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_End(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_End_m2759335371 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_End(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_End_m3856703274 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Dispose(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_Dispose_m2377536219 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Dispose(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_Dispose_m96248130 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Complete(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_Complete_m2178280357 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Complete(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_Complete_m1412786098 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
