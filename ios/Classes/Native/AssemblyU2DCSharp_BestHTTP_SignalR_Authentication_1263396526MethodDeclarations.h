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

// BestHTTP.SignalR.Authentication.HeaderAuthenticator
struct HeaderAuthenticator_t1263396526;
// System.String
struct String_t;
// BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate
struct OnAuthenticationSuccededDelegate_t4078916882;
// BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate
struct OnAuthenticationFailedDelegate_t1617501265;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Authentication_4078916882.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Authentication_1617501265.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_RequestTypes1771348820.h"

// System.Void BestHTTP.SignalR.Authentication.HeaderAuthenticator::.ctor(System.String,System.String)
extern "C"  void HeaderAuthenticator__ctor_m3781366235 (HeaderAuthenticator_t1263396526 * __this, String_t* ___user0, String_t* ___roles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Authentication.HeaderAuthenticator::get_User()
extern "C"  String_t* HeaderAuthenticator_get_User_m2478496424 (HeaderAuthenticator_t1263396526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.HeaderAuthenticator::set_User(System.String)
extern "C"  void HeaderAuthenticator_set_User_m3054438857 (HeaderAuthenticator_t1263396526 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Authentication.HeaderAuthenticator::get_Roles()
extern "C"  String_t* HeaderAuthenticator_get_Roles_m3358458114 (HeaderAuthenticator_t1263396526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.HeaderAuthenticator::set_Roles(System.String)
extern "C"  void HeaderAuthenticator_set_Roles_m2481401451 (HeaderAuthenticator_t1263396526 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Authentication.HeaderAuthenticator::get_IsPreAuthRequired()
extern "C"  bool HeaderAuthenticator_get_IsPreAuthRequired_m1070099838 (HeaderAuthenticator_t1263396526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.HeaderAuthenticator::add_OnAuthenticationSucceded(BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate)
extern "C"  void HeaderAuthenticator_add_OnAuthenticationSucceded_m971319752 (HeaderAuthenticator_t1263396526 * __this, OnAuthenticationSuccededDelegate_t4078916882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.HeaderAuthenticator::remove_OnAuthenticationSucceded(BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate)
extern "C"  void HeaderAuthenticator_remove_OnAuthenticationSucceded_m3652525227 (HeaderAuthenticator_t1263396526 * __this, OnAuthenticationSuccededDelegate_t4078916882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.HeaderAuthenticator::add_OnAuthenticationFailed(BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate)
extern "C"  void HeaderAuthenticator_add_OnAuthenticationFailed_m1319256614 (HeaderAuthenticator_t1263396526 * __this, OnAuthenticationFailedDelegate_t1617501265 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.HeaderAuthenticator::remove_OnAuthenticationFailed(BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate)
extern "C"  void HeaderAuthenticator_remove_OnAuthenticationFailed_m1289661271 (HeaderAuthenticator_t1263396526 * __this, OnAuthenticationFailedDelegate_t1617501265 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.HeaderAuthenticator::StartAuthentication()
extern "C"  void HeaderAuthenticator_StartAuthentication_m3169393023 (HeaderAuthenticator_t1263396526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.HeaderAuthenticator::PrepareRequest(BestHTTP.HTTPRequest,BestHTTP.SignalR.RequestTypes)
extern "C"  void HeaderAuthenticator_PrepareRequest_m3330403764 (HeaderAuthenticator_t1263396526 * __this, HTTPRequest_t138485887 * ___request0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
