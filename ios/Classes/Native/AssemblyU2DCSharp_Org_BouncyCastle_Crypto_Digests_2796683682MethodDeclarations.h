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

// Org.BouncyCastle.Crypto.Digests.RipeMD128Digest
struct RipeMD128Digest_t2796683682;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_2796683682.h"

// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::.ctor()
extern "C"  void RipeMD128Digest__ctor_m2882135441 (RipeMD128Digest_t2796683682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::.ctor(Org.BouncyCastle.Crypto.Digests.RipeMD128Digest)
extern "C"  void RipeMD128Digest__ctor_m1763525251 (RipeMD128Digest_t2796683682 * __this, RipeMD128Digest_t2796683682 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD128Digest)
extern "C"  void RipeMD128Digest_CopyIn_m422692429 (RipeMD128Digest_t2796683682 * __this, RipeMD128Digest_t2796683682 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::get_AlgorithmName()
extern "C"  String_t* RipeMD128Digest_get_AlgorithmName_m3707201409 (RipeMD128Digest_t2796683682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::GetDigestSize()
extern "C"  int32_t RipeMD128Digest_GetDigestSize_m2786679066 (RipeMD128Digest_t2796683682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void RipeMD128Digest_ProcessWord_m3926078210 (RipeMD128Digest_t2796683682 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::ProcessLength(System.Int64)
extern "C"  void RipeMD128Digest_ProcessLength_m1440123480 (RipeMD128Digest_t2796683682 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
extern "C"  void RipeMD128Digest_UnpackWord_m3440743838 (RipeMD128Digest_t2796683682 * __this, int32_t ___word0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t RipeMD128Digest_DoFinal_m3262076670 (RipeMD128Digest_t2796683682 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::Reset()
extern "C"  void RipeMD128Digest_Reset_m1006802798 (RipeMD128Digest_t2796683682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::RL(System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_RL_m1964405685 (RipeMD128Digest_t2796683682 * __this, int32_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F1(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_F1_m2895299661 (RipeMD128Digest_t2796683682 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F2(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_F2_m495377468 (RipeMD128Digest_t2796683682 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F3(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_F3_m3579842583 (RipeMD128Digest_t2796683682 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F4(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_F4_m3932390110 (RipeMD128Digest_t2796683682 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F1(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_F1_m1157600186 (RipeMD128Digest_t2796683682 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_F2_m1714858731 (RipeMD128Digest_t2796683682 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F3(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_F3_m4001487536 (RipeMD128Digest_t2796683682 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F4(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_F4_m1786605321 (RipeMD128Digest_t2796683682 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF1(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_FF1_m3146421780 (RipeMD128Digest_t2796683682 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_FF2_m2325824753 (RipeMD128Digest_t2796683682 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF3(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_FF3_m435012306 (RipeMD128Digest_t2796683682 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF4(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD128Digest_FF4_m618973359 (RipeMD128Digest_t2796683682 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::ProcessBlock()
extern "C"  void RipeMD128Digest_ProcessBlock_m2102121539 (RipeMD128Digest_t2796683682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::Copy()
extern "C"  Il2CppObject * RipeMD128Digest_Copy_m3155164836 (RipeMD128Digest_t2796683682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void RipeMD128Digest_Reset_m4034803199 (RipeMD128Digest_t2796683682 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
