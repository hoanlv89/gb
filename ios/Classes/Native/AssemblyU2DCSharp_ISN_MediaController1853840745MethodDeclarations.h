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

// ISN_MediaController
struct ISN_MediaController_t1853840745;
// System.String
struct String_t;
// System.Action`1<MP_MediaPickerResult>
struct Action_1_t2005806253;
// System.Action`1<System.Collections.Generic.List`1<MP_MediaItem>>
struct Action_1_t3196543543;
// System.Action`1<MP_MediaItem>
struct Action_1_t3827422411;
// System.Action`1<MP_MusicPlaybackState>
struct Action_1_t2166513183;
// MP_MediaItem[]
struct MP_MediaItemU5BU5D_t1927419544;
// System.String[]
struct StringU5BU5D_t1642385972;
// MP_MediaItem
struct MP_MediaItem_t4025623029;
// System.Collections.Generic.List`1<MP_MediaItem>
struct List_1_t3394744161;
// MP_MediaPickerResult
struct MP_MediaPickerResult_t2204006871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_MP_MusicRepeatMode445284825.h"
#include "AssemblyU2DCSharp_MP_MusicShuffleMode2068355741.h"
#include "AssemblyU2DCSharp_MP_MusicPlaybackState2364713801.h"
#include "AssemblyU2DCSharp_MP_MediaPickerResult2204006871.h"
#include "AssemblyU2DCSharp_MP_MediaItem4025623029.h"

