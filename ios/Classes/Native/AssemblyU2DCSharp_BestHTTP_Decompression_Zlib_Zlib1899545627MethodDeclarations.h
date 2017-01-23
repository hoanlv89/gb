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

// BestHTTP.Decompression.Zlib.ZlibCodec
struct ZlibCodec_t1899545627;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp2282214205.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Flus1182037460.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp4151391442.h"
#include "AssemblyU2DCSharp_BestHTTP_Decompression_Zlib_Comp2530143933.h"

// System.Void BestHTTP.Decompression.Zlib.ZlibCodec::.ctor()
extern "C"  void ZlibCodec__ctor_m3945754656 (ZlibCodec_t1899545627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibCodec::.ctor(BestHTTP.Decompression.Zlib.CompressionMode)
extern "C"  void ZlibCodec__ctor_m3022115177 (ZlibCodec_t1899545627 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::get_Adler32()
extern "C"  int32_t ZlibCodec_get_Adler32_m3347100016 (ZlibCodec_t1899545627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::InitializeInflate()
extern "C"  int32_t ZlibCodec_InitializeInflate_m3074972739 (ZlibCodec_t1899545627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::InitializeInflate(System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeInflate_m3143324686 (ZlibCodec_t1899545627 * __this, bool ___expectRfc1950Header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::InitializeInflate(System.Int32)
extern "C"  int32_t ZlibCodec_InitializeInflate_m1021464254 (ZlibCodec_t1899545627 * __this, int32_t ___windowBits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeInflate_m3218258461 (ZlibCodec_t1899545627 * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::Inflate(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  int32_t ZlibCodec_Inflate_m3063577743 (ZlibCodec_t1899545627 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::EndInflate()
extern "C"  int32_t ZlibCodec_EndInflate_m2365261612 (ZlibCodec_t1899545627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::SyncInflate()
extern "C"  int32_t ZlibCodec_SyncInflate_m2772221972 (ZlibCodec_t1899545627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::InitializeDeflate()
extern "C"  int32_t ZlibCodec_InitializeDeflate_m1737294825 (ZlibCodec_t1899545627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::InitializeDeflate(BestHTTP.Decompression.Zlib.CompressionLevel)
extern "C"  int32_t ZlibCodec_InitializeDeflate_m4034854813 (ZlibCodec_t1899545627 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::InitializeDeflate(BestHTTP.Decompression.Zlib.CompressionLevel,System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeDeflate_m1216106910 (ZlibCodec_t1899545627 * __this, int32_t ___level0, bool ___wantRfc1950Header1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::InitializeDeflate(BestHTTP.Decompression.Zlib.CompressionLevel,System.Int32)
extern "C"  int32_t ZlibCodec_InitializeDeflate_m3948495378 (ZlibCodec_t1899545627 * __this, int32_t ___level0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::InitializeDeflate(BestHTTP.Decompression.Zlib.CompressionLevel,System.Int32,System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeDeflate_m1786320227 (ZlibCodec_t1899545627 * __this, int32_t ___level0, int32_t ___bits1, bool ___wantRfc1950Header2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
extern "C"  int32_t ZlibCodec__InternalInitializeDeflate_m2664519340 (ZlibCodec_t1899545627 * __this, bool ___wantRfc1950Header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::Deflate(BestHTTP.Decompression.Zlib.FlushType)
extern "C"  int32_t ZlibCodec_Deflate_m3795980765 (ZlibCodec_t1899545627 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::EndDeflate()
extern "C"  int32_t ZlibCodec_EndDeflate_m156995892 (ZlibCodec_t1899545627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibCodec::ResetDeflate()
extern "C"  void ZlibCodec_ResetDeflate_m2460484640 (ZlibCodec_t1899545627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::SetDeflateParams(BestHTTP.Decompression.Zlib.CompressionLevel,BestHTTP.Decompression.Zlib.CompressionStrategy)
extern "C"  int32_t ZlibCodec_SetDeflateParams_m2505366340 (ZlibCodec_t1899545627 * __this, int32_t ___level0, int32_t ___strategy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::SetDictionary(System.Byte[])
extern "C"  int32_t ZlibCodec_SetDictionary_m1421476451 (ZlibCodec_t1899545627 * __this, ByteU5BU5D_t3397334013* ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Decompression.Zlib.ZlibCodec::flush_pending()
extern "C"  void ZlibCodec_flush_pending_m2086829426 (ZlibCodec_t1899545627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZlibCodec_read_buf_m813875009 (ZlibCodec_t1899545627 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___start1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
