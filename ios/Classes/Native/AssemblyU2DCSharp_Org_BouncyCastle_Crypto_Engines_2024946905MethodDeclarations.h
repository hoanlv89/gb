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

// Org.BouncyCastle.Crypto.Engines.Cast6Engine
struct Cast6Engine_t2024946905;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.Cast6Engine::.ctor()
extern "C"  void Cast6Engine__ctor_m2055722980 (Cast6Engine_t2024946905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.Cast6Engine::get_AlgorithmName()
extern "C"  String_t* Cast6Engine_get_AlgorithmName_m1679879048 (Cast6Engine_t2024946905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast6Engine::Reset()
extern "C"  void Cast6Engine_Reset_m2959139359 (Cast6Engine_t2024946905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast6Engine::GetBlockSize()
extern "C"  int32_t Cast6Engine_GetBlockSize_m1054873540 (Cast6Engine_t2024946905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast6Engine::SetKey(System.Byte[])
extern "C"  void Cast6Engine_SetKey_m2511864268 (Cast6Engine_t2024946905 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast6Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Cast6Engine_EncryptBlock_m2805357012 (Cast6Engine_t2024946905 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcIndex1, ByteU5BU5D_t3397334013* ___dst2, int32_t ___dstIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast6Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Cast6Engine_DecryptBlock_m196382720 (Cast6Engine_t2024946905 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcIndex1, ByteU5BU5D_t3397334013* ___dst2, int32_t ___dstIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast6Engine::CAST_Encipher(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32[])
extern "C"  void Cast6Engine_CAST_Encipher_m2099121014 (Cast6Engine_t2024946905 * __this, uint32_t ___A0, uint32_t ___B1, uint32_t ___C2, uint32_t ___D3, UInt32U5BU5D_t59386216* ___result4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast6Engine::CAST_Decipher(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32[])
extern "C"  void Cast6Engine_CAST_Decipher_m1851675982 (Cast6Engine_t2024946905 * __this, uint32_t ___A0, uint32_t ___B1, uint32_t ___C2, uint32_t ___D3, UInt32U5BU5D_t59386216* ___result4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
