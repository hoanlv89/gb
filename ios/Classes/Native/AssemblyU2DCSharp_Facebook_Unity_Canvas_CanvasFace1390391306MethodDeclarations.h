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

// Facebook.Unity.Canvas.CanvasFacebook
struct CanvasFacebook_t1390391306;
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_t562769999;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t4160439974;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t1895462303;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t1547895262;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t607253590;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t2578089594;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager4242095184.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate712804158.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate3410465555.h"
#include "mscorlib_System_Nullable_1_gen241159723.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"

// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor()
extern "C"  void CanvasFacebook__ctor_m2547950814 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor(Facebook.Unity.Canvas.ICanvasJSWrapper,Facebook.Unity.CallbackManager)
extern "C"  void CanvasFacebook__ctor_m1399747833 (CanvasFacebook_t1390391306 * __this, Il2CppObject * ___canvasJSWrapper0, CallbackManager_t4242095184 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::get_LimitEventUsage()
extern "C"  bool CanvasFacebook_get_LimitEventUsage_m2239725031 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void CanvasFacebook_set_LimitEventUsage_m2351385304 (CanvasFacebook_t1390391306 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKName()
extern "C"  String_t* CanvasFacebook_get_SDKName_m1655281049 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKVersion()
extern "C"  String_t* CanvasFacebook_get_SDKVersion_m2211539896 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKUserAgent()
extern "C"  String_t* CanvasFacebook_get_SDKUserAgent_m1925302852 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void CanvasFacebook_Init_m1585907024 (CanvasFacebook_t1390391306 * __this, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, String_t* ___channelUrl5, String_t* ___authResponse6, bool ___frictionlessRequests7, String_t* ___jsSDKLocale8, HideUnityDelegate_t712804158 * ___hideUnityDelegate9, InitDelegate_t3410465555 * ___onInitComplete10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithPublishPermissions_m1068458776 (CanvasFacebook_t1390391306 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithReadPermissions_m1711202299 (CanvasFacebook_t1390391306 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogOut()
extern "C"  void CanvasFacebook_LogOut_m1136810146 (CanvasFacebook_t1390391306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void CanvasFacebook_AppRequest_m1940481447 (CanvasFacebook_t1390391306 * __this, String_t* ___message0, Nullable_1_t241159723  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t334943763  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t909463455 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ActivateApp(System.String)
extern "C"  void CanvasFacebook_ActivateApp_m1017456272 (CanvasFacebook_t1390391306 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_ShareLink_m2434750294 (CanvasFacebook_t1390391306 * __this, Uri_t19570940 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t19570940 * ___photoURL3, FacebookDelegate_1_t4160439974 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_FeedShare_m4274984558 (CanvasFacebook_t1390391306 * __this, String_t* ___toId0, Uri_t19570940 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t19570940 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t4160439974 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void CanvasFacebook_Pay_m3445547609 (CanvasFacebook_t1390391306 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t334943763  ___quantityMin3, Nullable_1_t334943763  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t1895462303 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void CanvasFacebook_GameGroupCreate_m3542951818 (CanvasFacebook_t1390391306 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t1547895262 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void CanvasFacebook_GameGroupJoin_m1308636618 (CanvasFacebook_t1390391306 * __this, String_t* ___id0, FacebookDelegate_1_t607253590 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void CanvasFacebook_GetAppLink_m2192928778 (CanvasFacebook_t1390391306 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogEvent_m742740001 (CanvasFacebook_t1390391306 * __this, String_t* ___logEvent0, Nullable_1_t339576247  ___valueToSum1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogPurchase_m4144173171 (CanvasFacebook_t1390391306 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnLoginComplete(System.String)
extern "C"  void CanvasFacebook_OnLoginComplete_m2610018271 (CanvasFacebook_t1390391306 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGetAppLinkComplete(System.String)
extern "C"  void CanvasFacebook_OnGetAppLinkComplete_m2376976603 (CanvasFacebook_t1390391306 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern "C"  void CanvasFacebook_OnFacebookAuthResponseChange_m2494592550 (CanvasFacebook_t1390391306 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnPayComplete(System.String)
extern "C"  void CanvasFacebook_OnPayComplete_m1822747842 (CanvasFacebook_t1390391306 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnAppRequestsComplete(System.String)
extern "C"  void CanvasFacebook_OnAppRequestsComplete_m2272281039 (CanvasFacebook_t1390391306 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnShareLinkComplete(System.String)
extern "C"  void CanvasFacebook_OnShareLinkComplete_m1366480961 (CanvasFacebook_t1390391306 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupCreateComplete(System.String)
extern "C"  void CanvasFacebook_OnGroupCreateComplete_m1373714851 (CanvasFacebook_t1390391306 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupJoinComplete(System.String)
extern "C"  void CanvasFacebook_OnGroupJoinComplete_m3585662873 (CanvasFacebook_t1390391306 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnUrlResponse(System.String)
extern "C"  void CanvasFacebook_OnUrlResponse_m2514110681 (CanvasFacebook_t1390391306 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::FormatAuthResponse(System.String)
extern "C"  String_t* CanvasFacebook_FormatAuthResponse_m819497841 (Il2CppObject * __this /* static, unused */, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::FormatResult(System.String)
extern "C"  String_t* CanvasFacebook_FormatResult_m7426651 (Il2CppObject * __this /* static, unused */, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.Canvas.CanvasFacebook::GetFormattedResponseDictionary(System.String)
extern "C"  Il2CppObject* CanvasFacebook_GetFormattedResponseDictionary_m2505665442 (Il2CppObject * __this /* static, unused */, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
