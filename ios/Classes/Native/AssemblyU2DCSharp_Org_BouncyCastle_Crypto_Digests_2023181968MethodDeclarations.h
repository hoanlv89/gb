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

// Org.BouncyCastle.Crypto.Digests.Sha224Digest
struct Sha224Digest_t2023181968;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_2023181968.h"

// System.Void Org.BouncyCastle.Crypto.Digests.Sha224Digest::.ctor()
extern "C"  void Sha224Digest__ctor_m1040668567 (Sha224Digest_t2023181968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha224Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Sha224Digest)
extern "C"  void Sha224Digest__ctor_m677916939 (Sha224Digest_t2023181968 * __this, Sha224Digest_t2023181968 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha224Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.Sha224Digest)
extern "C"  void Sha224Digest_CopyIn_m2828972169 (Sha224Digest_t2023181968 * __this, Sha224Digest_t2023181968 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.Sha224Digest::get_AlgorithmName()
extern "C"  String_t* Sha224Digest_get_AlgorithmName_m4247027599 (Sha224Digest_t2023181968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha224Digest::GetDigestSize()
extern "C"  int32_t Sha224Digest_GetDigestSize_m179080384 (Sha224Digest_t2023181968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha224Digest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void Sha224Digest_ProcessWord_m3066315128 (Sha224Digest_t2023181968 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha224Digest::ProcessLength(System.Int64)
extern "C"  void Sha224Digest_ProcessLength_m2821688234 (Sha224Digest_t2023181968 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha224Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Sha224Digest_DoFinal_m210430740 (Sha224Digest_t2023181968 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha224Digest::Reset()
extern "C"  void Sha224Digest_Reset_m1223275536 (Sha224Digest_t2023181968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha224Digest::ProcessBlock()
extern "C"  void Sha224Digest_ProcessBlock_m2905942277 (Sha224Digest_t2023181968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha224Digest::Ch(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t Sha224Digest_Ch_m2950073619 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha224Digest::Maj(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t Sha224Digest_Maj_m2654781094 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha224Digest::Sum0(System.UInt32)
extern "C"  uint32_t Sha224Digest_Sum0_m3851919295 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha224Digest::Sum1(System.UInt32)
extern "C"  uint32_t Sha224Digest_Sum1_m877999674 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha224Digest::Theta0(System.UInt32)
extern "C"  uint32_t Sha224Digest_Theta0_m2513287120 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha224Digest::Theta1(System.UInt32)
extern "C"  uint32_t Sha224Digest_Theta1_m1192239445 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Sha224Digest::Copy()
extern "C"  Il2CppObject * Sha224Digest_Copy_m2334989774 (Sha224Digest_t2023181968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha224Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void Sha224Digest_Reset_m1818482677 (Sha224Digest_t2023181968 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha224Digest::.cctor()
extern "C"  void Sha224Digest__cctor_m3626583814 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
