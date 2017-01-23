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

// Org.BouncyCastle.Asn1.Utilities.FilterStream
struct FilterStream_t3440239854;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void Org.BouncyCastle.Asn1.Utilities.FilterStream::.ctor(System.IO.Stream)
extern "C"  void FilterStream__ctor_m838772789 (FilterStream_t3440239854 * __this, Stream_t3255436806 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Utilities.FilterStream::get_CanRead()
extern "C"  bool FilterStream_get_CanRead_m2187634805 (FilterStream_t3440239854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Utilities.FilterStream::get_CanSeek()
extern "C"  bool FilterStream_get_CanSeek_m1562633247 (FilterStream_t3440239854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Utilities.FilterStream::get_CanWrite()
extern "C"  bool FilterStream_get_CanWrite_m1327894598 (FilterStream_t3440239854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Asn1.Utilities.FilterStream::get_Length()
extern "C"  int64_t FilterStream_get_Length_m4225758038 (FilterStream_t3440239854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Asn1.Utilities.FilterStream::get_Position()
extern "C"  int64_t FilterStream_get_Position_m3699086587 (FilterStream_t3440239854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Utilities.FilterStream::set_Position(System.Int64)
extern "C"  void FilterStream_set_Position_m1929694470 (FilterStream_t3440239854 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Utilities.FilterStream::Dispose(System.Boolean)
extern "C"  void FilterStream_Dispose_m1915102070 (FilterStream_t3440239854 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Utilities.FilterStream::Flush()
extern "C"  void FilterStream_Flush_m3959814288 (FilterStream_t3440239854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Asn1.Utilities.FilterStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t FilterStream_Seek_m2424818442 (FilterStream_t3440239854 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Utilities.FilterStream::SetLength(System.Int64)
extern "C"  void FilterStream_SetLength_m1636662130 (FilterStream_t3440239854 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Utilities.FilterStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FilterStream_Read_m3110502621 (FilterStream_t3440239854 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Utilities.FilterStream::ReadByte()
extern "C"  int32_t FilterStream_ReadByte_m1073066880 (FilterStream_t3440239854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Utilities.FilterStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void FilterStream_Write_m1265665846 (FilterStream_t3440239854 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Utilities.FilterStream::WriteByte(System.Byte)
extern "C"  void FilterStream_WriteByte_m3963032738 (FilterStream_t3440239854 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
