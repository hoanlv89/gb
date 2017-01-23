#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultDisplay
struct  ResultDisplay_t1889964849  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform ResultDisplay::wheel
	Transform_t3275118058 * ___wheel_2;
	// UnityEngine.UI.Image ResultDisplay::Number
	Image_t2042527209 * ___Number_3;
	// UnityEngine.Sprite[] ResultDisplay::sprs
	SpriteU5BU5D_t3359083662* ___sprs_4;
	// System.Boolean ResultDisplay::_show
	bool ____show_5;
	// System.Int32[] ResultDisplay::red
	Int32U5BU5D_t3030399641* ___red_6;

public:
	inline static int32_t get_offset_of_wheel_2() { return static_cast<int32_t>(offsetof(ResultDisplay_t1889964849, ___wheel_2)); }
	inline Transform_t3275118058 * get_wheel_2() const { return ___wheel_2; }
	inline Transform_t3275118058 ** get_address_of_wheel_2() { return &___wheel_2; }
	inline void set_wheel_2(Transform_t3275118058 * value)
	{
		___wheel_2 = value;
		Il2CppCodeGenWriteBarrier(&___wheel_2, value);
	}

	inline static int32_t get_offset_of_Number_3() { return static_cast<int32_t>(offsetof(ResultDisplay_t1889964849, ___Number_3)); }
	inline Image_t2042527209 * get_Number_3() const { return ___Number_3; }
	inline Image_t2042527209 ** get_address_of_Number_3() { return &___Number_3; }
	inline void set_Number_3(Image_t2042527209 * value)
	{
		___Number_3 = value;
		Il2CppCodeGenWriteBarrier(&___Number_3, value);
	}

	inline static int32_t get_offset_of_sprs_4() { return static_cast<int32_t>(offsetof(ResultDisplay_t1889964849, ___sprs_4)); }
	inline SpriteU5BU5D_t3359083662* get_sprs_4() const { return ___sprs_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprs_4() { return &___sprs_4; }
	inline void set_sprs_4(SpriteU5BU5D_t3359083662* value)
	{
		___sprs_4 = value;
		Il2CppCodeGenWriteBarrier(&___sprs_4, value);
	}

	inline static int32_t get_offset_of__show_5() { return static_cast<int32_t>(offsetof(ResultDisplay_t1889964849, ____show_5)); }
	inline bool get__show_5() const { return ____show_5; }
	inline bool* get_address_of__show_5() { return &____show_5; }
	inline void set__show_5(bool value)
	{
		____show_5 = value;
	}

	inline static int32_t get_offset_of_red_6() { return static_cast<int32_t>(offsetof(ResultDisplay_t1889964849, ___red_6)); }
	inline Int32U5BU5D_t3030399641* get_red_6() const { return ___red_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_red_6() { return &___red_6; }
	inline void set_red_6(Int32U5BU5D_t3030399641* value)
	{
		___red_6 = value;
		Il2CppCodeGenWriteBarrier(&___red_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
