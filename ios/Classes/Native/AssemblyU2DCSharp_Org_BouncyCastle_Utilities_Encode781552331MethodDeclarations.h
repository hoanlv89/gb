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

// Org.BouncyCastle.Utilities.Encoders.Base64Encoder
struct Base64Encoder_t781552331;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Utilities.Encoders.Base64Encoder::.ctor()
extern "C"  void Base64Encoder__ctor_m660707043 (Base64Encoder_t781552331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Encoders.Base64Encoder::InitialiseDecodingTable()
extern "C"  void Base64Encoder_InitialiseDecodingTable_m4094803697 (Base64Encoder_t781552331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Base64Encoder::Encode(System.Byte[],System.Int32,System.Int32,System.IO.Stream)
extern "C"  int32_t Base64Encoder_Encode_m2457582791 (Base64Encoder_t781552331 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, Stream_t3255436806 * ___outStream3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.Encoders.Base64Encoder::ignore(System.Char)
extern "C"  bool Base64Encoder_ignore_m4078657790 (Base64Encoder_t781552331 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Base64Encoder::Decode(System.Byte[],System.Int32,System.Int32,System.IO.Stream)
extern "C"  int32_t Base64Encoder_Decode_m2766298633 (Base64Encoder_t781552331 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, Stream_t3255436806 * ___outStream3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Base64Encoder::nextI(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Base64Encoder_nextI_m4170376324 (Base64Encoder_t781552331 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___i1, int32_t ___finish2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Base64Encoder::DecodeString(System.String,System.IO.Stream)
extern "C"  int32_t Base64Encoder_DecodeString_m863271821 (Base64Encoder_t781552331 * __this, String_t* ___data0, Stream_t3255436806 * ___outStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Base64Encoder::decodeLastBlock(System.IO.Stream,System.Char,System.Char,System.Char,System.Char)
extern "C"  int32_t Base64Encoder_decodeLastBlock_m1088585545 (Base64Encoder_t781552331 * __this, Stream_t3255436806 * ___outStream0, Il2CppChar ___c11, Il2CppChar ___c22, Il2CppChar ___c33, Il2CppChar ___c44, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Base64Encoder::nextI(System.String,System.Int32,System.Int32)
extern "C"  int32_t Base64Encoder_nextI_m2247094137 (Base64Encoder_t781552331 * __this, String_t* ___data0, int32_t ___i1, int32_t ___finish2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
