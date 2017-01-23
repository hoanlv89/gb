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

// Org.BouncyCastle.Asn1.X509.GeneralName
struct GeneralName_t294965175;
// Org.BouncyCastle.Asn1.X509.X509Name
struct X509Name_t2936077305;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_X509N2936077305.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"

// System.Void Org.BouncyCastle.Asn1.X509.GeneralName::.ctor(Org.BouncyCastle.Asn1.X509.X509Name)
extern "C"  void GeneralName__ctor_m1064084437 (GeneralName_t294965175 * __this, X509Name_t2936077305 * ___directoryName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.GeneralName::.ctor(Org.BouncyCastle.Asn1.Asn1Object,System.Int32)
extern "C"  void GeneralName__ctor_m44079193 (GeneralName_t294965175 * __this, Asn1Object_t564283626 * ___name0, int32_t ___tag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.GeneralName::.ctor(System.Int32,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void GeneralName__ctor_m1017347913 (GeneralName_t294965175 * __this, int32_t ___tag0, Asn1Encodable_t3447851422 * ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.GeneralName::.ctor(System.Int32,System.String)
extern "C"  void GeneralName__ctor_m1735981556 (GeneralName_t294965175 * __this, int32_t ___tag0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.GeneralName Org.BouncyCastle.Asn1.X509.GeneralName::GetInstance(System.Object)
extern "C"  GeneralName_t294965175 * GeneralName_GetInstance_m1942797305 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.GeneralName Org.BouncyCastle.Asn1.X509.GeneralName::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  GeneralName_t294965175 * GeneralName_GetInstance_m570934533 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___tagObj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.X509.GeneralName::get_TagNo()
extern "C"  int32_t GeneralName_get_TagNo_m1732011517 (GeneralName_t294965175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.X509.GeneralName::get_Name()
extern "C"  Asn1Encodable_t3447851422 * GeneralName_get_Name_m2502947373 (GeneralName_t294965175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.GeneralName::ToString()
extern "C"  String_t* GeneralName_ToString_m1325405932 (GeneralName_t294965175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.X509.GeneralName::toGeneralNameEncoding(System.String)
extern "C"  ByteU5BU5D_t3397334013* GeneralName_toGeneralNameEncoding_m2924050502 (GeneralName_t294965175 * __this, String_t* ___ip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.GeneralName::parseIPv4Mask(System.String,System.Byte[],System.Int32)
extern "C"  void GeneralName_parseIPv4Mask_m904379639 (GeneralName_t294965175 * __this, String_t* ___mask0, ByteU5BU5D_t3397334013* ___addr1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.GeneralName::parseIPv4(System.String,System.Byte[],System.Int32)
extern "C"  void GeneralName_parseIPv4_m1397345243 (GeneralName_t294965175 * __this, String_t* ___ip0, ByteU5BU5D_t3397334013* ___addr1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Asn1.X509.GeneralName::parseMask(System.String)
extern "C"  Int32U5BU5D_t3030399641* GeneralName_parseMask_m2418648222 (GeneralName_t294965175 * __this, String_t* ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.GeneralName::copyInts(System.Int32[],System.Byte[],System.Int32)
extern "C"  void GeneralName_copyInts_m2637685317 (GeneralName_t294965175 * __this, Int32U5BU5D_t3030399641* ___parsedIp0, ByteU5BU5D_t3397334013* ___addr1, int32_t ___offSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Asn1.X509.GeneralName::parseIPv6(System.String)
extern "C"  Int32U5BU5D_t3030399641* GeneralName_parseIPv6_m1314786331 (GeneralName_t294965175 * __this, String_t* ___ip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.GeneralName::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * GeneralName_ToAsn1Object_m3106162302 (GeneralName_t294965175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
