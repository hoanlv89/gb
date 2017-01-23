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

// Org.BouncyCastle.Utilities.Zlib.Inflate
struct Inflate_t807188643;
// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t708755204;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_Zlib_Z708755204.h"

// System.Void Org.BouncyCastle.Utilities.Zlib.Inflate::.ctor()
extern "C"  void Inflate__ctor_m1700316699 (Inflate_t807188643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateReset(Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  int32_t Inflate_inflateReset_m1251938644 (Inflate_t807188643 * __this, ZStream_t708755204 * ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateEnd(Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  int32_t Inflate_inflateEnd_m2321204094 (Inflate_t807188643 * __this, ZStream_t708755204 * ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateInit(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
extern "C"  int32_t Inflate_inflateInit_m2993174664 (Inflate_t807188643 * __this, ZStream_t708755204 * ___z0, int32_t ___w1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflate(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
extern "C"  int32_t Inflate_inflate_m1035078622 (Inflate_t807188643 * __this, ZStream_t708755204 * ___z0, int32_t ___f1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateSetDictionary(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Byte[],System.Int32)
extern "C"  int32_t Inflate_inflateSetDictionary_m1854211103 (Inflate_t807188643 * __this, ZStream_t708755204 * ___z0, ByteU5BU5D_t3397334013* ___dictionary1, int32_t ___dictLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateSync(Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  int32_t Inflate_inflateSync_m3320188474 (Inflate_t807188643 * __this, ZStream_t708755204 * ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateSyncPoint(Org.BouncyCastle.Utilities.Zlib.ZStream)
extern "C"  int32_t Inflate_inflateSyncPoint_m502246484 (Inflate_t807188643 * __this, ZStream_t708755204 * ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Zlib.Inflate::.cctor()
extern "C"  void Inflate__cctor_m3175743114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
