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

// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t708755204;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Utilities.Zlib.ZStream::.ctor()
extern "C"  void ZStream__ctor_m4022487796 (ZStream_t708755204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit()
extern "C"  int32_t ZStream_inflateInit_m124081377 (ZStream_t708755204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit(System.Boolean)
extern "C"  int32_t ZStream_inflateInit_m634935658 (ZStream_t708755204 * __this, bool ___nowrap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit(System.Int32)
extern "C"  int32_t ZStream_inflateInit_m2764220834 (ZStream_t708755204 * __this, int32_t ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit(System.Int32,System.Boolean)
extern "C"  int32_t ZStream_inflateInit_m856556259 (ZStream_t708755204 * __this, int32_t ___w0, bool ___nowrap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflate(System.Int32)
extern "C"  int32_t ZStream_inflate_m168246940 (ZStream_t708755204 * __this, int32_t ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateEnd()
extern "C"  int32_t ZStream_inflateEnd_m3224162612 (ZStream_t708755204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateSync()
extern "C"  int32_t ZStream_inflateSync_m155372458 (ZStream_t708755204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateSetDictionary(System.Byte[],System.Int32)
extern "C"  int32_t ZStream_inflateSetDictionary_m541732815 (ZStream_t708755204 * __this, ByteU5BU5D_t3397334013* ___dictionary0, int32_t ___dictLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32)
extern "C"  int32_t ZStream_deflateInit_m2732245890 (ZStream_t708755204 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32,System.Boolean)
extern "C"  int32_t ZStream_deflateInit_m3246568165 (ZStream_t708755204 * __this, int32_t ___level0, bool ___nowrap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32,System.Int32)
extern "C"  int32_t ZStream_deflateInit_m90094275 (ZStream_t708755204 * __this, int32_t ___level0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t ZStream_deflateInit_m2621241576 (ZStream_t708755204 * __this, int32_t ___level0, int32_t ___bits1, bool ___nowrap2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflate(System.Int32)
extern "C"  int32_t ZStream_deflate_m1438161260 (ZStream_t708755204 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateEnd()
extern "C"  int32_t ZStream_deflateEnd_m1774538748 (ZStream_t708755204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateParams(System.Int32,System.Int32)
extern "C"  int32_t ZStream_deflateParams_m2589336981 (ZStream_t708755204 * __this, int32_t ___level0, int32_t ___strategy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateSetDictionary(System.Byte[],System.Int32)
extern "C"  int32_t ZStream_deflateSetDictionary_m531150685 (ZStream_t708755204 * __this, ByteU5BU5D_t3397334013* ___dictionary0, int32_t ___dictLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZStream::flush_pending()
extern "C"  void ZStream_flush_pending_m1527438254 (ZStream_t708755204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::read_buf(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZStream_read_buf_m781209061 (ZStream_t708755204 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___start1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZStream::free()
extern "C"  void ZStream_free_m3880556584 (ZStream_t708755204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
