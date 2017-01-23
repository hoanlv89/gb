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

// Org.BouncyCastle.Utilities.Zlib.ZOutputStream
struct ZOutputStream_t597810407;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t708755204;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_Zlib_Z708755204.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream)
extern "C"  void ZOutputStream__ctor_m2323744536 (ZOutputStream_t597810407 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  void ZOutputStream__ctor_m4156633611 (ZOutputStream_t597810407 * __this, Stream_t3255436806 * ___output0, ZStream_t708755204 * ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32)
extern "C"  void ZOutputStream__ctor_m1368372353 (ZOutputStream_t597810407 * __this, Stream_t3255436806 * ___output0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32,System.Boolean)
extern "C"  void ZOutputStream__ctor_m3371599358 (ZOutputStream_t597810407 * __this, Stream_t3255436806 * ___output0, int32_t ___level1, bool ___nowrap2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_CanRead()
extern "C"  bool ZOutputStream_get_CanRead_m3296076924 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_CanSeek()
extern "C"  bool ZOutputStream_get_CanSeek_m4224122380 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_CanWrite()
extern "C"  bool ZOutputStream_get_CanWrite_m546438119 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Dispose(System.Boolean)
extern "C"  void ZOutputStream_Dispose_m857475947 (ZOutputStream_t597810407 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::End()
extern "C"  void ZOutputStream_End_m2979909738 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Finish()
extern "C"  void ZOutputStream_Finish_m2830700788 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Flush()
extern "C"  void ZOutputStream_Flush_m168850027 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_FlushMode()
extern "C"  int32_t ZOutputStream_get_FlushMode_m573998719 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::set_FlushMode(System.Int32)
extern "C"  void ZOutputStream_set_FlushMode_m4160265208 (ZOutputStream_t597810407 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_Length()
extern "C"  int64_t ZOutputStream_get_Length_m1679113035 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_Position()
extern "C"  int64_t ZOutputStream_get_Position_m2636948612 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::set_Position(System.Int64)
extern "C"  void ZOutputStream_set_Position_m1272782421 (ZOutputStream_t597810407 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZOutputStream_Read_m791962898 (ZOutputStream_t597810407 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZOutputStream_Seek_m1698533487 (ZOutputStream_t597810407 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::SetLength(System.Int64)
extern "C"  void ZOutputStream_SetLength_m916725431 (ZOutputStream_t597810407 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_TotalIn()
extern "C"  int64_t ZOutputStream_get_TotalIn_m1717101002 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_TotalOut()
extern "C"  int64_t ZOutputStream_get_TotalOut_m686602847 (ZOutputStream_t597810407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZOutputStream_Write_m3730755325 (ZOutputStream_t597810407 * __this, ByteU5BU5D_t3397334013* ___b0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::WriteByte(System.Byte)
extern "C"  void ZOutputStream_WriteByte_m1886400273 (ZOutputStream_t597810407 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
