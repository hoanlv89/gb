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

// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// UnityEngine.Cloud.Analytics.IUnityAnalyticsSession
struct IUnityAnalyticsSession_t2885929066;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_Cloud_Ana436277575.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_Cloud_Ana884172182.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_Cloud_An1481792961.h"
#include "mscorlib_System_Decimal724701077.h"

// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::StartSDK(System.String)
extern "C"  int32_t UnityAnalytics_StartSDK_m514593758 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Analytics.UnityAnalytics::SetLogLevel(UnityEngine.Cloud.Analytics.LogLevel,System.Boolean)
extern "C"  void UnityAnalytics_SetLogLevel_m1322116701 (Il2CppObject * __this /* static, unused */, int32_t ___logLevel0, bool ___enableLogging1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::SetUserId(System.String)
extern "C"  int32_t UnityAnalytics_SetUserId_m2821391378 (Il2CppObject * __this /* static, unused */, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::SetUserGender(UnityEngine.Cloud.Analytics.SexEnum)
extern "C"  int32_t UnityAnalytics_SetUserGender_m3515990113 (Il2CppObject * __this /* static, unused */, int32_t ___gender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::SetUserBirthYear(System.Int32)
extern "C"  int32_t UnityAnalytics_SetUserBirthYear_m3354059208 (Il2CppObject * __this /* static, unused */, int32_t ___birthYear0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::Transaction(System.String,System.Decimal,System.String)
extern "C"  int32_t UnityAnalytics_Transaction_m2593419598 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, Decimal_t724701077  ___amount1, String_t* ___currency2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  int32_t UnityAnalytics_Transaction_m3297214862 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, Decimal_t724701077  ___amount1, String_t* ___currency2, String_t* ___receiptPurchaseData3, String_t* ___signature4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.AnalyticsResult UnityEngine.Cloud.Analytics.UnityAnalytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t UnityAnalytics_CustomEvent_m2061498359 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName0, Il2CppObject* ___eventData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.IUnityAnalyticsSession UnityEngine.Cloud.Analytics.UnityAnalytics::GetSingleton()
extern "C"  Il2CppObject * UnityAnalytics_GetSingleton_m2904933344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
