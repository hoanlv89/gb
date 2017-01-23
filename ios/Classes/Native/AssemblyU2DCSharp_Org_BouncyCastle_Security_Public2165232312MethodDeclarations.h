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

// Org.BouncyCastle.Security.PublicKeyFactory
struct PublicKeyFactory_t2165232312;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_t1663727050;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
struct SubjectPublicKeyInfo_t3547422518;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
struct DHPublicKeyParameters_t1544976430;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X509_Subje3547422518.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Security.PublicKeyFactory::.ctor()
extern "C"  void PublicKeyFactory__ctor_m3757393995 (PublicKeyFactory_t2165232312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter Org.BouncyCastle.Security.PublicKeyFactory::CreateKey(System.Byte[])
extern "C"  AsymmetricKeyParameter_t1663727050 * PublicKeyFactory_CreateKey_m1467500691 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___keyInfoData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter Org.BouncyCastle.Security.PublicKeyFactory::CreateKey(System.IO.Stream)
extern "C"  AsymmetricKeyParameter_t1663727050 * PublicKeyFactory_CreateKey_m1132554303 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___inStr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter Org.BouncyCastle.Security.PublicKeyFactory::CreateKey(Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo)
extern "C"  AsymmetricKeyParameter_t1663727050 * PublicKeyFactory_CreateKey_m2943841579 (Il2CppObject * __this /* static, unused */, SubjectPublicKeyInfo_t3547422518 * ___keyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Security.PublicKeyFactory::IsPkcsDHParam(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  bool PublicKeyFactory_IsPkcsDHParam_m168901840 (Il2CppObject * __this /* static, unused */, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters Org.BouncyCastle.Security.PublicKeyFactory::ReadPkcsDHParam(Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  DHPublicKeyParameters_t1544976430 * PublicKeyFactory_ReadPkcsDHParam_m2848014050 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___algOid0, BigInteger_t4268922522 * ___y1, Asn1Sequence_t54253652 * ___seq2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
