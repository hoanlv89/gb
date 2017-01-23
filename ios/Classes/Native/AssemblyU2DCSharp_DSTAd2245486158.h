#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DSTAd
struct  DSTAd_t2245486158  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button DSTAd::close
	Button_t2872111280 * ___close_2;
	// UnityEngine.UI.Image DSTAd::img
	Image_t2042527209 * ___img_3;
	// UnityEngine.UI.Button DSTAd::btn
	Button_t2872111280 * ___btn_4;
	// UnityEngine.UI.Text DSTAd::btnText
	Text_t356221433 * ___btnText_5;

public:
	inline static int32_t get_offset_of_close_2() { return static_cast<int32_t>(offsetof(DSTAd_t2245486158, ___close_2)); }
	inline Button_t2872111280 * get_close_2() const { return ___close_2; }
	inline Button_t2872111280 ** get_address_of_close_2() { return &___close_2; }
	inline void set_close_2(Button_t2872111280 * value)
	{
		___close_2 = value;
		Il2CppCodeGenWriteBarrier(&___close_2, value);
	}

	inline static int32_t get_offset_of_img_3() { return static_cast<int32_t>(offsetof(DSTAd_t2245486158, ___img_3)); }
	inline Image_t2042527209 * get_img_3() const { return ___img_3; }
	inline Image_t2042527209 ** get_address_of_img_3() { return &___img_3; }
	inline void set_img_3(Image_t2042527209 * value)
	{
		___img_3 = value;
		Il2CppCodeGenWriteBarrier(&___img_3, value);
	}

	inline static int32_t get_offset_of_btn_4() { return static_cast<int32_t>(offsetof(DSTAd_t2245486158, ___btn_4)); }
	inline Button_t2872111280 * get_btn_4() const { return ___btn_4; }
	inline Button_t2872111280 ** get_address_of_btn_4() { return &___btn_4; }
	inline void set_btn_4(Button_t2872111280 * value)
	{
		___btn_4 = value;
		Il2CppCodeGenWriteBarrier(&___btn_4, value);
	}

	inline static int32_t get_offset_of_btnText_5() { return static_cast<int32_t>(offsetof(DSTAd_t2245486158, ___btnText_5)); }
	inline Text_t356221433 * get_btnText_5() const { return ___btnText_5; }
	inline Text_t356221433 ** get_address_of_btnText_5() { return &___btnText_5; }
	inline void set_btnText_5(Text_t356221433 * value)
	{
		___btnText_5 = value;
		Il2CppCodeGenWriteBarrier(&___btnText_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
