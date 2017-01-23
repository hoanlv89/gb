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

// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t3313120627;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.List`1<BestHTTP.Cookies.Cookie>
struct List_1_t3531925514;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// BestHTTP.HTTPRange
struct HTTPRange_t1154458197;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2766455145;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.HTTPResponse::.ctor(BestHTTP.HTTPRequest,System.IO.Stream,System.Boolean,System.Boolean)
extern "C"  void HTTPResponse__ctor_m230071036 (HTTPResponse_t62748825 * __this, HTTPRequest_t138485887 * ___request0, Stream_t3255436806 * ___stream1, bool ___isStreamed2, bool ___isFromCache3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPResponse::get_VersionMajor()
extern "C"  int32_t HTTPResponse_get_VersionMajor_m2009077818 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_VersionMajor(System.Int32)
extern "C"  void HTTPResponse_set_VersionMajor_m3050326731 (HTTPResponse_t62748825 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPResponse::get_VersionMinor()
extern "C"  int32_t HTTPResponse_get_VersionMinor_m555488670 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_VersionMinor(System.Int32)
extern "C"  void HTTPResponse_set_VersionMinor_m2712022775 (HTTPResponse_t62748825 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPResponse::get_StatusCode()
extern "C"  int32_t HTTPResponse_get_StatusCode_m1879961860 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_StatusCode(System.Int32)
extern "C"  void HTTPResponse_set_StatusCode_m624361471 (HTTPResponse_t62748825 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::get_IsSuccess()
extern "C"  bool HTTPResponse_get_IsSuccess_m3874180644 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPResponse::get_Message()
extern "C"  String_t* HTTPResponse_get_Message_m1456893857 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_Message(System.String)
extern "C"  void HTTPResponse_set_Message_m611337388 (HTTPResponse_t62748825 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::get_IsStreamed()
extern "C"  bool HTTPResponse_get_IsStreamed_m487569686 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_IsStreamed(System.Boolean)
extern "C"  void HTTPResponse_set_IsStreamed_m1818345339 (HTTPResponse_t62748825 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::get_IsStreamingFinished()
extern "C"  bool HTTPResponse_get_IsStreamingFinished_m2893506363 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_IsStreamingFinished(System.Boolean)
extern "C"  void HTTPResponse_set_IsStreamingFinished_m1415187022 (HTTPResponse_t62748825 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::get_IsFromCache()
extern "C"  bool HTTPResponse_get_IsFromCache_m1699640287 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_IsFromCache(System.Boolean)
extern "C"  void HTTPResponse_set_IsFromCache_m1384387870 (HTTPResponse_t62748825 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> BestHTTP.HTTPResponse::get_Headers()
extern "C"  Dictionary_2_t3313120627 * HTTPResponse_get_Headers_m936435473 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_Headers(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>)
extern "C"  void HTTPResponse_set_Headers_m1525963632 (HTTPResponse_t62748825 * __this, Dictionary_2_t3313120627 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.HTTPResponse::get_Data()
extern "C"  ByteU5BU5D_t3397334013* HTTPResponse_get_Data_m1789548639 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_Data(System.Byte[])
extern "C"  void HTTPResponse_set_Data_m499764640 (HTTPResponse_t62748825 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::get_IsUpgraded()
extern "C"  bool HTTPResponse_get_IsUpgraded_m2755300745 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_IsUpgraded(System.Boolean)
extern "C"  void HTTPResponse_set_IsUpgraded_m1428135504 (HTTPResponse_t62748825 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Cookies.Cookie> BestHTTP.HTTPResponse::get_Cookies()
extern "C"  List_1_t3531925514 * HTTPResponse_get_Cookies_m4062000904 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_Cookies(System.Collections.Generic.List`1<BestHTTP.Cookies.Cookie>)
extern "C"  void HTTPResponse_set_Cookies_m2625273381 (HTTPResponse_t62748825 * __this, List_1_t3531925514 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPResponse::get_DataAsText()
extern "C"  String_t* HTTPResponse_get_DataAsText_m3686085993 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D BestHTTP.HTTPResponse::get_DataAsTexture2D()
extern "C"  Texture2D_t3542995729 * HTTPResponse_get_DataAsTexture2D_m3720058869 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::get_IsClosedManually()
extern "C"  bool HTTPResponse_get_IsClosedManually_m2785101250 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::set_IsClosedManually(System.Boolean)
extern "C"  void HTTPResponse_set_IsClosedManually_m208550627 (HTTPResponse_t62748825 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::Receive(System.Int32,System.Boolean)
extern "C"  bool HTTPResponse_Receive_m707143951 (HTTPResponse_t62748825 * __this, int32_t ___forceReadRawContentLength0, bool ___readPayloadData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::ReadPayload(System.Int32)
extern "C"  bool HTTPResponse_ReadPayload_m1861385735 (HTTPResponse_t62748825 * __this, int32_t ___forceReadRawContentLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::ReadHeaders(System.IO.Stream)
extern "C"  void HTTPResponse_ReadHeaders_m677989151 (HTTPResponse_t62748825 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::AddHeader(System.String,System.String)
extern "C"  void HTTPResponse_AddHeader_m2654873294 (HTTPResponse_t62748825 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> BestHTTP.HTTPResponse::GetHeaderValues(System.String)
extern "C"  List_1_t1398341365 * HTTPResponse_GetHeaderValues_m877516172 (HTTPResponse_t62748825 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPResponse::GetFirstHeaderValue(System.String)
extern "C"  String_t* HTTPResponse_GetFirstHeaderValue_m3402872109 (HTTPResponse_t62748825 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::HasHeaderWithValue(System.String,System.String)
extern "C"  bool HTTPResponse_HasHeaderWithValue_m2865016606 (HTTPResponse_t62748825 * __this, String_t* ___headerName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::HasHeader(System.String)
extern "C"  bool HTTPResponse_HasHeader_m3796291905 (HTTPResponse_t62748825 * __this, String_t* ___headerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRange BestHTTP.HTTPResponse::GetRange()
extern "C"  HTTPRange_t1154458197 * HTTPResponse_GetRange_m936663701 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPResponse::ReadTo(System.IO.Stream,System.Byte)
extern "C"  String_t* HTTPResponse_ReadTo_m2329165088 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, uint8_t ___blocker1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPResponse::ReadTo(System.IO.Stream,System.Byte,System.Byte)
extern "C"  String_t* HTTPResponse_ReadTo_m4291404221 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, uint8_t ___blocker11, uint8_t ___blocker22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPResponse::NoTrimReadTo(System.IO.Stream,System.Byte,System.Byte)
extern "C"  String_t* HTTPResponse_NoTrimReadTo_m118731426 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, uint8_t ___blocker11, uint8_t ___blocker22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPResponse::ReadChunkLength(System.IO.Stream)
extern "C"  int32_t HTTPResponse_ReadChunkLength_m1284831306 (HTTPResponse_t62748825 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::ReadChunked(System.IO.Stream)
extern "C"  void HTTPResponse_ReadChunked_m2861103845 (HTTPResponse_t62748825 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::ReadRaw(System.IO.Stream,System.Int32)
extern "C"  void HTTPResponse_ReadRaw_m2345366586 (HTTPResponse_t62748825 * __this, Stream_t3255436806 * ___stream0, int32_t ___contentLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::ReadUnknownSize(System.IO.Stream)
extern "C"  void HTTPResponse_ReadUnknownSize_m409964558 (HTTPResponse_t62748825 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.HTTPResponse::DecodeStream(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* HTTPResponse_DecodeStream_m765284065 (HTTPResponse_t62748825 * __this, Stream_t3255436806 * ___streamToDecode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::BeginReceiveStreamFragments()
extern "C"  void HTTPResponse_BeginReceiveStreamFragments_m2329104329 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::FeedStreamFragment(System.Byte[],System.Int32,System.Int32)
extern "C"  void HTTPResponse_FeedStreamFragment_m1084985123 (HTTPResponse_t62748825 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___pos1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::FlushRemainingFragmentBuffer()
extern "C"  void HTTPResponse_FlushRemainingFragmentBuffer_m3865012196 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::AddStreamedFragment(System.Byte[])
extern "C"  void HTTPResponse_AddStreamedFragment_m1865222657 (HTTPResponse_t62748825 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::WaitWhileHasFragments()
extern "C"  void HTTPResponse_WaitWhileHasFragments_m3205233463 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Byte[]> BestHTTP.HTTPResponse::GetStreamedFragments()
extern "C"  List_1_t2766455145 * HTTPResponse_GetStreamedFragments_m1549317090 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPResponse::HasStreamedFragments()
extern "C"  bool HTTPResponse_HasStreamedFragments_m1601919672 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::FinishStreaming()
extern "C"  void HTTPResponse_FinishStreaming_m3733657125 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPResponse::Dispose()
extern "C"  void HTTPResponse_Dispose_m3162001053 (HTTPResponse_t62748825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
