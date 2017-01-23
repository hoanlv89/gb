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

// Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine
struct Rfc3394WrapEngine_t3772873134;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void Rfc3394WrapEngine__ctor_m3653123501 (Rfc3394WrapEngine_t3772873134 * __this, Il2CppObject * ___engine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Rfc3394WrapEngine_Init_m1299267179 (Rfc3394WrapEngine_t3772873134 * __this, bool ___forWrapping0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::get_AlgorithmName()
extern "C"  String_t* Rfc3394WrapEngine_get_AlgorithmName_m1663490967 (Rfc3394WrapEngine_t3772873134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::Wrap(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Rfc3394WrapEngine_Wrap_m3490190360 (Rfc3394WrapEngine_t3772873134 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::Unwrap(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Rfc3394WrapEngine_Unwrap_m3187668067 (Rfc3394WrapEngine_t3772873134 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
