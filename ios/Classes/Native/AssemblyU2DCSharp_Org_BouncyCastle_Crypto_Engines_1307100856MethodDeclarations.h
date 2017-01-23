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

// Org.BouncyCastle.Crypto.Engines.DesEngine
struct DesEngine_t1307100856;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.DesEngine::.ctor()
extern "C"  void DesEngine__ctor_m3147657475 (DesEngine_t1307100856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.DesEngine::GetWorkingKey()
extern "C"  Int32U5BU5D_t3030399641* DesEngine_GetWorkingKey_m1335983131 (DesEngine_t1307100856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.DesEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void DesEngine_Init_m4082196555 (DesEngine_t1307100856 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.DesEngine::get_AlgorithmName()
extern "C"  String_t* DesEngine_get_AlgorithmName_m947919687 (DesEngine_t1307100856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.DesEngine::get_IsPartialBlockOkay()
extern "C"  bool DesEngine_get_IsPartialBlockOkay_m4171576836 (DesEngine_t1307100856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.DesEngine::GetBlockSize()
extern "C"  int32_t DesEngine_GetBlockSize_m1955324703 (DesEngine_t1307100856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.DesEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t DesEngine_ProcessBlock_m2511157035 (DesEngine_t1307100856 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.DesEngine::Reset()
extern "C"  void DesEngine_Reset_m3615161566 (DesEngine_t1307100856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.DesEngine::GenerateWorkingKey(System.Boolean,System.Byte[])
extern "C"  Int32U5BU5D_t3030399641* DesEngine_GenerateWorkingKey_m3809712578 (Il2CppObject * __this /* static, unused */, bool ___encrypting0, ByteU5BU5D_t3397334013* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.DesEngine::DesFunc(System.Int32[],System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void DesEngine_DesFunc_m319862714 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___wKey0, ByteU5BU5D_t3397334013* ___input1, int32_t ___inOff2, ByteU5BU5D_t3397334013* ___outBytes3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.DesEngine::.cctor()
extern "C"  void DesEngine__cctor_m2583398728 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
