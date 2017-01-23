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

// Org.BouncyCastle.Crypto.Engines.XteaEngine
struct XteaEngine_t1315869442;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::.ctor()
extern "C"  void XteaEngine__ctor_m1733952049 (XteaEngine_t1315869442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.XteaEngine::get_AlgorithmName()
extern "C"  String_t* XteaEngine_get_AlgorithmName_m1143691069 (XteaEngine_t1315869442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.XteaEngine::get_IsPartialBlockOkay()
extern "C"  bool XteaEngine_get_IsPartialBlockOkay_m3641312858 (XteaEngine_t1315869442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::GetBlockSize()
extern "C"  int32_t XteaEngine_GetBlockSize_m946569025 (XteaEngine_t1315869442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void XteaEngine_Init_m3523332809 (XteaEngine_t1315869442 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t XteaEngine_ProcessBlock_m464864717 (XteaEngine_t1315869442 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::Reset()
extern "C"  void XteaEngine_Reset_m900622624 (XteaEngine_t1315869442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::setKey(System.Byte[])
extern "C"  void XteaEngine_setKey_m80148847 (XteaEngine_t1315869442 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::encryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t XteaEngine_encryptBlock_m1738905205 (XteaEngine_t1315869442 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::decryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t XteaEngine_decryptBlock_m1887617079 (XteaEngine_t1315869442 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
