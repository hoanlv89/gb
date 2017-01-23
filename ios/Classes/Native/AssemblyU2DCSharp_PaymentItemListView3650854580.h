#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaymentItemListView
struct  PaymentItemListView_t3650854580  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] PaymentItemListView::icongolds
	SpriteU5BU5D_t3359083662* ___icongolds_2;
	// UnityEngine.RectTransform PaymentItemListView::contentView
	RectTransform_t3349966182 * ___contentView_3;
	// UnityEngine.RectTransform PaymentItemListView::paymentItemPrefab
	RectTransform_t3349966182 * ___paymentItemPrefab_4;
	// System.String PaymentItemListView::selectedProviderName
	String_t* ___selectedProviderName_5;

public:
	inline static int32_t get_offset_of_icongolds_2() { return static_cast<int32_t>(offsetof(PaymentItemListView_t3650854580, ___icongolds_2)); }
	inline SpriteU5BU5D_t3359083662* get_icongolds_2() const { return ___icongolds_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_icongolds_2() { return &___icongolds_2; }
	inline void set_icongolds_2(SpriteU5BU5D_t3359083662* value)
	{
		___icongolds_2 = value;
		Il2CppCodeGenWriteBarrier(&___icongolds_2, value);
	}

	inline static int32_t get_offset_of_contentView_3() { return static_cast<int32_t>(offsetof(PaymentItemListView_t3650854580, ___contentView_3)); }
	inline RectTransform_t3349966182 * get_contentView_3() const { return ___contentView_3; }
	inline RectTransform_t3349966182 ** get_address_of_contentView_3() { return &___contentView_3; }
	inline void set_contentView_3(RectTransform_t3349966182 * value)
	{
		___contentView_3 = value;
		Il2CppCodeGenWriteBarrier(&___contentView_3, value);
	}

	inline static int32_t get_offset_of_paymentItemPrefab_4() { return static_cast<int32_t>(offsetof(PaymentItemListView_t3650854580, ___paymentItemPrefab_4)); }
	inline RectTransform_t3349966182 * get_paymentItemPrefab_4() const { return ___paymentItemPrefab_4; }
	inline RectTransform_t3349966182 ** get_address_of_paymentItemPrefab_4() { return &___paymentItemPrefab_4; }
	inline void set_paymentItemPrefab_4(RectTransform_t3349966182 * value)
	{
		___paymentItemPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___paymentItemPrefab_4, value);
	}

	inline static int32_t get_offset_of_selectedProviderName_5() { return static_cast<int32_t>(offsetof(PaymentItemListView_t3650854580, ___selectedProviderName_5)); }
	inline String_t* get_selectedProviderName_5() const { return ___selectedProviderName_5; }
	inline String_t** get_address_of_selectedProviderName_5() { return &___selectedProviderName_5; }
	inline void set_selectedProviderName_5(String_t* value)
	{
		___selectedProviderName_5 = value;
		Il2CppCodeGenWriteBarrier(&___selectedProviderName_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
