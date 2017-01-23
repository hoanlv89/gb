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

// Org.BouncyCastle.Utilities.Encoders.Hex
struct Hex_t3743762079;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Utilities.Encoders.Hex::.ctor()
extern "C"  void Hex__ctor_m3113749129 (Hex_t3743762079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Encoders.Hex::ToHexString(System.Byte[])
extern "C"  String_t* Hex_ToHexString_m261544382 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Encoders.Hex::ToHexString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Hex_ToHexString_m2618702208 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Hex::Encode(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Hex_Encode_m4159288138 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Hex::Encode(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Hex_Encode_m773560596 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Hex::Encode(System.Byte[],System.IO.Stream)
extern "C"  int32_t Hex_Encode_m1714486833 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, Stream_t3255436806 * ___outStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Hex::Encode(System.Byte[],System.Int32,System.Int32,System.IO.Stream)
extern "C"  int32_t Hex_Encode_m2151953949 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, Stream_t3255436806 * ___outStream3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Hex::Decode(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Hex_Decode_m1481714446 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Hex::Decode(System.String)
extern "C"  ByteU5BU5D_t3397334013* Hex_Decode_m573556575 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.Hex::Decode(System.String,System.IO.Stream)
extern "C"  int32_t Hex_Decode_m3834030210 (Il2CppObject * __this /* static, unused */, String_t* ___data0, Stream_t3255436806 * ___outStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Encoders.Hex::.cctor()
extern "C"  void Hex__cctor_m1767565688 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
