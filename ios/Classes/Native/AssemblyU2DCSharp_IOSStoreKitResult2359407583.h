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

#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_InAppPurchaseState3414001346.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSStoreKitResult
struct  IOSStoreKitResult_t2359407583  : public ISN_Result_t2775631610
{
public:
	// System.String IOSStoreKitResult::_ProductIdentifier
	String_t* ____ProductIdentifier_2;
	// InAppPurchaseState IOSStoreKitResult::_State
	int32_t ____State_3;
	// System.String IOSStoreKitResult::_Receipt
	String_t* ____Receipt_4;
	// System.String IOSStoreKitResult::_TransactionIdentifier
	String_t* ____TransactionIdentifier_5;
	// System.String IOSStoreKitResult::_ApplicationUsername
	String_t* ____ApplicationUsername_6;

public:
	inline static int32_t get_offset_of__ProductIdentifier_2() { return static_cast<int32_t>(offsetof(IOSStoreKitResult_t2359407583, ____ProductIdentifier_2)); }
	inline String_t* get__ProductIdentifier_2() const { return ____ProductIdentifier_2; }
	inline String_t** get_address_of__ProductIdentifier_2() { return &____ProductIdentifier_2; }
	inline void set__ProductIdentifier_2(String_t* value)
	{
		____ProductIdentifier_2 = value;
		Il2CppCodeGenWriteBarrier(&____ProductIdentifier_2, value);
	}

	inline static int32_t get_offset_of__State_3() { return static_cast<int32_t>(offsetof(IOSStoreKitResult_t2359407583, ____State_3)); }
	inline int32_t get__State_3() const { return ____State_3; }
	inline int32_t* get_address_of__State_3() { return &____State_3; }
	inline void set__State_3(int32_t value)
	{
		____State_3 = value;
	}

	inline static int32_t get_offset_of__Receipt_4() { return static_cast<int32_t>(offsetof(IOSStoreKitResult_t2359407583, ____Receipt_4)); }
	inline String_t* get__Receipt_4() const { return ____Receipt_4; }
	inline String_t** get_address_of__Receipt_4() { return &____Receipt_4; }
	inline void set__Receipt_4(String_t* value)
	{
		____Receipt_4 = value;
		Il2CppCodeGenWriteBarrier(&____Receipt_4, value);
	}

	inline static int32_t get_offset_of__TransactionIdentifier_5() { return static_cast<int32_t>(offsetof(IOSStoreKitResult_t2359407583, ____TransactionIdentifier_5)); }
	inline String_t* get__TransactionIdentifier_5() const { return ____TransactionIdentifier_5; }
	inline String_t** get_address_of__TransactionIdentifier_5() { return &____TransactionIdentifier_5; }
	inline void set__TransactionIdentifier_5(String_t* value)
	{
		____TransactionIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier(&____TransactionIdentifier_5, value);
	}

	inline static int32_t get_offset_of__ApplicationUsername_6() { return static_cast<int32_t>(offsetof(IOSStoreKitResult_t2359407583, ____ApplicationUsername_6)); }
	inline String_t* get__ApplicationUsername_6() const { return ____ApplicationUsername_6; }
	inline String_t** get_address_of__ApplicationUsername_6() { return &____ApplicationUsername_6; }
	inline void set__ApplicationUsername_6(String_t* value)
	{
		____ApplicationUsername_6 = value;
		Il2CppCodeGenWriteBarrier(&____ApplicationUsername_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
