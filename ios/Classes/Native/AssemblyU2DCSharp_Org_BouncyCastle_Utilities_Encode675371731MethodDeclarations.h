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

// Org.BouncyCastle.Utilities.Encoders.HexEncoder
struct HexEncoder_t675371731;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Utilities.Encoders.HexEncoder::.ctor()
extern "C"  void HexEncoder__ctor_m3490261489 (HexEncoder_t675371731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Encoders.HexEncoder::InitialiseDecodingTable()
extern "C"  void HexEncoder_InitialiseDecodingTable_m424575787 (HexEncoder_t675371731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.HexEncoder::Encode(System.Byte[],System.Int32,System.Int32,System.IO.Stream)
extern "C"  int32_t HexEncoder_Encode_m3248268233 (HexEncoder_t675371731 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, Stream_t3255436806 * ___outStream3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.Encoders.HexEncoder::Ignore(System.Char)
extern "C"  bool HexEncoder_Ignore_m1651327690 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.HexEncoder::Decode(System.Byte[],System.Int32,System.Int32,System.IO.Stream)
extern "C"  int32_t HexEncoder_Decode_m785421475 (HexEncoder_t675371731 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___off1, int32_t ___length2, Stream_t3255436806 * ___outStream3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.Encoders.HexEncoder::DecodeString(System.String,System.IO.Stream)
extern "C"  int32_t HexEncoder_DecodeString_m1364129327 (HexEncoder_t675371731 * __this, String_t* ___data0, Stream_t3255436806 * ___outStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
