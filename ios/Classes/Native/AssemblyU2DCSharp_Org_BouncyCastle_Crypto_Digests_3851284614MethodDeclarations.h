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

// Org.BouncyCastle.Crypto.Digests.RipeMD160Digest
struct RipeMD160Digest_t3851284614;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_3851284614.h"

// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::.ctor()
extern "C"  void RipeMD160Digest__ctor_m1974615085 (RipeMD160Digest_t3851284614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::.ctor(Org.BouncyCastle.Crypto.Digests.RipeMD160Digest)
extern "C"  void RipeMD160Digest__ctor_m3118994339 (RipeMD160Digest_t3851284614 * __this, RipeMD160Digest_t3851284614 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD160Digest)
extern "C"  void RipeMD160Digest_CopyIn_m2456523341 (RipeMD160Digest_t3851284614 * __this, RipeMD160Digest_t3851284614 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::get_AlgorithmName()
extern "C"  String_t* RipeMD160Digest_get_AlgorithmName_m1819453725 (RipeMD160Digest_t3851284614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::GetDigestSize()
extern "C"  int32_t RipeMD160Digest_GetDigestSize_m1486258502 (RipeMD160Digest_t3851284614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void RipeMD160Digest_ProcessWord_m2284093046 (RipeMD160Digest_t3851284614 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::ProcessLength(System.Int64)
extern "C"  void RipeMD160Digest_ProcessLength_m326271220 (RipeMD160Digest_t3851284614 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
extern "C"  void RipeMD160Digest_UnpackWord_m2366892586 (RipeMD160Digest_t3851284614 * __this, int32_t ___word0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t RipeMD160Digest_DoFinal_m2351481898 (RipeMD160Digest_t3851284614 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::Reset()
extern "C"  void RipeMD160Digest_Reset_m1804850386 (RipeMD160Digest_t3851284614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::RL(System.Int32,System.Int32)
extern "C"  int32_t RipeMD160Digest_RL_m1989492233 (RipeMD160Digest_t3851284614 * __this, int32_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::F1(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD160Digest_F1_m452648617 (RipeMD160Digest_t3851284614 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::F2(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD160Digest_F2_m2347693720 (RipeMD160Digest_t3851284614 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::F3(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD160Digest_F3_m1137191539 (RipeMD160Digest_t3851284614 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::F4(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD160Digest_F4_m1489739066 (RipeMD160Digest_t3851284614 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::F5(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD160Digest_F5_m4158524437 (RipeMD160Digest_t3851284614 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::ProcessBlock()
extern "C"  void RipeMD160Digest_ProcessBlock_m3561738535 (RipeMD160Digest_t3851284614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::Copy()
extern "C"  Il2CppObject * RipeMD160Digest_Copy_m2307288056 (RipeMD160Digest_t3851284614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD160Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void RipeMD160Digest_Reset_m737877915 (RipeMD160Digest_t3851284614 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
