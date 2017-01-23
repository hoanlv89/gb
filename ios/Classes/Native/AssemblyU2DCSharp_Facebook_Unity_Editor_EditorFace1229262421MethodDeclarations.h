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

// Facebook.Unity.Editor.EditorFacebook
struct EditorFacebook_t1229262421;
// System.String
struct String_t;
// Facebook.Unity.IFacebookCallbackHandler
struct IFacebookCallbackHandler_t1053405458;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t1547895262;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t607253590;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t2578089594;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t2564900615;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t1895462303;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t1759649537;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode1445392044.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate712804158.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate3410465555.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen241159723.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"

// System.Void Facebook.Unity.Editor.EditorFacebook::.ctor()
extern "C"  void EditorFacebook__ctor_m626292340 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Editor.EditorFacebook::get_LimitEventUsage()
extern "C"  bool EditorFacebook_get_LimitEventUsage_m2567097435 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void EditorFacebook_set_LimitEventUsage_m2360351038 (EditorFacebook_t1229262421 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.Editor.EditorFacebook::get_ShareDialogMode()
extern "C"  int32_t EditorFacebook_get_ShareDialogMode_m2548007291 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void EditorFacebook_set_ShareDialogMode_m138933700 (EditorFacebook_t1229262421 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKName()
extern "C"  String_t* EditorFacebook_get_SDKName_m4034484773 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKVersion()
extern "C"  String_t* EditorFacebook_get_SDKVersion_m1909612926 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebookCallbackHandler Facebook.Unity.Editor.EditorFacebook::get_EditorGameObject()
extern "C"  Il2CppObject * EditorFacebook_get_EditorGameObject_m929005565 (EditorFacebook_t1229262421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Init(Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void EditorFacebook_Init_m259592813 (EditorFacebook_t1229262421 * __this, HideUnityDelegate_t712804158 * ___hideUnityDelegate0, InitDelegate_t3410465555 * ___onInitComplete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithReadPermissions_m4146518471 (EditorFacebook_t1229262421 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithPublishPermissions_m3134737342 (EditorFacebook_t1229262421 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void EditorFacebook_AppRequest_m953876587 (EditorFacebook_t1229262421 * __this, String_t* ___message0, Nullable_1_t241159723  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t334943763  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t909463455 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_ShareLink_m2922770476 (EditorFacebook_t1229262421 * __this, Uri_t19570940 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t19570940 * ___photoURL3, FacebookDelegate_1_t4160439974 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_FeedShare_m476265540 (EditorFacebook_t1229262421 * __this, String_t* ___toId0, Uri_t19570940 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t19570940 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t4160439974 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void EditorFacebook_GameGroupCreate_m2834226160 (EditorFacebook_t1229262421 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t1547895262 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void EditorFacebook_GameGroupJoin_m3630644208 (EditorFacebook_t1229262421 * __this, String_t* ___id0, FacebookDelegate_1_t607253590 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ActivateApp(System.String)
extern "C"  void EditorFacebook_ActivateApp_m2927048198 (EditorFacebook_t1229262421 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_GetAppLink_m455348052 (EditorFacebook_t1229262421 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogEvent_m509972573 (EditorFacebook_t1229262421 * __this, String_t* ___logEvent0, Nullable_1_t339576247  ___valueToSum1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogPurchase_m1613656095 (EditorFacebook_t1229262421 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void EditorFacebook_AppInvite_m2415235028 (EditorFacebook_t1229262421 * __this, Uri_t19570940 * ___appLinkUrl0, Uri_t19570940 * ___previewImageUrl1, FacebookDelegate_1_t2564900615 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_FetchDeferredAppLink_m521445673 (EditorFacebook_t1229262421 * __this, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void EditorFacebook_Pay_m1772742925 (EditorFacebook_t1229262421 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t334943763  ___quantityMin3, Nullable_1_t334943763  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t1895462303 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void EditorFacebook_RefreshCurrentAccessToken_m1951671091 (EditorFacebook_t1229262421 * __this, FacebookDelegate_1_t1759649537 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppRequestsComplete(System.String)
extern "C"  void EditorFacebook_OnAppRequestsComplete_m1897236867 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGetAppLinkComplete(System.String)
extern "C"  void EditorFacebook_OnGetAppLinkComplete_m84352175 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupCreateComplete(System.String)
extern "C"  void EditorFacebook_OnGroupCreateComplete_m2576063007 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupJoinComplete(System.String)
extern "C"  void EditorFacebook_OnGroupJoinComplete_m1733505437 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnLoginComplete(System.String)
extern "C"  void EditorFacebook_OnLoginComplete_m3064028115 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnShareLinkComplete(System.String)
extern "C"  void EditorFacebook_OnShareLinkComplete_m1729685765 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppInviteComplete(System.String)
extern "C"  void EditorFacebook_OnAppInviteComplete_m774240072 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFetchDeferredAppLinkComplete(System.String)
extern "C"  void EditorFacebook_OnFetchDeferredAppLinkComplete_m3194460744 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnPayComplete(System.String)
extern "C"  void EditorFacebook_OnPayComplete_m1137443964 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnRefreshCurrentAccessTokenComplete(System.String)
extern "C"  void EditorFacebook_OnRefreshCurrentAccessTokenComplete_m2478610343 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFacebookAuthResponseChange(System.String)
extern "C"  void EditorFacebook_OnFacebookAuthResponseChange_m1197378368 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnUrlResponse(System.String)
extern "C"  void EditorFacebook_OnUrlResponse_m2759407525 (EditorFacebook_t1229262421 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ShowMockShareDialog(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_ShowMockShareDialog_m3156121733 (EditorFacebook_t1229262421 * __this, String_t* ___subTitle0, FacebookDelegate_1_t4160439974 * ___userCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
