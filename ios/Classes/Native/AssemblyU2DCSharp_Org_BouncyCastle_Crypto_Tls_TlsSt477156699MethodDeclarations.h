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

// Org.BouncyCastle.Crypto.Tls.TlsStream
struct TlsStream_t477156699;
// Org.BouncyCastle.Crypto.Tls.TlsProtocol
struct TlsProtocol_t2348540693;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_TlsP2348540693.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsStream::.ctor(Org.BouncyCastle.Crypto.Tls.TlsProtocol)
extern "C"  void TlsStream__ctor_m3126362641 (TlsStream_t477156699 * __this, TlsProtocol_t2348540693 * ___handler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsStream::get_CanRead()
extern "C"  bool TlsStream_get_CanRead_m3084866745 (TlsStream_t477156699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsStream::get_CanSeek()
extern "C"  bool TlsStream_get_CanSeek_m2156821459 (TlsStream_t477156699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsStream::get_CanWrite()
extern "C"  bool TlsStream_get_CanWrite_m1758657830 (TlsStream_t477156699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsStream::Dispose(System.Boolean)
extern "C"  void TlsStream_Dispose_m3497081622 (TlsStream_t477156699 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsStream::Flush()
extern "C"  void TlsStream_Flush_m81259848 (TlsStream_t477156699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Tls.TlsStream::get_Length()
extern "C"  int64_t TlsStream_get_Length_m1012941964 (TlsStream_t477156699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Tls.TlsStream::get_Position()
extern "C"  int64_t TlsStream_get_Position_m273983899 (TlsStream_t477156699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsStream::set_Position(System.Int64)
extern "C"  void TlsStream_set_Position_m2098784950 (TlsStream_t477156699 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t TlsStream_Read_m2686449349 (TlsStream_t477156699 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsStream::ReadByte()
extern "C"  int32_t TlsStream_ReadByte_m2162314564 (TlsStream_t477156699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t TlsStream_Seek_m2701946896 (TlsStream_t477156699 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsStream::SetLength(System.Int64)
extern "C"  void TlsStream_SetLength_m2747359066 (TlsStream_t477156699 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsStream_Write_m3129944926 (TlsStream_t477156699 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsStream::WriteByte(System.Byte)
extern "C"  void TlsStream_WriteByte_m434274178 (TlsStream_t477156699 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
