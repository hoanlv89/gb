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

// BestHTTP.Decompression.Zlib.SharedUtils
struct SharedUtils_t2666276944;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.Decompression.Zlib.SharedUtils::.ctor()
extern "C"  void SharedUtils__ctor_m3249696329 (SharedUtils_t2666276944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.SharedUtils::URShift(System.Int32,System.Int32)
extern "C"  int32_t SharedUtils_URShift_m1651385802 (Il2CppObject * __this /* static, unused */, int32_t ___number0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Decompression.Zlib.SharedUtils::ReadInput(System.IO.TextReader,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t SharedUtils_ReadInput_m3399196015 (Il2CppObject * __this /* static, unused */, TextReader_t1561828458 * ___sourceTextReader0, ByteU5BU5D_t3397334013* ___target1, int32_t ___start2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.Decompression.Zlib.SharedUtils::ToByteArray(System.String)
extern "C"  ByteU5BU5D_t3397334013* SharedUtils_ToByteArray_m3134363287 (Il2CppObject * __this /* static, unused */, String_t* ___sourceString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] BestHTTP.Decompression.Zlib.SharedUtils::ToCharArray(System.Byte[])
extern "C"  CharU5BU5D_t1328083999* SharedUtils_ToCharArray_m1241515132 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___byteArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
