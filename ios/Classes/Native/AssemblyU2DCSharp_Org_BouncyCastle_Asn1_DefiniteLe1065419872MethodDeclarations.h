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

// Org.BouncyCastle.Asn1.DefiniteLengthInputStream
struct DefiniteLengthInputStream_t1065419872;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Asn1.DefiniteLengthInputStream::.ctor(System.IO.Stream,System.Int32)
extern "C"  void DefiniteLengthInputStream__ctor_m3698441090 (DefiniteLengthInputStream_t1065419872 * __this, Stream_t3255436806 * ___inStream0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DefiniteLengthInputStream::get_Remaining()
extern "C"  int32_t DefiniteLengthInputStream_get_Remaining_m2618171975 (DefiniteLengthInputStream_t1065419872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DefiniteLengthInputStream::ReadByte()
extern "C"  int32_t DefiniteLengthInputStream_ReadByte_m2672530090 (DefiniteLengthInputStream_t1065419872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DefiniteLengthInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DefiniteLengthInputStream_Read_m3646117527 (DefiniteLengthInputStream_t1065419872 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DefiniteLengthInputStream::ReadAllIntoByteArray(System.Byte[])
extern "C"  void DefiniteLengthInputStream_ReadAllIntoByteArray_m154958003 (DefiniteLengthInputStream_t1065419872 * __this, ByteU5BU5D_t3397334013* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DefiniteLengthInputStream::ToArray()
extern "C"  ByteU5BU5D_t3397334013* DefiniteLengthInputStream_ToArray_m3356010062 (DefiniteLengthInputStream_t1065419872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DefiniteLengthInputStream::.cctor()
extern "C"  void DefiniteLengthInputStream__cctor_m3176775095 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
