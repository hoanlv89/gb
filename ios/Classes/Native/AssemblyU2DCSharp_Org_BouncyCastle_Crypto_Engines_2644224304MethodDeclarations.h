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

// Org.BouncyCastle.Crypto.Engines.DesEdeEngine
struct DesEdeEngine_t2644224304;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.DesEdeEngine::.ctor()
extern "C"  void DesEdeEngine__ctor_m2989601827 (DesEdeEngine_t2644224304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.DesEdeEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void DesEdeEngine_Init_m1108396195 (DesEdeEngine_t2644224304 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.DesEdeEngine::get_AlgorithmName()
extern "C"  String_t* DesEdeEngine_get_AlgorithmName_m3144307859 (DesEdeEngine_t2644224304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.DesEdeEngine::GetBlockSize()
extern "C"  int32_t DesEdeEngine_GetBlockSize_m665887111 (DesEdeEngine_t2644224304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.DesEdeEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t DesEdeEngine_ProcessBlock_m235942851 (DesEdeEngine_t2644224304 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.DesEdeEngine::Reset()
extern "C"  void DesEdeEngine_Reset_m2154121162 (DesEdeEngine_t2644224304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
