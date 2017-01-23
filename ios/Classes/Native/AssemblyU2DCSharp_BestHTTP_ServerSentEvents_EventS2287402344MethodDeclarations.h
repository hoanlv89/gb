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

// BestHTTP.ServerSentEvents.EventSourceResponse
struct EventSourceResponse_t2287402344;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.IO.Stream
struct Stream_t3255436806;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void BestHTTP.ServerSentEvents.EventSourceResponse::.ctor(BestHTTP.HTTPRequest,System.IO.Stream,System.Boolean,System.Boolean)
extern "C"  void EventSourceResponse__ctor_m1643283507 (EventSourceResponse_t2287402344 * __this, HTTPRequest_t138485887 * ___request0, Stream_t3255436806 * ___stream1, bool ___isStreamed2, bool ___isFromCache3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ServerSentEvents.EventSourceResponse::get_IsClosed()
extern "C"  bool EventSourceResponse_get_IsClosed_m1142676596 (EventSourceResponse_t2287402344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSourceResponse::set_IsClosed(System.Boolean)
extern "C"  void EventSourceResponse_set_IsClosed_m326664481 (EventSourceResponse_t2287402344 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ServerSentEvents.EventSourceResponse::Receive(System.Int32,System.Boolean)
extern "C"  bool EventSourceResponse_Receive_m2095122220 (EventSourceResponse_t2287402344 * __this, int32_t ___forceReadRawContentLength0, bool ___readPayloadData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSourceResponse::StartReceive()
extern "C"  void EventSourceResponse_StartReceive_m2668013238 (EventSourceResponse_t2287402344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSourceResponse::ReceiveThreadFunc(System.Object)
extern "C"  void EventSourceResponse_ReceiveThreadFunc_m350218552 (EventSourceResponse_t2287402344 * __this, Il2CppObject * ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSourceResponse::ReadChunked(System.IO.Stream)
extern "C"  void EventSourceResponse_ReadChunked_m2234860072 (EventSourceResponse_t2287402344 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSourceResponse::ReadRaw(System.IO.Stream,System.Int32)
extern "C"  void EventSourceResponse_ReadRaw_m299275283 (EventSourceResponse_t2287402344 * __this, Stream_t3255436806 * ___stream0, int32_t ___contentLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSourceResponse::FeedData(System.Byte[],System.Int32)
extern "C"  void EventSourceResponse_FeedData_m1810630023 (EventSourceResponse_t2287402344 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSourceResponse::ParseLine(System.Byte[],System.Int32)
extern "C"  void EventSourceResponse_ParseLine_m3727663292 (EventSourceResponse_t2287402344 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.EventSourceResponse::BestHTTP.IProtocol.HandleEvents()
extern "C"  void EventSourceResponse_BestHTTP_IProtocol_HandleEvents_m624199917 (EventSourceResponse_t2287402344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
