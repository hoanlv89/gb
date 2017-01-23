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

// ScreenList
struct ScreenList_t438862520;
// System.Collections.Generic.List`1<TableGame>
struct List_1_t402749618;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void ScreenList::.ctor()
extern "C"  void ScreenList__ctor_m2272623369 (ScreenList_t438862520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::Start()
extern "C"  void ScreenList_Start_m1693234137 (ScreenList_t438862520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::Update()
extern "C"  void ScreenList_Update_m1951457826 (ScreenList_t438862520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::revListTable(System.Collections.Generic.List`1<TableGame>)
extern "C"  void ScreenList_revListTable_m4048146966 (ScreenList_t438862520 * __this, List_1_t402749618 * ___tableList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::AddNewItem()
extern "C"  void ScreenList_AddNewItem_m3486900425 (ScreenList_t438862520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::loadScreen(System.Int32,System.Collections.Generic.List`1<TableGame>)
extern "C"  void ScreenList_loadScreen_m869148706 (ScreenList_t438862520 * __this, int32_t ___currentScreen0, List_1_t402749618 * ___tableList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::nextScreen()
extern "C"  void ScreenList_nextScreen_m2251336806 (ScreenList_t438862520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::preScreen()
extern "C"  void ScreenList_preScreen_m91795758 (ScreenList_t438862520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenList::ieNextScreen()
extern "C"  Il2CppObject * ScreenList_ieNextScreen_m405689468 (ScreenList_t438862520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenList::iePrevScreen()
extern "C"  Il2CppObject * ScreenList_iePrevScreen_m3161995692 (ScreenList_t438862520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite ScreenList::getImage(System.String)
extern "C"  Sprite_t309593783 * ScreenList_getImage_m3240338507 (ScreenList_t438862520 * __this, String_t* ___typetabe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScreenList_OnEndDrag_m1805877507 (ScreenList_t438862520 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScreenList_OnDrag_m3523434380 (ScreenList_t438862520 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScreenList_OnBeginDrag_m1889697043 (ScreenList_t438862520 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList::.cctor()
extern "C"  void ScreenList__cctor_m604822890 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
