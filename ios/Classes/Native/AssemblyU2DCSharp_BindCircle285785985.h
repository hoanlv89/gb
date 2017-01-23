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
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BindCircle
struct  BindCircle_t285785985  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color BindCircle::start
	Color_t2020392075  ___start_2;
	// UnityEngine.Color BindCircle::end
	Color_t2020392075  ___end_3;
	// UnityEngine.UI.Image BindCircle::Circle
	Image_t2042527209 * ___Circle_4;

public:
	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(BindCircle_t285785985, ___start_2)); }
	inline Color_t2020392075  get_start_2() const { return ___start_2; }
	inline Color_t2020392075 * get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(Color_t2020392075  value)
	{
		___start_2 = value;
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(BindCircle_t285785985, ___end_3)); }
	inline Color_t2020392075  get_end_3() const { return ___end_3; }
	inline Color_t2020392075 * get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(Color_t2020392075  value)
	{
		___end_3 = value;
	}

	inline static int32_t get_offset_of_Circle_4() { return static_cast<int32_t>(offsetof(BindCircle_t285785985, ___Circle_4)); }
	inline Image_t2042527209 * get_Circle_4() const { return ___Circle_4; }
	inline Image_t2042527209 ** get_address_of_Circle_4() { return &___Circle_4; }
	inline void set_Circle_4(Image_t2042527209 * value)
	{
		___Circle_4 = value;
		Il2CppCodeGenWriteBarrier(&___Circle_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
