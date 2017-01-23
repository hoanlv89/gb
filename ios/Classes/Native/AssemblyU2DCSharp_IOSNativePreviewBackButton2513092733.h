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

#include "AssemblyU2DCSharp_BaseIOSFeaturePreview3055692840.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSNativePreviewBackButton
struct  IOSNativePreviewBackButton_t2513092733  : public BaseIOSFeaturePreview_t3055692840
{
public:
	// System.String IOSNativePreviewBackButton::initialSceneName
	String_t* ___initialSceneName_12;

public:
	inline static int32_t get_offset_of_initialSceneName_12() { return static_cast<int32_t>(offsetof(IOSNativePreviewBackButton_t2513092733, ___initialSceneName_12)); }
	inline String_t* get_initialSceneName_12() const { return ___initialSceneName_12; }
	inline String_t** get_address_of_initialSceneName_12() { return &___initialSceneName_12; }
	inline void set_initialSceneName_12(String_t* value)
	{
		___initialSceneName_12 = value;
		Il2CppCodeGenWriteBarrier(&___initialSceneName_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
