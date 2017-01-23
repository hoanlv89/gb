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

// Org.BouncyCastle.Crypto.Digests.RipeMD256Digest
struct RipeMD256Digest_t951608910;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_R951608910.h"

// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::.ctor()
extern "C"  void RipeMD256Digest__ctor_m579069983 (RipeMD256Digest_t951608910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::.ctor(Org.BouncyCastle.Crypto.Digests.RipeMD256Digest)
extern "C"  void RipeMD256Digest__ctor_m2433206155 (RipeMD256Digest_t951608910 * __this, RipeMD256Digest_t951608910 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::get_AlgorithmName()
extern "C"  String_t* RipeMD256Digest_get_AlgorithmName_m3104406259 (RipeMD256Digest_t951608910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::GetDigestSize()
extern "C"  int32_t RipeMD256Digest_GetDigestSize_m833276146 (RipeMD256Digest_t951608910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD256Digest)
extern "C"  void RipeMD256Digest_CopyIn_m1628565133 (RipeMD256Digest_t951608910 * __this, RipeMD256Digest_t951608910 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void RipeMD256Digest_ProcessWord_m817745230 (RipeMD256Digest_t951608910 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::ProcessLength(System.Int64)
extern "C"  void RipeMD256Digest_ProcessLength_m1215677736 (RipeMD256Digest_t951608910 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
extern "C"  void RipeMD256Digest_UnpackWord_m2264600854 (RipeMD256Digest_t951608910 * __this, int32_t ___word0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t RipeMD256Digest_DoFinal_m882738622 (RipeMD256Digest_t951608910 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::Reset()
extern "C"  void RipeMD256Digest_Reset_m2312178354 (RipeMD256Digest_t951608910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::RL(System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_RL_m3516006807 (RipeMD256Digest_t951608910 * __this, int32_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::F1(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_F1_m341315867 (RipeMD256Digest_t951608910 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::F2(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_F2_m3694644160 (RipeMD256Digest_t951608910 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::F3(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_F3_m610179045 (RipeMD256Digest_t951608910 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::F4(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_F4_m3599192714 (RipeMD256Digest_t951608910 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::F1(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_F1_m1984471570 (RipeMD256Digest_t951608910 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::F2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_F2_m1840067533 (RipeMD256Digest_t951608910 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::F3(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_F3_m3848406024 (RipeMD256Digest_t951608910 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::F4(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_F4_m1355466435 (RipeMD256Digest_t951608910 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::FF1(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_FF1_m1099520756 (RipeMD256Digest_t951608910 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::FF2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_FF2_m2965056791 (RipeMD256Digest_t951608910 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::FF3(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_FF3_m2948690230 (RipeMD256Digest_t951608910 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::FF4(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD256Digest_FF4_m1239180889 (RipeMD256Digest_t951608910 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::ProcessBlock()
extern "C"  void RipeMD256Digest_ProcessBlock_m574275869 (RipeMD256Digest_t951608910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::Copy()
extern "C"  Il2CppObject * RipeMD256Digest_Copy_m1261592788 (RipeMD256Digest_t951608910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD256Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void RipeMD256Digest_Reset_m1216263813 (RipeMD256Digest_t951608910 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
