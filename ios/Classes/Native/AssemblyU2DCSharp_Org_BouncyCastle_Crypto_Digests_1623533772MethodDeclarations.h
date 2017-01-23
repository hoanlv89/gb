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

// Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest
struct WhirlpoolDigest_t1623533772;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_1623533772.h"

// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::.cctor()
extern "C"  void WhirlpoolDigest__cctor_m1093777170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::.ctor()
extern "C"  void WhirlpoolDigest__ctor_m276521313 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::.ctor(Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest)
extern "C"  void WhirlpoolDigest__ctor_m3805153427 (WhirlpoolDigest_t1623533772 * __this, WhirlpoolDigest_t1623533772 * ___originalDigest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::packIntoLong(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int64_t WhirlpoolDigest_packIntoLong_m3846890423 (Il2CppObject * __this /* static, unused */, int32_t ___b70, int32_t ___b61, int32_t ___b52, int32_t ___b43, int32_t ___b34, int32_t ___b25, int32_t ___b16, int32_t ___b07, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::maskWithReductionPolynomial(System.Int32)
extern "C"  int32_t WhirlpoolDigest_maskWithReductionPolynomial_m2740167923 (Il2CppObject * __this /* static, unused */, int32_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::get_AlgorithmName()
extern "C"  String_t* WhirlpoolDigest_get_AlgorithmName_m4137858801 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::GetDigestSize()
extern "C"  int32_t WhirlpoolDigest_GetDigestSize_m460129912 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t WhirlpoolDigest_DoFinal_m1347385172 (WhirlpoolDigest_t1623533772 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::Reset()
extern "C"  void WhirlpoolDigest_Reset_m721712916 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::processFilledBuffer()
extern "C"  void WhirlpoolDigest_processFilledBuffer_m2474424764 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::bytesToLongFromBuffer(System.Byte[],System.Int32)
extern "C"  int64_t WhirlpoolDigest_bytesToLongFromBuffer_m274511904 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___startPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::convertLongToByteArray(System.Int64,System.Byte[],System.Int32)
extern "C"  void WhirlpoolDigest_convertLongToByteArray_m2825143560 (Il2CppObject * __this /* static, unused */, int64_t ___inputLong0, ByteU5BU5D_t3397334013* ___outputArray1, int32_t ___offSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::processBlock()
extern "C"  void WhirlpoolDigest_processBlock_m1200605887 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::Update(System.Byte)
extern "C"  void WhirlpoolDigest_Update_m2623577149 (WhirlpoolDigest_t1623533772 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::increment()
extern "C"  void WhirlpoolDigest_increment_m1948127714 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void WhirlpoolDigest_BlockUpdate_m3706279216 (WhirlpoolDigest_t1623533772 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::finish()
extern "C"  void WhirlpoolDigest_finish_m3908760900 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::copyBitLength()
extern "C"  ByteU5BU5D_t3397334013* WhirlpoolDigest_copyBitLength_m1499155931 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::GetByteLength()
extern "C"  int32_t WhirlpoolDigest_GetByteLength_m2931095543 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::Copy()
extern "C"  Il2CppObject * WhirlpoolDigest_Copy_m4212790622 (WhirlpoolDigest_t1623533772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void WhirlpoolDigest_Reset_m1699675379 (WhirlpoolDigest_t1623533772 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
