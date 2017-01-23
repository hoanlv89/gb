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

// iAdBannerController
struct iAdBannerController_t2502498128;
// System.Action
struct Action_t3226471752;
// iAdBanner
struct iAdBanner_t2205758560;
// System.Collections.Generic.List`1<iAdBanner>
struct List_1_t1574879692;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_TextAnchor112990806.h"
#include "mscorlib_System_String2029220233.h"

// System.Void iAdBannerController::.ctor()
extern "C"  void iAdBannerController__ctor_m4248268387 (iAdBannerController_t2502498128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::_IADDestroyBanner(System.Int32)
extern "C"  void iAdBannerController__IADDestroyBanner_m2221714559 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::_IADStartInterstitialAd()
extern "C"  void iAdBannerController__IADStartInterstitialAd_m1282980747 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::_IADLoadInterstitialAd()
extern "C"  void iAdBannerController__IADLoadInterstitialAd_m3488727549 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::_IADShowInterstitialAd()
extern "C"  void iAdBannerController__IADShowInterstitialAd_m3105918260 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::add_InterstitialDidFailWithErrorAction(System.Action)
extern "C"  void iAdBannerController_add_InterstitialDidFailWithErrorAction_m192981393 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::remove_InterstitialDidFailWithErrorAction(System.Action)
extern "C"  void iAdBannerController_remove_InterstitialDidFailWithErrorAction_m8068630 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::add_InterstitialAdWillLoadAction(System.Action)
extern "C"  void iAdBannerController_add_InterstitialAdWillLoadAction_m1324071761 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::remove_InterstitialAdWillLoadAction(System.Action)
extern "C"  void iAdBannerController_remove_InterstitialAdWillLoadAction_m3424755594 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::add_InterstitialAdDidLoadAction(System.Action)
extern "C"  void iAdBannerController_add_InterstitialAdDidLoadAction_m2580892304 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::remove_InterstitialAdDidLoadAction(System.Action)
extern "C"  void iAdBannerController_remove_InterstitialAdDidLoadAction_m3640501589 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::add_InterstitialAdDidFinishAction(System.Action)
extern "C"  void iAdBannerController_add_InterstitialAdDidFinishAction_m2496851295 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::remove_InterstitialAdDidFinishAction(System.Action)
extern "C"  void iAdBannerController_remove_InterstitialAdDidFinishAction_m2090643804 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::Awake()
extern "C"  void iAdBannerController_Awake_m1296918060 (iAdBannerController_t2502498128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// iAdBanner iAdBannerController::CreateAdBanner(UnityEngine.TextAnchor)
extern "C"  iAdBanner_t2205758560 * iAdBannerController_CreateAdBanner_m1908993036 (iAdBannerController_t2502498128 * __this, int32_t ___anchor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// iAdBanner iAdBannerController::CreateAdBanner(System.Int32,System.Int32)
extern "C"  iAdBanner_t2205758560 * iAdBannerController_CreateAdBanner_m1792969925 (iAdBannerController_t2502498128 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::DestroyBanner(System.Int32)
extern "C"  void iAdBannerController_DestroyBanner_m2825064078 (iAdBannerController_t2502498128 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::StartInterstitialAd()
extern "C"  void iAdBannerController_StartInterstitialAd_m1103521336 (iAdBannerController_t2502498128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::LoadInterstitialAd()
extern "C"  void iAdBannerController_LoadInterstitialAd_m2274973876 (iAdBannerController_t2502498128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::ShowInterstitialAd()
extern "C"  void iAdBannerController_ShowInterstitialAd_m2167144979 (iAdBannerController_t2502498128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iAdBannerController::get_nextId()
extern "C"  int32_t iAdBannerController_get_nextId_m2975800000 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// iAdBanner iAdBannerController::GetBanner(System.Int32)
extern "C"  iAdBanner_t2205758560 * iAdBannerController_GetBanner_m1525889695 (iAdBannerController_t2502498128 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<iAdBanner> iAdBannerController::get_banners()
extern "C"  List_1_t1574879692 * iAdBannerController_get_banners_m699043976 (iAdBannerController_t2502498128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::didFailToReceiveAdWithError(System.String)
extern "C"  void iAdBannerController_didFailToReceiveAdWithError_m2830549809 (iAdBannerController_t2502498128 * __this, String_t* ___bannerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::bannerViewDidLoadAd(System.String)
extern "C"  void iAdBannerController_bannerViewDidLoadAd_m4226842616 (iAdBannerController_t2502498128 * __this, String_t* ___bannerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::bannerViewWillLoadAd(System.String)
extern "C"  void iAdBannerController_bannerViewWillLoadAd_m2992192461 (iAdBannerController_t2502498128 * __this, String_t* ___bannerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::bannerViewActionDidFinish(System.String)
extern "C"  void iAdBannerController_bannerViewActionDidFinish_m1401351312 (iAdBannerController_t2502498128 * __this, String_t* ___bannerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::bannerViewActionShouldBegin(System.String)
extern "C"  void iAdBannerController_bannerViewActionShouldBegin_m1132649278 (iAdBannerController_t2502498128 * __this, String_t* ___bannerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::interstitialdidFailWithError(System.String)
extern "C"  void iAdBannerController_interstitialdidFailWithError_m1871557138 (iAdBannerController_t2502498128 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::interstitialAdWillLoad(System.String)
extern "C"  void iAdBannerController_interstitialAdWillLoad_m2995471518 (iAdBannerController_t2502498128 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::interstitialAdDidLoad(System.String)
extern "C"  void iAdBannerController_interstitialAdDidLoad_m4046182933 (iAdBannerController_t2502498128 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::interstitialAdActionDidFinish(System.String)
extern "C"  void iAdBannerController_interstitialAdActionDidFinish_m3967456960 (iAdBannerController_t2502498128 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::.cctor()
extern "C"  void iAdBannerController__cctor_m525055950 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::<InterstitialDidFailWithErrorAction>m__0()
extern "C"  void iAdBannerController_U3CInterstitialDidFailWithErrorActionU3Em__0_m3299429361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::<InterstitialAdWillLoadAction>m__1()
extern "C"  void iAdBannerController_U3CInterstitialAdWillLoadActionU3Em__1_m361474434 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::<InterstitialAdDidLoadAction>m__2()
extern "C"  void iAdBannerController_U3CInterstitialAdDidLoadActionU3Em__2_m2258172134 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::<InterstitialAdDidFinishAction>m__3()
extern "C"  void iAdBannerController_U3CInterstitialAdDidFinishActionU3Em__3_m1425400176 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
