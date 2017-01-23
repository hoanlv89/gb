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

// Org.BouncyCastle.Asn1.Pkcs.SignedData
struct SignedData_t1315018810;
// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
// Org.BouncyCastle.Asn1.Asn1Set
struct Asn1Set_t2420705913;
// Org.BouncyCastle.Asn1.Pkcs.ContentInfo
struct ContentInfo_t1565361645;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerInteger967720487.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Set2420705913.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Pkcs_Conte1565361645.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.Pkcs.SignedData::.ctor(Org.BouncyCastle.Asn1.DerInteger,Org.BouncyCastle.Asn1.Asn1Set,Org.BouncyCastle.Asn1.Pkcs.ContentInfo,Org.BouncyCastle.Asn1.Asn1Set,Org.BouncyCastle.Asn1.Asn1Set,Org.BouncyCastle.Asn1.Asn1Set)
extern "C"  void SignedData__ctor_m773438392 (SignedData_t1315018810 * __this, DerInteger_t967720487 * ____version0, Asn1Set_t2420705913 * ____digestAlgorithms1, ContentInfo_t1565361645 * ____contentInfo2, Asn1Set_t2420705913 * ____certificates3, Asn1Set_t2420705913 * ____crls4, Asn1Set_t2420705913 * ____signerInfos5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Pkcs.SignedData::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void SignedData__ctor_m3549920384 (SignedData_t1315018810 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Pkcs.SignedData Org.BouncyCastle.Asn1.Pkcs.SignedData::GetInstance(System.Object)
extern "C"  SignedData_t1315018810 * SignedData_GetInstance_m2250417869 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.Pkcs.SignedData::get_Version()
extern "C"  DerInteger_t967720487 * SignedData_get_Version_m466242269 (SignedData_t1315018810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Set Org.BouncyCastle.Asn1.Pkcs.SignedData::get_DigestAlgorithms()
extern "C"  Asn1Set_t2420705913 * SignedData_get_DigestAlgorithms_m1505960973 (SignedData_t1315018810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Pkcs.ContentInfo Org.BouncyCastle.Asn1.Pkcs.SignedData::get_ContentInfo()
extern "C"  ContentInfo_t1565361645 * SignedData_get_ContentInfo_m2459698583 (SignedData_t1315018810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Set Org.BouncyCastle.Asn1.Pkcs.SignedData::get_Certificates()
extern "C"  Asn1Set_t2420705913 * SignedData_get_Certificates_m1857972891 (SignedData_t1315018810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Set Org.BouncyCastle.Asn1.Pkcs.SignedData::get_Crls()
extern "C"  Asn1Set_t2420705913 * SignedData_get_Crls_m2929656091 (SignedData_t1315018810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Set Org.BouncyCastle.Asn1.Pkcs.SignedData::get_SignerInfos()
extern "C"  Asn1Set_t2420705913 * SignedData_get_SignerInfos_m857653622 (SignedData_t1315018810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Pkcs.SignedData::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * SignedData_ToAsn1Object_m116042634 (SignedData_t1315018810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
