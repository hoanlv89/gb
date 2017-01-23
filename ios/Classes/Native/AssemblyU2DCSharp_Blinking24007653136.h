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
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blinking2
struct  Blinking2_t4007653136  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image Blinking2::img
	Image_t2042527209 * ___img_2;
	// System.Single Blinking2::countTime
	float ___countTime_3;
	// System.Single Blinking2::dtime
	float ___dtime_4;
	// System.Single Blinking2::maxTime
	float ___maxTime_5;
	// System.Boolean Blinking2::blinking
	bool ___blinking_6;
	// UnityEngine.Sprite Blinking2::s1
	Sprite_t309593783 * ___s1_7;
	// UnityEngine.Sprite Blinking2::s2
	Sprite_t309593783 * ___s2_8;

public:
	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(Blinking2_t4007653136, ___img_2)); }
	inline Image_t2042527209 * get_img_2() const { return ___img_2; }
	inline Image_t2042527209 ** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(Image_t2042527209 * value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}

	inline static int32_t get_offset_of_countTime_3() { return static_cast<int32_t>(offsetof(Blinking2_t4007653136, ___countTime_3)); }
	inline float get_countTime_3() const { return ___countTime_3; }
	inline float* get_address_of_countTime_3() { return &___countTime_3; }
	inline void set_countTime_3(float value)
	{
		___countTime_3 = value;
	}

	inline static int32_t get_offset_of_dtime_4() { return static_cast<int32_t>(offsetof(Blinking2_t4007653136, ___dtime_4)); }
	inline float get_dtime_4() const { return ___dtime_4; }
	inline float* get_address_of_dtime_4() { return &___dtime_4; }
	inline void set_dtime_4(float value)
	{
		___dtime_4 = value;
	}

	inline static int32_t get_offset_of_maxTime_5() { return static_cast<int32_t>(offsetof(Blinking2_t4007653136, ___maxTime_5)); }
	inline float get_maxTime_5() const { return ___maxTime_5; }
	inline float* get_address_of_maxTime_5() { return &___maxTime_5; }
	inline void set_maxTime_5(float value)
	{
		___maxTime_5 = value;
	}

	inline static int32_t get_offset_of_blinking_6() { return static_cast<int32_t>(offsetof(Blinking2_t4007653136, ___blinking_6)); }
	inline bool get_blinking_6() const { return ___blinking_6; }
	inline bool* get_address_of_blinking_6() { return &___blinking_6; }
	inline void set_blinking_6(bool value)
	{
		___blinking_6 = value;
	}

	inline static int32_t get_offset_of_s1_7() { return static_cast<int32_t>(offsetof(Blinking2_t4007653136, ___s1_7)); }
	inline Sprite_t309593783 * get_s1_7() const { return ___s1_7; }
	inline Sprite_t309593783 ** get_address_of_s1_7() { return &___s1_7; }
	inline void set_s1_7(Sprite_t309593783 * value)
	{
		___s1_7 = value;
		Il2CppCodeGenWriteBarrier(&___s1_7, value);
	}

	inline static int32_t get_offset_of_s2_8() { return static_cast<int32_t>(offsetof(Blinking2_t4007653136, ___s2_8)); }
	inline Sprite_t309593783 * get_s2_8() const { return ___s2_8; }
	inline Sprite_t309593783 ** get_address_of_s2_8() { return &___s2_8; }
	inline void set_s2_8(Sprite_t309593783 * value)
	{
		___s2_8 = value;
		Il2CppCodeGenWriteBarrier(&___s2_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
