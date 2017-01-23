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

// Org.BouncyCastle.Crypto.Engines.RC564Engine
struct RC564Engine_t1947102980;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::.ctor()
extern "C"  void RC564Engine__ctor_m782809103 (RC564Engine_t1947102980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.RC564Engine::get_AlgorithmName()
extern "C"  String_t* RC564Engine_get_AlgorithmName_m3750538939 (RC564Engine_t1947102980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC564Engine::get_IsPartialBlockOkay()
extern "C"  bool RC564Engine_get_IsPartialBlockOkay_m1924047304 (RC564Engine_t1947102980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::GetBlockSize()
extern "C"  int32_t RC564Engine_GetBlockSize_m199690395 (RC564Engine_t1947102980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RC564Engine_Init_m572953559 (RC564Engine_t1947102980 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC564Engine_ProcessBlock_m2478866639 (RC564Engine_t1947102980 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::Reset()
extern "C"  void RC564Engine_Reset_m1405584274 (RC564Engine_t1947102980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::SetKey(System.Byte[])
extern "C"  void RC564Engine_SetKey_m1700412601 (RC564Engine_t1947102980 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC564Engine_EncryptBlock_m2240310603 (RC564Engine_t1947102980 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC564Engine_DecryptBlock_m731457345 (RC564Engine_t1947102980 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::RotateLeft(System.Int64,System.Int64)
extern "C"  int64_t RC564Engine_RotateLeft_m3710231792 (RC564Engine_t1947102980 * __this, int64_t ___x0, int64_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::RotateRight(System.Int64,System.Int64)
extern "C"  int64_t RC564Engine_RotateRight_m3615493291 (RC564Engine_t1947102980 * __this, int64_t ___x0, int64_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::BytesToWord(System.Byte[],System.Int32)
extern "C"  int64_t RC564Engine_BytesToWord_m3186034346 (RC564Engine_t1947102980 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::WordToBytes(System.Int64,System.Byte[],System.Int32)
extern "C"  void RC564Engine_WordToBytes_m4135592491 (RC564Engine_t1947102980 * __this, int64_t ___word0, ByteU5BU5D_t3397334013* ___dst1, int32_t ___dstOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::.cctor()
extern "C"  void RC564Engine__cctor_m3535615764 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
