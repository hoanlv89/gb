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

// Org.BouncyCastle.Crypto.Engines.RC532Engine
struct RC532Engine_t3517208315;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::.ctor()
extern "C"  void RC532Engine__ctor_m2917751424 (RC532Engine_t3517208315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.RC532Engine::get_AlgorithmName()
extern "C"  String_t* RC532Engine_get_AlgorithmName_m2256500840 (RC532Engine_t3517208315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC532Engine::get_IsPartialBlockOkay()
extern "C"  bool RC532Engine_get_IsPartialBlockOkay_m1431913529 (RC532Engine_t3517208315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::GetBlockSize()
extern "C"  int32_t RC532Engine_GetBlockSize_m4036087368 (RC532Engine_t3517208315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RC532Engine_Init_m2895011274 (RC532Engine_t3517208315 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC532Engine_ProcessBlock_m949475700 (RC532Engine_t3517208315 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::Reset()
extern "C"  void RC532Engine_Reset_m155253341 (RC532Engine_t3517208315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::SetKey(System.Byte[])
extern "C"  void RC532Engine_SetKey_m1488252652 (RC532Engine_t3517208315 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC532Engine_EncryptBlock_m2391004780 (RC532Engine_t3517208315 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC532Engine_DecryptBlock_m2749078928 (RC532Engine_t3517208315 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::RotateLeft(System.Int32,System.Int32)
extern "C"  int32_t RC532Engine_RotateLeft_m3402917930 (RC532Engine_t3517208315 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::RotateRight(System.Int32,System.Int32)
extern "C"  int32_t RC532Engine_RotateRight_m2569438175 (RC532Engine_t3517208315 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::BytesToWord(System.Byte[],System.Int32)
extern "C"  int32_t RC532Engine_BytesToWord_m1924869578 (RC532Engine_t3517208315 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::WordToBytes(System.Int32,System.Byte[],System.Int32)
extern "C"  void RC532Engine_WordToBytes_m3417071915 (RC532Engine_t3517208315 * __this, int32_t ___word0, ByteU5BU5D_t3397334013* ___dst1, int32_t ___dstOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::.cctor()
extern "C"  void RC532Engine__cctor_m1282683087 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
