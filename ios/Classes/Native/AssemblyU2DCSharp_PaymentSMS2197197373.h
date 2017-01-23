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
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaymentSMS
struct  PaymentSMS_t2197197373  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform PaymentSMS::SMSPaymentItem
	RectTransform_t3349966182 * ___SMSPaymentItem_2;
	// UnityEngine.RectTransform PaymentSMS::itemsContainer
	RectTransform_t3349966182 * ___itemsContainer_3;
	// UnityEngine.UI.Text PaymentSMS::message
	Text_t356221433 * ___message_4;

public:
	inline static int32_t get_offset_of_SMSPaymentItem_2() { return static_cast<int32_t>(offsetof(PaymentSMS_t2197197373, ___SMSPaymentItem_2)); }
	inline RectTransform_t3349966182 * get_SMSPaymentItem_2() const { return ___SMSPaymentItem_2; }
	inline RectTransform_t3349966182 ** get_address_of_SMSPaymentItem_2() { return &___SMSPaymentItem_2; }
	inline void set_SMSPaymentItem_2(RectTransform_t3349966182 * value)
	{
		___SMSPaymentItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___SMSPaymentItem_2, value);
	}

	inline static int32_t get_offset_of_itemsContainer_3() { return static_cast<int32_t>(offsetof(PaymentSMS_t2197197373, ___itemsContainer_3)); }
	inline RectTransform_t3349966182 * get_itemsContainer_3() const { return ___itemsContainer_3; }
	inline RectTransform_t3349966182 ** get_address_of_itemsContainer_3() { return &___itemsContainer_3; }
	inline void set_itemsContainer_3(RectTransform_t3349966182 * value)
	{
		___itemsContainer_3 = value;
		Il2CppCodeGenWriteBarrier(&___itemsContainer_3, value);
	}

	inline static int32_t get_offset_of_message_4() { return static_cast<int32_t>(offsetof(PaymentSMS_t2197197373, ___message_4)); }
	inline Text_t356221433 * get_message_4() const { return ___message_4; }
	inline Text_t356221433 ** get_address_of_message_4() { return &___message_4; }
	inline void set_message_4(Text_t356221433 * value)
	{
		___message_4 = value;
		Il2CppCodeGenWriteBarrier(&___message_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
