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
// System.Action`1<IOSStoreKitResult>
struct Action_1_t2161206965;
// System.Action`1<IOSStoreKitRestoreResult>
struct Action_1_t3107075537;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action`1<IOSStoreKitVerificationResponse>
struct Action_1_t4065457964;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<IOSProductTemplate>
struct List_1_t405719514;
// System.Collections.Generic.Dictionary`2<System.Int32,IOSStoreProductView>
struct Dictionary_2_t3909993199;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen3880193697.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSInAppPurchaseManager
struct  IOSInAppPurchaseManager_t644626385  : public ISN_Singleton_1_t3880193697
{
public:
	// System.Boolean IOSInAppPurchaseManager::_IsStoreLoaded
	bool ____IsStoreLoaded_11;
	// System.Boolean IOSInAppPurchaseManager::_IsWaitingLoadResult
	bool ____IsWaitingLoadResult_12;
	// System.Boolean IOSInAppPurchaseManager::_IsInAppPurchasesEnabled
	bool ____IsInAppPurchasesEnabled_13;
	// System.Collections.Generic.List`1<System.String> IOSInAppPurchaseManager::_productsIds
	List_1_t1398341365 * ____productsIds_15;
	// System.Collections.Generic.List`1<IOSProductTemplate> IOSInAppPurchaseManager::_products
	List_1_t405719514 * ____products_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,IOSStoreProductView> IOSInAppPurchaseManager::_productsView
	Dictionary_2_t3909993199 * ____productsView_17;

public:
	inline static int32_t get_offset_of__IsStoreLoaded_11() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385, ____IsStoreLoaded_11)); }
	inline bool get__IsStoreLoaded_11() const { return ____IsStoreLoaded_11; }
	inline bool* get_address_of__IsStoreLoaded_11() { return &____IsStoreLoaded_11; }
	inline void set__IsStoreLoaded_11(bool value)
	{
		____IsStoreLoaded_11 = value;
	}

	inline static int32_t get_offset_of__IsWaitingLoadResult_12() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385, ____IsWaitingLoadResult_12)); }
	inline bool get__IsWaitingLoadResult_12() const { return ____IsWaitingLoadResult_12; }
	inline bool* get_address_of__IsWaitingLoadResult_12() { return &____IsWaitingLoadResult_12; }
	inline void set__IsWaitingLoadResult_12(bool value)
	{
		____IsWaitingLoadResult_12 = value;
	}

	inline static int32_t get_offset_of__IsInAppPurchasesEnabled_13() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385, ____IsInAppPurchasesEnabled_13)); }
	inline bool get__IsInAppPurchasesEnabled_13() const { return ____IsInAppPurchasesEnabled_13; }
	inline bool* get_address_of__IsInAppPurchasesEnabled_13() { return &____IsInAppPurchasesEnabled_13; }
	inline void set__IsInAppPurchasesEnabled_13(bool value)
	{
		____IsInAppPurchasesEnabled_13 = value;
	}

	inline static int32_t get_offset_of__productsIds_15() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385, ____productsIds_15)); }
	inline List_1_t1398341365 * get__productsIds_15() const { return ____productsIds_15; }
	inline List_1_t1398341365 ** get_address_of__productsIds_15() { return &____productsIds_15; }
	inline void set__productsIds_15(List_1_t1398341365 * value)
	{
		____productsIds_15 = value;
		Il2CppCodeGenWriteBarrier(&____productsIds_15, value);
	}

	inline static int32_t get_offset_of__products_16() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385, ____products_16)); }
	inline List_1_t405719514 * get__products_16() const { return ____products_16; }
	inline List_1_t405719514 ** get_address_of__products_16() { return &____products_16; }
	inline void set__products_16(List_1_t405719514 * value)
	{
		____products_16 = value;
		Il2CppCodeGenWriteBarrier(&____products_16, value);
	}

	inline static int32_t get_offset_of__productsView_17() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385, ____productsView_17)); }
	inline Dictionary_2_t3909993199 * get__productsView_17() const { return ____productsView_17; }
	inline Dictionary_2_t3909993199 ** get_address_of__productsView_17() { return &____productsView_17; }
	inline void set__productsView_17(Dictionary_2_t3909993199 * value)
	{
		____productsView_17 = value;
		Il2CppCodeGenWriteBarrier(&____productsView_17, value);
	}
};

