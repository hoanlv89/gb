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

// Styx.PacketInputStream
struct PacketInputStream_t1469089790;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"

// System.Void Styx.PacketInputStream::.ctor(System.IO.BinaryReader)
extern "C"  void PacketInputStream__ctor_m317623144 (PacketInputStream_t1469089790 * __this, BinaryReader_t2491843768 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Styx.PacketInputStream::loadByte()
extern "C"  uint8_t PacketInputStream_loadByte_m2851354369 (PacketInputStream_t1469089790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Styx.PacketInputStream::loadUnsignedByte()
extern "C"  uint8_t PacketInputStream_loadUnsignedByte_m1395235156 (PacketInputStream_t1469089790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Styx.PacketInputStream::loadUnsignedShort()
extern "C"  uint16_t PacketInputStream_loadUnsignedShort_m1653762179 (PacketInputStream_t1469089790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Styx.PacketInputStream::loadShort()
extern "C"  int16_t PacketInputStream_loadShort_m80955091 (PacketInputStream_t1469089790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Styx.PacketInputStream::loadInt()
extern "C"  int32_t PacketInputStream_loadInt_m4294348626 (PacketInputStream_t1469089790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Styx.PacketInputStream::loadUnsignedInt()
extern "C"  uint32_t PacketInputStream_loadUnsignedInt_m256142246 (PacketInputStream_t1469089790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Styx.PacketInputStream::loadLong()
extern "C"  int64_t PacketInputStream_loadLong_m2827703052 (PacketInputStream_t1469089790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Styx.PacketInputStream::loadBool()
extern "C"  bool PacketInputStream_loadBool_m615148443 (PacketInputStream_t1469089790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Styx.PacketInputStream::loadString()
extern "C"  String_t* PacketInputStream_loadString_m3637362137 (PacketInputStream_t1469089790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketInputStream::loadByteArray(System.Byte[])
extern "C"  void PacketInputStream_loadByteArray_m338370681 (PacketInputStream_t1469089790 * __this, ByteU5BU5D_t3397334013* ___arg00, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketInputStream::loadIntArray(System.Int32[])
extern "C"  void PacketInputStream_loadIntArray_m205619378 (PacketInputStream_t1469089790 * __this, Int32U5BU5D_t3030399641* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketInputStream::loadStringArray(System.String[])
extern "C"  void PacketInputStream_loadStringArray_m1750110721 (PacketInputStream_t1469089790 * __this, StringU5BU5D_t1642385972* ___removedParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
