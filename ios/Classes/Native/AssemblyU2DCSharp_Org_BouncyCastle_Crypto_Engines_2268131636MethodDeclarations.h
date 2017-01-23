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

// Org.BouncyCastle.Crypto.Engines.SkipjackEngine
struct SkipjackEngine_t2268131636;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.SkipjackEngine::.ctor()
extern "C"  void SkipjackEngine__ctor_m3942600167 (SkipjackEngine_t2268131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SkipjackEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void SkipjackEngine_Init_m4201347207 (SkipjackEngine_t2268131636 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.SkipjackEngine::get_AlgorithmName()
extern "C"  String_t* SkipjackEngine_get_AlgorithmName_m2216026959 (SkipjackEngine_t2268131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.SkipjackEngine::get_IsPartialBlockOkay()
extern "C"  bool SkipjackEngine_get_IsPartialBlockOkay_m2914992428 (SkipjackEngine_t2268131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::GetBlockSize()
extern "C"  int32_t SkipjackEngine_GetBlockSize_m3240914195 (SkipjackEngine_t2268131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SkipjackEngine_ProcessBlock_m3050519351 (SkipjackEngine_t2268131636 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SkipjackEngine::Reset()
extern "C"  void SkipjackEngine_Reset_m1982706662 (SkipjackEngine_t2268131636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::G(System.Int32,System.Int32)
extern "C"  int32_t SkipjackEngine_G_m2459608406 (SkipjackEngine_t2268131636 * __this, int32_t ___k0, int32_t ___w1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SkipjackEngine_EncryptBlock_m1857695331 (SkipjackEngine_t2268131636 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::H(System.Int32,System.Int32)
extern "C"  int32_t SkipjackEngine_H_m2009576145 (SkipjackEngine_t2268131636 * __this, int32_t ___k0, int32_t ___w1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SkipjackEngine_DecryptBlock_m1514933029 (SkipjackEngine_t2268131636 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SkipjackEngine::.cctor()
extern "C"  void SkipjackEngine__cctor_m1740400904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