// System.Void ISN_MediaController::.ctor()
extern "C"  void ISN_MediaController__ctor_m1443689952 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_InitMediaController()
extern "C"  void ISN_MediaController__ISN_InitMediaController_m4119829654 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SetRepeatMode(System.Int32)
extern "C"  void ISN_MediaController__ISN_SetRepeatMode_m101865027 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SetShuffleMode(System.Int32)
extern "C"  void ISN_MediaController__ISN_SetShuffleMode_m2859247295 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_Play()
extern "C"  void ISN_MediaController__ISN_Play_m1686921216 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_Pause()
extern "C"  void ISN_MediaController__ISN_Pause_m4221452814 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SkipToNextItem()
extern "C"  void ISN_MediaController__ISN_SkipToNextItem_m3742722738 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SkipToBeginning()
extern "C"  void ISN_MediaController__ISN_SkipToBeginning_m3115887479 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SkipToPreviousItem()
extern "C"  void ISN_MediaController__ISN_SkipToPreviousItem_m1237999610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_ShowMediaPicker()
extern "C"  void ISN_MediaController__ISN_ShowMediaPicker_m3098075113 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SetCollection(System.String)
extern "C"  void ISN_MediaController__ISN_SetCollection_m454459334 (Il2CppObject * __this /* static, unused */, String_t* ___itemsIds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::add_ActionMediaPickerResult(System.Action`1<MP_MediaPickerResult>)
extern "C"  void ISN_MediaController_add_ActionMediaPickerResult_m95462474 (Il2CppObject * __this /* static, unused */, Action_1_t2005806253 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::remove_ActionMediaPickerResult(System.Action`1<MP_MediaPickerResult>)
extern "C"  void ISN_MediaController_remove_ActionMediaPickerResult_m3950969687 (Il2CppObject * __this /* static, unused */, Action_1_t2005806253 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::add_ActionQueueUpdated(System.Action`1<System.Collections.Generic.List`1<MP_MediaItem>>)
extern "C"  void ISN_MediaController_add_ActionQueueUpdated_m667123587 (Il2CppObject * __this /* static, unused */, Action_1_t3196543543 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::remove_ActionQueueUpdated(System.Action`1<System.Collections.Generic.List`1<MP_MediaItem>>)
extern "C"  void ISN_MediaController_remove_ActionQueueUpdated_m2190092012 (Il2CppObject * __this /* static, unused */, Action_1_t3196543543 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::add_ActionNowPlayingItemChanged(System.Action`1<MP_MediaItem>)
extern "C"  void ISN_MediaController_add_ActionNowPlayingItemChanged_m2031842862 (Il2CppObject * __this /* static, unused */, Action_1_t3827422411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::remove_ActionNowPlayingItemChanged(System.Action`1<MP_MediaItem>)
extern "C"  void ISN_MediaController_remove_ActionNowPlayingItemChanged_m1474147979 (Il2CppObject * __this /* static, unused */, Action_1_t3827422411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::add_ActionPlaybackStateChanged(System.Action`1<MP_MusicPlaybackState>)
extern "C"  void ISN_MediaController_add_ActionPlaybackStateChanged_m1766531375 (Il2CppObject * __this /* static, unused */, Action_1_t2166513183 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::remove_ActionPlaybackStateChanged(System.Action`1<MP_MusicPlaybackState>)
extern "C"  void ISN_MediaController_remove_ActionPlaybackStateChanged_m1197236862 (Il2CppObject * __this /* static, unused */, Action_1_t2166513183 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::Awake()
extern "C"  void ISN_MediaController_Awake_m2848549049 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SetRepeatMode(MP_MusicRepeatMode)
extern "C"  void ISN_MediaController_SetRepeatMode_m6742897 (ISN_MediaController_t1853840745 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SetShuffleMode(MP_MusicShuffleMode)
extern "C"  void ISN_MediaController_SetShuffleMode_m65233961 (ISN_MediaController_t1853840745 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::Play()
extern "C"  void ISN_MediaController_Play_m1493826672 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::Pause()
extern "C"  void ISN_MediaController_Pause_m4043662978 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SkipToNextItem()
extern "C"  void ISN_MediaController_SkipToNextItem_m4176558826 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SkipToBeginning()
extern "C"  void ISN_MediaController_SkipToBeginning_m405139855 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SkipToPreviousItem()
extern "C"  void ISN_MediaController_SkipToPreviousItem_m879865374 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::ShowMediaPicker()
extern "C"  void ISN_MediaController_ShowMediaPicker_m3758552061 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SetCollection(MP_MediaItem[])
extern "C"  void ISN_MediaController_SetCollection_m3602726473 (ISN_MediaController_t1853840745 * __this, MP_MediaItemU5BU5D_t1927419544* ___items0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SetCollection(System.String[])
extern "C"  void ISN_MediaController_SetCollection_m219161326 (ISN_MediaController_t1853840745 * __this, StringU5BU5D_t1642385972* ___itemIds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MP_MediaItem ISN_MediaController::get_NowPlayingItem()
extern "C"  MP_MediaItem_t4025623029 * ISN_MediaController_get_NowPlayingItem_m2239536610 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MP_MediaItem> ISN_MediaController::get_CurrentQueue()
extern "C"  List_1_t3394744161 * ISN_MediaController_get_CurrentQueue_m3858907343 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MP_MusicPlaybackState ISN_MediaController::get_State()
extern "C"  int32_t ISN_MediaController_get_State_m4042625584 (ISN_MediaController_t1853840745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MP_MediaItem> ISN_MediaController::ParseMediaItemsList(System.String[],System.Int32)
extern "C"  List_1_t3394744161 * ISN_MediaController_ParseMediaItemsList_m555296018 (ISN_MediaController_t1853840745 * __this, StringU5BU5D_t1642385972* ___data0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MP_MediaItem ISN_MediaController::ParseMediaItemData(System.String[],System.Int32)
extern "C"  MP_MediaItem_t4025623029 * ISN_MediaController_ParseMediaItemData_m4026777553 (ISN_MediaController_t1853840745 * __this, StringU5BU5D_t1642385972* ___data0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnQueueUpdate(System.String)
extern "C"  void ISN_MediaController_OnQueueUpdate_m3595275743 (ISN_MediaController_t1853840745 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnMediaPickerResult(System.String)
extern "C"  void ISN_MediaController_OnMediaPickerResult_m2712044906 (ISN_MediaController_t1853840745 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnMediaPickerFailed(System.String)
extern "C"  void ISN_MediaController_OnMediaPickerFailed_m3432040718 (ISN_MediaController_t1853840745 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnNowPlayingItemchanged(System.String)
extern "C"  void ISN_MediaController_OnNowPlayingItemchanged_m3172996810 (ISN_MediaController_t1853840745 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnPlaybackStateChanged(System.String)
extern "C"  void ISN_MediaController_OnPlaybackStateChanged_m3499434705 (ISN_MediaController_t1853840745 * __this, String_t* ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::.cctor()
extern "C"  void ISN_MediaController__cctor_m2398714955 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::<ActionMediaPickerResult>m__0(MP_MediaPickerResult)
extern "C"  void ISN_MediaController_U3CActionMediaPickerResultU3Em__0_m2573880223 (Il2CppObject * __this /* static, unused */, MP_MediaPickerResult_t2204006871 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::<ActionQueueUpdated>m__1(System.Collections.Generic.List`1<MP_MediaItem>)
extern "C"  void ISN_MediaController_U3CActionQueueUpdatedU3Em__1_m892846085 (Il2CppObject * __this /* static, unused */, List_1_t3394744161 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::<ActionNowPlayingItemChanged>m__2(MP_MediaItem)
extern "C"  void ISN_MediaController_U3CActionNowPlayingItemChangedU3Em__2_m3303769977 (Il2CppObject * __this /* static, unused */, MP_MediaItem_t4025623029 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::<ActionPlaybackStateChanged>m__3(MP_MusicPlaybackState)
extern "C"  void ISN_MediaController_U3CActionPlaybackStateChangedU3Em__3_m3377435907 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
