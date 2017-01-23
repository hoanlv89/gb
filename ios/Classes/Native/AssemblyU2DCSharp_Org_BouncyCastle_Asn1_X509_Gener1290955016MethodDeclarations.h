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

// Org.BouncyCastle.Asn1.X509.GeneralNames
struct GeneralNames_t1290955016;
// Org.BouncyCastle.Asn1.X509.GeneralName
struct GeneralName_t294965175;
// Org.BouncyCastle.Asn1.X509.GeneralName[]
struct GeneralNameU5BU5D_t309690254;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Genera294965175.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"

// System.Void Org.BouncyCastle.Asn1.X509.GeneralNames::.ctor(Org.BouncyCastle.Asn1.X509.GeneralName)
extern "C"  void GeneralNames__ctor_m1912569744 (GeneralNames_t1290955016 * __this, GeneralName_t294965175 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.GeneralNames::.ctor(Org.BouncyCastle.Asn1.X509.GeneralName[])
extern "C"  void GeneralNames__ctor_m497261688 (GeneralNames_t1290955016 * __this, GeneralNameU5BU5D_t309690254* ___names0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.GeneralNames::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void GeneralNames__ctor_m4246647729 (GeneralNames_t1290955016 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.GeneralNames Org.BouncyCastle.Asn1.X509.GeneralNames::GetInstance(System.Object)
extern "C"  GeneralNames_t1290955016 * GeneralNames_GetInstance_m762868429 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.GeneralNames Org.BouncyCastle.Asn1.X509.GeneralNames::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  GeneralNames_t1290955016 * GeneralNames_GetInstance_m1847074073 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.GeneralName[] Org.BouncyCastle.Asn1.X509.GeneralNames::GetNames()
extern "C"  GeneralNameU5BU5D_t309690254* GeneralNames_GetNames_m1293546091 (GeneralNames_t1290955016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.GeneralNames::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * GeneralNames_ToAsn1Object_m610912263 (GeneralNames_t1290955016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.GeneralNames::ToString()
extern "C"  String_t* GeneralNames_ToString_m288633341 (GeneralNames_t1290955016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
