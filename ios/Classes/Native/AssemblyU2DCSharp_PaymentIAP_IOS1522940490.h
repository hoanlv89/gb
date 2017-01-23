#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaymentIAP_IOS
struct  PaymentIAP_IOS_t1522940490  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform PaymentIAP_IOS::IAPPaymentItem
	RectTransform_t3349966182 * ___IAPPaymentItem_2;
	// UnityEngine.RectTransform PaymentIAP_IOS::itemsContainer
	RectTransform_t3349966182 * ___itemsContainer_3;

public:
	inline static int32_t get_offset_of_IAPPaymentItem_2() { return static_cast<int32_t>(offsetof(PaymentIAP_IOS_t1522940490, ___IAPPaymentItem_2)); }
	inline RectTransform_t3349966182 * get_IAPPaymentItem_2() const { return ___IAPPaymentItem_2; }
	inline RectTransform_t3349966182 ** get_address_of_IAPPaymentItem_2() { return &___IAPPaymentItem_2; }
	inline void set_IAPPaymentItem_2(RectTransform_t3349966182 * value)
	{
		___IAPPaymentItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___IAPPaymentItem_2, value);
	}

	inline static int32_t get_offset_of_itemsContainer_3() { return static_cast<int32_t>(offsetof(PaymentIAP_IOS_t1522940490, ___itemsContainer_3)); }
	inline RectTransform_t3349966182 * get_itemsContainer_3() const { return ___itemsContainer_3; }
	inline RectTransform_t3349966182 ** get_address_of_itemsContainer_3() { return &___itemsContainer_3; }
	inline void set_itemsContainer_3(RectTransform_t3349966182 * value)
	{
		___itemsContainer_3 = value;
		Il2CppCodeGenWriteBarrier(&___itemsContainer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
