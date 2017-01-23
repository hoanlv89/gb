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

// Org.BouncyCastle.Crypto.Digests.RipeMD320Digest
struct RipeMD320Digest_t2794586136;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_2794586136.h"

// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::.ctor()
extern "C"  void RipeMD320Digest__ctor_m2145068187 (RipeMD320Digest_t2794586136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::.ctor(Org.BouncyCastle.Crypto.Digests.RipeMD320Digest)
extern "C"  void RipeMD320Digest__ctor_m3540513899 (RipeMD320Digest_t2794586136 * __this, RipeMD320Digest_t2794586136 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::get_AlgorithmName()
extern "C"  String_t* RipeMD320Digest_get_AlgorithmName_m1165212679 (RipeMD320Digest_t2794586136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::GetDigestSize()
extern "C"  int32_t RipeMD320Digest_GetDigestSize_m2058664440 (RipeMD320Digest_t2794586136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD320Digest)
extern "C"  void RipeMD320Digest_CopyIn_m3380585933 (RipeMD320Digest_t2794586136 * __this, RipeMD320Digest_t2794586136 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void RipeMD320Digest_ProcessWord_m680359180 (RipeMD320Digest_t2794586136 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::ProcessLength(System.Int64)
extern "C"  void RipeMD320Digest_ProcessLength_m457701986 (RipeMD320Digest_t2794586136 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
extern "C"  void RipeMD320Digest_UnpackWord_m695432980 (RipeMD320Digest_t2794586136 * __this, int32_t ___word0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t RipeMD320Digest_DoFinal_m537745244 (RipeMD320Digest_t2794586136 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::Reset()
extern "C"  void RipeMD320Digest_Reset_m269731816 (RipeMD320Digest_t2794586136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::RL(System.Int32,System.Int32)
extern "C"  int32_t RipeMD320Digest_RL_m1457988867 (RipeMD320Digest_t2794586136 * __this, int32_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F1(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD320Digest_F1_m2456872559 (RipeMD320Digest_t2794586136 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F2(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD320Digest_F2_m3398511562 (RipeMD320Digest_t2794586136 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F3(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD320Digest_F3_m1772329637 (RipeMD320Digest_t2794586136 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F4(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD320Digest_F4_m3078283264 (RipeMD320Digest_t2794586136 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F5(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t RipeMD320Digest_F5_m1867781083 (RipeMD320Digest_t2794586136 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::ProcessBlock()
extern "C"  void RipeMD320Digest_ProcessBlock_m2328504125 (RipeMD320Digest_t2794586136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::Copy()
extern "C"  Il2CppObject * RipeMD320Digest_Copy_m3544958918 (RipeMD320Digest_t2794586136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void RipeMD320Digest_Reset_m850480773 (RipeMD320Digest_t2794586136 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
