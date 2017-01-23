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

// Org.BouncyCastle.Crypto.Macs.VmpcMac
struct VmpcMac_t976793133;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::.ctor()
extern "C"  void VmpcMac__ctor_m964087541 (VmpcMac_t976793133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.VmpcMac::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t VmpcMac_DoFinal_m590526706 (VmpcMac_t976793133 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.VmpcMac::get_AlgorithmName()
extern "C"  String_t* VmpcMac_get_AlgorithmName_m2259186457 (VmpcMac_t976793133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.VmpcMac::GetMacSize()
extern "C"  int32_t VmpcMac_GetMacSize_m1555460571 (VmpcMac_t976793133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void VmpcMac_Init_m813108864 (VmpcMac_t976793133 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::initKey(System.Byte[],System.Byte[])
extern "C"  void VmpcMac_initKey_m3934188446 (VmpcMac_t976793133 * __this, ByteU5BU5D_t3397334013* ___keyBytes0, ByteU5BU5D_t3397334013* ___ivBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Reset()
extern "C"  void VmpcMac_Reset_m2645421990 (VmpcMac_t976793133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Update(System.Byte)
extern "C"  void VmpcMac_Update_m3247928969 (VmpcMac_t976793133 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void VmpcMac_BlockUpdate_m3756989262 (VmpcMac_t976793133 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
