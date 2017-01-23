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

// Facebook.Unity.Mobile.Android.AndroidFacebook
struct AndroidFacebook_t3038444049;
// Facebook.Unity.Mobile.Android.IAndroidJavaClass
struct IAndroidJavaClass_t3006205204;
// Facebook.Unity.CallbackManager
struct CallbackManager_t4242095184;
// System.String
struct String_t;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t712804158;
// Facebook.Unity.InitDelegate
struct InitDelegate_t3410465555;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t3733898188;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t909463455;
// System.Uri
struct Uri_t19570940;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t2564900615;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t4160439974;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t1547895262;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t607253590;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t2578089594;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t1759649537;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager4242095184.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate712804158.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate3410465555.h"
#include "mscorlib_System_Nullable_1_gen241159723.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode1445392044.h"

// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::.ctor()
extern "C"  void AndroidFacebook__ctor_m3268593404 (AndroidFacebook_t3038444049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::.ctor(Facebook.Unity.Mobile.Android.IAndroidJavaClass,Facebook.Unity.CallbackManager)
extern "C"  void AndroidFacebook__ctor_m1232706277 (AndroidFacebook_t3038444049 * __this, Il2CppObject * ___facebookJavaClass0, CallbackManager_t4242095184 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::get_KeyHash()
extern "C"  String_t* AndroidFacebook_get_KeyHash_m1040774741 (AndroidFacebook_t3038444049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::set_KeyHash(System.String)
extern "C"  void AndroidFacebook_set_KeyHash_m1440728034 (AndroidFacebook_t3038444049 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.Android.AndroidFacebook::get_LimitEventUsage()
extern "C"  bool AndroidFacebook_get_LimitEventUsage_m1304395561 (AndroidFacebook_t3038444049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void AndroidFacebook_set_LimitEventUsage_m3148541402 (AndroidFacebook_t3038444049 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::get_SDKName()
extern "C"  String_t* AndroidFacebook_get_SDKName_m1230834099 (AndroidFacebook_t3038444049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::get_SDKVersion()
extern "C"  String_t* AndroidFacebook_get_SDKVersion_m1715399296 (AndroidFacebook_t3038444049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::Init(System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void AndroidFacebook_Init_m4136657341 (AndroidFacebook_t3038444049 * __this, String_t* ___appId0, HideUnityDelegate_t712804158 * ___hideUnityDelegate1, InitDelegate_t3410465555 * ___onInitComplete2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void AndroidFacebook_LogInWithReadPermissions_m1835804449 (AndroidFacebook_t3038444049 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void AndroidFacebook_LogInWithPublishPermissions_m3166442018 (AndroidFacebook_t3038444049 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::LogOut()
extern "C"  void AndroidFacebook_LogOut_m2814417020 (AndroidFacebook_t3038444049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void AndroidFacebook_AppRequest_m3598664553 (AndroidFacebook_t3038444049 * __this, String_t* ___message0, Nullable_1_t241159723  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t334943763  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t909463455 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void AndroidFacebook_AppInvite_m3654336156 (AndroidFacebook_t3038444049 * __this, Uri_t19570940 * ___appLinkUrl0, Uri_t19570940 * ___previewImageUrl1, FacebookDelegate_1_t2564900615 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void AndroidFacebook_ShareLink_m1556722544 (AndroidFacebook_t3038444049 * __this, Uri_t19570940 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t19570940 * ___photoURL3, FacebookDelegate_1_t4160439974 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void AndroidFacebook_FeedShare_m796929452 (AndroidFacebook_t3038444049 * __this, String_t* ___toId0, Uri_t19570940 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t19570940 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t4160439974 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void AndroidFacebook_GameGroupCreate_m1846233716 (AndroidFacebook_t3038444049 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t1547895262 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void AndroidFacebook_GameGroupJoin_m2171585332 (AndroidFacebook_t3038444049 * __this, String_t* ___id0, FacebookDelegate_1_t607253590 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void AndroidFacebook_GetAppLink_m522582324 (AndroidFacebook_t3038444049 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AndroidFacebook_AppEventsLogEvent_m563484247 (AndroidFacebook_t3038444049 * __this, String_t* ___logEvent0, Nullable_1_t339576247  ___valueToSum1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AndroidFacebook_AppEventsLogPurchase_m3076789221 (AndroidFacebook_t3038444049 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::ActivateApp(System.String)
extern "C"  void AndroidFacebook_ActivateApp_m1856338330 (AndroidFacebook_t3038444049 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void AndroidFacebook_FetchDeferredAppLink_m3953100095 (AndroidFacebook_t3038444049 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void AndroidFacebook_RefreshCurrentAccessToken_m2193078541 (AndroidFacebook_t3038444049 * __this, FacebookDelegate_1_t1759649537 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::SetShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void AndroidFacebook_SetShareDialogMode_m2996018457 (AndroidFacebook_t3038444049 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::CallFB(System.String,System.String)
extern "C"  void AndroidFacebook_CallFB_m1596733540 (AndroidFacebook_t3038444049 * __this, String_t* ___method0, String_t* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
