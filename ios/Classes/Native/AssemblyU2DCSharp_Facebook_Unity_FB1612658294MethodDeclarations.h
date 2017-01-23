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

// Facebook.Unity.FB
struct FB_t1612658294;
// System.String
struct String_t;
// Facebook.Unity.IFacebook
struct IFacebook_t2373123119;
// Facebook.Unity.FB/OnDLLLoaded
struct OnDLLLoaded_t1727406294;
// Facebook.Unity.InitDelegate
struct InitDelegate_t3410465555;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t712804158;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t3733898188;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t909463455;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// System.Uri
struct Uri_t19570940;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t4160439974;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3020292135;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t2578089594;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t1547895262;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t607253590;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Facebook_Unity_FB_OnDLLLoaded1727406294.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate3410465555.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate712804158.h"
#include "AssemblyU2DCSharp_Facebook_Unity_OGActionType1978093408.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HttpMethod3673888207.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"

// System.Void Facebook.Unity.FB::.ctor()
extern "C"  void FB__ctor_m1723246710 (FB_t1612658294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_AppId()
extern "C"  String_t* FB_get_AppId_m763110890 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_AppId(System.String)
extern "C"  void FB_set_AppId_m2031006819 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_GraphApiVersion()
extern "C"  String_t* FB_get_GraphApiVersion_m3437034076 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_GraphApiVersion(System.String)
extern "C"  void FB_set_GraphApiVersion_m898187553 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_IsLoggedIn()
extern "C"  bool FB_get_IsLoggedIn_m3262230974 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_IsInitialized()
extern "C"  bool FB_get_IsInitialized_m3023991927 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_LimitAppEventUsage()
extern "C"  bool FB_get_LimitAppEventUsage_m977781270 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_LimitAppEventUsage(System.Boolean)
extern "C"  void FB_set_LimitAppEventUsage_m4271405367 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebook Facebook.Unity.FB::get_FacebookImpl()
extern "C"  Il2CppObject * FB_get_FacebookImpl_m2832813552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_FacebookImpl(Facebook.Unity.IFacebook)
extern "C"  void FB_set_FacebookImpl_m633021579 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_FacebookDomain()
extern "C"  String_t* FB_get_FacebookDomain_m3783946918 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_FacebookDomain(System.String)
extern "C"  void FB_set_FacebookDomain_m3870001735 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::get_OnDLLLoadedDelegate()
extern "C"  OnDLLLoaded_t1727406294 * FB_get_OnDLLLoadedDelegate_m1500220249 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_OnDLLLoadedDelegate(Facebook.Unity.FB/OnDLLLoaded)
extern "C"  void FB_set_OnDLLLoadedDelegate_m1030757076 (Il2CppObject * __this /* static, unused */, OnDLLLoaded_t1727406294 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::Init(Facebook.Unity.InitDelegate,Facebook.Unity.HideUnityDelegate,System.String)
extern "C"  void FB_Init_m2543159685 (Il2CppObject * __this /* static, unused */, InitDelegate_t3410465555 * ___onInitComplete0, HideUnityDelegate_t712804158 * ___onHideUnity1, String_t* ___authResponse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void FB_Init_m849282656 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, bool ___frictionlessRequests5, String_t* ___authResponse6, String_t* ___jsSDKLocale7, HideUnityDelegate_t712804158 * ___onHideUnity8, InitDelegate_t3410465555 * ___onInitComplete9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void FB_LogInWithPublishPermissions_m359483204 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void FB_LogInWithReadPermissions_m2056816425 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___permissions0, FacebookDelegate_1_t3733898188 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogOut()
extern "C"  void FB_LogOut_m241056498 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,Facebook.Unity.OGActionType,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m4237897176 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, String_t* ___data4, String_t* ___title5, FacebookDelegate_1_t909463455 * ___callback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,Facebook.Unity.OGActionType,System.String,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m2000483837 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___actionType1, String_t* ___objectId2, Il2CppObject* ___filters3, Il2CppObject* ___excludeIds4, Nullable_1_t334943763  ___maxRecipients5, String_t* ___data6, String_t* ___title7, FacebookDelegate_1_t909463455 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m2392001211 (Il2CppObject * __this /* static, unused */, String_t* ___message0, Il2CppObject* ___to1, Il2CppObject* ___filters2, Il2CppObject* ___excludeIds3, Nullable_1_t334943763  ___maxRecipients4, String_t* ___data5, String_t* ___title6, FacebookDelegate_1_t909463455 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void FB_ShareLink_m3270836586 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t19570940 * ___photoURL3, FacebookDelegate_1_t4160439974 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void FB_FeedShare_m2440697318 (Il2CppObject * __this /* static, unused */, String_t* ___toId0, Uri_t19570940 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t19570940 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t4160439974 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  void FB_API_m4120372446 (Il2CppObject * __this /* static, unused */, String_t* ___query0, int32_t ___method1, FacebookDelegate_1_t3020292135 * ___callback2, Il2CppObject* ___formData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,UnityEngine.WWWForm)
extern "C"  void FB_API_m4058058866 (Il2CppObject * __this /* static, unused */, String_t* ___query0, int32_t ___method1, FacebookDelegate_1_t3020292135 * ___callback2, WWWForm_t3950226929 * ___formData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::ActivateApp()
extern "C"  void FB_ActivateApp_m1900886406 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void FB_GetAppLink_m4019973914 (Il2CppObject * __this /* static, unused */, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void FB_GameGroupCreate_m1934742702 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t1547895262 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void FB_GameGroupJoin_m3428778670 (Il2CppObject * __this /* static, unused */, String_t* ___id0, FacebookDelegate_1_t607253590 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogAppEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void FB_LogAppEvent_m1093233206 (Il2CppObject * __this /* static, unused */, String_t* ___logEvent0, Nullable_1_t339576247  ___valueToSum1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void FB_LogPurchase_m887175503 (Il2CppObject * __this /* static, unused */, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t309261261 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogVersion()
extern "C"  void FB_LogVersion_m781990062 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::.cctor()
extern "C"  void FB__cctor_m3702559671 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
