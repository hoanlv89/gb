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

// BestHTTP.Decompression.Zlib.ZlibBaseStream
struct ZlibBaseStream_t3383394762;
// System.IO.Stream
struct Stream_t3255436806;
// BestHTTP.Decompression.Zlib.ZlibCodec
struct ZlibCodec_t1899545627;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp2282214205.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp4151391442.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_ZlibS953065013.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,BestHTTP.Decompression.Zlib.CompressionMode,BestHTTP.Decompression.Zlib.CompressionLevel,BestHTTP.Decompression.Zlib.ZlibStreamFlavor,System.Boolean)
extern "C"  void ZlibBaseStream__ctor_m1589393079 (ZlibBaseStream_t3383394762 * __this, Stream_t3255436806 * ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, bool ___leaveOpen4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibBaseStream::get_Crc32()
extern "C"  int32_t ZlibBaseStream_get_Crc32_m1763618555 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.ZlibBaseStream::get__wantCompress()
extern "C"  bool ZlibBaseStream_get__wantCompress_m1486581067 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Decompression.Zlib.ZlibCodec BestHTTP.Decompression.Zlib.ZlibBaseStream::get_z()
extern "C"  ZlibCodec_t1899545627 * ZlibBaseStream_get_z_m2975102796 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Decompression.Zlib.ZlibBaseStream::get_workingBuffer()
extern "C"  ByteU5BU5D_t3397334013* ZlibBaseStream_get_workingBuffer_m2149665699 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZlibBaseStream_Write_m682391905 (ZlibBaseStream_t3383394762 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::finish()
extern "C"  void ZlibBaseStream_finish_m939925820 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::end()
extern "C"  void ZlibBaseStream_end_m2113595474 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::Close()
extern "C"  void ZlibBaseStream_Close_m901846117 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::Flush()
extern "C"  void ZlibBaseStream_Flush_m901973431 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.ZlibBaseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZlibBaseStream_Seek_m3439195263 (ZlibBaseStream_t3383394762 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::SetLength(System.Int64)
extern "C"  void ZlibBaseStream_SetLength_m4090701547 (ZlibBaseStream_t3383394762 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Decompression.Zlib.ZlibBaseStream::ReadZeroTerminatedString()
extern "C"  String_t* ZlibBaseStream_ReadZeroTerminatedString_m3154291848 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibBaseStream::_ReadAndValidateGzipHeader()
extern "C"  int32_t ZlibBaseStream__ReadAndValidateGzipHeader_m3800766620 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibBaseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZlibBaseStream_Read_m1662948262 (ZlibBaseStream_t3383394762 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.ZlibBaseStream::get_CanRead()
extern "C"  bool ZlibBaseStream_get_CanRead_m2258521700 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.ZlibBaseStream::get_CanSeek()
extern "C"  bool ZlibBaseStream_get_CanSeek_m275591244 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Decompression.Zlib.ZlibBaseStream::get_CanWrite()
extern "C"  bool ZlibBaseStream_get_CanWrite_m2018111555 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.ZlibBaseStream::get_Length()
extern "C"  int64_t ZlibBaseStream_get_Length_m4097566211 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.Decompression.Zlib.ZlibBaseStream::get_Position()
extern "C"  int64_t ZlibBaseStream_get_Position_m1054120334 (ZlibBaseStream_t3383394762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::set_Position(System.Int64)
extern "C"  void ZlibBaseStream_set_Position_m1935889753 (ZlibBaseStream_t3383394762 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::CompressString(System.String,System.IO.Stream)
extern "C"  void ZlibBaseStream_CompressString_m3679505565 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Stream_t3255436806 * ___compressor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibBaseStream::CompressBuffer(System.Byte[],System.IO.Stream)
extern "C"  void ZlibBaseStream_CompressBuffer_m3246341849 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___b0, Stream_t3255436806 * ___compressor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Decompression.Zlib.ZlibBaseStream::UncompressString(System.Byte[],System.IO.Stream)
extern "C"  String_t* ZlibBaseStream_UncompressString_m1857431540 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___compressed0, Stream_t3255436806 * ___decompressor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Decompression.Zlib.ZlibBaseStream::UncompressBuffer(System.Byte[],System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* ZlibBaseStream_UncompressBuffer_m1897226674 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___compressed0, Stream_t3255436806 * ___decompressor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
