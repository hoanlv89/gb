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

// Org.BouncyCastle.Utilities.Encoders.Base64
struct Base64_t2489710407;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Utilities.Encoders.Base64::.ctor()
extern "C"  void Base64__ctor_m2017050251 (Base64_t2489710407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Encoders.Base64::ToBase64String(System.Byte[])
extern "C"  String_t* Base64_ToBase64String_m1971776610 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Encoders.Base64::ToBase64String(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Base64_ToBase64String_m3768416148 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Base64::Encode(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Base64_Encode_m1324462582 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Base64::Encode(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Base64_Encode_m2379977004 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Base64::Encode(System.Byte[],System.IO.Stream)
extern "C"  int32_t Base64_Encode_m4014762907 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, Stream_t3255436806 * ___outStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Base64::Encode(System.Byte[],System.Int32,System.Int32,System.IO.Stream)
extern "C"  int32_t Base64_Encode_m2790326711 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, Stream_t3255436806 * ___outStream3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Base64::Decode(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Base64_Decode_m57554606 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Base64::Decode(System.String)
extern "C"  ByteU5BU5D_t3397334013* Base64_Decode_m781555749 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Base64::Decode(System.String,System.IO.Stream)
extern "C"  int32_t Base64_Decode_m476250938 (Il2CppObject * __this /* static, unused */, String_t* ___data0, Stream_t3255436806 * ___outStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
