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

// Org.BouncyCastle.Crypto.Engines.ElGamalEngine
struct ElGamalEngine_t291645553;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.ElGamalEngine::.ctor()
extern "C"  void ElGamalEngine__ctor_m3390228354 (ElGamalEngine_t291645553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.ElGamalEngine::get_AlgorithmName()
extern "C"  String_t* ElGamalEngine_get_AlgorithmName_m2691420430 (ElGamalEngine_t291645553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.ElGamalEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void ElGamalEngine_Init_m4124093972 (ElGamalEngine_t291645553 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.ElGamalEngine::GetInputBlockSize()
extern "C"  int32_t ElGamalEngine_GetInputBlockSize_m3647628408 (ElGamalEngine_t291645553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.ElGamalEngine::GetOutputBlockSize()
extern "C"  int32_t ElGamalEngine_GetOutputBlockSize_m876629477 (ElGamalEngine_t291645553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.ElGamalEngine::ProcessBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* ElGamalEngine_ProcessBlock_m3160422707 (ElGamalEngine_t291645553 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
