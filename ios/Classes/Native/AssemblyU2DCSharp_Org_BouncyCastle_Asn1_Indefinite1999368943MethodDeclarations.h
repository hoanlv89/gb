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

// Org.BouncyCastle.Asn1.IndefiniteLengthInputStream
struct IndefiniteLengthInputStream_t1999368943;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Asn1.IndefiniteLengthInputStream::.ctor(System.IO.Stream,System.Int32)
extern "C"  void IndefiniteLengthInputStream__ctor_m9714381 (IndefiniteLengthInputStream_t1999368943 * __this, Stream_t3255436806 * ___inStream0, int32_t ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.IndefiniteLengthInputStream::SetEofOn00(System.Boolean)
extern "C"  void IndefiniteLengthInputStream_SetEofOn00_m4050037003 (IndefiniteLengthInputStream_t1999368943 * __this, bool ___eofOn000, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.IndefiniteLengthInputStream::CheckForEof()
extern "C"  bool IndefiniteLengthInputStream_CheckForEof_m2776812954 (IndefiniteLengthInputStream_t1999368943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.IndefiniteLengthInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t IndefiniteLengthInputStream_Read_m3137481806 (IndefiniteLengthInputStream_t1999368943 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.IndefiniteLengthInputStream::ReadByte()
extern "C"  int32_t IndefiniteLengthInputStream_ReadByte_m302063021 (IndefiniteLengthInputStream_t1999368943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.IndefiniteLengthInputStream::RequireByte()
extern "C"  int32_t IndefiniteLengthInputStream_RequireByte_m3552149768 (IndefiniteLengthInputStream_t1999368943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
