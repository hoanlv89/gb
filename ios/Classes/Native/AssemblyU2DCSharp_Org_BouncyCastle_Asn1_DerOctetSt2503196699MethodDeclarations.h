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

// Org.BouncyCastle.Asn1.DerOctetString
struct DerOctetString_t2503196699;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"

// System.Void Org.BouncyCastle.Asn1.DerOctetString::.ctor(System.Byte[])
extern "C"  void DerOctetString__ctor_m3991760886 (DerOctetString_t2503196699 * __this, ByteU5BU5D_t3397334013* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOctetString::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerOctetString__ctor_m1160423128 (DerOctetString_t2503196699 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOctetString::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerOctetString_Encode_m1693586912 (DerOctetString_t2503196699 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerOctetString::Encode(Org.BouncyCastle.Asn1.DerOutputStream,System.Byte[],System.Int32,System.Int32)
extern "C"  void DerOctetString_Encode_m2488080465 (Il2CppObject * __this /* static, unused */, DerOutputStream_t2807883870 * ___derOut0, ByteU5BU5D_t3397334013* ___bytes1, int32_t ___offset2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
