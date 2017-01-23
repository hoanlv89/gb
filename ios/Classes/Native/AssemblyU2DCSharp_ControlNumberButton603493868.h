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
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t3948421699;

#include "AssemblyU2DCSharp_SlotomaniaScene1881248465.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ControlNumberButton
struct  ControlNumberButton_t603493868  : public SlotomaniaScene_t1881248465
{
public:
	// System.String ControlNumberButton::number
	String_t* ___number_48;
	// UnityEngine.UI.Button ControlNumberButton::numberButton
	Button_t2872111280 * ___numberButton_49;
	// UnityEngine.UI.Image ControlNumberButton::img
	Image_t2042527209 * ___img_50;
	// UnityEngine.RectTransform[] ControlNumberButton::list
	RectTransformU5BU5D_t3948421699* ___list_51;

public:
	inline static int32_t get_offset_of_number_48() { return static_cast<int32_t>(offsetof(ControlNumberButton_t603493868, ___number_48)); }
	inline String_t* get_number_48() const { return ___number_48; }
	inline String_t** get_address_of_number_48() { return &___number_48; }
	inline void set_number_48(String_t* value)
	{
		___number_48 = value;
		Il2CppCodeGenWriteBarrier(&___number_48, value);
	}

	inline static int32_t get_offset_of_numberButton_49() { return static_cast<int32_t>(offsetof(ControlNumberButton_t603493868, ___numberButton_49)); }
	inline Button_t2872111280 * get_numberButton_49() const { return ___numberButton_49; }
	inline Button_t2872111280 ** get_address_of_numberButton_49() { return &___numberButton_49; }
	inline void set_numberButton_49(Button_t2872111280 * value)
	{
		___numberButton_49 = value;
		Il2CppCodeGenWriteBarrier(&___numberButton_49, value);
	}

	inline static int32_t get_offset_of_img_50() { return static_cast<int32_t>(offsetof(ControlNumberButton_t603493868, ___img_50)); }
	inline Image_t2042527209 * get_img_50() const { return ___img_50; }
	inline Image_t2042527209 ** get_address_of_img_50() { return &___img_50; }
	inline void set_img_50(Image_t2042527209 * value)
	{
		___img_50 = value;
		Il2CppCodeGenWriteBarrier(&___img_50, value);
	}

	inline static int32_t get_offset_of_list_51() { return static_cast<int32_t>(offsetof(ControlNumberButton_t603493868, ___list_51)); }
	inline RectTransformU5BU5D_t3948421699* get_list_51() const { return ___list_51; }
	inline RectTransformU5BU5D_t3948421699** get_address_of_list_51() { return &___list_51; }
	inline void set_list_51(RectTransformU5BU5D_t3948421699* value)
	{
		___list_51 = value;
		Il2CppCodeGenWriteBarrier(&___list_51, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
