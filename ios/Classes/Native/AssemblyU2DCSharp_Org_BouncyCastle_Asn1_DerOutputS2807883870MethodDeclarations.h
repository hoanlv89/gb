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

// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerOutputStream::.ctor(System.IO.Stream)
extern "C"  void DerOutputStream__ctor_m2096962365 (DerOutputStream_t2807883870 * __this, Stream_t3255436806 * ___os0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOutputStream::WriteLength(System.Int32)
extern "C"  void DerOutputStream_WriteLength_m156004296 (DerOutputStream_t2807883870 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOutputStream::WriteEncoded(System.Int32,System.Byte[])
extern "C"  void DerOutputStream_WriteEncoded_m269501467 (DerOutputStream_t2807883870 * __this, int32_t ___tag0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOutputStream::WriteEncoded(System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void DerOutputStream_WriteEncoded_m3426984679 (DerOutputStream_t2807883870 * __this, int32_t ___tag0, ByteU5BU5D_t3397334013* ___bytes1, int32_t ___offset2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOutputStream::WriteTag(System.Int32,System.Int32)
extern "C"  void DerOutputStream_WriteTag_m1161178597 (DerOutputStream_t2807883870 * __this, int32_t ___flags0, int32_t ___tagNo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOutputStream::WriteEncoded(System.Int32,System.Int32,System.Byte[])
extern "C"  void DerOutputStream_WriteEncoded_m2457655928 (DerOutputStream_t2807883870 * __this, int32_t ___flags0, int32_t ___tagNo1, ByteU5BU5D_t3397334013* ___bytes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOutputStream::WriteNull()
extern "C"  void DerOutputStream_WriteNull_m4232129628 (DerOutputStream_t2807883870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOutputStream::WriteObject(System.Object)
extern "C"  void DerOutputStream_WriteObject_m4244973758 (DerOutputStream_t2807883870 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOutputStream::WriteObject(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerOutputStream_WriteObject_m1765776099 (DerOutputStream_t2807883870 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOutputStream::WriteObject(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  void DerOutputStream_WriteObject_m1921034575 (DerOutputStream_t2807883870 * __this, Asn1Object_t564283626 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
