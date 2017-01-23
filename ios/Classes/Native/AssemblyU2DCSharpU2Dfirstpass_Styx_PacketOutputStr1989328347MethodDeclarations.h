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

// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Styx.PacketOutputStream::.ctor(System.IO.BinaryWriter)
extern "C"  void PacketOutputStream__ctor_m2735265045 (PacketOutputStream_t1989328347 * __this, BinaryWriter_t3179371318 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveByte(System.Byte)
extern "C"  void PacketOutputStream_saveByte_m1809999330 (PacketOutputStream_t1989328347 * __this, uint8_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveUnsignedByte(System.Byte)
extern "C"  void PacketOutputStream_saveUnsignedByte_m95975417 (PacketOutputStream_t1989328347 * __this, uint8_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveUnsignedShort(System.UInt16)
extern "C"  void PacketOutputStream_saveUnsignedShort_m2897394806 (PacketOutputStream_t1989328347 * __this, uint16_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveShort(System.Int16)
extern "C"  void PacketOutputStream_saveShort_m2092500304 (PacketOutputStream_t1989328347 * __this, int16_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveInt(System.Int32)
extern "C"  void PacketOutputStream_saveInt_m4289751753 (PacketOutputStream_t1989328347 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveUnsignedInt(System.UInt32)
extern "C"  void PacketOutputStream_saveUnsignedInt_m200348885 (PacketOutputStream_t1989328347 * __this, uint32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveLong(System.Int64)
extern "C"  void PacketOutputStream_saveLong_m906297123 (PacketOutputStream_t1989328347 * __this, int64_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveBool(System.Boolean)
extern "C"  void PacketOutputStream_saveBool_m4112262804 (PacketOutputStream_t1989328347 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveString(System.String)
extern "C"  void PacketOutputStream_saveString_m3175970210 (PacketOutputStream_t1989328347 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveArray(System.Byte[])
extern "C"  void PacketOutputStream_saveArray_m1621020881 (PacketOutputStream_t1989328347 * __this, ByteU5BU5D_t3397334013* ___gamedata0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveArray(System.Int32[])
extern "C"  void PacketOutputStream_saveArray_m2361460301 (PacketOutputStream_t1989328347 * __this, Int32U5BU5D_t3030399641* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::saveArray(System.String[])
extern "C"  void PacketOutputStream_saveArray_m2726399038 (PacketOutputStream_t1989328347 * __this, StringU5BU5D_t1642385972* ___removedParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Styx.PacketOutputStream::.cctor()
extern "C"  void PacketOutputStream__cctor_m2224760753 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
