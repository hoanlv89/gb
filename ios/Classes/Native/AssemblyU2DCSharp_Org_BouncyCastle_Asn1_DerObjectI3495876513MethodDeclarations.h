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

// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.DerObjectIdentifier::.ctor(System.String)
extern "C"  void DerObjectIdentifier__ctor_m3912945353 (DerObjectIdentifier_t3495876513 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerObjectIdentifier::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier,System.String)
extern "C"  void DerObjectIdentifier__ctor_m152692021 (DerObjectIdentifier_t3495876513 * __this, DerObjectIdentifier_t3495876513 * ___oid0, String_t* ___branchID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerObjectIdentifier::.ctor(System.Byte[])
extern "C"  void DerObjectIdentifier__ctor_m2251822328 (DerObjectIdentifier_t3495876513 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.DerObjectIdentifier::GetInstance(System.Object)
extern "C"  DerObjectIdentifier_t3495876513 * DerObjectIdentifier_GetInstance_m2869555149 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.DerObjectIdentifier::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DerObjectIdentifier_t3495876513 * DerObjectIdentifier_GetInstance_m3757268185 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerObjectIdentifier::get_Id()
extern "C"  String_t* DerObjectIdentifier_get_Id_m2328787738 (DerObjectIdentifier_t3495876513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.DerObjectIdentifier::Branch(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * DerObjectIdentifier_Branch_m2435338182 (DerObjectIdentifier_t3495876513 * __this, String_t* ___branchID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerObjectIdentifier::On(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  bool DerObjectIdentifier_On_m3276253122 (DerObjectIdentifier_t3495876513 * __this, DerObjectIdentifier_t3495876513 * ___stem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerObjectIdentifier::WriteField(System.IO.Stream,System.Int64)
extern "C"  void DerObjectIdentifier_WriteField_m1616343993 (DerObjectIdentifier_t3495876513 * __this, Stream_t3255436806 * ___outputStream0, int64_t ___fieldValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerObjectIdentifier::WriteField(System.IO.Stream,Org.BouncyCastle.Math.BigInteger)
extern "C"  void DerObjectIdentifier_WriteField_m1695485325 (DerObjectIdentifier_t3495876513 * __this, Stream_t3255436806 * ___outputStream0, BigInteger_t4268922522 * ___fieldValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerObjectIdentifier::DoOutput(System.IO.MemoryStream)
extern "C"  void DerObjectIdentifier_DoOutput_m3066218017 (DerObjectIdentifier_t3495876513 * __this, MemoryStream_t743994179 * ___bOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.DerObjectIdentifier::GetBody()
extern "C"  ByteU5BU5D_t3397334013* DerObjectIdentifier_GetBody_m1339417149 (DerObjectIdentifier_t3495876513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerObjectIdentifier::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerObjectIdentifier_Encode_m2004646182 (DerObjectIdentifier_t3495876513 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerObjectIdentifier::Asn1GetHashCode()
extern "C"  int32_t DerObjectIdentifier_Asn1GetHashCode_m820579661 (DerObjectIdentifier_t3495876513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerObjectIdentifier::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerObjectIdentifier_Asn1Equals_m4095114124 (DerObjectIdentifier_t3495876513 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerObjectIdentifier::ToString()
extern "C"  String_t* DerObjectIdentifier_ToString_m2114734138 (DerObjectIdentifier_t3495876513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerObjectIdentifier::IsValidBranchID(System.String,System.Int32)
extern "C"  bool DerObjectIdentifier_IsValidBranchID_m265057977 (Il2CppObject * __this /* static, unused */, String_t* ___branchID0, int32_t ___start1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerObjectIdentifier::IsValidIdentifier(System.String)
extern "C"  bool DerObjectIdentifier_IsValidIdentifier_m4283637308 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.DerObjectIdentifier::MakeOidStringFromBytes(System.Byte[])
extern "C"  String_t* DerObjectIdentifier_MakeOidStringFromBytes_m4266247403 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.DerObjectIdentifier::FromOctetString(System.Byte[])
extern "C"  DerObjectIdentifier_t3495876513 * DerObjectIdentifier_FromOctetString_m535345009 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___enc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerObjectIdentifier::.cctor()
extern "C"  void DerObjectIdentifier__cctor_m2167201628 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
