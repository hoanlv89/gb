#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t297367283;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomLoadView
struct  RoomLoadView_t4196697386  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 RoomLoadView::roomID
	int32_t ___roomID_2;
	// UnityEngine.UI.Slider RoomLoadView::slider
	Slider_t297367283 * ___slider_3;

public:
	inline static int32_t get_offset_of_roomID_2() { return static_cast<int32_t>(offsetof(RoomLoadView_t4196697386, ___roomID_2)); }
	inline int32_t get_roomID_2() const { return ___roomID_2; }
	inline int32_t* get_address_of_roomID_2() { return &___roomID_2; }
	inline void set_roomID_2(int32_t value)
	{
		___roomID_2 = value;
	}

	inline static int32_t get_offset_of_slider_3() { return static_cast<int32_t>(offsetof(RoomLoadView_t4196697386, ___slider_3)); }
	inline Slider_t297367283 * get_slider_3() const { return ___slider_3; }
	inline Slider_t297367283 ** get_address_of_slider_3() { return &___slider_3; }
	inline void set_slider_3(Slider_t297367283 * value)
	{
		___slider_3 = value;
		Il2CppCodeGenWriteBarrier(&___slider_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
