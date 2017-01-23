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

// BestHTTP.WebSocket.Frames.WebSocketClose
struct WebSocketClose_t3388923051;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_Frames_WebSoc3499449257.h"

// System.Void BestHTTP.WebSocket.Frames.WebSocketClose::.ctor()
extern "C"  void WebSocketClose__ctor_m3631403625 (WebSocketClose_t3388923051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.Frames.WebSocketClose::.ctor(System.UInt16,System.String)
extern "C"  void WebSocketClose__ctor_m1045029057 (WebSocketClose_t3388923051 * __this, uint16_t ___code0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.WebSocket.Frames.WebSocketFrameTypes BestHTTP.WebSocket.Frames.WebSocketClose::get_Type()
extern "C"  uint8_t WebSocketClose_get_Type_m3212909257 (WebSocketClose_t3388923051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.WebSocket.Frames.WebSocketClose::GetData(System.UInt16,System.String)
extern "C"  ByteU5BU5D_t3397334013* WebSocketClose_GetData_m1507840439 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
