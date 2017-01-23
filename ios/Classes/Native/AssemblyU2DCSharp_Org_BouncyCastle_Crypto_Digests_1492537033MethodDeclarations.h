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

// Org.BouncyCastle.Crypto.Digests.TigerDigest
struct TigerDigest_t1492537033;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_1492537033.h"

// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::.ctor()
extern "C"  void TigerDigest__ctor_m1962298148 (TigerDigest_t1492537033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::.ctor(Org.BouncyCastle.Crypto.Digests.TigerDigest)
extern "C"  void TigerDigest__ctor_m2299297919 (TigerDigest_t1492537033 * __this, TigerDigest_t1492537033 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.TigerDigest::get_AlgorithmName()
extern "C"  String_t* TigerDigest_get_AlgorithmName_m2653320564 (TigerDigest_t1492537033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.TigerDigest::GetDigestSize()
extern "C"  int32_t TigerDigest_GetDigestSize_m3197062865 (TigerDigest_t1492537033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.TigerDigest::GetByteLength()
extern "C"  int32_t TigerDigest_GetByteLength_m401680304 (TigerDigest_t1492537033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void TigerDigest_ProcessWord_m3680622067 (TigerDigest_t1492537033 * __this, ByteU5BU5D_t3397334013* ___b0, int32_t ___off1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::Update(System.Byte)
extern "C"  void TigerDigest_Update_m4086027274 (TigerDigest_t1492537033 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void TigerDigest_BlockUpdate_m2562119971 (TigerDigest_t1492537033 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::RoundABC(System.Int64,System.Int64)
extern "C"  void TigerDigest_RoundABC_m1156964904 (TigerDigest_t1492537033 * __this, int64_t ___x0, int64_t ___mul1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::RoundBCA(System.Int64,System.Int64)
extern "C"  void TigerDigest_RoundBCA_m1538124034 (TigerDigest_t1492537033 * __this, int64_t ___x0, int64_t ___mul1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::RoundCAB(System.Int64,System.Int64)
extern "C"  void TigerDigest_RoundCAB_m3178096554 (TigerDigest_t1492537033 * __this, int64_t ___x0, int64_t ___mul1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::KeySchedule()
extern "C"  void TigerDigest_KeySchedule_m2513698542 (TigerDigest_t1492537033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::ProcessBlock()
extern "C"  void TigerDigest_ProcessBlock_m3749120092 (TigerDigest_t1492537033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::UnpackWord(System.Int64,System.Byte[],System.Int32)
extern "C"  void TigerDigest_UnpackWord_m1821280940 (TigerDigest_t1492537033 * __this, int64_t ___r0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::ProcessLength(System.Int64)
extern "C"  void TigerDigest_ProcessLength_m3567808269 (TigerDigest_t1492537033 * __this, int64_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::Finish()
extern "C"  void TigerDigest_Finish_m2863818471 (TigerDigest_t1492537033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.TigerDigest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t TigerDigest_DoFinal_m3957818363 (TigerDigest_t1492537033 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::Reset()
extern "C"  void TigerDigest_Reset_m1650093681 (TigerDigest_t1492537033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.TigerDigest::Copy()
extern "C"  Il2CppObject * TigerDigest_Copy_m1993427829 (TigerDigest_t1492537033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void TigerDigest_Reset_m1043452400 (TigerDigest_t1492537033 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.TigerDigest::.cctor()
extern "C"  void TigerDigest__cctor_m1217052911 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
