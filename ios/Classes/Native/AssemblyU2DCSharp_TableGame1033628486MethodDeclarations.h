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

// TableGame
struct TableGame_t1033628486;
// System.String
struct String_t;
// com.cubeia.firebase.io.protocol.TableSnapshotPacket
struct TableSnapshotPacket_t3456557784;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_3456557784.h"

// System.Void TableGame::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int16,System.Int16,System.String,System.String,System.Int32)
extern "C"  void TableGame__ctor_m1471224673 (TableGame_t1033628486 * __this, String_t* ___name0, int32_t ___mark1, int32_t ___id2, int32_t ___type3, int16_t ___capacity4, int16_t ___seated5, String_t* ___address6, String_t* ___arrN7, int32_t ___agmin8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableGame::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void TableGame__ctor_m2978703378 (TableGame_t1033628486 * __this, String_t* ___name0, int32_t ___mark1, int32_t ___id2, int32_t ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableGame::.ctor(com.cubeia.firebase.io.protocol.TableSnapshotPacket)
extern "C"  void TableGame__ctor_m3990128420 (TableGame_t1033628486 * __this, TableSnapshotPacket_t3456557784 * ___tableSnapshot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TableGame::tostring()
extern "C"  String_t* TableGame_tostring_m2496318706 (TableGame_t1033628486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableGame::setPlayers(System.String)
extern "C"  void TableGame_setPlayers_m3813380175 (TableGame_t1033628486 * __this, String_t* ___arrN0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableGame::.cctor()
extern "C"  void TableGame__cctor_m2389420804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
