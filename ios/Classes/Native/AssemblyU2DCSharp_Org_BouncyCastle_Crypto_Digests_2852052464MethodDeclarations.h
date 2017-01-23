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

// Org.BouncyCastle.Crypto.Digests.LongDigest
struct LongDigest_t2852052464;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_2852052464.h"

// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::.ctor()
extern "C"  void LongDigest__ctor_m4184304307 (LongDigest_t2852052464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::.ctor(Org.BouncyCastle.Crypto.Digests.LongDigest)
extern "C"  void LongDigest__ctor_m1595447435 (LongDigest_t2852052464 * __this, LongDigest_t2852052464 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::CopyIn(Org.BouncyCastle.Crypto.Digests.LongDigest)
extern "C"  void LongDigest_CopyIn_m267107633 (LongDigest_t2852052464 * __this, LongDigest_t2852052464 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::Update(System.Byte)
extern "C"  void LongDigest_Update_m2997455171 (LongDigest_t2852052464 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void LongDigest_BlockUpdate_m189995452 (LongDigest_t2852052464 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::Finish()
extern "C"  void LongDigest_Finish_m603874156 (LongDigest_t2852052464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::Reset()
extern "C"  void LongDigest_Reset_m3384859204 (LongDigest_t2852052464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::ProcessWord(System.Byte[],System.Int32)
extern "C"  void LongDigest_ProcessWord_m468690288 (LongDigest_t2852052464 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::AdjustByteCounts()
extern "C"  void LongDigest_AdjustByteCounts_m2607474362 (LongDigest_t2852052464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::ProcessLength(System.Int64,System.Int64)
extern "C"  void LongDigest_ProcessLength_m2309916720 (LongDigest_t2852052464 * __this, int64_t ___lowW0, int64_t ___hiW1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::ProcessBlock()
extern "C"  void LongDigest_ProcessBlock_m1374197797 (LongDigest_t2852052464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Ch(System.UInt64,System.UInt64,System.UInt64)
extern "C"  uint64_t LongDigest_Ch_m1790173347 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, uint64_t ___y1, uint64_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Maj(System.UInt64,System.UInt64,System.UInt64)
extern "C"  uint64_t LongDigest_Maj_m3886680210 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, uint64_t ___y1, uint64_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sum0(System.UInt64)
extern "C"  uint64_t LongDigest_Sum0_m2434018031 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sum1(System.UInt64)
extern "C"  uint64_t LongDigest_Sum1_m631025908 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sigma0(System.UInt64)
extern "C"  uint64_t LongDigest_Sigma0_m934083901 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sigma1(System.UInt64)
extern "C"  uint64_t LongDigest_Sigma1_m2737076024 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.LongDigest::GetByteLength()
extern "C"  int32_t LongDigest_GetByteLength_m609727493 (LongDigest_t2852052464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::.cctor()
extern "C"  void LongDigest__cctor_m603000870 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
