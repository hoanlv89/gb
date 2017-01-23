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

// ControlPlay
struct ControlPlay_t2444103917;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_t3030399642;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ControlPlay::.ctor()
extern "C"  void ControlPlay__ctor_m564230730 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::Start()
extern "C"  void ControlPlay_Start_m1486149362 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::Update()
extern "C"  void ControlPlay_Update_m2093404757 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::spinsendSever()
extern "C"  void ControlPlay_spinsendSever_m2282675651 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::spin(System.Boolean)
extern "C"  void ControlPlay_spin_m3595410763 (ControlPlay_t2444103917 * __this, bool ___auto0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::autoSpin(System.Int32)
extern "C"  void ControlPlay_autoSpin_m1694098922 (ControlPlay_t2444103917 * __this, int32_t ___numberspin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::creatItem()
extern "C"  void ControlPlay_creatItem_m3691289728 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::creat(System.Int32[])
extern "C"  void ControlPlay_creat_m1471290374 (ControlPlay_t2444103917 * __this, Int32U5BU5D_t3030399641* ___itemCreat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::creatBorderBonus()
extern "C"  void ControlPlay_creatBorderBonus_m189891366 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::creatBorderScatter()
extern "C"  void ControlPlay_creatBorderScatter_m2337324967 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::delete()
extern "C"  void ControlPlay_delete_m2926789177 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::changeList()
extern "C"  void ControlPlay_changeList_m4172771792 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::run(System.Boolean)
extern "C"  void ControlPlay_run_m1156469766 (ControlPlay_t2444103917 * __this, bool ___auto0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::showLine(System.Int32)
extern "C"  void ControlPlay_showLine_m2557118314 (ControlPlay_t2444103917 * __this, int32_t ___line0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::hideLine(System.Int32)
extern "C"  void ControlPlay_hideLine_m2264033931 (ControlPlay_t2444103917 * __this, int32_t ___line0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::showBorder(System.Int32)
extern "C"  void ControlPlay_showBorder_m2854043486 (ControlPlay_t2444103917 * __this, int32_t ___line0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::hideBorder(System.Int32)
extern "C"  void ControlPlay_hideBorder_m3601579169 (ControlPlay_t2444103917 * __this, int32_t ___line0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::showAnimation(System.Int32)
extern "C"  void ControlPlay_showAnimation_m21388178 (ControlPlay_t2444103917 * __this, int32_t ___line0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::hideAnimation(System.Int32)
extern "C"  void ControlPlay_hideAnimation_m2616710995 (ControlPlay_t2444103917 * __this, int32_t ___line0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::revMatrix(System.Int32[0...,0...])
extern "C"  void ControlPlay_revMatrix_m360541893 (Il2CppObject * __this /* static, unused */, Int32U5BU2CU5D_t3030399642* ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::getPosMatrix(System.Int32,System.Int32)
extern "C"  void ControlPlay_getPosMatrix_m1715665869 (ControlPlay_t2444103917 * __this, int32_t ___line0, int32_t ___sopt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ControlPlay::getIntCoin(System.String)
extern "C"  int32_t ControlPlay_getIntCoin_m1643074772 (ControlPlay_t2444103917 * __this, String_t* ___coin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::backtoGameSence()
extern "C"  void ControlPlay_backtoGameSence_m2295057324 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ControlPlay::upGold(System.Int32)
extern "C"  Il2CppObject * ControlPlay_upGold_m1187868214 (ControlPlay_t2444103917 * __this, int32_t ___totalWin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::downGold(System.Int32)
extern "C"  void ControlPlay_downGold_m298265463 (ControlPlay_t2444103917 * __this, int32_t ___numberLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ControlPlay::on_offAllButton(System.Single)
extern "C"  Il2CppObject * ControlPlay_on_offAllButton_m4274285545 (ControlPlay_t2444103917 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ControlPlay::ControlRunAfterSpin(System.Single)
extern "C"  Il2CppObject * ControlPlay_ControlRunAfterSpin_m2814162729 (ControlPlay_t2444103917 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ControlPlay::EfBonus(System.Single)
extern "C"  Il2CppObject * ControlPlay_EfBonus_m2801072077 (ControlPlay_t2444103917 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ControlPlay::EfScatter(System.Single,System.Int32)
extern "C"  Il2CppObject * ControlPlay_EfScatter_m1228967843 (ControlPlay_t2444103917 * __this, float ___delay0, int32_t ___numberScatter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ControlPlay::checkBn(System.Int32[0...,0...],System.Int32)
extern "C"  bool ControlPlay_checkBn_m4210905186 (ControlPlay_t2444103917 * __this, Int32U5BU2CU5D_t3030399642* ___resultMatrix0, int32_t ___numberRow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ControlPlay::findBonus(System.Int32[0...,0...])
extern "C"  Int32U5BU5D_t3030399641* ControlPlay_findBonus_m3060923175 (ControlPlay_t2444103917 * __this, Int32U5BU2CU5D_t3030399642* ___A0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ControlPlay::checkScat(System.Int32[0...,0...])
extern "C"  bool ControlPlay_checkScat_m39033810 (ControlPlay_t2444103917 * __this, Int32U5BU2CU5D_t3030399642* ___A0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ControlPlay::findScatter(System.Int32[0...,0...])
extern "C"  Int32U5BU5D_t3030399641* ControlPlay_findScatter_m3029021366 (ControlPlay_t2444103917 * __this, Int32U5BU2CU5D_t3030399642* ___A0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ControlPlay::creatHieuungcot2(System.Int32,System.Single,System.Single)
extern "C"  Il2CppObject * ControlPlay_creatHieuungcot2_m3320947153 (ControlPlay_t2444103917 * __this, int32_t ___cot0, float ___delay1, float ___runtime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::setItemCreat(System.Int32[])
extern "C"  void ControlPlay_setItemCreat_m3067552569 (ControlPlay_t2444103917 * __this, Int32U5BU5D_t3030399641* ___arrLineEf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ControlPlay::checkBigWin()
extern "C"  bool ControlPlay_checkBigWin_m3100420912 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::down()
extern "C"  void ControlPlay_down_m2480624536 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::up()
extern "C"  void ControlPlay_up_m3589857577 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ControlPlay::autoSend(System.Int32)
extern "C"  Il2CppObject * ControlPlay_autoSend_m4016694816 (ControlPlay_t2444103917 * __this, int32_t ___numberspin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::StopSpin()
extern "C"  void ControlPlay_StopSpin_m4117050888 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::showPay()
extern "C"  void ControlPlay_showPay_m3112744331 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::hidePay()
extern "C"  void ControlPlay_hidePay_m274265320 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::showBonusGame()
extern "C"  void ControlPlay_showBonusGame_m1462542740 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ControlPlay::waitCheckBonus()
extern "C"  Il2CppObject * ControlPlay_waitCheckBonus_m2258813290 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ControlPlay::testparabol()
extern "C"  Il2CppObject * ControlPlay_testparabol_m1414132183 (ControlPlay_t2444103917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ControlPlay::.cctor()
extern "C"  void ControlPlay__cctor_m1330148575 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
