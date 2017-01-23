#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_GK_PhotoSize3124681388.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_UserPhotoLoadResult
struct  GK_UserPhotoLoadResult_t1614198031  : public ISN_Result_t2775631610
{
public:
	// UnityEngine.Texture2D GK_UserPhotoLoadResult::_Photo
	Texture2D_t3542995729 * ____Photo_2;
	// GK_PhotoSize GK_UserPhotoLoadResult::_Size
	int32_t ____Size_3;

public:
	inline static int32_t get_offset_of__Photo_2() { return static_cast<int32_t>(offsetof(GK_UserPhotoLoadResult_t1614198031, ____Photo_2)); }
	inline Texture2D_t3542995729 * get__Photo_2() const { return ____Photo_2; }
	inline Texture2D_t3542995729 ** get_address_of__Photo_2() { return &____Photo_2; }
	inline void set__Photo_2(Texture2D_t3542995729 * value)
	{
		____Photo_2 = value;
		Il2CppCodeGenWriteBarrier(&____Photo_2, value);
	}

	inline static int32_t get_offset_of__Size_3() { return static_cast<int32_t>(offsetof(GK_UserPhotoLoadResult_t1614198031, ____Size_3)); }
	inline int32_t get__Size_3() const { return ____Size_3; }
	inline int32_t* get_address_of__Size_3() { return &____Size_3; }
	inline void set__Size_3(int32_t value)
	{
		____Size_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
