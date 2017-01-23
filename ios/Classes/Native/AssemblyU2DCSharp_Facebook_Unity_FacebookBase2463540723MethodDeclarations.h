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

// Facebook.Unity.FacebookBase
struct FacebookBase_t2463540723;
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
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t909463455;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3020292135;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// Facebook.Unity.LoginResult
struct LoginResult_t2244791044;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager4242095184.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate712804158.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate3410465555.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HttpMethod3673888207.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"
#include "mscorlib_System_Nullable_1_gen241159723.h"
#include "AssemblyU2DCSharp_Facebook_Unity_LoginResult2244791044.h"

// System.Void Facebook.Unity.FacebookBase::.ctor(Facebook.Unity.CallbackManager)
extern "C"  void FacebookBase__ctor_m1601652280 (FacebookBase_t2463540723 * __this, CallbackManager_t4242095184 * ___callbackManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FacebookBase::get_SDKUserAgent()
extern "C"  String_t* FacebookBase_get_SDKUserAgent_m1443005153 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FacebookBase::get_LoggedIn()
extern "C"  bool FacebookBase_get_LoggedIn_m1120210517 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FacebookBase::get_Initialized()
extern "C"  bool FacebookBase_get_Initialized_m2728041742 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::set_Initialized(System.Boolean)
extern "C"  void FacebookBase_set_Initialized_m2529161131 (FacebookBase_t2463540723 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.CallbackManager Facebook.Unity.FacebookBase::get_CallbackManager()
extern "C"  CallbackManager_t4242095184 * FacebookBase_get_CallbackManager_m4232895206 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::set_CallbackManager(Facebook.Unity.CallbackManager)
extern "C"  void FacebookBase_set_CallbackManager_m2884929039 (FacebookBase_t2463540723 * __this, CallbackManager_t4242095184 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::Init(Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void FacebookBase_Init_m3053027680 (FacebookBase_t2463540723 * __this, HideUnityDelegate_t712804158 * ___hideUnityDelegate0, InitDelegate_t3410465555 * ___onInitComplete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::LogOut()
extern "C"  void FacebookBase_LogOut_m3378102767 (FacebookBase_t2463540723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::AppRequest(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FacebookBase_AppRequest_m2630752152 (FacebookBase_t2463540723 * __this, String_t* ___message0, Il2CppObject* ___to1, Il2CppObject* ___filters2, Il2CppObject* ___excludeIds3, Nullable_1_t334943763  ___maxRecipients4, String_t* ___data5, String_t* ___title6, FacebookDelegate_1_t909463455 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::API(System.String,Facebook.Unity.HttpMethod,System.Collections.Generic.IDictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void FacebookBase_API_m2038879521 (FacebookBase_t2463540723 * __this, String_t* ___query0, int32_t ___method1, Il2CppObject* ___formData2, FacebookDelegate_1_t3020292135 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::API(System.String,Facebook.Unity.HttpMethod,UnityEngine.WWWForm,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void FacebookBase_API_m3122351749 (FacebookBase_t2463540723 * __this, String_t* ___query0, int32_t ___method1, WWWForm_t3950226929 * ___formData2, FacebookDelegate_1_t3020292135 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnHideUnity(System.Boolean)
extern "C"  void FacebookBase_OnHideUnity_m3198439338 (FacebookBase_t2463540723 * __this, bool ___isGameShown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnInitComplete(System.String)
extern "C"  void FacebookBase_OnInitComplete_m4241072689 (FacebookBase_t2463540723 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnLogoutComplete(System.String)
extern "C"  void FacebookBase_OnLogoutComplete_m1714792437 (FacebookBase_t2463540723 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::ValidateAppRequestArgs(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FacebookBase_ValidateAppRequestArgs_m2930328297 (FacebookBase_t2463540723 * __this, String_t* ___message0, Nullable_1_t241159723  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t334943763  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t909463455 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnAuthResponse(Facebook.Unity.LoginResult)
extern "C"  void FacebookBase_OnAuthResponse_m2081028502 (FacebookBase_t2463540723 * __this, LoginResult_t2244791044 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Facebook.Unity.FacebookBase::CopyByValue(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  Il2CppObject* FacebookBase_CopyByValue_m3637653475 (FacebookBase_t2463540723 * __this, Il2CppObject* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Facebook.Unity.FacebookBase::GetGraphUrl(System.String)
extern "C"  Uri_t19570940 * FacebookBase_GetGraphUrl_m724041454 (FacebookBase_t2463540723 * __this, String_t* ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
