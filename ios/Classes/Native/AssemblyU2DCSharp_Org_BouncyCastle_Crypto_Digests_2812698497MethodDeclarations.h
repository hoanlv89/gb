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

// Org.BouncyCastle.Crypto.Digests.Sha3Digest
struct Sha3Digest_t2812698497;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t4132004587;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Digests_2812698497.h"

// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::.ctor()
extern "C"  void Sha3Digest__ctor_m2198635460 (Sha3Digest_t2812698497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::.ctor(System.Int32)
extern "C"  void Sha3Digest__ctor_m3813752141 (Sha3Digest_t2812698497 * __this, int32_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Sha3Digest)
extern "C"  void Sha3Digest__ctor_m294543723 (Sha3Digest_t2812698497 * __this, Sha3Digest_t2812698497 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Crypto.Digests.Sha3Digest::KeccakInitializeRoundConstants()
extern "C"  UInt64U5BU5D_t1668688775* Sha3Digest_KeccakInitializeRoundConstants_m2826399221 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Digests.Sha3Digest::KeccakInitializeRhoOffsets()
extern "C"  Int32U5BU5D_t3030399641* Sha3Digest_KeccakInitializeRhoOffsets_m492369047 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::ClearDataQueueSection(System.Int32,System.Int32)
extern "C"  void Sha3Digest_ClearDataQueueSection_m3571631241 (Sha3Digest_t2812698497 * __this, int32_t ___off0, int32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.Sha3Digest)
extern "C"  void Sha3Digest_CopyIn_m3962887457 (Sha3Digest_t2812698497 * __this, Sha3Digest_t2812698497 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Digests.Sha3Digest::get_AlgorithmName()
extern "C"  String_t* Sha3Digest_get_AlgorithmName_m3828998146 (Sha3Digest_t2812698497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha3Digest::GetDigestSize()
extern "C"  int32_t Sha3Digest_GetDigestSize_m645922705 (Sha3Digest_t2812698497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Update(System.Byte)
extern "C"  void Sha3Digest_Update_m2085966674 (Sha3Digest_t2812698497 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void Sha3Digest_BlockUpdate_m2201331947 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha3Digest::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Sha3Digest_DoFinal_m3925996099 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Reset()
extern "C"  void Sha3Digest_Reset_m3030882485 (Sha3Digest_t2812698497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha3Digest::GetByteLength()
extern "C"  int32_t Sha3Digest_GetByteLength_m717712644 (Sha3Digest_t2812698497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Init(System.Int32)
extern "C"  void Sha3Digest_Init_m4262119055 (Sha3Digest_t2812698497 * __this, int32_t ___bitLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::DoUpdate(System.Byte[],System.Int32,System.Int64)
extern "C"  void Sha3Digest_DoUpdate_m1482987430 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int64_t ___databitlen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::InitSponge(System.Int32,System.Int32)
extern "C"  void Sha3Digest_InitSponge_m2526713430 (Sha3Digest_t2812698497 * __this, int32_t ___rate0, int32_t ___capacity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::AbsorbQueue()
extern "C"  void Sha3Digest_AbsorbQueue_m114014716 (Sha3Digest_t2812698497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Absorb(System.Byte[],System.Int32,System.Int64)
extern "C"  void Sha3Digest_Absorb_m1604365227 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int64_t ___databitlen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::PadAndSwitchToSqueezingPhase()
extern "C"  void Sha3Digest_PadAndSwitchToSqueezingPhase_m1306220265 (Sha3Digest_t2812698497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Squeeze(System.Byte[],System.Int32,System.Int64)
extern "C"  void Sha3Digest_Squeeze_m2276517144 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___offset1, int64_t ___outputLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::FromBytesToWords(System.UInt64[],System.Byte[])
extern "C"  void Sha3Digest_FromBytesToWords_m4284199267 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___stateAsWords0, ByteU5BU5D_t3397334013* ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::FromWordsToBytes(System.Byte[],System.UInt64[])
extern "C"  void Sha3Digest_FromWordsToBytes_m703828811 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___state0, UInt64U5BU5D_t1668688775* ___stateAsWords1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::KeccakPermutation(System.Byte[])
extern "C"  void Sha3Digest_KeccakPermutation_m4135061249 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::KeccakPermutationAfterXor(System.Byte[],System.Byte[],System.Int32)
extern "C"  void Sha3Digest_KeccakPermutationAfterXor_m3476128680 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___state0, ByteU5BU5D_t3397334013* ___data1, int32_t ___dataLengthInBytes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::KeccakPermutationOnWords(System.UInt64[])
extern "C"  void Sha3Digest_KeccakPermutationOnWords_m1277614295 (Sha3Digest_t2812698497 * __this, UInt64U5BU5D_t1668688775* ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Theta(System.UInt64[])
extern "C"  void Sha3Digest_Theta_m2771097269 (Sha3Digest_t2812698497 * __this, UInt64U5BU5D_t1668688775* ___A0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Rho(System.UInt64[])
extern "C"  void Sha3Digest_Rho_m1336004190 (Sha3Digest_t2812698497 * __this, UInt64U5BU5D_t1668688775* ___A0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Pi(System.UInt64[])
extern "C"  void Sha3Digest_Pi_m3283597956 (Sha3Digest_t2812698497 * __this, UInt64U5BU5D_t1668688775* ___A0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Chi(System.UInt64[])
extern "C"  void Sha3Digest_Chi_m3638233743 (Sha3Digest_t2812698497 * __this, UInt64U5BU5D_t1668688775* ___A0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Iota(System.UInt64[],System.Int32)
extern "C"  void Sha3Digest_Iota_m4171299079 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___A0, int32_t ___indexRound1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::KeccakAbsorb(System.Byte[],System.Byte[],System.Int32)
extern "C"  void Sha3Digest_KeccakAbsorb_m3587698032 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___byteState0, ByteU5BU5D_t3397334013* ___data1, int32_t ___dataInBytes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::KeccakExtract1024bits(System.Byte[],System.Byte[])
extern "C"  void Sha3Digest_KeccakExtract1024bits_m1366395326 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___byteState0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::KeccakExtract(System.Byte[],System.Byte[],System.Int32)
extern "C"  void Sha3Digest_KeccakExtract_m3136237106 (Sha3Digest_t2812698497 * __this, ByteU5BU5D_t3397334013* ___byteState0, ByteU5BU5D_t3397334013* ___data1, int32_t ___laneCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Sha3Digest::Copy()
extern "C"  Il2CppObject * Sha3Digest_Copy_m914350849 (Sha3Digest_t2812698497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
extern "C"  void Sha3Digest_Reset_m2836712684 (Sha3Digest_t2812698497 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha3Digest::.cctor()
extern "C"  void Sha3Digest__cctor_m710225303 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
