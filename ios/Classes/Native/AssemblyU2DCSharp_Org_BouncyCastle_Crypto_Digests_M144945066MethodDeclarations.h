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

// Org.BouncyCastle.Crypto.Digests.MD5Digest
struct MD5Digest_t144945066;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_M144945066.h"

// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::.ctor()
extern "C"  void MD5Digest__ctor_m2174379749 (MD5Digest_t144945066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::.ctor(Org.BouncyCastle.Crypto.Digests.MD5Digest)
extern "C"  void MD5Digest__ctor_m3703294595 (MD5Digest_t144945066 * __this, MD5Digest_t144945066 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.MD5Digest)
extern "C"  void MD5Digest_CopyIn_m4227855117 (MD5Digest_t144945066 * __this, MD5Digest_t144945066 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.MD5Digest::get_AlgorithmName()
extern "C"  String_t* MD5Digest_get_AlgorithmName_m3185352085 (MD5Digest_t144945066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::GetDigestSize()
extern "C"  int32_t MD5Digest_GetDigestSize_m4090377830 (MD5Digest_t144945066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void MD5Digest_ProcessWord_m859380466 (MD5Digest_t144945066 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::ProcessLength(System.Int64)
extern "C"  void MD5Digest_ProcessLength_m1165921628 (MD5Digest_t144945066 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t MD5Digest_DoFinal_m1963404726 (MD5Digest_t144945066 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::Reset()
extern "C"  void MD5Digest_Reset_m2725203026 (MD5Digest_t144945066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::RotateLeft(System.UInt32,System.Int32)
extern "C"  uint32_t MD5Digest_RotateLeft_m3752691277 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::F(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t MD5Digest_F_m2201015096 (Il2CppObject * __this /* static, unused */, uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::G(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t MD5Digest_G_m3971049405 (Il2CppObject * __this /* static, unused */, uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::H(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t MD5Digest_H_m4207400730 (Il2CppObject * __this /* static, unused */, uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::K(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t MD5Digest_K_m2683205545 (Il2CppObject * __this /* static, unused */, uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::ProcessBlock()
extern "C"  void MD5Digest_ProcessBlock_m3853698427 (MD5Digest_t144945066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.MD5Digest::Copy()
extern "C"  Il2CppObject * MD5Digest_Copy_m3385860048 (MD5Digest_t144945066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void MD5Digest_Reset_m1020159295 (MD5Digest_t144945066 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::.cctor()
extern "C"  void MD5Digest__cctor_m3146298480 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
