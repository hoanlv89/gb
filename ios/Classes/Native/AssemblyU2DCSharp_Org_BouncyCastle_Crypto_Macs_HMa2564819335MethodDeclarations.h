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

// Org.BouncyCastle.Crypto.Macs.HMac
struct HMac_t2564819335;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Macs.HMac::.ctor(Org.BouncyCastle.Crypto.IDigest)
extern "C"  void HMac__ctor_m2963138427 (HMac_t2564819335 * __this, Il2CppObject * ___digest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.HMac::get_AlgorithmName()
extern "C"  String_t* HMac_get_AlgorithmName_m453005405 (HMac_t2564819335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Macs.HMac::GetUnderlyingDigest()
extern "C"  Il2CppObject * HMac_GetUnderlyingDigest_m607653003 (HMac_t2564819335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void HMac_Init_m3517151122 (HMac_t2564819335 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::GetMacSize()
extern "C"  int32_t HMac_GetMacSize_m25811363 (HMac_t2564819335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::Update(System.Byte)
extern "C"  void HMac_Update_m2437633385 (HMac_t2564819335 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void HMac_BlockUpdate_m1437150604 (HMac_t2564819335 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t HMac_DoFinal_m2836140816 (HMac_t2564819335 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::Reset()
extern "C"  void HMac_Reset_m2338939280 (HMac_t2564819335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::XorPad(System.Byte[],System.Int32,System.Byte)
extern "C"  void HMac_XorPad_m1057556286 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___pad0, int32_t ___len1, uint8_t ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
