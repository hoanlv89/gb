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

// BestHTTP.Decompression.Zlib.GZipStream
struct GZipStream_t1683233742;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp2282214205.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp4151391442.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Flus1182037460.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void BestHTTP.Decompression.Zlib.GZipStream::.ctor(System.IO.Stream,BestHTTP.Decompression.Zlib.CompressionMode)
extern "C"  void GZipStream__ctor_m2277376101 (GZipStream_t1683233742 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::.ctor(System.IO.Stream,BestHTTP.Decompression.Zlib.CompressionMode,BestHTTP.Decompression.Zlib.CompressionLevel)
extern "C"  void GZipStream__ctor_m1782109369 (GZipStream_t1683233742 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, int32_t ___level2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::.ctor(System.IO.Stream,BestHTTP.Decompression.Zlib.CompressionMode,System.Boolean)
extern "C"  void GZipStream__ctor_m3466691298 (GZipStream_t1683233742 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::.ctor(System.IO.Stream,BestHTTP.Decompression.Zlib.CompressionMode,BestHTTP.Decompression.Zlib.CompressionLevel,System.Boolean)
extern "C"  void GZipStream__ctor_m666636042 (GZipStream_t1683233742 * __this, Stream_t3255436806 * ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Decompression.Zlib.GZipStream::get_Comment()
extern "C"  String_t* GZipStream_get_Comment_m4116070330 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::set_Comment(System.String)
extern "C"  void GZipStream_set_Comment_m1158236059 (GZipStream_t1683233742 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Decompression.Zlib.GZipStream::get_FileName()
extern "C"  String_t* GZipStream_get_FileName_m2161167286 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::set_FileName(System.String)
extern "C"  void GZipStream_set_FileName_m3652767645 (GZipStream_t1683233742 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.GZipStream::get_Crc32()
extern "C"  int32_t GZipStream_get_Crc32_m513110199 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Decompression.Zlib.FlushType BestHTTP.Decompression.Zlib.GZipStream::get_FlushMode()
extern "C"  int32_t GZipStream_get_FlushMode_m3602311428 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::set_FlushMode(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  void GZipStream_set_FlushMode_m53675841 (GZipStream_t1683233742 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.GZipStream::get_BufferSize()
extern "C"  int32_t GZipStream_get_BufferSize_m3674923781 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::set_BufferSize(System.Int32)
extern "C"  void GZipStream_set_BufferSize_m2682064236 (GZipStream_t1683233742 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.GZipStream::get_TotalIn()
extern "C"  int64_t GZipStream_get_TotalIn_m2495292652 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.GZipStream::get_TotalOut()
extern "C"  int64_t GZipStream_get_TotalOut_m2908413611 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::Dispose(System.Boolean)
extern "C"  void GZipStream_Dispose_m2678069651 (GZipStream_t1683233742 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.GZipStream::get_CanRead()
extern "C"  bool GZipStream_get_CanRead_m3811583480 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.GZipStream::get_CanSeek()
extern "C"  bool GZipStream_get_CanSeek_m2346515640 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.GZipStream::get_CanWrite()
extern "C"  bool GZipStream_get_CanWrite_m2839484031 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::Flush()
extern "C"  void GZipStream_Flush_m1681877427 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.GZipStream::get_Length()
extern "C"  int64_t GZipStream_get_Length_m712174335 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.GZipStream::get_Position()
extern "C"  int64_t GZipStream_get_Position_m4293393170 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::set_Position(System.Int64)
extern "C"  void GZipStream_set_Position_m3026830813 (GZipStream_t1683233742 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GZipStream_Read_m629362018 (GZipStream_t1683233742 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t GZipStream_Seek_m4041497731 (GZipStream_t1683233742 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::SetLength(System.Int64)
extern "C"  void GZipStream_SetLength_m578923231 (GZipStream_t1683233742 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipStream_Write_m4206591445 (GZipStream_t1683233742 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.GZipStream::EmitHeader()
extern "C"  int32_t GZipStream_EmitHeader_m2970368999 (GZipStream_t1683233742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Decompression.Zlib.GZipStream::CompressString(System.String)
extern "C"  ByteU5BU5D_t3397334013* GZipStream_CompressString_m3548161528 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Decompression.Zlib.GZipStream::CompressBuffer(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* GZipStream_CompressBuffer_m1653317252 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Decompression.Zlib.GZipStream::UncompressString(System.Byte[])
extern "C"  String_t* GZipStream_UncompressString_m3521739353 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___compressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Decompression.Zlib.GZipStream::UncompressBuffer(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* GZipStream_UncompressBuffer_m1996432657 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___compressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.GZipStream::.cctor()
extern "C"  void GZipStream__cctor_m2507926146 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
