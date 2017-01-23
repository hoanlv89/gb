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

// Facebook.Unity.Mobile.MobileFacebook
struct MobileFacebook_t2099931062;
// Facebook.Unity.CallbackManager
struct CallbackManager_t4242095184;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager4242095184.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode1445392044.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Facebook.Unity.Mobile.MobileFacebook::.ctor(Facebook.Unity.CallbackManager)
extern "C"  void MobileFacebook__ctor_m3554846503 (MobileFacebook_t2099931062 * __this, CallbackManager_t4242095184 * ___callbackManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.Mobile.MobileFacebook::get_ShareDialogMode()
extern "C"  int32_t MobileFacebook_get_ShareDialogMode_m2604084063 (MobileFacebook_t2099931062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void MobileFacebook_set_ShareDialogMode_m1167400426 (MobileFacebook_t2099931062 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnLoginComplete(System.String)
extern "C"  void MobileFacebook_OnLoginComplete_m3191236111 (MobileFacebook_t2099931062 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGetAppLinkComplete(System.String)
extern "C"  void MobileFacebook_OnGetAppLinkComplete_m1950030091 (MobileFacebook_t2099931062 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGroupCreateComplete(System.String)
extern "C"  void MobileFacebook_OnGroupCreateComplete_m174038371 (MobileFacebook_t2099931062 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGroupJoinComplete(System.String)
extern "C"  void MobileFacebook_OnGroupJoinComplete_m2785332249 (MobileFacebook_t2099931062 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnAppRequestsComplete(System.String)
extern "C"  void MobileFacebook_OnAppRequestsComplete_m3647931263 (MobileFacebook_t2099931062 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnAppInviteComplete(System.String)
extern "C"  void MobileFacebook_OnAppInviteComplete_m1126597390 (MobileFacebook_t2099931062 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnFetchDeferredAppLinkComplete(System.String)
extern "C"  void MobileFacebook_OnFetchDeferredAppLinkComplete_m1858873698 (MobileFacebook_t2099931062 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnShareLinkComplete(System.String)
extern "C"  void MobileFacebook_OnShareLinkComplete_m1730236033 (MobileFacebook_t2099931062 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnRefreshCurrentAccessTokenComplete(System.String)
extern "C"  void MobileFacebook_OnRefreshCurrentAccessTokenComplete_m646814699 (MobileFacebook_t2099931062 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.Mobile.MobileFacebook::DeserializeMessage(System.String)
extern "C"  Il2CppObject* MobileFacebook_DeserializeMessage_m1663481293 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.MobileFacebook::SerializeDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* MobileFacebook_SerializeDictionary_m128580627 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.MobileFacebook::TryGetCallbackId(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String&)
extern "C"  bool MobileFacebook_TryGetCallbackId_m2895328085 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, String_t** ___callbackId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.MobileFacebook::TryGetError(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String&)
extern "C"  bool MobileFacebook_TryGetError_m2912029221 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, String_t** ___errorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
