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

// AppsFlyer
struct AppsFlyer_t2800548462;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void AppsFlyer::.ctor()
extern "C"  void AppsFlyer__ctor_m4010506095 (AppsFlyer_t2800548462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mTrackEvent(System.String,System.String)
extern "C"  void AppsFlyer_mTrackEvent_m2869132329 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, String_t* ___eventValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mSetCurrencyCode(System.String)
extern "C"  void AppsFlyer_mSetCurrencyCode_m2952676942 (Il2CppObject * __this /* static, unused */, String_t* ___currencyCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mSetCustomerUserID(System.String)
extern "C"  void AppsFlyer_mSetCustomerUserID_m4292130114 (Il2CppObject * __this /* static, unused */, String_t* ___customerUserID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mSetAppsFlyerDevKey(System.String)
extern "C"  void AppsFlyer_mSetAppsFlyerDevKey_m3489814122 (Il2CppObject * __this /* static, unused */, String_t* ___devKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mTrackAppLaunch()
extern "C"  void AppsFlyer_mTrackAppLaunch_m1688197437 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mSetAppID(System.String)
extern "C"  void AppsFlyer_mSetAppID_m3092783132 (Il2CppObject * __this /* static, unused */, String_t* ___appleAppId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mTrackRichEvent(System.String,System.String)
extern "C"  void AppsFlyer_mTrackRichEvent_m3339608949 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, String_t* ___eventValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mValidateReceipt(System.String,System.String,System.String,System.String,System.String)
extern "C"  void AppsFlyer_mValidateReceipt_m2008272410 (Il2CppObject * __this /* static, unused */, String_t* ___productIdentifier0, String_t* ___price1, String_t* ___currency2, String_t* ___transactionId3, String_t* ___additionalParams4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mSetIsDebug(System.Boolean)
extern "C"  void AppsFlyer_mSetIsDebug_m3555622242 (Il2CppObject * __this /* static, unused */, bool ___isDebug0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mSetIsSandbox(System.Boolean)
extern "C"  void AppsFlyer_mSetIsSandbox_m2595239082 (Il2CppObject * __this /* static, unused */, bool ___isSandbox0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mGetConversionData()
extern "C"  void AppsFlyer_mGetConversionData_m181512626 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::mHandleOpenUrl(System.String,System.String,System.String)
extern "C"  void AppsFlyer_mHandleOpenUrl_m456505413 (Il2CppObject * __this /* static, unused */, String_t* ___url0, String_t* ___sourceApplication1, String_t* ___annotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::trackEvent(System.String,System.String)
extern "C"  void AppsFlyer_trackEvent_m3353671724 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, String_t* ___eventValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::setCurrencyCode(System.String)
extern "C"  void AppsFlyer_setCurrencyCode_m2729779557 (Il2CppObject * __this /* static, unused */, String_t* ___currencyCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::setCustomerUserID(System.String)
extern "C"  void AppsFlyer_setCustomerUserID_m1797548495 (Il2CppObject * __this /* static, unused */, String_t* ___customerUserID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::setAppsFlyerKey(System.String)
extern "C"  void AppsFlyer_setAppsFlyerKey_m1791358164 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::trackAppLaunch()
extern "C"  void AppsFlyer_trackAppLaunch_m1057024514 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::setAppID(System.String)
extern "C"  void AppsFlyer_setAppID_m3577374119 (Il2CppObject * __this /* static, unused */, String_t* ___appleAppId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::trackRichEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void AppsFlyer_trackRichEvent_m3152788389 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, Dictionary_2_t3943999495 * ___eventValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::validateReceipt(System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void AppsFlyer_validateReceipt_m926842288 (Il2CppObject * __this /* static, unused */, String_t* ___productIdentifier0, String_t* ___price1, String_t* ___currency2, String_t* ___transactionId3, Dictionary_2_t3943999495 * ___additionalParametes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::setIsDebug(System.Boolean)
extern "C"  void AppsFlyer_setIsDebug_m735350137 (Il2CppObject * __this /* static, unused */, bool ___isDebug0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::setIsSandbox(System.Boolean)
extern "C"  void AppsFlyer_setIsSandbox_m23520209 (Il2CppObject * __this /* static, unused */, bool ___isSandbox0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::getConversionData()
extern "C"  void AppsFlyer_getConversionData_m2632946641 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyer::handleOpenUrl(System.String,System.String,System.String)
extern "C"  void AppsFlyer_handleOpenUrl_m1091647522 (Il2CppObject * __this /* static, unused */, String_t* ___url0, String_t* ___sourceApplication1, String_t* ___annotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
