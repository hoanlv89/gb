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

// Org.BouncyCastle.Asn1.BerOutputStream
struct BerOutputStream_t868356256;
// System.IO.Stream
struct Stream_t3255436806;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.BerOutputStream::.ctor(System.IO.Stream)
extern "C"  void BerOutputStream__ctor_m2748729215 (BerOutputStream_t868356256 * __this, Stream_t3255436806 * ___os0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerOutputStream::WriteObject(System.Object)
extern "C"  void BerOutputStream_WriteObject_m3366734464 (BerOutputStream_t868356256 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
