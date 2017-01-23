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

// Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_t2397707127;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_2397707127.h"

// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::.ctor()
extern "C"  void Sha256Digest__ctor_m1246467748 (Sha256Digest_t2397707127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Sha256Digest)
extern "C"  void Sha256Digest__ctor_m3404908171 (Sha256Digest_t2397707127 * __this, Sha256Digest_t2397707127 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.Sha256Digest)
extern "C"  void Sha256Digest_CopyIn_m808456981 (Sha256Digest_t2397707127 * __this, Sha256Digest_t2397707127 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.Sha256Digest::get_AlgorithmName()
extern "C"  String_t* Sha256Digest_get_AlgorithmName_m1658626250 (Sha256Digest_t2397707127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::GetDigestSize()
extern "C"  int32_t Sha256Digest_GetDigestSize_m3080864447 (Sha256Digest_t2397707127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void Sha256Digest_ProcessWord_m4113541953 (Sha256Digest_t2397707127 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::ProcessLength(System.Int64)
extern "C"  void Sha256Digest_ProcessLength_m3371851191 (Sha256Digest_t2397707127 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Sha256Digest_DoFinal_m3347740465 (Sha256Digest_t2397707127 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::Reset()
extern "C"  void Sha256Digest_Reset_m2320729939 (Sha256Digest_t2397707127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::initHs()
extern "C"  void Sha256Digest_initHs_m3352208183 (Sha256Digest_t2397707127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::ProcessBlock()
extern "C"  void Sha256Digest_ProcessBlock_m2740183276 (Sha256Digest_t2397707127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::Sum1Ch(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t Sha256Digest_Sum1Ch_m1881446508 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::Sum0Maj(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t Sha256Digest_Sum0Maj_m3558602718 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::Theta0(System.UInt32)
extern "C"  uint32_t Sha256Digest_Theta0_m4189011041 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::Theta1(System.UInt32)
extern "C"  uint32_t Sha256Digest_Theta1_m350857958 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Sha256Digest::Copy()
extern "C"  Il2CppObject * Sha256Digest_Copy_m4231065567 (Sha256Digest_t2397707127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void Sha256Digest_Reset_m3262561772 (Sha256Digest_t2397707127 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::.cctor()
extern "C"  void Sha256Digest__cctor_m1846991381 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
