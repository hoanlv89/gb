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

// CardUtils
struct CardUtils_t578001437;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// Card
struct Card_t34057406;
// CardChan
struct CardChan_t4248506078;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CardUtils_GroupType1430858029.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "AssemblyU2DCSharp_Card34057406.h"
#include "AssemblyU2DCSharp_CardChan4248506078.h"

// System.Void CardUtils::.ctor()
extern "C"  void CardUtils__ctor_m2452692442 (CardUtils_t578001437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CardUtils::getGroupTypeString(CardUtils/GroupType)
extern "C"  String_t* CardUtils_getGroupTypeString_m1432474716 (Il2CppObject * __this /* static, unused */, int32_t ___gt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardUtils/GroupType CardUtils::getGroupCardType_XiTo(SimpleJSON.JSONArray)
extern "C"  int32_t CardUtils_getGroupCardType_XiTo_m185518285 (Il2CppObject * __this /* static, unused */, JSONArray_t3986483147 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardUtils/GroupType CardUtils::getGroupCardType_XiTo(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t CardUtils_getGroupCardType_XiTo_m1474179054 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardUtils/GroupType CardUtils::getGroupCardType_Lieng(SimpleJSON.JSONArray)
extern "C"  int32_t CardUtils_getGroupCardType_Lieng_m2070573492 (Il2CppObject * __this /* static, unused */, JSONArray_t3986483147 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardUtils/GroupType CardUtils::getGroupCardType_Lieng(System.Collections.Generic.List`1<Card>)
extern "C"  int32_t CardUtils_getGroupCardType_Lieng_m2967584985 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::hasFiveFlushStraight(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_hasFiveFlushStraight_m1266363326 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::hasFourOfAKind(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_hasFourOfAKind_m49012836 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::hasFullHouse(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_hasFullHouse_m3149048003 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::hasFiveFlush(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_hasFiveFlush_m2496804276 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::hasFiveStraight(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_hasFiveStraight_m187861234 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::hasThreeOfAKind(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_hasThreeOfAKind_m2408308422 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::hasTwoPairs(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_hasTwoPairs_m2024886561 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::hasPair(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_hasPair_m739535272 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::isLieng(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_isLieng_m444396129 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::isBoDoi(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_isBoDoi_m3484460159 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::isStraight(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_isStraight_m1477281596 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___cards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::isStraight_Sam(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_isStraight_Sam_m1627873028 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___cards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::checkSanh_sam(System.Collections.Generic.List`1<System.Int32>)
extern "C"  bool CardUtils_checkSanh_sam_m2223019897 (Il2CppObject * __this /* static, unused */, List_1_t1440998580 * ___cards0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::isPairs(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_isPairs_m2287169049 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::isThreeOfAKind(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_isThreeOfAKind_m3846763028 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::isFourOfAKind(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_isFourOfAKind_m514663510 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::isThreePairsStraight(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_isThreePairsStraight_m307175645 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getHigherStraight(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>,System.Boolean)
extern "C"  List_1_t3698145834 * CardUtils_getHigherStraight_m3791778631 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, List_1_t3698145834 * ___myCardsIn1, bool ___sam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getHigherPairs(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>,System.Boolean)
extern "C"  List_1_t3698145834 * CardUtils_getHigherPairs_m1546935432 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, List_1_t3698145834 * ___myCards1, bool ___sam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getHigherThrees(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>,System.Boolean)
extern "C"  List_1_t3698145834 * CardUtils_getHigherThrees_m1203394750 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, List_1_t3698145834 * ___myCards1, bool ___sam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getHigherFours(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * CardUtils_getHigherFours_m1402635551 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, List_1_t3698145834 * ___myCards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getHigherFours(System.Int32,System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * CardUtils_getHigherFours_m453790282 (Il2CppObject * __this /* static, unused */, int32_t ___n0, List_1_t3698145834 * ___myCards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getHigherThreePairs(Card,System.Collections.Generic.List`1<Card>,System.Boolean)
extern "C"  List_1_t3698145834 * CardUtils_getHigherThreePairs_m4124604206 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___cmax0, List_1_t3698145834 * ___myCardsIn1, bool ___sam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getHigherFourPairs(Card,System.Collections.Generic.List`1<Card>,System.Boolean)
extern "C"  List_1_t3698145834 * CardUtils_getHigherFourPairs_m3034564648 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___cmax0, List_1_t3698145834 * ___myCardsIn1, bool ___sam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getHigherThreePairs(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>,System.Boolean)
extern "C"  List_1_t3698145834 * CardUtils_getHigherThreePairs_m3756556050 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, List_1_t3698145834 * ___myCards1, bool ___sam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getHigherFourPairs(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>,System.Boolean)
extern "C"  List_1_t3698145834 * CardUtils_getHigherFourPairs_m318060728 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, List_1_t3698145834 * ___myCards1, bool ___sam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::loaiboxamvatuquy(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * CardUtils_loaiboxamvatuquy_m1354318668 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___myCardsIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::loaiboxamdoivatuquy(System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * CardUtils_loaiboxamdoivatuquy_m1856863696 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___myCardsIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getRecommendCardsTienLen(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * CardUtils_getRecommendCardsTienLen_m911865341 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, List_1_t3698145834 * ___myCards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Card> CardUtils::getRecommendCardsSam(System.Collections.Generic.List`1<Card>,System.Collections.Generic.List`1<Card>)
extern "C"  List_1_t3698145834 * CardUtils_getRecommendCardsSam_m1672136639 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___list0, List_1_t3698145834 * ___myCards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::getLiengScore(SimpleJSON.JSONArray)
extern "C"  int32_t CardUtils_getLiengScore_m3254421658 (Il2CppObject * __this /* static, unused */, JSONArray_t3986483147 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::checkTuQuy(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_checkTuQuy_m3925720394 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___phom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardUtils::checkSanhTala(System.Collections.Generic.List`1<Card>)
extern "C"  bool CardUtils_checkSanhTala_m3505457198 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___phom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardUtils::.cctor()
extern "C"  void CardUtils__cctor_m3307724047 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<hasFourOfAKind>m__0(Card,Card)
extern "C"  int32_t CardUtils_U3ChasFourOfAKindU3Em__0_m2872571969 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<hasThreeOfAKind>m__1(Card,Card)
extern "C"  int32_t CardUtils_U3ChasThreeOfAKindU3Em__1_m672792862 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<hasTwoPairs>m__2(Card,Card)
extern "C"  int32_t CardUtils_U3ChasTwoPairsU3Em__2_m3206112060 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<hasPair>m__3(Card,Card)
extern "C"  int32_t CardUtils_U3ChasPairU3Em__3_m3847211446 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<loaiboxamvatuquy>m__4(Card,Card)
extern "C"  int32_t CardUtils_U3CloaiboxamvatuquyU3Em__4_m400805934 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<loaiboxamdoivatuquy>m__5(Card,Card)
extern "C"  int32_t CardUtils_U3CloaiboxamdoivatuquyU3Em__5_m3460863887 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<ComparisionChan>m__6(CardChan,CardChan)
extern "C"  int32_t CardUtils_U3CComparisionChanU3Em__6_m183425011 (Il2CppObject * __this /* static, unused */, CardChan_t4248506078 * ___x0, CardChan_t4248506078 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<ComparisionTala1>m__7(Card,Card)
extern "C"  int32_t CardUtils_U3CComparisionTala1U3Em__7_m1465922379 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<ComparisionTala2>m__8(Card,Card)
extern "C"  int32_t CardUtils_U3CComparisionTala2U3Em__8_m1515456835 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<ComparisionDummy1>m__9(Card,Card)
extern "C"  int32_t CardUtils_U3CComparisionDummy1U3Em__9_m4192554469 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<ComparisionDummy2>m__A(Card,Card)
extern "C"  int32_t CardUtils_U3CComparisionDummy2U3Em__A_m1549668124 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<ComparisionXiTo>m__B(Card,Card)
extern "C"  int32_t CardUtils_U3CComparisionXiToU3Em__B_m2684994589 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<ComparisionLieng>m__C(Card,Card)
extern "C"  int32_t CardUtils_U3CComparisionLiengU3Em__C_m1221996555 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardUtils::<ComparisionTienLen>m__D(Card,Card)
extern "C"  int32_t CardUtils_U3CComparisionTienLenU3Em__D_m3561169590 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___x0, Card_t34057406 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
