#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player/DatCuoc
struct  DatCuoc_t598611249 
{
public:
	// System.Int32 Player/DatCuoc::cua
	int32_t ___cua_0;
	// UnityEngine.RectTransform Player/DatCuoc::rect
	RectTransform_t3349966182 * ___rect_1;

public:
	inline static int32_t get_offset_of_cua_0() { return static_cast<int32_t>(offsetof(DatCuoc_t598611249, ___cua_0)); }
	inline int32_t get_cua_0() const { return ___cua_0; }
	inline int32_t* get_address_of_cua_0() { return &___cua_0; }
	inline void set_cua_0(int32_t value)
	{
		___cua_0 = value;
	}

	inline static int32_t get_offset_of_rect_1() { return static_cast<int32_t>(offsetof(DatCuoc_t598611249, ___rect_1)); }
	inline RectTransform_t3349966182 * get_rect_1() const { return ___rect_1; }
	inline RectTransform_t3349966182 ** get_address_of_rect_1() { return &___rect_1; }
	inline void set_rect_1(RectTransform_t3349966182 * value)
	{
		___rect_1 = value;
		Il2CppCodeGenWriteBarrier(&___rect_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Player/DatCuoc
struct DatCuoc_t598611249_marshaled_pinvoke
{
	int32_t ___cua_0;
	RectTransform_t3349966182 * ___rect_1;
};
// Native definition for COM marshalling of Player/DatCuoc
struct DatCuoc_t598611249_marshaled_com
{
	int32_t ___cua_0;
	RectTransform_t3349966182 * ___rect_1;
};
