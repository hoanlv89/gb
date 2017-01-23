#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSetting
struct  GSetting_t3807090435  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite GSetting::scheck_yes
	Sprite_t309593783 * ___scheck_yes_2;
	// UnityEngine.Sprite GSetting::scheck_no
	Sprite_t309593783 * ___scheck_no_3;
	// UnityEngine.UI.Image GSetting::sound_img
	Image_t2042527209 * ___sound_img_4;
	// UnityEngine.Sprite GSetting::bg_52fun
	Sprite_t309593783 * ___bg_52fun_5;

public:
	inline static int32_t get_offset_of_scheck_yes_2() { return static_cast<int32_t>(offsetof(GSetting_t3807090435, ___scheck_yes_2)); }
	inline Sprite_t309593783 * get_scheck_yes_2() const { return ___scheck_yes_2; }
	inline Sprite_t309593783 ** get_address_of_scheck_yes_2() { return &___scheck_yes_2; }
	inline void set_scheck_yes_2(Sprite_t309593783 * value)
	{
		___scheck_yes_2 = value;
		Il2CppCodeGenWriteBarrier(&___scheck_yes_2, value);
	}

	inline static int32_t get_offset_of_scheck_no_3() { return static_cast<int32_t>(offsetof(GSetting_t3807090435, ___scheck_no_3)); }
	inline Sprite_t309593783 * get_scheck_no_3() const { return ___scheck_no_3; }
	inline Sprite_t309593783 ** get_address_of_scheck_no_3() { return &___scheck_no_3; }
	inline void set_scheck_no_3(Sprite_t309593783 * value)
	{
		___scheck_no_3 = value;
		Il2CppCodeGenWriteBarrier(&___scheck_no_3, value);
	}

	inline static int32_t get_offset_of_sound_img_4() { return static_cast<int32_t>(offsetof(GSetting_t3807090435, ___sound_img_4)); }
	inline Image_t2042527209 * get_sound_img_4() const { return ___sound_img_4; }
	inline Image_t2042527209 ** get_address_of_sound_img_4() { return &___sound_img_4; }
	inline void set_sound_img_4(Image_t2042527209 * value)
	{
		___sound_img_4 = value;
		Il2CppCodeGenWriteBarrier(&___sound_img_4, value);
	}

	inline static int32_t get_offset_of_bg_52fun_5() { return static_cast<int32_t>(offsetof(GSetting_t3807090435, ___bg_52fun_5)); }
	inline Sprite_t309593783 * get_bg_52fun_5() const { return ___bg_52fun_5; }
	inline Sprite_t309593783 ** get_address_of_bg_52fun_5() { return &___bg_52fun_5; }
	inline void set_bg_52fun_5(Sprite_t309593783 * value)
	{
		___bg_52fun_5 = value;
		Il2CppCodeGenWriteBarrier(&___bg_52fun_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
