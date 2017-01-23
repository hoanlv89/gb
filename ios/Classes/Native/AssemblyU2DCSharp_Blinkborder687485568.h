#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blinkborder
struct  Blinkborder_t687485568  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image Blinkborder::img
	Image_t2042527209 * ___img_2;
	// System.Single Blinkborder::dtime
	float ___dtime_3;
	// System.Single Blinkborder::maxTime
	float ___maxTime_4;

public:
	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(Blinkborder_t687485568, ___img_2)); }
	inline Image_t2042527209 * get_img_2() const { return ___img_2; }
	inline Image_t2042527209 ** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(Image_t2042527209 * value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}

	inline static int32_t get_offset_of_dtime_3() { return static_cast<int32_t>(offsetof(Blinkborder_t687485568, ___dtime_3)); }
	inline float get_dtime_3() const { return ___dtime_3; }
	inline float* get_address_of_dtime_3() { return &___dtime_3; }
	inline void set_dtime_3(float value)
	{
		___dtime_3 = value;
	}

	inline static int32_t get_offset_of_maxTime_4() { return static_cast<int32_t>(offsetof(Blinkborder_t687485568, ___maxTime_4)); }
	inline float get_maxTime_4() const { return ___maxTime_4; }
	inline float* get_address_of_maxTime_4() { return &___maxTime_4; }
	inline void set_maxTime_4(float value)
	{
		___maxTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
