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

// Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine
struct RsaBlindedEngine_t832805900;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::.ctor()
extern "C"  void RsaBlindedEngine__ctor_m851628665 (RsaBlindedEngine_t832805900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::get_AlgorithmName()
extern "C"  String_t* RsaBlindedEngine_get_AlgorithmName_m2956985973 (RsaBlindedEngine_t832805900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RsaBlindedEngine_Init_m1074652505 (RsaBlindedEngine_t832805900 * __this, bool ___forEncryption0, Il2CppObject * ___param1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::GetInputBlockSize()
extern "C"  int32_t RsaBlindedEngine_GetInputBlockSize_m4007025927 (RsaBlindedEngine_t832805900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::GetOutputBlockSize()
extern "C"  int32_t RsaBlindedEngine_GetOutputBlockSize_m3163239596 (RsaBlindedEngine_t832805900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::ProcessBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* RsaBlindedEngine_ProcessBlock_m2719822276 (RsaBlindedEngine_t832805900 * __this, ByteU5BU5D_t3397334013* ___inBuf0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
