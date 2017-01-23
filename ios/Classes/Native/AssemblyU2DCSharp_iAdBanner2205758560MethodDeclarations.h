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

// iAdBanner
struct iAdBanner_t2205758560;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAnchor112990806.h"
#include "System_Core_System_Action3226471752.h"

// System.Void iAdBanner::.ctor(UnityEngine.TextAnchor,System.Int32)
extern "C"  void iAdBanner__ctor_m3778275513 (iAdBanner_t2205758560 * __this, int32_t ___anchor0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void iAdBanner__ctor_m3424004724 (iAdBanner_t2205758560 * __this, int32_t ___x0, int32_t ___y1, int32_t ___id2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::_IADCreateBannerAd(System.Int32,System.Int32)
extern "C"  void iAdBanner__IADCreateBannerAd_m4053947453 (Il2CppObject * __this /* static, unused */, int32_t ___gravity0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::_IADCreateBannerAdPos(System.Int32,System.Int32,System.Int32)
extern "C"  void iAdBanner__IADCreateBannerAdPos_m3243616320 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t ___id2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::_IADShowAd(System.Int32)
extern "C"  void iAdBanner__IADShowAd_m2376854699 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::_IADHideAd(System.Int32)
extern "C"  void iAdBanner__IADHideAd_m1596708650 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_AdLoadedAction(System.Action)
extern "C"  void iAdBanner_add_AdLoadedAction_m4262491036 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_AdLoadedAction(System.Action)
extern "C"  void iAdBanner_remove_AdLoadedAction_m2961843343 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_FailToReceiveAdAction(System.Action)
extern "C"  void iAdBanner_add_FailToReceiveAdAction_m1636558933 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_FailToReceiveAdAction(System.Action)
extern "C"  void iAdBanner_remove_FailToReceiveAdAction_m9838572 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_AdWiewLoadedAction(System.Action)
extern "C"  void iAdBanner_add_AdWiewLoadedAction_m858191028 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_AdWiewLoadedAction(System.Action)
extern "C"  void iAdBanner_remove_AdWiewLoadedAction_m2562449371 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_AdViewActionBeginAction(System.Action)
extern "C"  void iAdBanner_add_AdViewActionBeginAction_m555384687 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_AdViewActionBeginAction(System.Action)
extern "C"  void iAdBanner_remove_AdViewActionBeginAction_m3763071728 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_AdViewFinishedAction(System.Action)
extern "C"  void iAdBanner_add_AdViewFinishedAction_m106155754 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_AdViewFinishedAction(System.Action)
extern "C"  void iAdBanner_remove_AdViewFinishedAction_m4235435883 (iAdBanner_t2205758560 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::Hide()
extern "C"  void iAdBanner_Hide_m1279103991 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::Show()
extern "C"  void iAdBanner_Show_m2243488598 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iAdBanner::get_id()
extern "C"  int32_t iAdBanner_get_id_m3016548669 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iAdBanner::get_IsLoaded()
extern "C"  bool iAdBanner_get_IsLoaded_m2480644795 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iAdBanner::get_IsOnScreen()
extern "C"  bool iAdBanner_get_IsOnScreen_m3167228753 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iAdBanner::get_ShowOnLoad()
extern "C"  bool iAdBanner_get_ShowOnLoad_m2281711484 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::set_ShowOnLoad(System.Boolean)
extern "C"  void iAdBanner_set_ShowOnLoad_m170712393 (iAdBanner_t2205758560 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor iAdBanner::get_anchor()
extern "C"  int32_t iAdBanner_get_anchor_m3152460095 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iAdBanner::get_gravity()
extern "C"  int32_t iAdBanner_get_gravity_m2221157968 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::didFailToReceiveAdWithError()
extern "C"  void iAdBanner_didFailToReceiveAdWithError_m1671984235 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::bannerViewDidLoadAd()
extern "C"  void iAdBanner_bannerViewDidLoadAd_m2855627174 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::bannerViewWillLoadAd()
extern "C"  void iAdBanner_bannerViewWillLoadAd_m272237359 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::bannerViewActionDidFinish()
extern "C"  void iAdBanner_bannerViewActionDidFinish_m1620037094 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::bannerViewActionShouldBegin()
extern "C"  void iAdBanner_bannerViewActionShouldBegin_m3062178944 (iAdBanner_t2205758560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<AdLoadedAction>m__0()
extern "C"  void iAdBanner_U3CAdLoadedActionU3Em__0_m2641721240 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<FailToReceiveAdAction>m__1()
extern "C"  void iAdBanner_U3CFailToReceiveAdActionU3Em__1_m2566509630 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<AdWiewLoadedAction>m__2()
extern "C"  void iAdBanner_U3CAdWiewLoadedActionU3Em__2_m3199026606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<AdViewActionBeginAction>m__3()
extern "C"  void iAdBanner_U3CAdViewActionBeginActionU3Em__3_m356107436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<AdViewFinishedAction>m__4()
extern "C"  void iAdBanner_U3CAdViewFinishedActionU3Em__4_m3787035098 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
