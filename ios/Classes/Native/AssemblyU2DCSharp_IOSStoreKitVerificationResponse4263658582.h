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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSStoreKitVerificationResponse
struct  IOSStoreKitVerificationResponse_t4263658582  : public Il2CppObject
{
public:
	// System.Int32 IOSStoreKitVerificationResponse::status
	int32_t ___status_0;
	// System.String IOSStoreKitVerificationResponse::receipt
	String_t* ___receipt_1;
	// System.String IOSStoreKitVerificationResponse::productIdentifier
	String_t* ___productIdentifier_2;
	// System.String IOSStoreKitVerificationResponse::originalJSON
	String_t* ___originalJSON_3;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(IOSStoreKitVerificationResponse_t4263658582, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_receipt_1() { return static_cast<int32_t>(offsetof(IOSStoreKitVerificationResponse_t4263658582, ___receipt_1)); }
	inline String_t* get_receipt_1() const { return ___receipt_1; }
	inline String_t** get_address_of_receipt_1() { return &___receipt_1; }
	inline void set_receipt_1(String_t* value)
	{
		___receipt_1 = value;
		Il2CppCodeGenWriteBarrier(&___receipt_1, value);
	}

	inline static int32_t get_offset_of_productIdentifier_2() { return static_cast<int32_t>(offsetof(IOSStoreKitVerificationResponse_t4263658582, ___productIdentifier_2)); }
	inline String_t* get_productIdentifier_2() const { return ___productIdentifier_2; }
	inline String_t** get_address_of_productIdentifier_2() { return &___productIdentifier_2; }
	inline void set_productIdentifier_2(String_t* value)
	{
		___productIdentifier_2 = value;
		Il2CppCodeGenWriteBarrier(&___productIdentifier_2, value);
	}

	inline static int32_t get_offset_of_originalJSON_3() { return static_cast<int32_t>(offsetof(IOSStoreKitVerificationResponse_t4263658582, ___originalJSON_3)); }
	inline String_t* get_originalJSON_3() const { return ___originalJSON_3; }
	inline String_t** get_address_of_originalJSON_3() { return &___originalJSON_3; }
	inline void set_originalJSON_3(String_t* value)
	{
		___originalJSON_3 = value;
		Il2CppCodeGenWriteBarrier(&___originalJSON_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
