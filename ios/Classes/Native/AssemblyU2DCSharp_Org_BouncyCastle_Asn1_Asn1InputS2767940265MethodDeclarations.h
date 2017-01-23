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

// Org.BouncyCastle.Asn1.Asn1InputStream
struct Asn1InputStream_t2767940265;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.Asn1EncodableVector
struct Asn1EncodableVector_t3471733113;
// Org.BouncyCastle.Asn1.DefiniteLengthInputStream
struct DefiniteLengthInputStream_t1065419872;
// Org.BouncyCastle.Asn1.DerSequence
struct DerSequence_t4250014174;
// Org.BouncyCastle.Asn1.DerSet
struct DerSet_t2720781401;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t717853552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DefiniteLe1065419872.h"

// System.Void Org.BouncyCastle.Asn1.Asn1InputStream::.ctor(System.IO.Stream)
extern "C"  void Asn1InputStream__ctor_m2826983366 (Asn1InputStream_t2767940265 * __this, Stream_t3255436806 * ___inputStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Asn1InputStream::.ctor(System.IO.Stream,System.Int32)
extern "C"  void Asn1InputStream__ctor_m3940096939 (Asn1InputStream_t2767940265 * __this, Stream_t3255436806 * ___inputStream0, int32_t ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Asn1InputStream::.ctor(System.Byte[])
extern "C"  void Asn1InputStream__ctor_m1014871100 (Asn1InputStream_t2767940265 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1InputStream::FindLimit(System.IO.Stream)
extern "C"  int32_t Asn1InputStream_FindLimit_m3059556810 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Asn1InputStream::BuildObject(System.Int32,System.Int32,System.Int32)
extern "C"  Asn1Object_t564283626 * Asn1InputStream_BuildObject_m4108058677 (Asn1InputStream_t2767940265 * __this, int32_t ___tag0, int32_t ___tagNo1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1EncodableVector Org.BouncyCastle.Asn1.Asn1InputStream::BuildEncodableVector()
extern "C"  Asn1EncodableVector_t3471733113 * Asn1InputStream_BuildEncodableVector_m986506364 (Asn1InputStream_t2767940265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1EncodableVector Org.BouncyCastle.Asn1.Asn1InputStream::BuildDerEncodableVector(Org.BouncyCastle.Asn1.DefiniteLengthInputStream)
extern "C"  Asn1EncodableVector_t3471733113 * Asn1InputStream_BuildDerEncodableVector_m1854777108 (Asn1InputStream_t2767940265 * __this, DefiniteLengthInputStream_t1065419872 * ___dIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerSequence Org.BouncyCastle.Asn1.Asn1InputStream::CreateDerSequence(Org.BouncyCastle.Asn1.DefiniteLengthInputStream)
extern "C"  DerSequence_t4250014174 * Asn1InputStream_CreateDerSequence_m2721965908 (Asn1InputStream_t2767940265 * __this, DefiniteLengthInputStream_t1065419872 * ___dIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerSet Org.BouncyCastle.Asn1.Asn1InputStream::CreateDerSet(Org.BouncyCastle.Asn1.DefiniteLengthInputStream)
extern "C"  DerSet_t2720781401 * Asn1InputStream_CreateDerSet_m1778652576 (Asn1InputStream_t2767940265 * __this, DefiniteLengthInputStream_t1065419872 * ___dIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Asn1InputStream::ReadObject()
extern "C"  Asn1Object_t564283626 * Asn1InputStream_ReadObject_m908960550 (Asn1InputStream_t2767940265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1InputStream::ReadTagNumber(System.IO.Stream,System.Int32)
extern "C"  int32_t Asn1InputStream_ReadTagNumber_m3182412248 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___s0, int32_t ___tag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1InputStream::ReadLength(System.IO.Stream,System.Int32)
extern "C"  int32_t Asn1InputStream_ReadLength_m317321723 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___s0, int32_t ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.Asn1InputStream::GetBuffer(Org.BouncyCastle.Asn1.DefiniteLengthInputStream,System.Byte[][])
extern "C"  ByteU5BU5D_t3397334013* Asn1InputStream_GetBuffer_m3226004429 (Il2CppObject * __this /* static, unused */, DefiniteLengthInputStream_t1065419872 * ___defIn0, ByteU5BU5DU5BU5D_t717853552* ___tmpBuffers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Asn1InputStream::CreatePrimitiveDerObject(System.Int32,Org.BouncyCastle.Asn1.DefiniteLengthInputStream,System.Byte[][])
extern "C"  Asn1Object_t564283626 * Asn1InputStream_CreatePrimitiveDerObject_m4232646107 (Il2CppObject * __this /* static, unused */, int32_t ___tagNo0, DefiniteLengthInputStream_t1065419872 * ___defIn1, ByteU5BU5DU5BU5D_t717853552* ___tmpBuffers2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
