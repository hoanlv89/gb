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

// IOSSharedApplication
struct IOSSharedApplication_t4065685598;
// System.Action`1<ISN_CheckUrlResult>
struct Action_1_t1447523883;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.String
struct String_t;
// ISN_CheckUrlResult
struct ISN_CheckUrlResult_t1645724501;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ISN_CheckUrlResult1645724501.h"

// System.Void IOSSharedApplication::.ctor()
extern "C"  void IOSSharedApplication__ctor_m45306785 (IOSSharedApplication_t4065685598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::add_OnUrlCheckResultAction(System.Action`1<ISN_CheckUrlResult>)
extern "C"  void IOSSharedApplication_add_OnUrlCheckResultAction_m3310147593 (Il2CppObject * __this /* static, unused */, Action_1_t1447523883 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::remove_OnUrlCheckResultAction(System.Action`1<ISN_CheckUrlResult>)
extern "C"  void IOSSharedApplication_remove_OnUrlCheckResultAction_m1919939180 (Il2CppObject * __this /* static, unused */, Action_1_t1447523883 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::add_OnAdvertisingIdentifierLoadedAction(System.Action`1<System.String>)
extern "C"  void IOSSharedApplication_add_OnAdvertisingIdentifierLoadedAction_m2326686442 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::remove_OnAdvertisingIdentifierLoadedAction(System.Action`1<System.String>)
extern "C"  void IOSSharedApplication_remove_OnAdvertisingIdentifierLoadedAction_m3483459877 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::_ISN_checkUrl(System.String)
extern "C"  void IOSSharedApplication__ISN_checkUrl_m2385617976 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::_ISN_openUrl(System.String)
extern "C"  void IOSSharedApplication__ISN_openUrl_m3869141420 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::_ISN_GetIFA()
extern "C"  void IOSSharedApplication__ISN_GetIFA_m3344568965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::CheckUrl(System.String)
extern "C"  void IOSSharedApplication_CheckUrl_m3707965302 (IOSSharedApplication_t4065685598 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::OpenUrl(System.String)
extern "C"  void IOSSharedApplication_OpenUrl_m2409020746 (IOSSharedApplication_t4065685598 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::GetAdvertisingIdentifier()
extern "C"  void IOSSharedApplication_GetAdvertisingIdentifier_m733947328 (IOSSharedApplication_t4065685598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::UrlCheckSuccess(System.String)
extern "C"  void IOSSharedApplication_UrlCheckSuccess_m2654871701 (IOSSharedApplication_t4065685598 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::UrlCheckFailed(System.String)
extern "C"  void IOSSharedApplication_UrlCheckFailed_m1998028837 (IOSSharedApplication_t4065685598 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::OnAdvertisingIdentifierLoaded(System.String)
extern "C"  void IOSSharedApplication_OnAdvertisingIdentifierLoaded_m1762172068 (IOSSharedApplication_t4065685598 * __this, String_t* ___Identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::.cctor()
extern "C"  void IOSSharedApplication__cctor_m2573944016 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::<OnUrlCheckResultAction>m__0(ISN_CheckUrlResult)
extern "C"  void IOSSharedApplication_U3COnUrlCheckResultActionU3Em__0_m3306264718 (Il2CppObject * __this /* static, unused */, ISN_CheckUrlResult_t1645724501 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::<OnAdvertisingIdentifierLoadedAction>m__1(System.String)
extern "C"  void IOSSharedApplication_U3COnAdvertisingIdentifierLoadedActionU3Em__1_m54576538 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
