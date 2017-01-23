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

// BestHTTP.Caching.HTTPCacheFileInfo
struct HTTPCacheFileInfo_t2858191078;
// System.Uri
struct Uri_t19570940;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_Caching_HTTPCacheFileIn2858191078.h"

// System.Void BestHTTP.Caching.HTTPCacheFileInfo::.ctor(System.Uri)
extern "C"  void HTTPCacheFileInfo__ctor_m2899428775 (HTTPCacheFileInfo_t2858191078 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::.ctor(System.Uri,System.DateTime,System.Int32)
extern "C"  void HTTPCacheFileInfo__ctor_m3732675752 (HTTPCacheFileInfo_t2858191078 * __this, Uri_t19570940 * ___uri0, DateTime_t693205669  ___lastAcces1, int32_t ___bodyLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::.ctor(System.Uri,System.IO.BinaryReader,System.Int32)
extern "C"  void HTTPCacheFileInfo__ctor_m912769891 (HTTPCacheFileInfo_t2858191078 * __this, Uri_t19570940 * ___uri0, BinaryReader_t2491843768 * ___reader1, int32_t ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.Caching.HTTPCacheFileInfo::get_Uri()
extern "C"  Uri_t19570940 * HTTPCacheFileInfo_get_Uri_m2248866755 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_Uri(System.Uri)
extern "C"  void HTTPCacheFileInfo_set_Uri_m3924958628 (HTTPCacheFileInfo_t2858191078 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.Caching.HTTPCacheFileInfo::get_LastAccess()
extern "C"  DateTime_t693205669  HTTPCacheFileInfo_get_LastAccess_m3402253774 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_LastAccess(System.DateTime)
extern "C"  void HTTPCacheFileInfo_set_LastAccess_m1357121635 (HTTPCacheFileInfo_t2858191078 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Caching.HTTPCacheFileInfo::get_BodyLength()
extern "C"  int32_t HTTPCacheFileInfo_get_BodyLength_m3055506765 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_BodyLength(System.Int32)
extern "C"  void HTTPCacheFileInfo_set_BodyLength_m1417810676 (HTTPCacheFileInfo_t2858191078 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Caching.HTTPCacheFileInfo::get_ETag()
extern "C"  String_t* HTTPCacheFileInfo_get_ETag_m3535032949 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_ETag(System.String)
extern "C"  void HTTPCacheFileInfo_set_ETag_m1069250938 (HTTPCacheFileInfo_t2858191078 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Caching.HTTPCacheFileInfo::get_LastModified()
extern "C"  String_t* HTTPCacheFileInfo_get_LastModified_m1611176797 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_LastModified(System.String)
extern "C"  void HTTPCacheFileInfo_set_LastModified_m1252420980 (HTTPCacheFileInfo_t2858191078 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.Caching.HTTPCacheFileInfo::get_Expires()
extern "C"  DateTime_t693205669  HTTPCacheFileInfo_get_Expires_m361645554 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_Expires(System.DateTime)
extern "C"  void HTTPCacheFileInfo_set_Expires_m3514143001 (HTTPCacheFileInfo_t2858191078 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Caching.HTTPCacheFileInfo::get_Age()
extern "C"  int64_t HTTPCacheFileInfo_get_Age_m1047223089 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_Age(System.Int64)
extern "C"  void HTTPCacheFileInfo_set_Age_m2661639634 (HTTPCacheFileInfo_t2858191078 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Caching.HTTPCacheFileInfo::get_MaxAge()
extern "C"  int64_t HTTPCacheFileInfo_get_MaxAge_m3499723493 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_MaxAge(System.Int64)
extern "C"  void HTTPCacheFileInfo_set_MaxAge_m1980353164 (HTTPCacheFileInfo_t2858191078 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.Caching.HTTPCacheFileInfo::get_Date()
extern "C"  DateTime_t693205669  HTTPCacheFileInfo_get_Date_m3219151492 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_Date(System.DateTime)
extern "C"  void HTTPCacheFileInfo_set_Date_m1275624893 (HTTPCacheFileInfo_t2858191078 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheFileInfo::get_MustRevalidate()
extern "C"  bool HTTPCacheFileInfo_get_MustRevalidate_m805798081 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_MustRevalidate(System.Boolean)
extern "C"  void HTTPCacheFileInfo_set_MustRevalidate_m3387939466 (HTTPCacheFileInfo_t2858191078 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime BestHTTP.Caching.HTTPCacheFileInfo::get_Received()
extern "C"  DateTime_t693205669  HTTPCacheFileInfo_get_Received_m2434885505 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_Received(System.DateTime)
extern "C"  void HTTPCacheFileInfo_set_Received_m3274495292 (HTTPCacheFileInfo_t2858191078 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Caching.HTTPCacheFileInfo::get_ConstructedPath()
extern "C"  String_t* HTTPCacheFileInfo_get_ConstructedPath_m3900770047 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_ConstructedPath(System.String)
extern "C"  void HTTPCacheFileInfo_set_ConstructedPath_m3940223552 (HTTPCacheFileInfo_t2858191078 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 BestHTTP.Caching.HTTPCacheFileInfo::get_MappedNameIDX()
extern "C"  uint64_t HTTPCacheFileInfo_get_MappedNameIDX_m669777530 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::set_MappedNameIDX(System.UInt64)
extern "C"  void HTTPCacheFileInfo_set_MappedNameIDX_m3679139839 (HTTPCacheFileInfo_t2858191078 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::SaveTo(System.IO.BinaryWriter)
extern "C"  void HTTPCacheFileInfo_SaveTo_m702851691 (HTTPCacheFileInfo_t2858191078 * __this, BinaryWriter_t3179371318 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Caching.HTTPCacheFileInfo::GetPath()
extern "C"  String_t* HTTPCacheFileInfo_GetPath_m3964818374 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheFileInfo::IsExists()
extern "C"  bool HTTPCacheFileInfo_IsExists_m2943002822 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::Delete()
extern "C"  void HTTPCacheFileInfo_Delete_m2534187951 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::Reset()
extern "C"  void HTTPCacheFileInfo_Reset_m3858129211 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::SetUpCachingValues(BestHTTP.HTTPResponse)
extern "C"  void HTTPCacheFileInfo_SetUpCachingValues_m173028913 (HTTPCacheFileInfo_t2858191078 * __this, HTTPResponse_t62748825 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Caching.HTTPCacheFileInfo::WillExpireInTheFuture()
extern "C"  bool HTTPCacheFileInfo_WillExpireInTheFuture_m682568660 (HTTPCacheFileInfo_t2858191078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::SetUpRevalidationHeaders(BestHTTP.HTTPRequest)
extern "C"  void HTTPCacheFileInfo_SetUpRevalidationHeaders_m1743847060 (HTTPCacheFileInfo_t2858191078 * __this, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream BestHTTP.Caching.HTTPCacheFileInfo::GetBodyStream(System.Int32&)
extern "C"  Stream_t3255436806 * HTTPCacheFileInfo_GetBodyStream_m3278035115 (HTTPCacheFileInfo_t2858191078 * __this, int32_t* ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPResponse BestHTTP.Caching.HTTPCacheFileInfo::ReadResponseTo(BestHTTP.HTTPRequest)
extern "C"  HTTPResponse_t62748825 * HTTPCacheFileInfo_ReadResponseTo_m3231019977 (HTTPCacheFileInfo_t2858191078 * __this, HTTPRequest_t138485887 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Caching.HTTPCacheFileInfo::Store(BestHTTP.HTTPResponse)
extern "C"  void HTTPCacheFileInfo_Store_m2675227570 (HTTPCacheFileInfo_t2858191078 * __this, HTTPResponse_t62748825 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream BestHTTP.Caching.HTTPCacheFileInfo::GetSaveStream(BestHTTP.HTTPResponse)
extern "C"  Stream_t3255436806 * HTTPCacheFileInfo_GetSaveStream_m1498007078 (HTTPCacheFileInfo_t2858191078 * __this, HTTPResponse_t62748825 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Caching.HTTPCacheFileInfo::CompareTo(BestHTTP.Caching.HTTPCacheFileInfo)
extern "C"  int32_t HTTPCacheFileInfo_CompareTo_m3155776149 (HTTPCacheFileInfo_t2858191078 * __this, HTTPCacheFileInfo_t2858191078 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
