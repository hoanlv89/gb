#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// changeAsao
struct  changeAsao_t1417066124  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] changeAsao::list
	GameObjectU5BU5D_t3057952154* ___list_2;
	// System.Single changeAsao::dtime
	float ___dtime_3;
	// System.Single changeAsao::maxTime
	float ___maxTime_4;
	// UnityEngine.UI.Image changeAsao::img
	Image_t2042527209 * ___img_5;
	// UnityEngine.UI.Image[] changeAsao::limg
	ImageU5BU5D_t590162004* ___limg_6;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(changeAsao_t1417066124, ___list_2)); }
	inline GameObjectU5BU5D_t3057952154* get_list_2() const { return ___list_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(GameObjectU5BU5D_t3057952154* value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_dtime_3() { return static_cast<int32_t>(offsetof(changeAsao_t1417066124, ___dtime_3)); }
	inline float get_dtime_3() const { return ___dtime_3; }
	inline float* get_address_of_dtime_3() { return &___dtime_3; }
	inline void set_dtime_3(float value)
	{
		___dtime_3 = value;
	}

	inline static int32_t get_offset_of_maxTime_4() { return static_cast<int32_t>(offsetof(changeAsao_t1417066124, ___maxTime_4)); }
	inline float get_maxTime_4() const { return ___maxTime_4; }
	inline float* get_address_of_maxTime_4() { return &___maxTime_4; }
	inline void set_maxTime_4(float value)
	{
		___maxTime_4 = value;
	}

	inline static int32_t get_offset_of_img_5() { return static_cast<int32_t>(offsetof(changeAsao_t1417066124, ___img_5)); }
	inline Image_t2042527209 * get_img_5() const { return ___img_5; }
	inline Image_t2042527209 ** get_address_of_img_5() { return &___img_5; }
	inline void set_img_5(Image_t2042527209 * value)
	{
		___img_5 = value;
		Il2CppCodeGenWriteBarrier(&___img_5, value);
	}

	inline static int32_t get_offset_of_limg_6() { return static_cast<int32_t>(offsetof(changeAsao_t1417066124, ___limg_6)); }
	inline ImageU5BU5D_t590162004* get_limg_6() const { return ___limg_6; }
	inline ImageU5BU5D_t590162004** get_address_of_limg_6() { return &___limg_6; }
	inline void set_limg_6(ImageU5BU5D_t590162004* value)
	{
		___limg_6 = value;
		Il2CppCodeGenWriteBarrier(&___limg_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
