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
// Facebook.Unity.Mobile.IOS.IIOSWrapper
struct IIOSWrapper_t3540111257;

#include "AssemblyU2DCSharp_Facebook_Unity_Mobile_MobileFace2099931062.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Mobile.IOS.IOSFacebook
struct  IOSFacebook_t847746195  : public MobileFacebook_t2099931062
{
public:
	// System.Boolean Facebook.Unity.Mobile.IOS.IOSFacebook::limitEventUsage
	bool ___limitEventUsage_7;
	// Facebook.Unity.Mobile.IOS.IIOSWrapper Facebook.Unity.Mobile.IOS.IOSFacebook::iosWrapper
	Il2CppObject * ___iosWrapper_8;

public:
	inline static int32_t get_offset_of_limitEventUsage_7() { return static_cast<int32_t>(offsetof(IOSFacebook_t847746195, ___limitEventUsage_7)); }
	inline bool get_limitEventUsage_7() const { return ___limitEventUsage_7; }
	inline bool* get_address_of_limitEventUsage_7() { return &___limitEventUsage_7; }
	inline void set_limitEventUsage_7(bool value)
	{
		___limitEventUsage_7 = value;
	}

	inline static int32_t get_offset_of_iosWrapper_8() { return static_cast<int32_t>(offsetof(IOSFacebook_t847746195, ___iosWrapper_8)); }
	inline Il2CppObject * get_iosWrapper_8() const { return ___iosWrapper_8; }
	inline Il2CppObject ** get_address_of_iosWrapper_8() { return &___iosWrapper_8; }
	inline void set_iosWrapper_8(Il2CppObject * value)
	{
		___iosWrapper_8 = value;
		Il2CppCodeGenWriteBarrier(&___iosWrapper_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
