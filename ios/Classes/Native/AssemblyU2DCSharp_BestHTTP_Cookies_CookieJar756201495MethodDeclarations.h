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
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// System.Collections.Generic.List`1<BestHTTP.Cookies.Cookie>
struct List_1_t3531925514;
// System.Uri
struct Uri_t19570940;
// BestHTTP.Cookies.Cookie
struct Cookie_t4162804382;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_BestHTTP_Cookies_Cookie4162804382.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Boolean BestHTTP.Cookies.CookieJar::get_IsSavingSupported()
extern "C"  bool CookieJar_get_IsSavingSupported_m1527367704 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Cookies.CookieJar::get_CookieFolder()
extern "C"  String_t* CookieJar_get_CookieFolder_m3298903523 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::set_CookieFolder(System.String)
extern "C"  void CookieJar_set_CookieFolder_m1256483352 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Cookies.CookieJar::get_LibraryPath()
extern "C"  String_t* CookieJar_get_LibraryPath_m3787512299 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::set_LibraryPath(System.String)
extern "C"  void CookieJar_set_LibraryPath_m209707284 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::SetupFolder()
extern "C"  void CookieJar_SetupFolder_m2718619424 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Set(BestHTTP.HTTPResponse)
extern "C"  void CookieJar_Set_m831988220 (Il2CppObject * __this /* static, unused */, HTTPResponse_t62748825 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Maintain()
extern "C"  void CookieJar_Maintain_m2321123212 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Persist()
extern "C"  void CookieJar_Persist_m4176778419 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Load()
extern "C"  void CookieJar_Load_m882977547 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Cookies.Cookie> BestHTTP.Cookies.CookieJar::Get(System.Uri)
extern "C"  List_1_t3531925514 * CookieJar_Get_m2663463896 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Set(System.Uri,BestHTTP.Cookies.Cookie)
extern "C"  void CookieJar_Set_m3462806481 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, Cookie_t4162804382 * ___cookie1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Set(BestHTTP.Cookies.Cookie)
extern "C"  void CookieJar_Set_m3427497206 (Il2CppObject * __this /* static, unused */, Cookie_t4162804382 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Cookies.Cookie> BestHTTP.Cookies.CookieJar::GetAll()
extern "C"  List_1_t3531925514 * CookieJar_GetAll_m338246860 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Clear()
extern "C"  void CookieJar_Clear_m1023066196 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Clear(System.TimeSpan)
extern "C"  void CookieJar_Clear_m1343949306 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___olderThan0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Clear(System.String)
extern "C"  void CookieJar_Clear_m1552723590 (Il2CppObject * __this /* static, unused */, String_t* ___domain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::Remove(System.Uri,System.String)
extern "C"  void CookieJar_Remove_m4216155042 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Cookies.Cookie BestHTTP.Cookies.CookieJar::Find(BestHTTP.Cookies.Cookie,System.Int32&)
extern "C"  Cookie_t4162804382 * CookieJar_Find_m1291810588 (Il2CppObject * __this /* static, unused */, Cookie_t4162804382 * ___cookie0, int32_t* ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Cookies.CookieJar::.cctor()
extern "C"  void CookieJar__cctor_m1973420404 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
