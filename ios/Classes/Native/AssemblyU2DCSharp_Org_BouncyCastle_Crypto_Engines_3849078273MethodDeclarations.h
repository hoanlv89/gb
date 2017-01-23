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

// Org.BouncyCastle.Crypto.Engines.RC6Engine
struct RC6Engine_t3849078273;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::.ctor()
extern "C"  void RC6Engine__ctor_m3129633968 (RC6Engine_t3849078273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.RC6Engine::get_AlgorithmName()
extern "C"  String_t* RC6Engine_get_AlgorithmName_m3235612132 (RC6Engine_t3849078273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC6Engine::get_IsPartialBlockOkay()
extern "C"  bool RC6Engine_get_IsPartialBlockOkay_m3472174451 (RC6Engine_t3849078273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::GetBlockSize()
extern "C"  int32_t RC6Engine_GetBlockSize_m331218992 (RC6Engine_t3849078273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RC6Engine_Init_m2759425134 (RC6Engine_t3849078273 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC6Engine_ProcessBlock_m214106908 (RC6Engine_t3849078273 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::Reset()
extern "C"  void RC6Engine_Reset_m3016238499 (RC6Engine_t3849078273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::SetKey(System.Byte[])
extern "C"  void RC6Engine_SetKey_m1278942812 (RC6Engine_t3849078273 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC6Engine_EncryptBlock_m2669560720 (RC6Engine_t3849078273 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC6Engine_DecryptBlock_m3656902696 (RC6Engine_t3849078273 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::RotateLeft(System.Int32,System.Int32)
extern "C"  int32_t RC6Engine_RotateLeft_m1411064262 (RC6Engine_t3849078273 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::RotateRight(System.Int32,System.Int32)
extern "C"  int32_t RC6Engine_RotateRight_m3516460161 (RC6Engine_t3849078273 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::BytesToWord(System.Byte[],System.Int32)
extern "C"  int32_t RC6Engine_BytesToWord_m3403544454 (RC6Engine_t3849078273 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::WordToBytes(System.Int32,System.Byte[],System.Int32)
extern "C"  void RC6Engine_WordToBytes_m273515249 (RC6Engine_t3849078273 * __this, int32_t ___word0, ByteU5BU5D_t3397334013* ___dst1, int32_t ___dstOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::.cctor()
extern "C"  void RC6Engine__cctor_m981100865 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
