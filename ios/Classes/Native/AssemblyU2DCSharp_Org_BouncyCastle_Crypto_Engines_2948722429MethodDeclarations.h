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

// Org.BouncyCastle.Crypto.Engines.RijndaelEngine
struct RijndaelEngine_t2948722429;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int64[][]
struct Int64U5BU5DU5BU5D_t1808128809;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::.ctor()
extern "C"  void RijndaelEngine__ctor_m811187892 (RijndaelEngine_t2948722429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::.ctor(System.Int32)
extern "C"  void RijndaelEngine__ctor_m296853743 (RijndaelEngine_t2948722429 * __this, int32_t ___blockBits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0x2(System.Int32)
extern "C"  uint8_t RijndaelEngine_Mul0x2_m2218913507 (RijndaelEngine_t2948722429 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0x3(System.Int32)
extern "C"  uint8_t RijndaelEngine_Mul0x3_m3715154984 (RijndaelEngine_t2948722429 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0x9(System.Int32)
extern "C"  uint8_t RijndaelEngine_Mul0x9_m2545211914 (RijndaelEngine_t2948722429 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0xb(System.Int32)
extern "C"  uint8_t RijndaelEngine_Mul0xb_m1544575571 (RijndaelEngine_t2948722429 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0xd(System.Int32)
extern "C"  uint8_t RijndaelEngine_Mul0xd_m3697424497 (RijndaelEngine_t2948722429 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0xe(System.Int32)
extern "C"  uint8_t RijndaelEngine_Mul0xe_m898698678 (RijndaelEngine_t2948722429 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::KeyAddition(System.Int64[])
extern "C"  void RijndaelEngine_KeyAddition_m1941438897 (RijndaelEngine_t2948722429 * __this, Int64U5BU5D_t717125112* ___rk0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Shift(System.Int64,System.Int32)
extern "C"  int64_t RijndaelEngine_Shift_m2741854144 (RijndaelEngine_t2948722429 * __this, int64_t ___r0, int32_t ___shift1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::ShiftRow(System.Byte[])
extern "C"  void RijndaelEngine_ShiftRow_m1668629255 (RijndaelEngine_t2948722429 * __this, ByteU5BU5D_t3397334013* ___shiftsSC0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::ApplyS(System.Int64,System.Byte[])
extern "C"  int64_t RijndaelEngine_ApplyS_m3994115493 (RijndaelEngine_t2948722429 * __this, int64_t ___r0, ByteU5BU5D_t3397334013* ___box1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Substitution(System.Byte[])
extern "C"  void RijndaelEngine_Substitution_m3269850954 (RijndaelEngine_t2948722429 * __this, ByteU5BU5D_t3397334013* ___box0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::MixColumn()
extern "C"  void RijndaelEngine_MixColumn_m327745260 (RijndaelEngine_t2948722429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::InvMixColumn()
extern "C"  void RijndaelEngine_InvMixColumn_m2052444409 (RijndaelEngine_t2948722429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[][] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::GenerateWorkingKey(System.Byte[])
extern "C"  Int64U5BU5DU5BU5D_t1808128809* RijndaelEngine_GenerateWorkingKey_m4208135301 (RijndaelEngine_t2948722429 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RijndaelEngine_Init_m1169239386 (RijndaelEngine_t2948722429 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.RijndaelEngine::get_AlgorithmName()
extern "C"  String_t* RijndaelEngine_get_AlgorithmName_m3732112418 (RijndaelEngine_t2948722429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.RijndaelEngine::get_IsPartialBlockOkay()
extern "C"  bool RijndaelEngine_get_IsPartialBlockOkay_m1578138035 (RijndaelEngine_t2948722429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::GetBlockSize()
extern "C"  int32_t RijndaelEngine_GetBlockSize_m3586324332 (RijndaelEngine_t2948722429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RijndaelEngine_ProcessBlock_m4147645072 (RijndaelEngine_t2948722429 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Reset()
extern "C"  void RijndaelEngine_Reset_m3425053491 (RijndaelEngine_t2948722429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::UnPackBlock(System.Byte[],System.Int32)
extern "C"  void RijndaelEngine_UnPackBlock_m614594523 (RijndaelEngine_t2948722429 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___off1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::PackBlock(System.Byte[],System.Int32)
extern "C"  void RijndaelEngine_PackBlock_m948651844 (RijndaelEngine_t2948722429 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___off1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::EncryptBlock(System.Int64[][])
extern "C"  void RijndaelEngine_EncryptBlock_m909808724 (RijndaelEngine_t2948722429 * __this, Int64U5BU5DU5BU5D_t1808128809* ___rk0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::DecryptBlock(System.Int64[][])
extern "C"  void RijndaelEngine_DecryptBlock_m3353797968 (RijndaelEngine_t2948722429 * __this, Int64U5BU5DU5BU5D_t1808128809* ___rk0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::.cctor()
extern "C"  void RijndaelEngine__cctor_m3647043697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
