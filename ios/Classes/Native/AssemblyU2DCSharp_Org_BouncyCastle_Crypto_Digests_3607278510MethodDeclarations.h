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

// Org.BouncyCastle.Crypto.Digests.Gost3411Digest
struct Gost3411Digest_t3607278510;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t717853552;
// System.String
struct String_t;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_3607278510.h"

// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::.ctor()
extern "C"  void Gost3411Digest__ctor_m404039545 (Gost3411Digest_t3607278510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::.ctor(System.Byte[])
extern "C"  void Gost3411Digest__ctor_m3351288880 (Gost3411Digest_t3607278510 * __this, ByteU5BU5D_t3397334013* ___sBoxParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Gost3411Digest)
extern "C"  void Gost3411Digest__ctor_m1990099659 (Gost3411Digest_t3607278510 * __this, Gost3411Digest_t3607278510 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[][] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::MakeC()
extern "C"  ByteU5BU5DU5BU5D_t717853552* Gost3411Digest_MakeC_m591145630 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.Gost3411Digest::get_AlgorithmName()
extern "C"  String_t* Gost3411Digest_get_AlgorithmName_m2566110805 (Gost3411Digest_t3607278510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411Digest::GetDigestSize()
extern "C"  int32_t Gost3411Digest_GetDigestSize_m1796141154 (Gost3411Digest_t3607278510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Update(System.Byte)
extern "C"  void Gost3411Digest_Update_m761810149 (Gost3411Digest_t3607278510 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void Gost3411Digest_BlockUpdate_m3898094486 (Gost3411Digest_t3607278510 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::P(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Gost3411Digest_P_m3202032412 (Gost3411Digest_t3607278510 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::A(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Gost3411Digest_A_m4245982635 (Gost3411Digest_t3607278510 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::E(System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void Gost3411Digest_E_m2920900535 (Gost3411Digest_t3607278510 * __this, ByteU5BU5D_t3397334013* ___key0, ByteU5BU5D_t3397334013* ___s1, int32_t ___sOff2, ByteU5BU5D_t3397334013* ___input3, int32_t ___inOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::fw(System.Byte[])
extern "C"  void Gost3411Digest_fw_m2965346711 (Gost3411Digest_t3607278510 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::processBlock(System.Byte[],System.Int32)
extern "C"  void Gost3411Digest_processBlock_m2287418105 (Gost3411Digest_t3607278510 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::finish()
extern "C"  void Gost3411Digest_finish_m3660179226 (Gost3411Digest_t3607278510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Gost3411Digest_DoFinal_m1204164874 (Gost3411Digest_t3607278510 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Reset()
extern "C"  void Gost3411Digest_Reset_m2368029770 (Gost3411Digest_t3607278510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::sumByteArray(System.Byte[])
extern "C"  void Gost3411Digest_sumByteArray_m994420918 (Gost3411Digest_t3607278510 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::cpyBytesToShort(System.Byte[],System.Int16[])
extern "C"  void Gost3411Digest_cpyBytesToShort_m118207253 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___S0, Int16U5BU5D_t3104283263* ___wS1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::cpyShortToBytes(System.Int16[],System.Byte[])
extern "C"  void Gost3411Digest_cpyShortToBytes_m2759351733 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3104283263* ___wS0, ByteU5BU5D_t3397334013* ___S1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411Digest::GetByteLength()
extern "C"  int32_t Gost3411Digest_GetByteLength_m1536362835 (Gost3411Digest_t3607278510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Copy()
extern "C"  Il2CppObject * Gost3411Digest_Copy_m410158712 (Gost3411Digest_t3607278510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void Gost3411Digest_Reset_m3284321111 (Gost3411Digest_t3607278510 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::.cctor()
extern "C"  void Gost3411Digest__cctor_m3721813548 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
