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

// BestHTTP.WebSocket.Frames.WebSocketFrameReader
struct WebSocketFrameReader_t549273869;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// System.Collections.Generic.List`1<BestHTTP.WebSocket.Frames.WebSocketFrameReader>
struct List_1_t4213362297;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_WebSocket_Frames_WebSoc3499449257.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void BestHTTP.WebSocket.Frames.WebSocketFrameReader::.ctor()
extern "C"  void WebSocketFrameReader__ctor_m871316935 (WebSocketFrameReader_t549273869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.WebSocket.Frames.WebSocketFrameReader::get_IsFinal()
extern "C"  bool WebSocketFrameReader_get_IsFinal_m1643962872 (WebSocketFrameReader_t549273869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.Frames.WebSocketFrameReader::set_IsFinal(System.Boolean)
extern "C"  void WebSocketFrameReader_set_IsFinal_m1549740035 (WebSocketFrameReader_t549273869 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.WebSocket.Frames.WebSocketFrameTypes BestHTTP.WebSocket.Frames.WebSocketFrameReader::get_Type()
extern "C"  uint8_t WebSocketFrameReader_get_Type_m3208120835 (WebSocketFrameReader_t549273869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.Frames.WebSocketFrameReader::set_Type(BestHTTP.WebSocket.Frames.WebSocketFrameTypes)
extern "C"  void WebSocketFrameReader_set_Type_m2184947148 (WebSocketFrameReader_t549273869 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.WebSocket.Frames.WebSocketFrameReader::get_HasMask()
extern "C"  bool WebSocketFrameReader_get_HasMask_m3587083792 (WebSocketFrameReader_t549273869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.Frames.WebSocketFrameReader::set_HasMask(System.Boolean)
extern "C"  void WebSocketFrameReader_set_HasMask_m738296443 (WebSocketFrameReader_t549273869 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 BestHTTP.WebSocket.Frames.WebSocketFrameReader::get_Length()
extern "C"  uint64_t WebSocketFrameReader_get_Length_m2120924436 (WebSocketFrameReader_t549273869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.Frames.WebSocketFrameReader::set_Length(System.UInt64)
extern "C"  void WebSocketFrameReader_set_Length_m1943328457 (WebSocketFrameReader_t549273869 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.WebSocket.Frames.WebSocketFrameReader::get_Mask()
extern "C"  ByteU5BU5D_t3397334013* WebSocketFrameReader_get_Mask_m1818344340 (WebSocketFrameReader_t549273869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.Frames.WebSocketFrameReader::set_Mask(System.Byte[])
extern "C"  void WebSocketFrameReader_set_Mask_m2575402409 (WebSocketFrameReader_t549273869 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.WebSocket.Frames.WebSocketFrameReader::get_Data()
extern "C"  ByteU5BU5D_t3397334013* WebSocketFrameReader_get_Data_m3377796416 (WebSocketFrameReader_t549273869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.Frames.WebSocketFrameReader::set_Data(System.Byte[])
extern "C"  void WebSocketFrameReader_set_Data_m4056129505 (WebSocketFrameReader_t549273869 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.Frames.WebSocketFrameReader::Read(System.IO.Stream)
extern "C"  void WebSocketFrameReader_Read_m2314661038 (WebSocketFrameReader_t549273869 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.WebSocket.Frames.WebSocketFrameReader::Assemble(System.Collections.Generic.List`1<BestHTTP.WebSocket.Frames.WebSocketFrameReader>)
extern "C"  void WebSocketFrameReader_Assemble_m2010358731 (WebSocketFrameReader_t549273869 * __this, List_1_t4213362297 * ___fragments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte BestHTTP.WebSocket.Frames.WebSocketFrameReader::ReadByte(System.IO.Stream)
extern "C"  uint8_t WebSocketFrameReader_ReadByte_m2261863416 (WebSocketFrameReader_t549273869 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
