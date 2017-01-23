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

// Card
struct Card_t34057406;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Image2042527209.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_Card34057406.h"

// System.Void Card::.ctor()
extern "C"  void Card__ctor_m586349219 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::.ctor(System.Int32,System.Int32)
extern "C"  void Card__ctor_m2310909535 (Card_t34057406 * __this, int32_t ___s0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::get_WIDTH()
extern "C"  int32_t Card_get_WIDTH_m2839541700 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::get_HEIGHT()
extern "C"  int32_t Card_get_HEIGHT_m2638121023 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Card::get_thisPlayerScale()
extern "C"  float Card_get_thisPlayerScale_m1588208077 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image Card::get_image()
extern "C"  Image_t2042527209 * Card_get_image_m4094882748 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::set_image(UnityEngine.UI.Image)
extern "C"  void Card_set_image_m609050263 (Card_t34057406 * __this, Image_t2042527209 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform Card::get_rectTransform()
extern "C"  RectTransform_t3349966182 * Card_get_rectTransform_m2635611524 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::set_rectTransform(UnityEngine.RectTransform)
extern "C"  void Card_set_rectTransform_m1435472965 (Card_t34057406 * __this, RectTransform_t3349966182 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::invertSelected()
extern "C"  void Card_invertSelected_m2020592088 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode(System.Int32)
extern "C"  Card_t34057406 * Card_decode_m1626178925 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode_tienlen(System.Int32)
extern "C"  Card_t34057406 * Card_decode_tienlen_m1198759171 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode_tala(System.Int32)
extern "C"  Card_t34057406 * Card_decode_tala_m1695365332 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode_sam(System.Int32)
extern "C"  Card_t34057406 * Card_decode_sam_m3026756457 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode_lieng(System.Int32)
extern "C"  Card_t34057406 * Card_decode_lieng_m3788308055 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode_poker(System.Int32)
extern "C"  Card_t34057406 * Card_decode_poker_m7781829 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode_binh(System.Int32)
extern "C"  Card_t34057406 * Card_decode_binh_m2972139483 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode_xito(System.Int32)
extern "C"  Card_t34057406 * Card_decode_xito_m2940428030 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode_dummy(System.Int32)
extern "C"  Card_t34057406 * Card_decode_dummy_m1113876196 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::encode_tienlen()
extern "C"  int32_t Card_encode_tienlen_m823229921 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::encode_tala()
extern "C"  int32_t Card_encode_tala_m1996665784 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::encode_lieng()
extern "C"  int32_t Card_encode_lieng_m2855525405 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::encode_poker()
extern "C"  int32_t Card_encode_poker_m1219709551 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::encode_binh()
extern "C"  int32_t Card_encode_binh_m1025469193 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::encode_dummy()
extern "C"  int32_t Card_encode_dummy_m2380027294 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::encode_xito()
extern "C"  int32_t Card_encode_xito_m3492198842 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Card Card::decode_luckycards(System.Int32)
extern "C"  Card_t34057406 * Card_decode_luckycards_m200104949 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::encode()
extern "C"  int32_t Card_encode_m534073855 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::getS()
extern "C"  int32_t Card_getS_m2072867878 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::setS(System.Int32)
extern "C"  void Card_setS_m3443776243 (Card_t34057406 * __this, int32_t ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::setN(System.Int32)
extern "C"  void Card_setN_m3409179922 (Card_t34057406 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Card::getSprite()
extern "C"  Sprite_t309593783 * Card_getSprite_m1199839261 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Card::getResourceName()
extern "C"  String_t* Card_getResourceName_m1112916769 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Card::getSuitInVietnamese()
extern "C"  String_t* Card_getSuitInVietnamese_m8134215 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::addEventTriggerTaLa()
extern "C"  void Card_addEventTriggerTaLa_m2748073874 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::removeEventTriggerTaLa()
extern "C"  void Card_removeEventTriggerTaLa_m3571982505 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::addEventTriggerDummy()
extern "C"  void Card_addEventTriggerDummy_m2109418952 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::removeEventTriggerDummy()
extern "C"  void Card_removeEventTriggerDummy_m1247602333 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::setColor(UnityEngine.Color)
extern "C"  void Card_setColor_m3441988970 (Card_t34057406 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::clearColor()
extern "C"  void Card_clearColor_m282676591 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Card::isContain_Binh(UnityEngine.Vector3)
extern "C"  bool Card_isContain_Binh_m3399616962 (Card_t34057406 * __this, Vector3_t2243707580  ___mousePosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::setPosition_Binh(System.Single,System.Single)
extern "C"  void Card_setPosition_Binh_m55176488 (Card_t34057406 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Card::isOverlapse_Binh(Card)
extern "C"  bool Card_isOverlapse_Binh_m567084742 (Card_t34057406 * __this, Card_t34057406 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::swapCardPos_Binh(System.Int32,System.Int32)
extern "C"  void Card_swapCardPos_Binh_m2723675328 (Il2CppObject * __this /* static, unused */, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Card::getSpaceOf2Cards_Binh(System.Int32,System.Int32)
extern "C"  float Card_getSpaceOf2Cards_Binh_m2133487465 (Il2CppObject * __this /* static, unused */, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::sortCards_Binh(System.Collections.Generic.List`1<Card>)
extern "C"  void Card_sortCards_Binh_m2394522842 (Il2CppObject * __this /* static, unused */, List_1_t3698145834 * ___listC0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Card::checkCards_Binh()
extern "C"  bool Card_checkCards_Binh_m396041792 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::addEventTriggerBinh()
extern "C"  void Card_addEventTriggerBinh_m4180599919 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::removeEventTriggerBinh()
extern "C"  void Card_removeEventTriggerBinh_m2600782810 (Card_t34057406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Card::.cctor()
extern "C"  void Card__cctor_m4248819888 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Card::<sortCards_Binh>m__0(Card,Card)
extern "C"  int32_t Card_U3CsortCards_BinhU3Em__0_m3139460893 (Il2CppObject * __this /* static, unused */, Card_t34057406 * ___p10, Card_t34057406 * ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
