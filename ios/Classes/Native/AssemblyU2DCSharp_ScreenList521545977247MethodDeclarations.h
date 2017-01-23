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

// ScreenList52
struct ScreenList52_t1545977247;
// System.Collections.Generic.List`1<TableGame>
struct List_1_t402749618;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void ScreenList52::.ctor()
extern "C"  void ScreenList52__ctor_m4093940054 (ScreenList52_t1545977247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::Start()
extern "C"  void ScreenList52_Start_m950050314 (ScreenList52_t1545977247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::Update()
extern "C"  void ScreenList52_Update_m3064215559 (ScreenList52_t1545977247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::revListTable(System.Collections.Generic.List`1<TableGame>)
extern "C"  void ScreenList52_revListTable_m3593741289 (ScreenList52_t1545977247 * __this, List_1_t402749618 * ___tableList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::AddNewItem()
extern "C"  void ScreenList52_AddNewItem_m574160336 (ScreenList52_t1545977247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::loadScreen(System.Int32,System.Collections.Generic.List`1<TableGame>)
extern "C"  void ScreenList52_loadScreen_m2672763151 (ScreenList52_t1545977247 * __this, int32_t ___currentScreen0, List_1_t402749618 * ___tableList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::nextScreen()
extern "C"  void ScreenList52_nextScreen_m1344439349 (ScreenList52_t1545977247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::preScreen()
extern "C"  void ScreenList52_preScreen_m3400642209 (ScreenList52_t1545977247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenList52::ieNextScreen()
extern "C"  Il2CppObject * ScreenList52_ieNextScreen_m1944919347 (ScreenList52_t1545977247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenList52::iePrevScreen()
extern "C"  Il2CppObject * ScreenList52_iePrevScreen_m2026606009 (ScreenList52_t1545977247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::setPosImageOnline(UnityEngine.RectTransform,System.Int32)
extern "C"  void ScreenList52_setPosImageOnline_m686425224 (ScreenList52_t1545977247 * __this, RectTransform_t3349966182 * ___rect0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite ScreenList52::getImage(System.String)
extern "C"  Sprite_t309593783 * ScreenList52_getImage_m727052670 (ScreenList52_t1545977247 * __this, String_t* ___typetabe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScreenList52_OnEndDrag_m3961313706 (ScreenList52_t1545977247 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScreenList52_OnDrag_m3981659335 (ScreenList52_t1545977247 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScreenList52_OnBeginDrag_m101855238 (ScreenList52_t1545977247 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenList52::.cctor()
extern "C"  void ScreenList52__cctor_m2887719929 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
