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

// Org.BouncyCastle.Asn1.DerGenerator
struct DerGenerator_t951913470;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Asn1.DerGenerator::.ctor(System.IO.Stream)
extern "C"  void DerGenerator__ctor_m1681496833 (DerGenerator_t951913470 * __this, Stream_t3255436806 * ___outStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGenerator::.ctor(System.IO.Stream,System.Int32,System.Boolean)
extern "C"  void DerGenerator__ctor_m1616302131 (DerGenerator_t951913470 * __this, Stream_t3255436806 * ___outStream0, int32_t ___tagNo1, bool ___isExplicit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGenerator::WriteLength(System.IO.Stream,System.Int32)
extern "C"  void DerGenerator_WriteLength_m3474090497 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___outStr0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGenerator::WriteDerEncoded(System.IO.Stream,System.Int32,System.Byte[])
extern "C"  void DerGenerator_WriteDerEncoded_m2674738587 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___outStream0, int32_t ___tag1, ByteU5BU5D_t3397334013* ___bytes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGenerator::WriteDerEncoded(System.Int32,System.Byte[])
extern "C"  void DerGenerator_WriteDerEncoded_m33965386 (DerGenerator_t951913470 * __this, int32_t ___tag0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerGenerator::WriteDerEncoded(System.IO.Stream,System.Int32,System.IO.Stream)
extern "C"  void DerGenerator_WriteDerEncoded_m1317580631 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___outStr0, int32_t ___tag1, Stream_t3255436806 * ___inStr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
