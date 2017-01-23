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

// Org.BouncyCastle.Crypto.Engines.VmpcEngine
struct VmpcEngine_t2865463280;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::.ctor()
extern "C"  void VmpcEngine__ctor_m2597843353 (VmpcEngine_t2865463280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.VmpcEngine::get_AlgorithmName()
extern "C"  String_t* VmpcEngine_get_AlgorithmName_m3044580853 (VmpcEngine_t2865463280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void VmpcEngine_Init_m1273212505 (VmpcEngine_t2865463280 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::InitKey(System.Byte[],System.Byte[])
extern "C"  void VmpcEngine_InitKey_m106741754 (VmpcEngine_t2865463280 * __this, ByteU5BU5D_t3397334013* ___keyBytes0, ByteU5BU5D_t3397334013* ___ivBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void VmpcEngine_ProcessBytes_m2038282954 (VmpcEngine_t2865463280 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::Reset()
extern "C"  void VmpcEngine_Reset_m2782889290 (VmpcEngine_t2865463280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.VmpcEngine::ReturnByte(System.Byte)
extern "C"  uint8_t VmpcEngine_ReturnByte_m2155420324 (VmpcEngine_t2865463280 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
