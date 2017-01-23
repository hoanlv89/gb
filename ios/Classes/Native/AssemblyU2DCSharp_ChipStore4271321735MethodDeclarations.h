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

// ChipStore
struct ChipStore_t4271321735;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ChipStore::.ctor()
extern "C"  void ChipStore__ctor_m3748475690 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::Start()
extern "C"  void ChipStore_Start_m1697261774 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::Add(UnityEngine.GameObject,System.Int32,System.Boolean)
extern "C"  void ChipStore_Add_m4064817225 (ChipStore_t4271321735 * __this, GameObject_t1756533147 * ___g0, int32_t ___value1, bool ___pl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::displayChipInCell(System.String)
extern "C"  void ChipStore_displayChipInCell_m1957997641 (ChipStore_t4271321735 * __this, String_t* ___cell0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::DisplayAllCell()
extern "C"  void ChipStore_DisplayAllCell_m1599469731 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::Save()
extern "C"  void ChipStore_Save_m829230871 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::Restore()
extern "C"  void ChipStore_Restore_m257579452 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::doubleBet()
extern "C"  void ChipStore_doubleBet_m836125414 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::doubleRebet()
extern "C"  void ChipStore_doubleRebet_m372299931 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ChipStore::getTotalOld()
extern "C"  int32_t ChipStore_getTotalOld_m2514529791 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ChipStore::getTotal()
extern "C"  int32_t ChipStore_getTotal_m3374390280 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::Clear()
extern "C"  void ChipStore_Clear_m3762555439 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::undo()
extern "C"  void ChipStore_undo_m4130303606 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChipStore::Minus(System.String,System.Int32)
extern "C"  void ChipStore_Minus_m709900461 (ChipStore_t4271321735 * __this, String_t* ___key0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ChipStore::getSendString()
extern "C"  Dictionary_2_t1079703083 * ChipStore_getSendString_m3954258409 (ChipStore_t4271321735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
