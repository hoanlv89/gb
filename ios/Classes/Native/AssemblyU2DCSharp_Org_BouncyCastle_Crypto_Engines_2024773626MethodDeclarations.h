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

// Org.BouncyCastle.Crypto.Engines.Cast5Engine
struct Cast5Engine_t2024773626;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::.ctor()
extern "C"  void Cast5Engine__ctor_m2718601793 (Cast5Engine_t2024773626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Cast5Engine_Init_m1525943337 (Cast5Engine_t2024773626 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.Cast5Engine::get_AlgorithmName()
extern "C"  String_t* Cast5Engine_get_AlgorithmName_m3464182633 (Cast5Engine_t2024773626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.Cast5Engine::get_IsPartialBlockOkay()
extern "C"  bool Cast5Engine_get_IsPartialBlockOkay_m3729179214 (Cast5Engine_t2024773626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Cast5Engine_ProcessBlock_m707288289 (Cast5Engine_t2024773626 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::Reset()
extern "C"  void Cast5Engine_Reset_m3622013948 (Cast5Engine_t2024773626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::GetBlockSize()
extern "C"  int32_t Cast5Engine_GetBlockSize_m1120041397 (Cast5Engine_t2024773626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::SetKey(System.Byte[])
extern "C"  void Cast5Engine_SetKey_m3896541963 (Cast5Engine_t2024773626 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Cast5Engine_EncryptBlock_m539279769 (Cast5Engine_t2024773626 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcIndex1, ByteU5BU5D_t3397334013* ___dst2, int32_t ___dstIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Cast5Engine_DecryptBlock_m1804843515 (Cast5Engine_t2024773626 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcIndex1, ByteU5BU5D_t3397334013* ___dst2, int32_t ___dstIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::F1(System.UInt32,System.UInt32,System.Int32)
extern "C"  uint32_t Cast5Engine_F1_m2707804208 (Il2CppObject * __this /* static, unused */, uint32_t ___D0, uint32_t ___Kmi1, int32_t ___Kri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::F2(System.UInt32,System.UInt32,System.Int32)
extern "C"  uint32_t Cast5Engine_F2_m99637455 (Il2CppObject * __this /* static, unused */, uint32_t ___D0, uint32_t ___Kmi1, int32_t ___Kri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::F3(System.UInt32,System.UInt32,System.Int32)
extern "C"  uint32_t Cast5Engine_F3_m3723564014 (Il2CppObject * __this /* static, unused */, uint32_t ___D0, uint32_t ___Kmi1, int32_t ___Kri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::CAST_Encipher(System.UInt32,System.UInt32,System.UInt32[])
extern "C"  void Cast5Engine_CAST_Encipher_m3052687891 (Cast5Engine_t2024773626 * __this, uint32_t ___L00, uint32_t ___R01, UInt32U5BU5D_t59386216* ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::CAST_Decipher(System.UInt32,System.UInt32,System.UInt32[])
extern "C"  void Cast5Engine_CAST_Decipher_m3269815725 (Cast5Engine_t2024773626 * __this, uint32_t ___L160, uint32_t ___R161, UInt32U5BU5D_t59386216* ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::Bits32ToInts(System.UInt32,System.Int32[],System.Int32)
extern "C"  void Cast5Engine_Bits32ToInts_m2994728697 (Il2CppObject * __this /* static, unused */, uint32_t ___inData0, Int32U5BU5D_t3030399641* ___b1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::IntsTo32bits(System.Int32[],System.Int32)
extern "C"  uint32_t Cast5Engine_IntsTo32bits_m242181646 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___b0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::.cctor()
extern "C"  void Cast5Engine__cctor_m3475862150 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
