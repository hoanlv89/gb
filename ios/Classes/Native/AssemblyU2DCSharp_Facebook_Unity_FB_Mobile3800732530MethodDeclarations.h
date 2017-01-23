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

// Facebook.Unity.FB/Mobile
struct Mobile_t3800732530;
// Facebook.Unity.Mobile.IMobileFacebook
struct IMobileFacebook_t1158246893;
// System.Uri
struct Uri_t19570940;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t2564900615;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t2578089594;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t1759649537;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode1445392044.h"
#include "System_System_Uri19570940.h"

// System.Void Facebook.Unity.FB/Mobile::.ctor()
extern "C"  void Mobile__ctor_m3137091971 (Mobile_t3800732530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.FB/Mobile::get_ShareDialogMode()
extern "C"  int32_t Mobile_get_ShareDialogMode_m3898346694 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void Mobile_set_ShareDialogMode_m3165317941 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IMobileFacebook Facebook.Unity.FB/Mobile::get_MobileFacebookImpl()
extern "C"  Il2CppObject * Mobile_get_MobileFacebookImpl_m2607606945 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void Mobile_AppInvite_m3453107363 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___appLinkUrl0, Uri_t19570940 * ___previewImageUrl1, FacebookDelegate_1_t2564900615 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::FetchDeferredAppLinkData(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void Mobile_FetchDeferredAppLinkData_m3375712122 (Il2CppObject * __this /* static, unused */, FacebookDelegate_1_t2578089594 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void Mobile_RefreshCurrentAccessToken_m2629626818 (Il2CppObject * __this /* static, unused */, FacebookDelegate_1_t1759649537 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
