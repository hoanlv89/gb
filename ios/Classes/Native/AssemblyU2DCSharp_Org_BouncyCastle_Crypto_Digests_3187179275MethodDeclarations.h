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

// Org.BouncyCastle.Crypto.Digests.Sha1Digest
struct Sha1Digest_t3187179275;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_3187179275.h"

// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::.ctor()
extern "C"  void Sha1Digest__ctor_m4229643854 (Sha1Digest_t3187179275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Sha1Digest)
extern "C"  void Sha1Digest__ctor_m300868907 (Sha1Digest_t3187179275 * __this, Sha1Digest_t3187179275 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.Sha1Digest)
extern "C"  void Sha1Digest_CopyIn_m3306413525 (Sha1Digest_t3187179275 * __this, Sha1Digest_t3187179275 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.Sha1Digest::get_AlgorithmName()
extern "C"  String_t* Sha1Digest_get_AlgorithmName_m4075868792 (Sha1Digest_t3187179275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::GetDigestSize()
extern "C"  int32_t Sha1Digest_GetDigestSize_m1902655187 (Sha1Digest_t3187179275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void Sha1Digest_ProcessWord_m795765173 (Sha1Digest_t3187179275 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::ProcessLength(System.Int64)
extern "C"  void Sha1Digest_ProcessLength_m286614187 (Sha1Digest_t3187179275 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Sha1Digest_DoFinal_m1819102981 (Sha1Digest_t3187179275 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::Reset()
extern "C"  void Sha1Digest_Reset_m1655854527 (Sha1Digest_t3187179275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::F(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t Sha1Digest_F_m1964607475 (Il2CppObject * __this /* static, unused */, uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t Sha1Digest_H_m2238843685 (Il2CppObject * __this /* static, unused */, uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::G(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t Sha1Digest_G_m573745362 (Il2CppObject * __this /* static, unused */, uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::ProcessBlock()
extern "C"  void Sha1Digest_ProcessBlock_m675140234 (Sha1Digest_t3187179275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Sha1Digest::Copy()
extern "C"  Il2CppObject * Sha1Digest_Copy_m2502831555 (Sha1Digest_t3187179275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void Sha1Digest_Reset_m599250658 (Sha1Digest_t3187179275 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
