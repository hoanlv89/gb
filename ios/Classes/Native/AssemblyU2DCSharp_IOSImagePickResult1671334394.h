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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSImagePickResult
struct  IOSImagePickResult_t1671334394  : public ISN_Result_t2775631610
{
public:
	// UnityEngine.Texture2D IOSImagePickResult::_image
	Texture2D_t3542995729 * ____image_2;

public:
	inline static int32_t get_offset_of__image_2() { return static_cast<int32_t>(offsetof(IOSImagePickResult_t1671334394, ____image_2)); }
	inline Texture2D_t3542995729 * get__image_2() const { return ____image_2; }
	inline Texture2D_t3542995729 ** get_address_of__image_2() { return &____image_2; }
	inline void set__image_2(Texture2D_t3542995729 * value)
	{
		____image_2 = value;
		Il2CppCodeGenWriteBarrier(&____image_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
