#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Action`1<IOSStoreKitVerificationResponse>
struct Action_1_t4065457964;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// System.Action`1<IOSStoreKitResult>
struct Action_1_t2161206965;
// System.Action`1<IOSStoreKitRestoreResult>
struct Action_1_t3107075537;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaymentManager
struct  PaymentManager_t2844975479  : public Il2CppObject
{
public:

public:
};

struct PaymentManager_t2844975479_StaticFields
{
public:
	// System.Boolean PaymentManager::discount
	bool ___discount_0;
	// System.String PaymentManager::kmMessage
	String_t* ___kmMessage_1;
	// System.Boolean PaymentManager::payment
	bool ___payment_2;
	// System.Boolean PaymentManager::sms_enable
	bool ___sms_enable_3;
	// System.Boolean PaymentManager::card_enable
	bool ___card_enable_4;
	// System.Boolean PaymentManager::atm_enable
	bool ___atm_enable_5;
	// System.Boolean PaymentManager::iap_ios_enable
	bool ___iap_ios_enable_6;
	// System.Boolean PaymentManager::exchange_rate_enable
	bool ___exchange_rate_enable_7;
	// System.Boolean PaymentManager::gamenotification
	bool ___gamenotification_8;
	// System.String PaymentManager::url_exchange_rate
	String_t* ___url_exchange_rate_9;
	// System.String PaymentManager::url_payment_atm
	String_t* ___url_payment_atm_10;
	// System.String PaymentManager::url_payment_card
	String_t* ___url_payment_card_11;
	// System.Collections.Generic.List`1<System.String> PaymentManager::iap_items
	List_1_t1398341365 * ___iap_items_12;
	// System.Boolean PaymentManager::IsInitialized
	bool ___IsInitialized_13;
	// System.Action`1<IOSStoreKitVerificationResponse> PaymentManager::<>f__mg$cache0
	Action_1_t4065457964 * ___U3CU3Ef__mgU24cache0_14;
	// System.Action`1<ISN_Result> PaymentManager::<>f__mg$cache1
	Action_1_t2577430992 * ___U3CU3Ef__mgU24cache1_15;
	// System.Action`1<IOSStoreKitResult> PaymentManager::<>f__mg$cache2
	Action_1_t2161206965 * ___U3CU3Ef__mgU24cache2_16;
	// System.Action`1<IOSStoreKitRestoreResult> PaymentManager::<>f__mg$cache3
	Action_1_t3107075537 * ___U3CU3Ef__mgU24cache3_17;
	// System.Action`1<ISN_Result> PaymentManager::<>f__mg$cache4
	Action_1_t2577430992 * ___U3CU3Ef__mgU24cache4_18;

public:
	inline static int32_t get_offset_of_discount_0() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___discount_0)); }
	inline bool get_discount_0() const { return ___discount_0; }
	inline bool* get_address_of_discount_0() { return &___discount_0; }
	inline void set_discount_0(bool value)
	{
		___discount_0 = value;
	}

	inline static int32_t get_offset_of_kmMessage_1() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___kmMessage_1)); }
	inline String_t* get_kmMessage_1() const { return ___kmMessage_1; }
	inline String_t** get_address_of_kmMessage_1() { return &___kmMessage_1; }
	inline void set_kmMessage_1(String_t* value)
	{
		___kmMessage_1 = value;
		Il2CppCodeGenWriteBarrier(&___kmMessage_1, value);
	}

	inline static int32_t get_offset_of_payment_2() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___payment_2)); }
	inline bool get_payment_2() const { return ___payment_2; }
	inline bool* get_address_of_payment_2() { return &___payment_2; }
	inline void set_payment_2(bool value)
	{
		___payment_2 = value;
	}

	inline static int32_t get_offset_of_sms_enable_3() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___sms_enable_3)); }
	inline bool get_sms_enable_3() const { return ___sms_enable_3; }
	inline bool* get_address_of_sms_enable_3() { return &___sms_enable_3; }
	inline void set_sms_enable_3(bool value)
	{
		___sms_enable_3 = value;
	}

	inline static int32_t get_offset_of_card_enable_4() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___card_enable_4)); }
	inline bool get_card_enable_4() const { return ___card_enable_4; }
	inline bool* get_address_of_card_enable_4() { return &___card_enable_4; }
	inline void set_card_enable_4(bool value)
	{
		___card_enable_4 = value;
	}

	inline static int32_t get_offset_of_atm_enable_5() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___atm_enable_5)); }
	inline bool get_atm_enable_5() const { return ___atm_enable_5; }
	inline bool* get_address_of_atm_enable_5() { return &___atm_enable_5; }
	inline void set_atm_enable_5(bool value)
	{
		___atm_enable_5 = value;
	}

	inline static int32_t get_offset_of_iap_ios_enable_6() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___iap_ios_enable_6)); }
	inline bool get_iap_ios_enable_6() const { return ___iap_ios_enable_6; }
	inline bool* get_address_of_iap_ios_enable_6() { return &___iap_ios_enable_6; }
	inline void set_iap_ios_enable_6(bool value)
	{
		___iap_ios_enable_6 = value;
	}

	inline static int32_t get_offset_of_exchange_rate_enable_7() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___exchange_rate_enable_7)); }
	inline bool get_exchange_rate_enable_7() const { return ___exchange_rate_enable_7; }
	inline bool* get_address_of_exchange_rate_enable_7() { return &___exchange_rate_enable_7; }
	inline void set_exchange_rate_enable_7(bool value)
	{
		___exchange_rate_enable_7 = value;
	}

	inline static int32_t get_offset_of_gamenotification_8() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___gamenotification_8)); }
	inline bool get_gamenotification_8() const { return ___gamenotification_8; }
	inline bool* get_address_of_gamenotification_8() { return &___gamenotification_8; }
	inline void set_gamenotification_8(bool value)
	{
		___gamenotification_8 = value;
	}

	inline static int32_t get_offset_of_url_exchange_rate_9() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___url_exchange_rate_9)); }
	inline String_t* get_url_exchange_rate_9() const { return ___url_exchange_rate_9; }
	inline String_t** get_address_of_url_exchange_rate_9() { return &___url_exchange_rate_9; }
	inline void set_url_exchange_rate_9(String_t* value)
	{
		___url_exchange_rate_9 = value;
		Il2CppCodeGenWriteBarrier(&___url_exchange_rate_9, value);
	}

	inline static int32_t get_offset_of_url_payment_atm_10() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___url_payment_atm_10)); }
	inline String_t* get_url_payment_atm_10() const { return ___url_payment_atm_10; }
	inline String_t** get_address_of_url_payment_atm_10() { return &___url_payment_atm_10; }
	inline void set_url_payment_atm_10(String_t* value)
	{
		___url_payment_atm_10 = value;
		Il2CppCodeGenWriteBarrier(&___url_payment_atm_10, value);
	}

	inline static int32_t get_offset_of_url_payment_card_11() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___url_payment_card_11)); }
	inline String_t* get_url_payment_card_11() const { return ___url_payment_card_11; }
	inline String_t** get_address_of_url_payment_card_11() { return &___url_payment_card_11; }
	inline void set_url_payment_card_11(String_t* value)
	{
		___url_payment_card_11 = value;
		Il2CppCodeGenWriteBarrier(&___url_payment_card_11, value);
	}

	inline static int32_t get_offset_of_iap_items_12() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___iap_items_12)); }
	inline List_1_t1398341365 * get_iap_items_12() const { return ___iap_items_12; }
	inline List_1_t1398341365 ** get_address_of_iap_items_12() { return &___iap_items_12; }
	inline void set_iap_items_12(List_1_t1398341365 * value)
	{
		___iap_items_12 = value;
		Il2CppCodeGenWriteBarrier(&___iap_items_12, value);
	}

	inline static int32_t get_offset_of_IsInitialized_13() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___IsInitialized_13)); }
	inline bool get_IsInitialized_13() const { return ___IsInitialized_13; }
	inline bool* get_address_of_IsInitialized_13() { return &___IsInitialized_13; }
	inline void set_IsInitialized_13(bool value)
	{
		___IsInitialized_13 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline Action_1_t4065457964 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline Action_1_t4065457964 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(Action_1_t4065457964 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_15() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___U3CU3Ef__mgU24cache1_15)); }
	inline Action_1_t2577430992 * get_U3CU3Ef__mgU24cache1_15() const { return ___U3CU3Ef__mgU24cache1_15; }
	inline Action_1_t2577430992 ** get_address_of_U3CU3Ef__mgU24cache1_15() { return &___U3CU3Ef__mgU24cache1_15; }
	inline void set_U3CU3Ef__mgU24cache1_15(Action_1_t2577430992 * value)
	{
		___U3CU3Ef__mgU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_16() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___U3CU3Ef__mgU24cache2_16)); }
	inline Action_1_t2161206965 * get_U3CU3Ef__mgU24cache2_16() const { return ___U3CU3Ef__mgU24cache2_16; }
	inline Action_1_t2161206965 ** get_address_of_U3CU3Ef__mgU24cache2_16() { return &___U3CU3Ef__mgU24cache2_16; }
	inline void set_U3CU3Ef__mgU24cache2_16(Action_1_t2161206965 * value)
	{
		___U3CU3Ef__mgU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_17() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___U3CU3Ef__mgU24cache3_17)); }
	inline Action_1_t3107075537 * get_U3CU3Ef__mgU24cache3_17() const { return ___U3CU3Ef__mgU24cache3_17; }
	inline Action_1_t3107075537 ** get_address_of_U3CU3Ef__mgU24cache3_17() { return &___U3CU3Ef__mgU24cache3_17; }
	inline void set_U3CU3Ef__mgU24cache3_17(Action_1_t3107075537 * value)
	{
		___U3CU3Ef__mgU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_18() { return static_cast<int32_t>(offsetof(PaymentManager_t2844975479_StaticFields, ___U3CU3Ef__mgU24cache4_18)); }
	inline Action_1_t2577430992 * get_U3CU3Ef__mgU24cache4_18() const { return ___U3CU3Ef__mgU24cache4_18; }
	inline Action_1_t2577430992 ** get_address_of_U3CU3Ef__mgU24cache4_18() { return &___U3CU3Ef__mgU24cache4_18; }
	inline void set_U3CU3Ef__mgU24cache4_18(Action_1_t2577430992 * value)
	{
		___U3CU3Ef__mgU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
