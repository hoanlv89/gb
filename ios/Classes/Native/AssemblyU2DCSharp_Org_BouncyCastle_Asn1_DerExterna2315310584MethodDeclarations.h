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

// Org.BouncyCastle.Asn1.DerExternal
struct DerExternal_t2315310584;
// Org.BouncyCastle.Asn1.Asn1EncodableVector
struct Asn1EncodableVector_t3471733113;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.DerTaggedObject
struct DerTaggedObject_t2520525900;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3471733113.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerInteger967720487.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerTaggedO2520525900.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"

// System.Void Org.BouncyCastle.Asn1.DerExternal::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector)
extern "C"  void DerExternal__ctor_m1596309200 (DerExternal_t2315310584 * __this, Asn1EncodableVector_t3471733113 * ___vector0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerExternal::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.DerInteger,Org.BouncyCastle.Asn1.Asn1Object,Org.BouncyCastle.Asn1.DerTaggedObject)
extern "C"  void DerExternal__ctor_m360235132 (DerExternal_t2315310584 * __this, DerObjectIdentifier_t3495876513 * ___directReference0, DerInteger_t967720487 * ___indirectReference1, Asn1Object_t564283626 * ___dataValueDescriptor2, DerTaggedObject_t2520525900 * ___externalData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerExternal::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.DerInteger,Org.BouncyCastle.Asn1.Asn1Object,System.Int32,Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  void DerExternal__ctor_m674395577 (DerExternal_t2315310584 * __this, DerObjectIdentifier_t3495876513 * ___directReference0, DerInteger_t967720487 * ___indirectReference1, Asn1Object_t564283626 * ___dataValueDescriptor2, int32_t ___encoding3, Asn1Object_t564283626 * ___externalData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerExternal::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerExternal_Encode_m3770488379 (DerExternal_t2315310584 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerExternal::Asn1GetHashCode()
extern "C"  int32_t DerExternal_Asn1GetHashCode_m2560477796 (DerExternal_t2315310584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.DerExternal::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool DerExternal_Asn1Equals_m2010810727 (DerExternal_t2315310584 * __this, Asn1Object_t564283626 * ___asn1Object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.DerExternal::get_DataValueDescriptor()
extern "C"  Asn1Object_t564283626 * DerExternal_get_DataValueDescriptor_m591627639 (DerExternal_t2315310584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerExternal::set_DataValueDescriptor(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  void DerExternal_set_DataValueDescriptor_m3628125860 (DerExternal_t2315310584 * __this, Asn1Object_t564283626 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.DerExternal::get_DirectReference()
extern "C"  DerObjectIdentifier_t3495876513 * DerExternal_get_DirectReference_m3364274570 (DerExternal_t2315310584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerExternal::set_DirectReference(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void DerExternal_set_DirectReference_m3863303151 (DerExternal_t2315310584 * __this, DerObjectIdentifier_t3495876513 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.DerExternal::get_Encoding()
extern "C"  int32_t DerExternal_get_Encoding_m930879960 (DerExternal_t2315310584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerExternal::set_Encoding(System.Int32)
extern "C"  void DerExternal_set_Encoding_m4143726807 (DerExternal_t2315310584 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.DerExternal::get_ExternalContent()
extern "C"  Asn1Object_t564283626 * DerExternal_get_ExternalContent_m4284175459 (DerExternal_t2315310584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerExternal::set_ExternalContent(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  void DerExternal_set_ExternalContent_m3738497720 (DerExternal_t2315310584 * __this, Asn1Object_t564283626 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.DerExternal::get_IndirectReference()
extern "C"  DerInteger_t967720487 * DerExternal_get_IndirectReference_m4118331379 (DerExternal_t2315310584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerExternal::set_IndirectReference(Org.BouncyCastle.Asn1.DerInteger)
extern "C"  void DerExternal_set_IndirectReference_m39697956 (DerExternal_t2315310584 * __this, DerInteger_t967720487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.DerExternal::GetObjFromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector,System.Int32)
extern "C"  Asn1Object_t564283626 * DerExternal_GetObjFromVector_m3369607337 (Il2CppObject * __this /* static, unused */, Asn1EncodableVector_t3471733113 * ___v0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerExternal::WriteEncodable(System.IO.MemoryStream,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerExternal_WriteEncodable_m2003577463 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___ms0, Asn1Encodable_t3447851422 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
