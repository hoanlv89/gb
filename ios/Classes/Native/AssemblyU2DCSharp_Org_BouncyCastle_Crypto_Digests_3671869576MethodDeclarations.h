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

// Org.BouncyCastle.Crypto.Digests.Sha512tDigest
struct Sha512tDigest_t3671869576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_3671869576.h"

// System.Void Org.BouncyCastle.Crypto.Digests.Sha512tDigest::.ctor(System.Int32)
extern "C"  void Sha512tDigest__ctor_m4039233278 (Sha512tDigest_t3671869576 * __this, int32_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512tDigest::.ctor(Org.BouncyCastle.Crypto.Digests.Sha512tDigest)
extern "C"  void Sha512tDigest__ctor_m2742802195 (Sha512tDigest_t3671869576 * __this, Sha512tDigest_t3671869576 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.Sha512tDigest::get_AlgorithmName()
extern "C"  String_t* Sha512tDigest_get_AlgorithmName_m3905965721 (Sha512tDigest_t3671869576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha512tDigest::GetDigestSize()
extern "C"  int32_t Sha512tDigest_GetDigestSize_m208554456 (Sha512tDigest_t3671869576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha512tDigest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Sha512tDigest_DoFinal_m1577824456 (Sha512tDigest_t3671869576 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512tDigest::Reset()
extern "C"  void Sha512tDigest_Reset_m502360020 (Sha512tDigest_t3671869576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512tDigest::tIvGenerate(System.Int32)
extern "C"  void Sha512tDigest_tIvGenerate_m1381660326 (Sha512tDigest_t3671869576 * __this, int32_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512tDigest::UInt64_To_BE(System.UInt64,System.Byte[],System.Int32,System.Int32)
extern "C"  void Sha512tDigest_UInt64_To_BE_m3575382269 (Il2CppObject * __this /* static, unused */, uint64_t ___n0, ByteU5BU5D_t3397334013* ___bs1, int32_t ___off2, int32_t ___max3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512tDigest::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32,System.Int32)
extern "C"  void Sha512tDigest_UInt32_To_BE_m711836221 (Il2CppObject * __this /* static, unused */, uint32_t ___n0, ByteU5BU5D_t3397334013* ___bs1, int32_t ___off2, int32_t ___max3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Sha512tDigest::Copy()
extern "C"  Il2CppObject * Sha512tDigest_Copy_m3394577382 (Sha512tDigest_t3671869576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512tDigest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void Sha512tDigest_Reset_m72397231 (Sha512tDigest_t3671869576 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
