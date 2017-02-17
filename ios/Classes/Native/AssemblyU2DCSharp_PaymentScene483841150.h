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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// PaymentOption
struct PaymentOption_t3724463155;
// ProviderOption
struct ProviderOption_t2068997740;
// PaymentItemListView
struct PaymentItemListView_t3650854580;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// PaymentOption[]
struct PaymentOptionU5BU5D_t603911586;
// Utils/Executor
struct Executor_t2576254565;

#include "AssemblyU2DCSharp_SuperScene3760801569.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaymentScene
struct  PaymentScene_t483841150  : public SuperScene_t3760801569
{
public:
	// UnityEngine.UI.Image PaymentScene::avatar
	Image_t2042527209 * ___avatar_34;
	// UnityEngine.UI.Text PaymentScene::username
	Text_t356221433 * ___username_35;
	// UnityEngine.UI.Text PaymentScene::balance
	Text_t356221433 * ___balance_36;
	// PaymentOption PaymentScene::PO_IAP
	PaymentOption_t3724463155 * ___PO_IAP_37;
	// PaymentOption PaymentScene::PO_SMS
	PaymentOption_t3724463155 * ___PO_SMS_38;
	// PaymentOption PaymentScene::PO_Card
	PaymentOption_t3724463155 * ___PO_Card_39;
	// ProviderOption PaymentScene::ProviderOption1
	ProviderOption_t2068997740 * ___ProviderOption1_40;
	// ProviderOption PaymentScene::ProviderOption2
	ProviderOption_t2068997740 * ___ProviderOption2_41;
	// ProviderOption PaymentScene::ProviderOption3
	ProviderOption_t2068997740 * ___ProviderOption3_42;
	// PaymentItemListView PaymentScene::paymentItemListView
	PaymentItemListView_t3650854580 * ___paymentItemListView_43;
	// UnityEngine.GameObject PaymentScene::providerOptionView
	GameObject_t1756533147 * ___providerOptionView_44;
	// UnityEngine.GameObject PaymentScene::cardInputView
	GameObject_t1756533147 * ___cardInputView_45;
	// UnityEngine.UI.InputField PaymentScene::input_card_seri
	InputField_t1631627530 * ___input_card_seri_46;
	// UnityEngine.UI.InputField PaymentScene::input_card_code
	InputField_t1631627530 * ___input_card_code_47;
	// PaymentOption[] PaymentScene::paymentOptions
	PaymentOptionU5BU5D_t603911586* ___paymentOptions_48;
	// PaymentOption PaymentScene::selectedPaymentOption
	PaymentOption_t3724463155 * ___selectedPaymentOption_49;
	// System.Int32 PaymentScene::selectedProviderIndex
	int32_t ___selectedProviderIndex_50;

public:
	inline static int32_t get_offset_of_avatar_34() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___avatar_34)); }
	inline Image_t2042527209 * get_avatar_34() const { return ___avatar_34; }
	inline Image_t2042527209 ** get_address_of_avatar_34() { return &___avatar_34; }
	inline void set_avatar_34(Image_t2042527209 * value)
	{
		___avatar_34 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_34, value);
	}

	inline static int32_t get_offset_of_username_35() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___username_35)); }
	inline Text_t356221433 * get_username_35() const { return ___username_35; }
	inline Text_t356221433 ** get_address_of_username_35() { return &___username_35; }
	inline void set_username_35(Text_t356221433 * value)
	{
		___username_35 = value;
		Il2CppCodeGenWriteBarrier(&___username_35, value);
	}

	inline static int32_t get_offset_of_balance_36() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___balance_36)); }
	inline Text_t356221433 * get_balance_36() const { return ___balance_36; }
	inline Text_t356221433 ** get_address_of_balance_36() { return &___balance_36; }
	inline void set_balance_36(Text_t356221433 * value)
	{
		___balance_36 = value;
		Il2CppCodeGenWriteBarrier(&___balance_36, value);
	}

	inline static int32_t get_offset_of_PO_IAP_37() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___PO_IAP_37)); }
	inline PaymentOption_t3724463155 * get_PO_IAP_37() const { return ___PO_IAP_37; }
	inline PaymentOption_t3724463155 ** get_address_of_PO_IAP_37() { return &___PO_IAP_37; }
	inline void set_PO_IAP_37(PaymentOption_t3724463155 * value)
	{
		___PO_IAP_37 = value;
		Il2CppCodeGenWriteBarrier(&___PO_IAP_37, value);
	}

	inline static int32_t get_offset_of_PO_SMS_38() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___PO_SMS_38)); }
	inline PaymentOption_t3724463155 * get_PO_SMS_38() const { return ___PO_SMS_38; }
	inline PaymentOption_t3724463155 ** get_address_of_PO_SMS_38() { return &___PO_SMS_38; }
	inline void set_PO_SMS_38(PaymentOption_t3724463155 * value)
	{
		___PO_SMS_38 = value;
		Il2CppCodeGenWriteBarrier(&___PO_SMS_38, value);
	}

	inline static int32_t get_offset_of_PO_Card_39() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___PO_Card_39)); }
	inline PaymentOption_t3724463155 * get_PO_Card_39() const { return ___PO_Card_39; }
	inline PaymentOption_t3724463155 ** get_address_of_PO_Card_39() { return &___PO_Card_39; }
	inline void set_PO_Card_39(PaymentOption_t3724463155 * value)
	{
		___PO_Card_39 = value;
		Il2CppCodeGenWriteBarrier(&___PO_Card_39, value);
	}

	inline static int32_t get_offset_of_ProviderOption1_40() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___ProviderOption1_40)); }
	inline ProviderOption_t2068997740 * get_ProviderOption1_40() const { return ___ProviderOption1_40; }
	inline ProviderOption_t2068997740 ** get_address_of_ProviderOption1_40() { return &___ProviderOption1_40; }
	inline void set_ProviderOption1_40(ProviderOption_t2068997740 * value)
	{
		___ProviderOption1_40 = value;
		Il2CppCodeGenWriteBarrier(&___ProviderOption1_40, value);
	}

	inline static int32_t get_offset_of_ProviderOption2_41() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___ProviderOption2_41)); }
	inline ProviderOption_t2068997740 * get_ProviderOption2_41() const { return ___ProviderOption2_41; }
	inline ProviderOption_t2068997740 ** get_address_of_ProviderOption2_41() { return &___ProviderOption2_41; }
	inline void set_ProviderOption2_41(ProviderOption_t2068997740 * value)
	{
		___ProviderOption2_41 = value;
		Il2CppCodeGenWriteBarrier(&___ProviderOption2_41, value);
	}

	inline static int32_t get_offset_of_ProviderOption3_42() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___ProviderOption3_42)); }
	inline ProviderOption_t2068997740 * get_ProviderOption3_42() const { return ___ProviderOption3_42; }
	inline ProviderOption_t2068997740 ** get_address_of_ProviderOption3_42() { return &___ProviderOption3_42; }
	inline void set_ProviderOption3_42(ProviderOption_t2068997740 * value)
	{
		___ProviderOption3_42 = value;
		Il2CppCodeGenWriteBarrier(&___ProviderOption3_42, value);
	}

	inline static int32_t get_offset_of_paymentItemListView_43() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___paymentItemListView_43)); }
	inline PaymentItemListView_t3650854580 * get_paymentItemListView_43() const { return ___paymentItemListView_43; }
	inline PaymentItemListView_t3650854580 ** get_address_of_paymentItemListView_43() { return &___paymentItemListView_43; }
	inline void set_paymentItemListView_43(PaymentItemListView_t3650854580 * value)
	{
		___paymentItemListView_43 = value;
		Il2CppCodeGenWriteBarrier(&___paymentItemListView_43, value);
	}

	inline static int32_t get_offset_of_providerOptionView_44() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___providerOptionView_44)); }
	inline GameObject_t1756533147 * get_providerOptionView_44() const { return ___providerOptionView_44; }
	inline GameObject_t1756533147 ** get_address_of_providerOptionView_44() { return &___providerOptionView_44; }
	inline void set_providerOptionView_44(GameObject_t1756533147 * value)
	{
		___providerOptionView_44 = value;
		Il2CppCodeGenWriteBarrier(&___providerOptionView_44, value);
	}

	inline static int32_t get_offset_of_cardInputView_45() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___cardInputView_45)); }
	inline GameObject_t1756533147 * get_cardInputView_45() const { return ___cardInputView_45; }
	inline GameObject_t1756533147 ** get_address_of_cardInputView_45() { return &___cardInputView_45; }
	inline void set_cardInputView_45(GameObject_t1756533147 * value)
	{
		___cardInputView_45 = value;
		Il2CppCodeGenWriteBarrier(&___cardInputView_45, value);
	}

	inline static int32_t get_offset_of_input_card_seri_46() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___input_card_seri_46)); }
	inline InputField_t1631627530 * get_input_card_seri_46() const { return ___input_card_seri_46; }
	inline InputField_t1631627530 ** get_address_of_input_card_seri_46() { return &___input_card_seri_46; }
	inline void set_input_card_seri_46(InputField_t1631627530 * value)
	{
		___input_card_seri_46 = value;
		Il2CppCodeGenWriteBarrier(&___input_card_seri_46, value);
	}

	inline static int32_t get_offset_of_input_card_code_47() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___input_card_code_47)); }
	inline InputField_t1631627530 * get_input_card_code_47() const { return ___input_card_code_47; }
	inline InputField_t1631627530 ** get_address_of_input_card_code_47() { return &___input_card_code_47; }
	inline void set_input_card_code_47(InputField_t1631627530 * value)
	{
		___input_card_code_47 = value;
		Il2CppCodeGenWriteBarrier(&___input_card_code_47, value);
	}

	inline static int32_t get_offset_of_paymentOptions_48() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___paymentOptions_48)); }
	inline PaymentOptionU5BU5D_t603911586* get_paymentOptions_48() const { return ___paymentOptions_48; }
	inline PaymentOptionU5BU5D_t603911586** get_address_of_paymentOptions_48() { return &___paymentOptions_48; }
	inline void set_paymentOptions_48(PaymentOptionU5BU5D_t603911586* value)
	{
		___paymentOptions_48 = value;
		Il2CppCodeGenWriteBarrier(&___paymentOptions_48, value);
	}

	inline static int32_t get_offset_of_selectedPaymentOption_49() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___selectedPaymentOption_49)); }
	inline PaymentOption_t3724463155 * get_selectedPaymentOption_49() const { return ___selectedPaymentOption_49; }
	inline PaymentOption_t3724463155 ** get_address_of_selectedPaymentOption_49() { return &___selectedPaymentOption_49; }
	inline void set_selectedPaymentOption_49(PaymentOption_t3724463155 * value)
	{
		___selectedPaymentOption_49 = value;
		Il2CppCodeGenWriteBarrier(&___selectedPaymentOption_49, value);
	}

	inline static int32_t get_offset_of_selectedProviderIndex_50() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150, ___selectedProviderIndex_50)); }
	inline int32_t get_selectedProviderIndex_50() const { return ___selectedProviderIndex_50; }
	inline int32_t* get_address_of_selectedProviderIndex_50() { return &___selectedProviderIndex_50; }
	inline void set_selectedProviderIndex_50(int32_t value)
	{
		___selectedProviderIndex_50 = value;
	}
};

struct PaymentScene_t483841150_StaticFields
{
public:
	// System.String PaymentScene::rawData
	String_t* ___rawData_30;
	// Utils/Executor PaymentScene::<>f__am$cache0
	Executor_t2576254565 * ___U3CU3Ef__amU24cache0_51;

public:
	inline static int32_t get_offset_of_rawData_30() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150_StaticFields, ___rawData_30)); }
	inline String_t* get_rawData_30() const { return ___rawData_30; }
	inline String_t** get_address_of_rawData_30() { return &___rawData_30; }
	inline void set_rawData_30(String_t* value)
	{
		___rawData_30 = value;
		Il2CppCodeGenWriteBarrier(&___rawData_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_51() { return static_cast<int32_t>(offsetof(PaymentScene_t483841150_StaticFields, ___U3CU3Ef__amU24cache0_51)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache0_51() const { return ___U3CU3Ef__amU24cache0_51; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache0_51() { return &___U3CU3Ef__amU24cache0_51; }
	inline void set_U3CU3Ef__amU24cache0_51(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache0_51 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_51, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
