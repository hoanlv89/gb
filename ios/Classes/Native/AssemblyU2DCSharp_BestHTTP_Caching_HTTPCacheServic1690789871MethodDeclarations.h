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

// System.Collections.Generic.Dictionary`2<System.Uri,BestHTTP.Caching.HTTPCacheFileInfo>
struct Dictionary_2_t2047352005;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.IO.Stream
struct Stream_t3255436806;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// BestHTTP.Caching.HTTPCacheFileInfo
struct HTTPCacheFileInfo_t2858191078;
// System.Object
struct Il2CppObject;
// BestHTTP.Caching.HTTPCacheMaintananceParams
struct HTTPCacheMaintananceParams_t558833957;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPMethods178420096.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_Caching_HTTPCacheMaintan558833957.h"

// System.Void BestHTTP.Caching.HTTPCacheService::.cctor()
extern "C"  void HTTPCacheService__cctor_m935710850 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheService::get_IsSupported()
extern "C"  bool HTTPCacheService_get_IsSupported_m4251093036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Uri,BestHTTP.Caching.HTTPCacheFileInfo> BestHTTP.Caching.HTTPCacheService::get_Library()
extern "C"  Dictionary_2_t2047352005 * HTTPCacheService_get_Library_m718471793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Caching.HTTPCacheService::get_CacheFolder()
extern "C"  String_t* HTTPCacheService_get_CacheFolder_m3705803237 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::set_CacheFolder(System.String)
extern "C"  void HTTPCacheService_set_CacheFolder_m2206564968 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Caching.HTTPCacheService::get_LibraryPath()
extern "C"  String_t* HTTPCacheService_get_LibraryPath_m3173481429 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::set_LibraryPath(System.String)
extern "C"  void HTTPCacheService_set_LibraryPath_m1539208370 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::CheckSetup()
extern "C"  void HTTPCacheService_CheckSetup_m2892813210 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::SetupCacheFolder()
extern "C"  void HTTPCacheService_SetupCacheFolder_m2376563790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 BestHTTP.Caching.HTTPCacheService::GetNameIdx()
extern "C"  uint64_t HTTPCacheService_GetNameIdx_m4187403991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheService::HasEntity(System.Uri)
extern "C"  bool HTTPCacheService_HasEntity_m1481782135 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheService::DeleteEntity(System.Uri,System.Boolean)
extern "C"  bool HTTPCacheService_DeleteEntity_m3097525527 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, bool ___removeFromLibrary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheService::IsCachedEntityExpiresInTheFuture(BestHTTP.HTTPRequest)
extern "C"  bool HTTPCacheService_IsCachedEntityExpiresInTheFuture_m847606734 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::SetHeaders(BestHTTP.HTTPRequest)
extern "C"  void HTTPCacheService_SetHeaders_m29746658 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream BestHTTP.Caching.HTTPCacheService::GetBody(System.Uri,System.Int32&)
extern "C"  Stream_t3255436806 * HTTPCacheService_GetBody_m654319595 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, int32_t* ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPResponse BestHTTP.Caching.HTTPCacheService::GetFullResponse(BestHTTP.HTTPRequest)
extern "C"  HTTPResponse_t62748825 * HTTPCacheService_GetFullResponse_m2000012230 (Il2CppObject * __this /* static, unused */, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheService::IsCacheble(System.Uri,BestHTTP.HTTPMethods,BestHTTP.HTTPResponse)
extern "C"  bool HTTPCacheService_IsCacheble_m1080888830 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, uint8_t ___method1, HTTPResponse_t62748825 * ___response2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Caching.HTTPCacheFileInfo BestHTTP.Caching.HTTPCacheService::Store(System.Uri,BestHTTP.HTTPMethods,BestHTTP.HTTPResponse)
extern "C"  HTTPCacheFileInfo_t2858191078 * HTTPCacheService_Store_m2590569944 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, uint8_t ___method1, HTTPResponse_t62748825 * ___response2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream BestHTTP.Caching.HTTPCacheService::PrepareStreamed(System.Uri,BestHTTP.HTTPResponse)
extern "C"  Stream_t3255436806 * HTTPCacheService_PrepareStreamed_m3532842519 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, HTTPResponse_t62748825 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::BeginClear()
extern "C"  void HTTPCacheService_BeginClear_m4028040057 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::ClearImpl(System.Object)
extern "C"  void HTTPCacheService_ClearImpl_m4261764800 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::BeginMaintainence(BestHTTP.Caching.HTTPCacheMaintananceParams)
extern "C"  void HTTPCacheService_BeginMaintainence_m559563604 (Il2CppObject * __this /* static, unused */, HTTPCacheMaintananceParams_t558833957 * ___maintananceParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Caching.HTTPCacheService::GetCacheEntityCount()
extern "C"  int32_t HTTPCacheService_GetCacheEntityCount_m324264687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 BestHTTP.Caching.HTTPCacheService::GetCacheSize()
extern "C"  uint64_t HTTPCacheService_GetCacheSize_m488101984 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::LoadLibrary()
extern "C"  void HTTPCacheService_LoadLibrary_m3008379160 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::SaveLibrary()
extern "C"  void HTTPCacheService_SaveLibrary_m1228220233 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::SetBodyLength(System.Uri,System.Int32)
extern "C"  void HTTPCacheService_SetBodyLength_m4240714785 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, int32_t ___bodyLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheService::DeleteUnusedFiles()
extern "C"  void HTTPCacheService_DeleteUnusedFiles_m2550181587 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheService::<IsCacheble>m__0(System.String)
extern "C"  bool HTTPCacheService_U3CIsCachebleU3Em__0_m3650928687 (Il2CppObject * __this /* static, unused */, String_t* ___headerValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheService::<IsCacheble>m__1(System.String)
extern "C"  bool HTTPCacheService_U3CIsCachebleU3Em__1_m4258239220 (Il2CppObject * __this /* static, unused */, String_t* ___headerValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
