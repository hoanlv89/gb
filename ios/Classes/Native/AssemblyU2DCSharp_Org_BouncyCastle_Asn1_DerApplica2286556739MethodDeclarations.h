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

// Org.BouncyCastle.Asn1.DerApplicationSpecific
struct DerApplicationSpecific_t2286556739;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Asn1.Asn1EncodableVector
struct Asn1EncodableVector_t3471733113;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3471733113.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerApplicationSpecific::.ctor(System.Boolean,System.Int32,System.Byte[])
extern "C"  void DerApplicationSpecific__ctor_m2730521836 (DerApplicationSpecific_t2286556739 * __this, bool ___isConstructed0, int32_t ___tag1, ByteU5BU5D_t3397334013* ___octets2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerApplicationSpecific::.ctor(System.Int32,System.Byte[])
extern "C"  void DerApplicationSpecific__ctor_m4169199205 (DerApplicationSpecific_t2286556739 * __this, int32_t ___tag0, ByteU5BU5D_t3397334013* ___octets1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerApplicationSpecific::.ctor(System.Int32,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerApplicationSpecific__ctor_m226395151 (DerApplicationSpecific_t2286556739 * __this, int32_t ___tag0, Asn1Encodable_t3447851422 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerApplicationSpecific::.ctor(System.Boolean,System.Int32,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerApplicationSpecific__ctor_m397479438 (DerApplicationSpecific_t2286556739 * __this, bool ___isExplicit0, int32_t ___tag1, Asn1Encodable_t3447851422 * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerApplicationSpecific::.ctor(System.Int32,Org.BouncyCastle.Asn1.Asn1EncodableVector)
extern "C"  void DerApplicationSpecific__ctor_m2147403348 (DerApplicationSpecific_t2286556739 * __this, int32_t ___tagNo0, Asn1EncodableVector_t3471733113 * ___vec1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerApplicationSpecific::GetLengthOfHeader(System.Byte[])
extern "C"  int32_t DerApplicationSpecific_GetLengthOfHeader_m2088165676 (DerApplicationSpecific_t2286556739 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerApplicationSpecific::IsConstructed()
extern "C"  bool DerApplicationSpecific_IsConstructed_m538841949 (DerApplicationSpecific_t2286556739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerApplicationSpecific::GetContents()
extern "C"  ByteU5BU5D_t3397334013* DerApplicationSpecific_GetContents_m2391444623 (DerApplicationSpecific_t2286556739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerApplicationSpecific::get_ApplicationTag()
extern "C"  int32_t DerApplicationSpecific_get_ApplicationTag_m2071295210 (DerApplicationSpecific_t2286556739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.DerApplicationSpecific::GetObject()
extern "C"  Asn1Object_t564283626 * DerApplicationSpecific_GetObject_m1955382844 (DerApplicationSpecific_t2286556739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.DerApplicationSpecific::GetObject(System.Int32)
extern "C"  Asn1Object_t564283626 * DerApplicationSpecific_GetObject_m57356395 (DerApplicationSpecific_t2286556739 * __this, int32_t ___derTagNo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerApplicationSpecific::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerApplicationSpecific_Encode_m4068301544 (DerApplicationSpecific_t2286556739 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerApplicationSpecific::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerApplicationSpecific_Asn1Equals_m828235098 (DerApplicationSpecific_t2286556739 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerApplicationSpecific::Asn1GetHashCode()
extern "C"  int32_t DerApplicationSpecific_Asn1GetHashCode_m3229383417 (DerApplicationSpecific_t2286556739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerApplicationSpecific::ReplaceTagNumber(System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DerApplicationSpecific_ReplaceTagNumber_m1654090666 (DerApplicationSpecific_t2286556739 * __this, int32_t ___newTag0, ByteU5BU5D_t3397334013* ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
