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

// TableList
struct TableList_t905762664;
// System.Collections.Generic.List`1<TableGame>
struct List_1_t402749618;
// TableGame
struct TableGame_t1033628486;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TableGame1033628486.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void TableList::.ctor()
extern "C"  void TableList__ctor_m754480867 (TableList_t905762664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableList::Start()
extern "C"  void TableList_Start_m1316767791 (TableList_t905762664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableList::Update()
extern "C"  void TableList_Update_m4106568870 (TableList_t905762664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableList::addTable(System.Collections.Generic.List`1<TableGame>)
extern "C"  void TableList_addTable_m3253362636 (TableList_t905762664 * __this, List_1_t402749618 * ___tableList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableList::AddNewItem(TableGame,System.Int32)
extern "C"  void TableList_AddNewItem_m1310365264 (TableList_t905762664 * __this, TableGame_t1033628486 * ___tableGame0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableList::onScrollRectValueChange(UnityEngine.Vector2)
extern "C"  void TableList_onScrollRectValueChange_m2438619960 (TableList_t905762664 * __this, Vector2_t2243707579  ___vec20, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TableList::setShowTable(System.Int32,System.Boolean)
extern "C"  bool TableList_setShowTable_m3239427434 (TableList_t905762664 * __this, int32_t ___index0, bool ___isShow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TableGame> TableList::sortTable(System.Collections.Generic.List`1<TableGame>)
extern "C"  List_1_t402749618 * TableList_sortTable_m2734638688 (TableList_t905762664 * __this, List_1_t402749618 * ___tableList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
