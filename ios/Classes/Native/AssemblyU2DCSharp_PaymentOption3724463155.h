#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;
// PaymentItemListView
struct PaymentItemListView_t3650854580;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaymentOption
struct  PaymentOption_t3724463155  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite PaymentOption::activeSprite
	Sprite_t309593783 * ___activeSprite_2;
	// UnityEngine.Sprite PaymentOption::deactiveSprite
	Sprite_t309593783 * ___deactiveSprite_3;
	// PaymentItemListView PaymentOption::paymentItemListView
	PaymentItemListView_t3650854580 * ___paymentItemListView_4;
	// SimpleJSON.JSONClass PaymentOption::itemFormat
	JSONClass_t1609506608 * ___itemFormat_5;
	// SimpleJSON.JSONArray PaymentOption::jsondata
	JSONArray_t3986483147 * ___jsondata_6;
	// System.String PaymentOption::type
	String_t* ___type_7;
	// System.String PaymentOption::selectedProviderName
	String_t* ___selectedProviderName_8;

public:
	inline static int32_t get_offset_of_activeSprite_2() { return static_cast<int32_t>(offsetof(PaymentOption_t3724463155, ___activeSprite_2)); }
	inline Sprite_t309593783 * get_activeSprite_2() const { return ___activeSprite_2; }
	inline Sprite_t309593783 ** get_address_of_activeSprite_2() { return &___activeSprite_2; }
	inline void set_activeSprite_2(Sprite_t309593783 * value)
	{
		___activeSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___activeSprite_2, value);
	}

	inline static int32_t get_offset_of_deactiveSprite_3() { return static_cast<int32_t>(offsetof(PaymentOption_t3724463155, ___deactiveSprite_3)); }
	inline Sprite_t309593783 * get_deactiveSprite_3() const { return ___deactiveSprite_3; }
	inline Sprite_t309593783 ** get_address_of_deactiveSprite_3() { return &___deactiveSprite_3; }
	inline void set_deactiveSprite_3(Sprite_t309593783 * value)
	{
		___deactiveSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___deactiveSprite_3, value);
	}

	inline static int32_t get_offset_of_paymentItemListView_4() { return static_cast<int32_t>(offsetof(PaymentOption_t3724463155, ___paymentItemListView_4)); }
	inline PaymentItemListView_t3650854580 * get_paymentItemListView_4() const { return ___paymentItemListView_4; }
	inline PaymentItemListView_t3650854580 ** get_address_of_paymentItemListView_4() { return &___paymentItemListView_4; }
	inline void set_paymentItemListView_4(PaymentItemListView_t3650854580 * value)
	{
		___paymentItemListView_4 = value;
		Il2CppCodeGenWriteBarrier(&___paymentItemListView_4, value);
	}

	inline static int32_t get_offset_of_itemFormat_5() { return static_cast<int32_t>(offsetof(PaymentOption_t3724463155, ___itemFormat_5)); }
	inline JSONClass_t1609506608 * get_itemFormat_5() const { return ___itemFormat_5; }
	inline JSONClass_t1609506608 ** get_address_of_itemFormat_5() { return &___itemFormat_5; }
	inline void set_itemFormat_5(JSONClass_t1609506608 * value)
	{
		___itemFormat_5 = value;
		Il2CppCodeGenWriteBarrier(&___itemFormat_5, value);
	}

	inline static int32_t get_offset_of_jsondata_6() { return static_cast<int32_t>(offsetof(PaymentOption_t3724463155, ___jsondata_6)); }
	inline JSONArray_t3986483147 * get_jsondata_6() const { return ___jsondata_6; }
	inline JSONArray_t3986483147 ** get_address_of_jsondata_6() { return &___jsondata_6; }
	inline void set_jsondata_6(JSONArray_t3986483147 * value)
	{
		___jsondata_6 = value;
		Il2CppCodeGenWriteBarrier(&___jsondata_6, value);
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(PaymentOption_t3724463155, ___type_7)); }
	inline String_t* get_type_7() const { return ___type_7; }
	inline String_t** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(String_t* value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier(&___type_7, value);
	}

	inline static int32_t get_offset_of_selectedProviderName_8() { return static_cast<int32_t>(offsetof(PaymentOption_t3724463155, ___selectedProviderName_8)); }
	inline String_t* get_selectedProviderName_8() const { return ___selectedProviderName_8; }
	inline String_t** get_address_of_selectedProviderName_8() { return &___selectedProviderName_8; }
	inline void set_selectedProviderName_8(String_t* value)
	{
		___selectedProviderName_8 = value;
		Il2CppCodeGenWriteBarrier(&___selectedProviderName_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