struct IOSInAppPurchaseManager_t644626385_StaticFields
{
public:
	// System.Action`1<IOSStoreKitResult> IOSInAppPurchaseManager::OnTransactionComplete
	Action_1_t2161206965 * ___OnTransactionComplete_6;
	// System.Action`1<IOSStoreKitRestoreResult> IOSInAppPurchaseManager::OnRestoreComplete
	Action_1_t3107075537 * ___OnRestoreComplete_7;
	// System.Action`1<ISN_Result> IOSInAppPurchaseManager::OnStoreKitInitComplete
	Action_1_t2577430992 * ___OnStoreKitInitComplete_8;
	// System.Action`1<System.Boolean> IOSInAppPurchaseManager::OnPurchasesStateSettingsLoaded
	Action_1_t3627374100 * ___OnPurchasesStateSettingsLoaded_9;
	// System.Action`1<IOSStoreKitVerificationResponse> IOSInAppPurchaseManager::OnVerificationComplete
	Action_1_t4065457964 * ___OnVerificationComplete_10;
	// System.Int32 IOSInAppPurchaseManager::_nextId
	int32_t ____nextId_14;
	// System.String IOSInAppPurchaseManager::lastPurchasedProduct
	String_t* ___lastPurchasedProduct_18;

public:
	inline static int32_t get_offset_of_OnTransactionComplete_6() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385_StaticFields, ___OnTransactionComplete_6)); }
	inline Action_1_t2161206965 * get_OnTransactionComplete_6() const { return ___OnTransactionComplete_6; }
	inline Action_1_t2161206965 ** get_address_of_OnTransactionComplete_6() { return &___OnTransactionComplete_6; }
	inline void set_OnTransactionComplete_6(Action_1_t2161206965 * value)
	{
		___OnTransactionComplete_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnTransactionComplete_6, value);
	}

	inline static int32_t get_offset_of_OnRestoreComplete_7() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385_StaticFields, ___OnRestoreComplete_7)); }
	inline Action_1_t3107075537 * get_OnRestoreComplete_7() const { return ___OnRestoreComplete_7; }
	inline Action_1_t3107075537 ** get_address_of_OnRestoreComplete_7() { return &___OnRestoreComplete_7; }
	inline void set_OnRestoreComplete_7(Action_1_t3107075537 * value)
	{
		___OnRestoreComplete_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnRestoreComplete_7, value);
	}

	inline static int32_t get_offset_of_OnStoreKitInitComplete_8() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385_StaticFields, ___OnStoreKitInitComplete_8)); }
	inline Action_1_t2577430992 * get_OnStoreKitInitComplete_8() const { return ___OnStoreKitInitComplete_8; }
	inline Action_1_t2577430992 ** get_address_of_OnStoreKitInitComplete_8() { return &___OnStoreKitInitComplete_8; }
	inline void set_OnStoreKitInitComplete_8(Action_1_t2577430992 * value)
	{
		___OnStoreKitInitComplete_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnStoreKitInitComplete_8, value);
	}

	inline static int32_t get_offset_of_OnPurchasesStateSettingsLoaded_9() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385_StaticFields, ___OnPurchasesStateSettingsLoaded_9)); }
	inline Action_1_t3627374100 * get_OnPurchasesStateSettingsLoaded_9() const { return ___OnPurchasesStateSettingsLoaded_9; }
	inline Action_1_t3627374100 ** get_address_of_OnPurchasesStateSettingsLoaded_9() { return &___OnPurchasesStateSettingsLoaded_9; }
	inline void set_OnPurchasesStateSettingsLoaded_9(Action_1_t3627374100 * value)
	{
		___OnPurchasesStateSettingsLoaded_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnPurchasesStateSettingsLoaded_9, value);
	}

	inline static int32_t get_offset_of_OnVerificationComplete_10() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385_StaticFields, ___OnVerificationComplete_10)); }
	inline Action_1_t4065457964 * get_OnVerificationComplete_10() const { return ___OnVerificationComplete_10; }
	inline Action_1_t4065457964 ** get_address_of_OnVerificationComplete_10() { return &___OnVerificationComplete_10; }
	inline void set_OnVerificationComplete_10(Action_1_t4065457964 * value)
	{
		___OnVerificationComplete_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnVerificationComplete_10, value);
	}

	inline static int32_t get_offset_of__nextId_14() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385_StaticFields, ____nextId_14)); }
	inline int32_t get__nextId_14() const { return ____nextId_14; }
	inline int32_t* get_address_of__nextId_14() { return &____nextId_14; }
	inline void set__nextId_14(int32_t value)
	{
		____nextId_14 = value;
	}

	inline static int32_t get_offset_of_lastPurchasedProduct_18() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t644626385_StaticFields, ___lastPurchasedProduct_18)); }
	inline String_t* get_lastPurchasedProduct_18() const { return ___lastPurchasedProduct_18; }
	inline String_t** get_address_of_lastPurchasedProduct_18() { return &___lastPurchasedProduct_18; }
	inline void set_lastPurchasedProduct_18(String_t* value)
	{
		___lastPurchasedProduct_18 = value;
		Il2CppCodeGenWriteBarrier(&___lastPurchasedProduct_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
