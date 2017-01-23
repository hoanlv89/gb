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

// Org.BouncyCastle.Crypto.Engines.TeaEngine
struct TeaEngine_t1288494330;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.TeaEngine::.ctor()
extern "C"  void TeaEngine__ctor_m647650241 (TeaEngine_t1288494330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.TeaEngine::get_AlgorithmName()
extern "C"  String_t* TeaEngine_get_AlgorithmName_m4098647689 (TeaEngine_t1288494330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.TeaEngine::get_IsPartialBlockOkay()
extern "C"  bool TeaEngine_get_IsPartialBlockOkay_m3626129102 (TeaEngine_t1288494330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::GetBlockSize()
extern "C"  int32_t TeaEngine_GetBlockSize_m2939774741 (TeaEngine_t1288494330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TeaEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void TeaEngine_Init_m2465000841 (TeaEngine_t1288494330 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t TeaEngine_ProcessBlock_m1801885473 (TeaEngine_t1288494330 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TeaEngine::Reset()
extern "C"  void TeaEngine_Reset_m1115150108 (TeaEngine_t1288494330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TeaEngine::setKey(System.Byte[])
extern "C"  void TeaEngine_setKey_m593516171 (TeaEngine_t1288494330 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::encryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t TeaEngine_encryptBlock_m50914489 (TeaEngine_t1288494330 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::decryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t TeaEngine_decryptBlock_m4078498587 (TeaEngine_t1288494330 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
