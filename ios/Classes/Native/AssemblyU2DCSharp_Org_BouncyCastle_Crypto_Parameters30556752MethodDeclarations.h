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

// Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
struct ParametersWithSBox_t30556752;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
extern "C"  void ParametersWithSBox__ctor_m595178416 (ParametersWithSBox_t30556752 * __this, Il2CppObject * ___parameters0, ByteU5BU5D_t3397334013* ___sBox1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::GetSBox()
extern "C"  ByteU5BU5D_t3397334013* ParametersWithSBox_GetSBox_m705721390 (ParametersWithSBox_t30556752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::get_Parameters()
extern "C"  Il2CppObject * ParametersWithSBox_get_Parameters_m1411327459 (ParametersWithSBox_t30556752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
