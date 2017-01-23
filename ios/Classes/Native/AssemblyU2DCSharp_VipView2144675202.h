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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VipView
struct  VipView_t2144675202  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite VipView::s_0
	Sprite_t309593783 * ___s_0_2;
	// UnityEngine.Sprite VipView::s_1
	Sprite_t309593783 * ___s_1_3;
	// UnityEngine.Sprite VipView::s_2
	Sprite_t309593783 * ___s_2_4;
	// UnityEngine.UI.Image[] VipView::imgs
	ImageU5BU5D_t590162004* ___imgs_5;

public:
	inline static int32_t get_offset_of_s_0_2() { return static_cast<int32_t>(offsetof(VipView_t2144675202, ___s_0_2)); }
	inline Sprite_t309593783 * get_s_0_2() const { return ___s_0_2; }
	inline Sprite_t309593783 ** get_address_of_s_0_2() { return &___s_0_2; }
	inline void set_s_0_2(Sprite_t309593783 * value)
	{
		___s_0_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_0_2, value);
	}

	inline static int32_t get_offset_of_s_1_3() { return static_cast<int32_t>(offsetof(VipView_t2144675202, ___s_1_3)); }
	inline Sprite_t309593783 * get_s_1_3() const { return ___s_1_3; }
	inline Sprite_t309593783 ** get_address_of_s_1_3() { return &___s_1_3; }
	inline void set_s_1_3(Sprite_t309593783 * value)
	{
		___s_1_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_1_3, value);
	}

	inline static int32_t get_offset_of_s_2_4() { return static_cast<int32_t>(offsetof(VipView_t2144675202, ___s_2_4)); }
	inline Sprite_t309593783 * get_s_2_4() const { return ___s_2_4; }
	inline Sprite_t309593783 ** get_address_of_s_2_4() { return &___s_2_4; }
	inline void set_s_2_4(Sprite_t309593783 * value)
	{
		___s_2_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_2_4, value);
	}

	inline static int32_t get_offset_of_imgs_5() { return static_cast<int32_t>(offsetof(VipView_t2144675202, ___imgs_5)); }
	inline ImageU5BU5D_t590162004* get_imgs_5() const { return ___imgs_5; }
	inline ImageU5BU5D_t590162004** get_address_of_imgs_5() { return &___imgs_5; }
	inline void set_imgs_5(ImageU5BU5D_t590162004* value)
	{
		___imgs_5 = value;
		Il2CppCodeGenWriteBarrier(&___imgs_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
