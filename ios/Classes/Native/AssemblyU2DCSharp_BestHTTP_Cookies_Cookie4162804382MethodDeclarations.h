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

// BestHTTP.Cookies.Cookie
struct Cookie_t4162804382;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair>
struct List_1_t3552012726;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_Cookies_Cookie4162804382.h"

// System.Void BestHTTP.Cookies.Cookie::.ctor(System.String,System.String)
extern "C"  void Cookie__ctor_m2628864618 (Cookie_t4162804382 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::.ctor(System.String,System.String,System.String)
extern "C"  void Cookie__ctor_m751106706 (Cookie_t4162804382 * __this, String_t* ___name0, String_t* ___value1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void Cookie__ctor_m1377039914 (Cookie_t4162804382 * __this, String_t* ___name0, String_t* ___value1, String_t* ___path2, String_t* ___domain3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::.ctor(System.Uri,System.String,System.String,System.DateTime,System.Boolean)
extern "C"  void Cookie__ctor_m3370090834 (Cookie_t4162804382 * __this, Uri_t19570940 * ___uri0, String_t* ___name1, String_t* ___value2, DateTime_t693205669  ___expires3, bool ___isSession4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::.ctor(System.Uri,System.String,System.String,System.Int64,System.Boolean)
extern "C"  void Cookie__ctor_m1788617646 (Cookie_t4162804382 * __this, Uri_t19570940 * ___uri0, String_t* ___name1, String_t* ___value2, int64_t ___maxAge3, bool ___isSession4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::.ctor()
extern "C"  void Cookie__ctor_m4290127720 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Cookies.Cookie::get_Name()
extern "C"  String_t* Cookie_get_Name_m1653643171 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_Name(System.String)
extern "C"  void Cookie_set_Name_m2102511106 (Cookie_t4162804382 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Cookies.Cookie::get_Value()
extern "C"  String_t* Cookie_get_Value_m1338352787 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_Value(System.String)
extern "C"  void Cookie_set_Value_m1017088420 (Cookie_t4162804382 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.Cookies.Cookie::get_Date()
extern "C"  DateTime_t693205669  Cookie_get_Date_m473566124 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_Date(System.DateTime)
extern "C"  void Cookie_set_Date_m2144005131 (Cookie_t4162804382 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.Cookies.Cookie::get_LastAccess()
extern "C"  DateTime_t693205669  Cookie_get_LastAccess_m1817055506 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_LastAccess(System.DateTime)
extern "C"  void Cookie_set_LastAccess_m393424357 (Cookie_t4162804382 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.Cookies.Cookie::get_Expires()
extern "C"  DateTime_t693205669  Cookie_get_Expires_m2668323190 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_Expires(System.DateTime)
extern "C"  void Cookie_set_Expires_m2023403611 (Cookie_t4162804382 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Cookies.Cookie::get_MaxAge()
extern "C"  int64_t Cookie_get_MaxAge_m740682251 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_MaxAge(System.Int64)
extern "C"  void Cookie_set_MaxAge_m26805386 (Cookie_t4162804382 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Cookies.Cookie::get_IsSession()
extern "C"  bool Cookie_get_IsSession_m4017043689 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_IsSession(System.Boolean)
extern "C"  void Cookie_set_IsSession_m422017270 (Cookie_t4162804382 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Cookies.Cookie::get_Domain()
extern "C"  String_t* Cookie_get_Domain_m2672118232 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_Domain(System.String)
extern "C"  void Cookie_set_Domain_m3256557387 (Cookie_t4162804382 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Cookies.Cookie::get_Path()
extern "C"  String_t* Cookie_get_Path_m2704782765 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_Path(System.String)
extern "C"  void Cookie_set_Path_m725169454 (Cookie_t4162804382 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Cookies.Cookie::get_IsSecure()
extern "C"  bool Cookie_get_IsSecure_m1271553724 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_IsSecure(System.Boolean)
extern "C"  void Cookie_set_IsSecure_m797860955 (Cookie_t4162804382 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Cookies.Cookie::get_IsHttpOnly()
extern "C"  bool Cookie_get_IsHttpOnly_m3778750895 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::set_IsHttpOnly(System.Boolean)
extern "C"  void Cookie_set_IsHttpOnly_m1566850188 (Cookie_t4162804382 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Cookies.Cookie::WillExpireInTheFuture()
extern "C"  bool Cookie_WillExpireInTheFuture_m3852547350 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 BestHTTP.Cookies.Cookie::GuessSize()
extern "C"  uint32_t Cookie_GuessSize_m1471177121 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Cookies.Cookie BestHTTP.Cookies.Cookie::Parse(System.String,System.Uri)
extern "C"  Cookie_t4162804382 * Cookie_Parse_m995971934 (Il2CppObject * __this /* static, unused */, String_t* ___header0, Uri_t19570940 * ___defaultDomain1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::SaveTo(System.IO.BinaryWriter)
extern "C"  void Cookie_SaveTo_m3156078505 (Cookie_t4162804382 * __this, BinaryWriter_t3179371318 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.Cookie::LoadFrom(System.IO.BinaryReader)
extern "C"  void Cookie_LoadFrom_m111446197 (Cookie_t4162804382 * __this, BinaryReader_t2491843768 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Cookies.Cookie::ToString()
extern "C"  String_t* Cookie_ToString_m1779981127 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Cookies.Cookie::Equals(System.Object)
extern "C"  bool Cookie_Equals_m577269597 (Cookie_t4162804382 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Cookies.Cookie::Equals(BestHTTP.Cookies.Cookie)
extern "C"  bool Cookie_Equals_m3551531966 (Cookie_t4162804382 * __this, Cookie_t4162804382 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Cookies.Cookie::GetHashCode()
extern "C"  int32_t Cookie_GetHashCode_m3073672283 (Cookie_t4162804382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Cookies.Cookie::ReadValue(System.String,System.Int32&)
extern "C"  String_t* Cookie_ReadValue_m1382166441 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair> BestHTTP.Cookies.Cookie::ParseCookieHeader(System.String)
extern "C"  List_1_t3552012726 * Cookie_ParseCookieHeader_m3807932077 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Cookies.Cookie::CompareTo(BestHTTP.Cookies.Cookie)
extern "C"  int32_t Cookie_CompareTo_m1422077381 (Cookie_t4162804382 * __this, Cookie_t4162804382 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Cookies.Cookie::<ParseCookieHeader>m__0(System.Char)
extern "C"  bool Cookie_U3CParseCookieHeaderU3Em__0_m589439008 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
