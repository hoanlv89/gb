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
// Facebook.Unity.Mobile.Android.IAndroidJavaClass
struct IAndroidJavaClass_t3006205204;

#include "AssemblyU2DCSharp_Facebook_Unity_Mobile_MobileFace2099931062.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Mobile.Android.AndroidFacebook
struct  AndroidFacebook_t3038444049  : public MobileFacebook_t2099931062
{
public:
	// System.Boolean Facebook.Unity.Mobile.Android.AndroidFacebook::limitEventUsage
	bool ___limitEventUsage_7;
	// Facebook.Unity.Mobile.Android.IAndroidJavaClass Facebook.Unity.Mobile.Android.AndroidFacebook::facebookJava
	Il2CppObject * ___facebookJava_8;
	// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::<KeyHash>k__BackingField
	String_t* ___U3CKeyHashU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_limitEventUsage_7() { return static_cast<int32_t>(offsetof(AndroidFacebook_t3038444049, ___limitEventUsage_7)); }
	inline bool get_limitEventUsage_7() const { return ___limitEventUsage_7; }
	inline bool* get_address_of_limitEventUsage_7() { return &___limitEventUsage_7; }
	inline void set_limitEventUsage_7(bool value)
	{
		___limitEventUsage_7 = value;
	}

	inline static int32_t get_offset_of_facebookJava_8() { return static_cast<int32_t>(offsetof(AndroidFacebook_t3038444049, ___facebookJava_8)); }
	inline Il2CppObject * get_facebookJava_8() const { return ___facebookJava_8; }
	inline Il2CppObject ** get_address_of_facebookJava_8() { return &___facebookJava_8; }
	inline void set_facebookJava_8(Il2CppObject * value)
	{
		___facebookJava_8 = value;
		Il2CppCodeGenWriteBarrier(&___facebookJava_8, value);
	}

	inline static int32_t get_offset_of_U3CKeyHashU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AndroidFacebook_t3038444049, ___U3CKeyHashU3Ek__BackingField_9)); }
	inline String_t* get_U3CKeyHashU3Ek__BackingField_9() const { return ___U3CKeyHashU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CKeyHashU3Ek__BackingField_9() { return &___U3CKeyHashU3Ek__BackingField_9; }
	inline void set_U3CKeyHashU3Ek__BackingField_9(String_t* value)
	{
		___U3CKeyHashU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CKeyHashU3Ek__BackingField_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
