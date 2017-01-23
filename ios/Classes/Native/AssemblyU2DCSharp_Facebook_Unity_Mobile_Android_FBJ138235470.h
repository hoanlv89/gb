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
// Facebook.Unity.Mobile.Android.FBJavaClass/AndroidJavaClass
struct AndroidJavaClass_t1739020534;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Mobile.Android.FBJavaClass
struct  FBJavaClass_t138235470  : public Il2CppObject
{
public:
	// Facebook.Unity.Mobile.Android.FBJavaClass/AndroidJavaClass Facebook.Unity.Mobile.Android.FBJavaClass::facebookJavaClass
	AndroidJavaClass_t1739020534 * ___facebookJavaClass_1;

public:
	inline static int32_t get_offset_of_facebookJavaClass_1() { return static_cast<int32_t>(offsetof(FBJavaClass_t138235470, ___facebookJavaClass_1)); }
	inline AndroidJavaClass_t1739020534 * get_facebookJavaClass_1() const { return ___facebookJavaClass_1; }
	inline AndroidJavaClass_t1739020534 ** get_address_of_facebookJavaClass_1() { return &___facebookJavaClass_1; }
	inline void set_facebookJavaClass_1(AndroidJavaClass_t1739020534 * value)
	{
		___facebookJavaClass_1 = value;
		Il2CppCodeGenWriteBarrier(&___facebookJavaClass_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
