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

// BestHTTP.Decompression.Zlib.DeflateStream
struct DeflateStream_t2274450459;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp2282214205.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp4151391442.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Flus1182037460.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp2530143933.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.Decompression.Zlib.DeflateStream::.ctor(System.IO.Stream,BestHTTP.Decompression.Zlib.CompressionMode)
extern "C"  void DeflateStream__ctor_m1646311302 (DeflateStream_t2274450459 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::.ctor(System.IO.Stream,BestHTTP.Decompression.Zlib.CompressionMode,BestHTTP.Decompression.Zlib.CompressionLevel)
extern "C"  void DeflateStream__ctor_m923303612 (DeflateStream_t2274450459 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, int32_t ___level2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::.ctor(System.IO.Stream,BestHTTP.Decompression.Zlib.CompressionMode,System.Boolean)
extern "C"  void DeflateStream__ctor_m3201776513 (DeflateStream_t2274450459 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::.ctor(System.IO.Stream,BestHTTP.Decompression.Zlib.CompressionMode,BestHTTP.Decompression.Zlib.CompressionLevel,System.Boolean)
extern "C"  void DeflateStream__ctor_m2585650237 (DeflateStream_t2274450459 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Decompression.Zlib.FlushType BestHTTP.Decompression.Zlib.DeflateStream::get_FlushMode()
extern "C"  int32_t DeflateStream_get_FlushMode_m230419193 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::set_FlushMode(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  void DeflateStream_set_FlushMode_m368677224 (DeflateStream_t2274450459 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateStream::get_BufferSize()
extern "C"  int32_t DeflateStream_get_BufferSize_m47023176 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::set_BufferSize(System.Int32)
extern "C"  void DeflateStream_set_BufferSize_m3853670161 (DeflateStream_t2274450459 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Decompression.Zlib.CompressionStrategy BestHTTP.Decompression.Zlib.DeflateStream::get_Strategy()
extern "C"  int32_t DeflateStream_get_Strategy_m3763633304 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::set_Strategy(BestHTTP.Decompression.Zlib.CompressionStrategy)
extern "C"  void DeflateStream_set_Strategy_m2199073223 (DeflateStream_t2274450459 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.DeflateStream::get_TotalIn()
extern "C"  int64_t DeflateStream_get_TotalIn_m672395625 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.DeflateStream::get_TotalOut()
extern "C"  int64_t DeflateStream_get_TotalOut_m3196822642 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::Dispose(System.Boolean)
extern "C"  void DeflateStream_Dispose_m3444102102 (DeflateStream_t2274450459 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.DeflateStream::get_CanRead()
extern "C"  bool DeflateStream_get_CanRead_m4070187679 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.DeflateStream::get_CanSeek()
extern "C"  bool DeflateStream_get_CanSeek_m703265901 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.DeflateStream::get_CanWrite()
extern "C"  bool DeflateStream_get_CanWrite_m1640011514 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::Flush()
extern "C"  void DeflateStream_Flush_m2150388944 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.DeflateStream::get_Length()
extern "C"  int64_t DeflateStream_get_Length_m3396394040 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.DeflateStream::get_Position()
extern "C"  int64_t DeflateStream_get_Position_m2077179861 (DeflateStream_t2274450459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::set_Position(System.Int64)
extern "C"  void DeflateStream_set_Position_m780657302 (DeflateStream_t2274450459 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_Read_m3871453215 (DeflateStream_t2274450459 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t DeflateStream_Seek_m3420222624 (DeflateStream_t2274450459 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::SetLength(System.Int64)
extern "C"  void DeflateStream_SetLength_m3096033254 (DeflateStream_t2274450459 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_Write_m3284420914 (DeflateStream_t2274450459 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Decompression.Zlib.DeflateStream::CompressString(System.String)
extern "C"  ByteU5BU5D_t3397334013* DeflateStream_CompressString_m2567384629 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Decompression.Zlib.DeflateStream::CompressBuffer(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DeflateStream_CompressBuffer_m220392121 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Decompression.Zlib.DeflateStream::UncompressString(System.Byte[])
extern "C"  String_t* DeflateStream_UncompressString_m3062496244 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___compressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Decompression.Zlib.DeflateStream::UncompressBuffer(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DeflateStream_UncompressBuffer_m2165696960 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___compressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
