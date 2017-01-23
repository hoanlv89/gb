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

// Binh_CardValues
struct Binh_CardValues_t1708632528;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;
// ChiValue
struct ChiValue_t2357371775;
// Card
struct Card_t34057406;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "AssemblyU2DCSharp_Card34057406.h"

// System.Void Binh_CardValues::.ctor()
extern "C"  void Binh_CardValues__ctor_m2179448865 (Binh_CardValues_t1708632528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Binh_CardValues::getValueListCard(SimpleJSON.JSONArray)
extern "C"  List_1_t1440998580 * Binh_CardValues_getValueListCard_m641666503 (Il2CppObject * __this /* static, unused */, JSONArray_t3986483147 * ___jcards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Binh_CardValues::debugListCard(System.Collections.Generic.List`1<System.Int32>)
extern "C"  String_t* Binh_CardValues_debugListCard_m2904322824 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listV0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Binh_CardValues::getValueListChild(System.Collections.Generic.List`1<Card>,System.Int32)
extern "C"  List_1_t3698145834 * Binh_CardValues_getValueListChild_m2561052538 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___listCard0, int32_t ___row1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Binh_CardValues::getIndexRow(System.Int32)
extern "C"  List_1_t1440998580 * Binh_CardValues_getIndexRow_m3483727684 (Il2CppObject * __this /* static, unused */, int32_t ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Binh_CardValues::getValuesRow(System.Int32)
extern "C"  List_1_t1440998580 * Binh_CardValues_getValuesRow_m3434209722 (Il2CppObject * __this /* static, unused */, int32_t ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkSanhRongDongHoa(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkSanhRongDongHoa_m3154845870 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkMauBinhSanhRong(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkMauBinhSanhRong_m2050656998 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkMauBinhDongHoa(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkMauBinhDongHoa_m4214777410 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkMauBinh6Doi(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkMauBinh6Doi_m2157550826 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkMauBinh3Thung()
extern "C"  int32_t Binh_CardValues_checkMauBinh3Thung_m1387658936 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkMauBinh3Sanh(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkMauBinh3Sanh_m487798809 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::getMarkMauBinh(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_getMarkMauBinh_m731899459 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkThungPhaSanh(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkThungPhaSanh_m4220452835 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkTuQuy(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkTuQuy_m1401494174 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkCuLu(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkCuLu_m31682981 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkThung(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkThung_m3313874338 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkSanh(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkSanh_m3102436644 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkSamCo(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkSamCo_m2170583049 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkThu(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkThu_m1807191759 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkDoi(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_checkDoi_m3426260018 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::getMauValue(System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_getMauValue_m46873068 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChiValue Binh_CardValues::chiValue(System.Collections.Generic.List`1<System.Int32>)
extern "C"  ChiValue_t2357371775 * Binh_CardValues_chiValue_m555318513 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChiValue Binh_CardValues::chiValue(System.Int32)
extern "C"  ChiValue_t2357371775 * Binh_CardValues_chiValue_m4025044219 (Il2CppObject * __this /* static, unused */, int32_t ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Binh_CardValues::checkBinhLung()
extern "C"  bool Binh_CardValues_checkBinhLung_m785517366 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Binh_CardValues::listSort(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void Binh_CardValues_listSort_m1432272040 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Binh_CardValues::listSodu(System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t1440998580 * Binh_CardValues_listSodu_m4012486157 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::compareList(System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  int32_t Binh_CardValues_compareList_m2485345624 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue10, List_1_t1440998580 * ___listValue21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::compareChi1(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_compareChi1_m1174848427 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___chi10, List_1_t3698145834 * ___chi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::compareChi2(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_compareChi2_m1765774508 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___chi10, List_1_t3698145834 * ___chi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::compareChi3(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_compareChi3_m3239796909 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___chi10, List_1_t3698145834 * ___chi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Binh_CardValues::resultCard(System.Collections.Generic.List`1<System.Int32>)
extern "C"  String_t* Binh_CardValues_resultCard_m524487420 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___listValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Binh_CardValues::getTuQuy(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * Binh_CardValues_getTuQuy_m1285523642 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Binh_CardValues::getCuLu(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * Binh_CardValues_getCuLu_m3204806459 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Binh_CardValues::getThung(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * Binh_CardValues_getThung_m2119731034 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Binh_CardValues::getSanh(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * Binh_CardValues_getSanh_m491840310 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Binh_CardValues::getSam(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * Binh_CardValues_getSam_m2125746323 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Binh_CardValues::getThu(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * Binh_CardValues_getThu_m2251384429 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Binh_CardValues::getDoi(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * Binh_CardValues_getDoi_m1517930598 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> Binh_CardValues::getMau(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * Binh_CardValues_getMau_m3975187929 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::indexA(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_indexA_m1384275566 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkDoi(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_checkDoi_m42680181 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkThu(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_checkThu_m380183806 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkSam(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_checkSam_m825972426 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkSanh(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_checkSanh_m3391335359 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkThung(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_checkThung_m2654212595 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkCuLu(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_checkCuLu_m140858222 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkTuQuy(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_checkTuQuy_m3824025503 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::checkTPS(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_checkTPS_m1689654972 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::getMark(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_getMark_m3319846904 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___baitrentay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::sosanhChi1(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_sosanhChi1_m1158704334 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___chi20, List_1_t3698145834 * ___chi11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::sosanhChi2vsChi1(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_sosanhChi2vsChi1_m1602269309 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___chi20, List_1_t3698145834 * ___chi11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::sosanhChi3vsChi2(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  int32_t Binh_CardValues_sosanhChi3vsChi2_m28617747 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___chi30, List_1_t3698145834 * ___chi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::getSpecialCard(System.Collections.Generic.List`1<Card>,System.Int32)
extern "C"  int32_t Binh_CardValues_getSpecialCard_m57728735 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___listCard0, int32_t ___row1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getValuesRow>m__0(System.Int32,System.Int32)
extern "C"  int32_t Binh_CardValues_U3CgetValuesRowU3Em__0_m1808351694 (Il2CppObject * __this /* static, unused */, int32_t ___p10, int32_t ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkMauBinh3Sanh>m__1(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CcheckMauBinh3SanhU3Em__1_m2899302802 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkTuQuy>m__2(System.Int32,System.Int32)
extern "C"  int32_t Binh_CardValues_U3CcheckTuQuyU3Em__2_m2050100578 (Il2CppObject * __this /* static, unused */, int32_t ___p10, int32_t ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkCuLu>m__3(System.Int32,System.Int32)
extern "C"  int32_t Binh_CardValues_U3CcheckCuLuU3Em__3_m361096376 (Il2CppObject * __this /* static, unused */, int32_t ___p10, int32_t ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkSanh>m__4(System.Int32,System.Int32)
extern "C"  int32_t Binh_CardValues_U3CcheckSanhU3Em__4_m11104118 (Il2CppObject * __this /* static, unused */, int32_t ___p10, int32_t ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkSamCo>m__5(System.Int32,System.Int32)
extern "C"  int32_t Binh_CardValues_U3CcheckSamCoU3Em__5_m458936764 (Il2CppObject * __this /* static, unused */, int32_t ___p10, int32_t ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkThu>m__6(System.Int32,System.Int32)
extern "C"  int32_t Binh_CardValues_U3CcheckThuU3Em__6_m3376632697 (Il2CppObject * __this /* static, unused */, int32_t ___p10, int32_t ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkDoi>m__7(System.Int32,System.Int32)
extern "C"  int32_t Binh_CardValues_U3CcheckDoiU3Em__7_m3036379823 (Il2CppObject * __this /* static, unused */, int32_t ___p10, int32_t ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getMauValue>m__8(System.Int32,System.Int32)
extern "C"  int32_t Binh_CardValues_U3CgetMauValueU3Em__8_m3500285814 (Il2CppObject * __this /* static, unused */, int32_t ___p10, int32_t ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<listSort>m__9(System.Int32,System.Int32)
extern "C"  int32_t Binh_CardValues_U3ClistSortU3Em__9_m366400361 (Il2CppObject * __this /* static, unused */, int32_t ___p10, int32_t ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getTuQuy>m__A(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetTuQuyU3Em__A_m988317279 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getCuLu>m__B(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetCuLuU3Em__B_m4123550699 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getThung>m__C(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetThungU3Em__C_m1500411693 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getThung>m__D(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetThungU3Em__D_m3329812682 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getSanh>m__E(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetSanhU3Em__E_m1729449811 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getSam>m__F(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetSamU3Em__F_m3117683275 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getThu>m__10(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetThuU3Em__10_m2470071454 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getThu>m__11(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetThuU3Em__11_m2506904703 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getDoi>m__12(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetDoiU3Em__12_m4275323219 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getDoi>m__13(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetDoiU3Em__13_m17189172 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getDoi>m__14(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetDoiU3Em__14_m3893321485 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<getMau>m__15(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CgetMauU3Em__15_m283567751 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkDoi>m__16(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CcheckDoiU3Em__16_m2287505087 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkThu>m__17(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CcheckThuU3Em__17_m3213506177 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkSam>m__18(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CcheckSamU3Em__18_m1101744526 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkSanh>m__19(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CcheckSanhU3Em__19_m1104264952 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkThung>m__1A(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CcheckThungU3Em__1A_m1899600806 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkCuLu>m__1B(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CcheckCuLuU3Em__1B_m2006449456 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkTuQuy>m__1C(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CcheckTuQuyU3Em__1C_m3780532304 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<checkTPS>m__1D(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CcheckTPSU3Em__1D_m301294812 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<sosanhChi1>m__1E(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CsosanhChi1U3Em__1E_m3051847691 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<sosanhChi1>m__1F(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CsosanhChi1U3Em__1F_m2863212074 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<sosanhChi2vsChi1>m__20(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CsosanhChi2vsChi1U3Em__20_m3451866128 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<sosanhChi2vsChi1>m__21(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CsosanhChi2vsChi1U3Em__21_m3640357873 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<sosanhChi3vsChi2>m__22(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CsosanhChi3vsChi2U3Em__22_m1385177136 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<sosanhChi3vsChi2>m__23(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CsosanhChi3vsChi2U3Em__23_m1422010385 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<sosanhChi3vsChi2>m__24(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CsosanhChi3vsChi2U3Em__24_m1316241138 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Binh_CardValues::<sosanhChi3vsChi2>m__25(Card,Card)
extern "C"  int32_t Binh_CardValues_U3CsosanhChi3vsChi2U3Em__25_m1353074387 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
