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

// CardAction
struct CardAction_t3697010252;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;

#include "codegen/il2cpp-codegen.h"

// System.Void CardAction::.ctor()
extern "C"  void CardAction__ctor_m3468967965 (CardAction_t3697010252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardAction::Start()
extern "C"  void CardAction_Start_m1780750317 (CardAction_t3697010252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardAction::Update()
extern "C"  void CardAction_Update_m983843990 (CardAction_t3697010252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardAction::updateSiblingIndex(System.Int32)
extern "C"  void CardAction_updateSiblingIndex_m79266247 (CardAction_t3697010252 * __this, int32_t ___newIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardAction::onMoving()
extern "C"  void CardAction_onMoving_m4063032952 (CardAction_t3697010252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardAction::endMoving()
extern "C"  void CardAction_endMoving_m3341820048 (CardAction_t3697010252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardAction::onDrop()
extern "C"  void CardAction_onDrop_m2878959213 (CardAction_t3697010252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardAction::resetCardColor()
extern "C"  void CardAction_resetCardColor_m1320077017 (CardAction_t3697010252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardAction::getOverlapIndex()
extern "C"  void CardAction_getOverlapIndex_m2713406978 (CardAction_t3697010252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardAction::getMinDistance(System.Collections.Generic.List`1<System.Single>)
extern "C"  int32_t CardAction_getMinDistance_m2948356091 (CardAction_t3697010252 * __this, List_1_t1445631064 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardAction::swapThisPlayerCardOnHand(System.Int32,System.Int32)
extern "C"  void CardAction_swapThisPlayerCardOnHand_m1921038563 (CardAction_t3697010252 * __this, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
