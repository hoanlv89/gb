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

// BestHTTP.SignalR.Authentication.SampleCookieAuthentication
struct SampleCookieAuthentication_t1523935682;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate
struct OnAuthenticationSuccededDelegate_t4078916882;
// BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate
struct OnAuthenticationFailedDelegate_t1617501265;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// BestHTTP.Cookies.Cookie
struct Cookie_t4162804382;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Authentication_4078916882.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Authentication_1617501265.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_RequestTypes1771348820.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "AssemblyU2DCSharp_BestHTTP_Cookies_Cookie4162804382.h"

// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::.ctor(System.Uri,System.String,System.String,System.String)
extern "C"  void SampleCookieAuthentication__ctor_m3974878158 (SampleCookieAuthentication_t1523935682 * __this, Uri_t19570940 * ___authUri0, String_t* ___user1, String_t* ___passwd2, String_t* ___roles3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.SignalR.Authentication.SampleCookieAuthentication::get_AuthUri()
extern "C"  Uri_t19570940 * SampleCookieAuthentication_get_AuthUri_m3902254478 (SampleCookieAuthentication_t1523935682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::set_AuthUri(System.Uri)
extern "C"  void SampleCookieAuthentication_set_AuthUri_m2737743977 (SampleCookieAuthentication_t1523935682 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Authentication.SampleCookieAuthentication::get_UserName()
extern "C"  String_t* SampleCookieAuthentication_get_UserName_m3455099521 (SampleCookieAuthentication_t1523935682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::set_UserName(System.String)
extern "C"  void SampleCookieAuthentication_set_UserName_m2238263622 (SampleCookieAuthentication_t1523935682 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Authentication.SampleCookieAuthentication::get_Password()
extern "C"  String_t* SampleCookieAuthentication_get_Password_m3052886584 (SampleCookieAuthentication_t1523935682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::set_Password(System.String)
extern "C"  void SampleCookieAuthentication_set_Password_m3568459535 (SampleCookieAuthentication_t1523935682 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Authentication.SampleCookieAuthentication::get_UserRoles()
extern "C"  String_t* SampleCookieAuthentication_get_UserRoles_m3731681689 (SampleCookieAuthentication_t1523935682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::set_UserRoles(System.String)
extern "C"  void SampleCookieAuthentication_set_UserRoles_m453060524 (SampleCookieAuthentication_t1523935682 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Authentication.SampleCookieAuthentication::get_IsPreAuthRequired()
extern "C"  bool SampleCookieAuthentication_get_IsPreAuthRequired_m1065995566 (SampleCookieAuthentication_t1523935682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::set_IsPreAuthRequired(System.Boolean)
extern "C"  void SampleCookieAuthentication_set_IsPreAuthRequired_m739698437 (SampleCookieAuthentication_t1523935682 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::add_OnAuthenticationSucceded(BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate)
extern "C"  void SampleCookieAuthentication_add_OnAuthenticationSucceded_m203127128 (SampleCookieAuthentication_t1523935682 * __this, OnAuthenticationSuccededDelegate_t4078916882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::remove_OnAuthenticationSucceded(BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate)
extern "C"  void SampleCookieAuthentication_remove_OnAuthenticationSucceded_m897563319 (SampleCookieAuthentication_t1523935682 * __this, OnAuthenticationSuccededDelegate_t4078916882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::add_OnAuthenticationFailed(BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate)
extern "C"  void SampleCookieAuthentication_add_OnAuthenticationFailed_m699901318 (SampleCookieAuthentication_t1523935682 * __this, OnAuthenticationFailedDelegate_t1617501265 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::remove_OnAuthenticationFailed(BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate)
extern "C"  void SampleCookieAuthentication_remove_OnAuthenticationFailed_m2865139115 (SampleCookieAuthentication_t1523935682 * __this, OnAuthenticationFailedDelegate_t1617501265 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::StartAuthentication()
extern "C"  void SampleCookieAuthentication_StartAuthentication_m1874093699 (SampleCookieAuthentication_t1523935682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::PrepareRequest(BestHTTP.HTTPRequest,BestHTTP.SignalR.RequestTypes)
extern "C"  void SampleCookieAuthentication_PrepareRequest_m3861453988 (SampleCookieAuthentication_t1523935682 * __this, HTTPRequest_t138485887 * ___request0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Authentication.SampleCookieAuthentication::OnAuthRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void SampleCookieAuthentication_OnAuthRequestFinished_m3222537791 (SampleCookieAuthentication_t1523935682 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Authentication.SampleCookieAuthentication::<OnAuthRequestFinished>m__0(BestHTTP.Cookies.Cookie)
extern "C"  bool SampleCookieAuthentication_U3COnAuthRequestFinishedU3Em__0_m3881202309 (Il2CppObject * __this /* static, unused */, Cookie_t4162804382 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
