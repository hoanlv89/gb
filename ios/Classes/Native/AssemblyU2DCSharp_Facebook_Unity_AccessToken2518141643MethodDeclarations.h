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

// Facebook.Unity.AccessToken
struct AccessToken_t2518141643;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "AssemblyU2DCSharp_Facebook_Unity_AccessToken2518141643.h"

// System.Void Facebook.Unity.AccessToken::.ctor(System.String,System.String,System.DateTime,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.DateTime>)
extern "C"  void AccessToken__ctor_m2443615443 (AccessToken_t2518141643 * __this, String_t* ___tokenString0, String_t* ___userId1, DateTime_t693205669  ___expirationTime2, Il2CppObject* ___permissions3, Nullable_1_t3251239280  ___lastRefresh4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.AccessToken::get_CurrentAccessToken()
extern "C"  AccessToken_t2518141643 * AccessToken_get_CurrentAccessToken_m1889274491 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_CurrentAccessToken(Facebook.Unity.AccessToken)
extern "C"  void AccessToken_set_CurrentAccessToken_m3620808090 (Il2CppObject * __this /* static, unused */, AccessToken_t2518141643 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::get_TokenString()
extern "C"  String_t* AccessToken_get_TokenString_m2968489629 (AccessToken_t2518141643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_TokenString(System.String)
extern "C"  void AccessToken_set_TokenString_m2550309132 (AccessToken_t2518141643 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.AccessToken::get_ExpirationTime()
extern "C"  DateTime_t693205669  AccessToken_get_ExpirationTime_m2702500661 (AccessToken_t2518141643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_ExpirationTime(System.DateTime)
extern "C"  void AccessToken_set_ExpirationTime_m3977792146 (AccessToken_t2518141643 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Facebook.Unity.AccessToken::get_Permissions()
extern "C"  Il2CppObject* AccessToken_get_Permissions_m3731980672 (AccessToken_t2518141643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_Permissions(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void AccessToken_set_Permissions_m2975048347 (AccessToken_t2518141643 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::get_UserId()
extern "C"  String_t* AccessToken_get_UserId_m1236208583 (AccessToken_t2518141643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_UserId(System.String)
extern "C"  void AccessToken_set_UserId_m222969568 (AccessToken_t2518141643 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Facebook.Unity.AccessToken::get_LastRefresh()
extern "C"  Nullable_1_t3251239280  AccessToken_get_LastRefresh_m3715942617 (AccessToken_t2518141643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_LastRefresh(System.Nullable`1<System.DateTime>)
extern "C"  void AccessToken_set_LastRefresh_m2220763904 (AccessToken_t2518141643 * __this, Nullable_1_t3251239280  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::ToJson()
extern "C"  String_t* AccessToken_ToJson_m3888518545 (AccessToken_t2518141643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
