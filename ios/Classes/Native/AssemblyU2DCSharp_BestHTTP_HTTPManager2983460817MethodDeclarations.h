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

// System.Func`1<System.String>
struct Func_1_t3983612915;
// BestHTTP.HTTPProxy
struct HTTPProxy_t2644053826;
// BestHTTP.Extensions.HeartbeatManager
struct HeartbeatManager_t895236645;
// BestHTTP.Logger.ILogger
struct ILogger_t2372156491;
// Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer
struct ICertificateVerifyer_t565084154;
// Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider
struct IClientCredentialsProvider_t3199932449;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.String
struct String_t;
// BestHTTP.OnRequestFinishedDelegate
struct OnRequestFinishedDelegate_t3180754735;
// BestHTTP.ConnectionBase
struct ConnectionBase_t2782190729;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPProxy2644053826.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_OnRequestFinishedDelega3180754735.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPMethods178420096.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_Statistics_GeneralStati1610391941.h"
#include "AssemblyU2DCSharp_BestHTTP_Statistics_StatisticsQu1999199910.h"
#include "AssemblyU2DCSharp_BestHTTP_ConnectionBase2782190729.h"

// System.Void BestHTTP.HTTPManager::.cctor()
extern "C"  void HTTPManager__cctor_m1680335973 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte BestHTTP.HTTPManager::get_MaxConnectionPerServer()
extern "C"  uint8_t HTTPManager_get_MaxConnectionPerServer_m3478392389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_MaxConnectionPerServer(System.Byte)
extern "C"  void HTTPManager_set_MaxConnectionPerServer_m2570380538 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPManager::get_KeepAliveDefaultValue()
extern "C"  bool HTTPManager_get_KeepAliveDefaultValue_m1355598819 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_KeepAliveDefaultValue(System.Boolean)
extern "C"  void HTTPManager_set_KeepAliveDefaultValue_m801189724 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPManager::get_IsCachingDisabled()
extern "C"  bool HTTPManager_get_IsCachingDisabled_m1234940406 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_IsCachingDisabled(System.Boolean)
extern "C"  void HTTPManager_set_IsCachingDisabled_m205211143 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.HTTPManager::get_MaxConnectionIdleTime()
extern "C"  TimeSpan_t3430258949  HTTPManager_get_MaxConnectionIdleTime_m2187595597 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_MaxConnectionIdleTime(System.TimeSpan)
extern "C"  void HTTPManager_set_MaxConnectionIdleTime_m2863261746 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPManager::get_IsCookiesEnabled()
extern "C"  bool HTTPManager_get_IsCookiesEnabled_m3933033643 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_IsCookiesEnabled(System.Boolean)
extern "C"  void HTTPManager_set_IsCookiesEnabled_m2245600816 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 BestHTTP.HTTPManager::get_CookieJarSize()
extern "C"  uint32_t HTTPManager_get_CookieJarSize_m3620355144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_CookieJarSize(System.UInt32)
extern "C"  void HTTPManager_set_CookieJarSize_m2781019319 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPManager::get_EnablePrivateBrowsing()
extern "C"  bool HTTPManager_get_EnablePrivateBrowsing_m2296101140 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_EnablePrivateBrowsing(System.Boolean)
extern "C"  void HTTPManager_set_EnablePrivateBrowsing_m2461497703 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.HTTPManager::get_ConnectTimeout()
extern "C"  TimeSpan_t3430258949  HTTPManager_get_ConnectTimeout_m442208003 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_ConnectTimeout(System.TimeSpan)
extern "C"  void HTTPManager_set_ConnectTimeout_m915065482 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.HTTPManager::get_RequestTimeout()
extern "C"  TimeSpan_t3430258949  HTTPManager_get_RequestTimeout_m556660528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_RequestTimeout(System.TimeSpan)
extern "C"  void HTTPManager_set_RequestTimeout_m1800614835 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<System.String> BestHTTP.HTTPManager::get_RootCacheFolderProvider()
extern "C"  Func_1_t3983612915 * HTTPManager_get_RootCacheFolderProvider_m1767885 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_RootCacheFolderProvider(System.Func`1<System.String>)
extern "C"  void HTTPManager_set_RootCacheFolderProvider_m3315042580 (Il2CppObject * __this /* static, unused */, Func_1_t3983612915 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPProxy BestHTTP.HTTPManager::get_Proxy()
extern "C"  HTTPProxy_t2644053826 * HTTPManager_get_Proxy_m3066598116 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_Proxy(BestHTTP.HTTPProxy)
extern "C"  void HTTPManager_set_Proxy_m4269631473 (Il2CppObject * __this /* static, unused */, HTTPProxy_t2644053826 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Extensions.HeartbeatManager BestHTTP.HTTPManager::get_Heartbeats()
extern "C"  HeartbeatManager_t895236645 * HTTPManager_get_Heartbeats_m4021869890 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Logger.ILogger BestHTTP.HTTPManager::get_Logger()
extern "C"  Il2CppObject * HTTPManager_get_Logger_m2103818269 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_Logger(BestHTTP.Logger.ILogger)
extern "C"  void HTTPManager_set_Logger_m1976859430 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer BestHTTP.HTTPManager::get_DefaultCertificateVerifyer()
extern "C"  Il2CppObject * HTTPManager_get_DefaultCertificateVerifyer_m3220876418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_DefaultCertificateVerifyer(Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer)
extern "C"  void HTTPManager_set_DefaultCertificateVerifyer_m4103074927 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider BestHTTP.HTTPManager::get_DefaultClientCredentialsProvider()
extern "C"  Il2CppObject * HTTPManager_get_DefaultClientCredentialsProvider_m3993432676 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_DefaultClientCredentialsProvider(Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider)
extern "C"  void HTTPManager_set_DefaultClientCredentialsProvider_m3377087219 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPManager::get_UseAlternateSSLDefaultValue()
extern "C"  bool HTTPManager_get_UseAlternateSSLDefaultValue_m318137642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_UseAlternateSSLDefaultValue(System.Boolean)
extern "C"  void HTTPManager_set_UseAlternateSSLDefaultValue_m3631289011 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPManager::get_MaxPathLength()
extern "C"  int32_t HTTPManager_get_MaxPathLength_m126263414 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::set_MaxPathLength(System.Int32)
extern "C"  void HTTPManager_set_MaxPathLength_m851121183 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::Setup()
extern "C"  void HTTPManager_Setup_m989171965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.HTTPManager::SendRequest(System.String,BestHTTP.OnRequestFinishedDelegate)
extern "C"  HTTPRequest_t138485887 * HTTPManager_SendRequest_m1189214360 (Il2CppObject * __this /* static, unused */, String_t* ___url0, OnRequestFinishedDelegate_t3180754735 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.HTTPManager::SendRequest(System.String,BestHTTP.HTTPMethods,BestHTTP.OnRequestFinishedDelegate)
extern "C"  HTTPRequest_t138485887 * HTTPManager_SendRequest_m1599734838 (Il2CppObject * __this /* static, unused */, String_t* ___url0, uint8_t ___methodType1, OnRequestFinishedDelegate_t3180754735 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.HTTPManager::SendRequest(System.String,BestHTTP.HTTPMethods,System.Boolean,BestHTTP.OnRequestFinishedDelegate)
extern "C"  HTTPRequest_t138485887 * HTTPManager_SendRequest_m876667843 (Il2CppObject * __this /* static, unused */, String_t* ___url0, uint8_t ___methodType1, bool ___isKeepAlive2, OnRequestFinishedDelegate_t3180754735 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.HTTPManager::SendRequest(System.String,BestHTTP.HTTPMethods,System.Boolean,System.Boolean,BestHTTP.OnRequestFinishedDelegate)
extern "C"  HTTPRequest_t138485887 * HTTPManager_SendRequest_m853421188 (Il2CppObject * __this /* static, unused */, String_t* ___url0, uint8_t ___methodType1, bool ___isKeepAlive2, bool ___disableCache3, OnRequestFinishedDelegate_t3180754735 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.HTTPManager::SendRequest(BestHTTP.HTTPRequest)
extern "C"  HTTPRequest_t138485887 * HTTPManager_SendRequest_m4050713218 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Statistics.GeneralStatistics BestHTTP.HTTPManager::GetGeneralStatistics(BestHTTP.Statistics.StatisticsQueryFlags)
extern "C"  GeneralStatistics_t1610391941  HTTPManager_GetGeneralStatistics_m3509309387 (Il2CppObject * __this /* static, unused */, uint8_t ___queryFlags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::SendRequestImpl(BestHTTP.HTTPRequest)
extern "C"  void HTTPManager_SendRequestImpl_m65494016 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPManager::GetKeyForRequest(BestHTTP.HTTPRequest)
extern "C"  String_t* HTTPManager_GetKeyForRequest_m2545119663 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.ConnectionBase BestHTTP.HTTPManager::CreateConnection(BestHTTP.HTTPRequest,System.String)
extern "C"  ConnectionBase_t2782190729 * HTTPManager_CreateConnection_m3724411031 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, String_t* ___serverUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.ConnectionBase BestHTTP.HTTPManager::FindOrCreateFreeConnection(BestHTTP.HTTPRequest)
extern "C"  ConnectionBase_t2782190729 * HTTPManager_FindOrCreateFreeConnection_m1517494277 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPManager::CanProcessFromQueue()
extern "C"  bool HTTPManager_CanProcessFromQueue_m870796094 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::RecycleConnection(BestHTTP.ConnectionBase)
extern "C"  void HTTPManager_RecycleConnection_m4100725544 (Il2CppObject * __this /* static, unused */, ConnectionBase_t2782190729 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::OnConnectionRecylced(BestHTTP.ConnectionBase)
extern "C"  void HTTPManager_OnConnectionRecylced_m2395605487 (Il2CppObject * __this /* static, unused */, ConnectionBase_t2782190729 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.ConnectionBase BestHTTP.HTTPManager::GetConnectionWith(BestHTTP.HTTPRequest)
extern "C"  ConnectionBase_t2782190729 * HTTPManager_GetConnectionWith_m1669883529 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPManager::RemoveFromQueue(BestHTTP.HTTPRequest)
extern "C"  bool HTTPManager_RemoveFromQueue_m604119108 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPManager::GetRootCacheFolder()
extern "C"  String_t* HTTPManager_GetRootCacheFolder_m3235057205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::OnUpdate()
extern "C"  void HTTPManager_OnUpdate_m3741173828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPManager::OnQuit()
extern "C"  void HTTPManager_OnQuit_m2407419590 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPManager::<OnUpdate>m__0(BestHTTP.HTTPRequest)
extern "C"  bool HTTPManager_U3COnUpdateU3Em__0_m2483429236 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___req0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPManager::<OnUpdate>m__1(BestHTTP.HTTPRequest,BestHTTP.HTTPRequest)
extern "C"  int32_t HTTPManager_U3COnUpdateU3Em__1_m625281664 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___req10, HTTPRequest_t138485887 * ___req21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
