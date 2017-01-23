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

#include "UnityEngine_UnityEngine_PropertyAttribute2606999759.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SpineAttributeBase
struct  SpineAttributeBase_t2518254498  : public PropertyAttribute_t2606999759
{
public:
	// System.String Spine.Unity.SpineAttributeBase::dataField
	String_t* ___dataField_0;
	// System.String Spine.Unity.SpineAttributeBase::startsWith
	String_t* ___startsWith_1;

public:
	inline static int32_t get_offset_of_dataField_0() { return static_cast<int32_t>(offsetof(SpineAttributeBase_t2518254498, ___dataField_0)); }
	inline String_t* get_dataField_0() const { return ___dataField_0; }
	inline String_t** get_address_of_dataField_0() { return &___dataField_0; }
	inline void set_dataField_0(String_t* value)
	{
		___dataField_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataField_0, value);
	}

	inline static int32_t get_offset_of_startsWith_1() { return static_cast<int32_t>(offsetof(SpineAttributeBase_t2518254498, ___startsWith_1)); }
	inline String_t* get_startsWith_1() const { return ___startsWith_1; }
	inline String_t** get_address_of_startsWith_1() { return &___startsWith_1; }
	inline void set_startsWith_1(String_t* value)
	{
		___startsWith_1 = value;
		Il2CppCodeGenWriteBarrier(&___startsWith_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
