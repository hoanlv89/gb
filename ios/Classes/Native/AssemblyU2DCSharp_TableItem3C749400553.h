#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TableItem3C
struct  TableItem3C_t749400553  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text TableItem3C::info
	Text_t356221433 * ___info_2;
	// UnityEngine.UI.Text TableItem3C::stake
	Text_t356221433 * ___stake_3;
	// UnityEngine.UI.Image TableItem3C::table
	Image_t2042527209 * ___table_4;
	// UnityEngine.UI.Image[] TableItem3C::pl
	ImageU5BU5D_t590162004* ___pl_5;
	// UnityEngine.Sprite TableItem3C::point_wait
	Sprite_t309593783 * ___point_wait_6;
	// System.Int32 TableItem3C::size
	int32_t ___size_7;

public:
	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(TableItem3C_t749400553, ___info_2)); }
	inline Text_t356221433 * get_info_2() const { return ___info_2; }
	inline Text_t356221433 ** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(Text_t356221433 * value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier(&___info_2, value);
	}

	inline static int32_t get_offset_of_stake_3() { return static_cast<int32_t>(offsetof(TableItem3C_t749400553, ___stake_3)); }
	inline Text_t356221433 * get_stake_3() const { return ___stake_3; }
	inline Text_t356221433 ** get_address_of_stake_3() { return &___stake_3; }
	inline void set_stake_3(Text_t356221433 * value)
	{
		___stake_3 = value;
		Il2CppCodeGenWriteBarrier(&___stake_3, value);
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(TableItem3C_t749400553, ___table_4)); }
	inline Image_t2042527209 * get_table_4() const { return ___table_4; }
	inline Image_t2042527209 ** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Image_t2042527209 * value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier(&___table_4, value);
	}

	inline static int32_t get_offset_of_pl_5() { return static_cast<int32_t>(offsetof(TableItem3C_t749400553, ___pl_5)); }
	inline ImageU5BU5D_t590162004* get_pl_5() const { return ___pl_5; }
	inline ImageU5BU5D_t590162004** get_address_of_pl_5() { return &___pl_5; }
	inline void set_pl_5(ImageU5BU5D_t590162004* value)
	{
		___pl_5 = value;
		Il2CppCodeGenWriteBarrier(&___pl_5, value);
	}

	inline static int32_t get_offset_of_point_wait_6() { return static_cast<int32_t>(offsetof(TableItem3C_t749400553, ___point_wait_6)); }
	inline Sprite_t309593783 * get_point_wait_6() const { return ___point_wait_6; }
	inline Sprite_t309593783 ** get_address_of_point_wait_6() { return &___point_wait_6; }
	inline void set_point_wait_6(Sprite_t309593783 * value)
	{
		___point_wait_6 = value;
		Il2CppCodeGenWriteBarrier(&___point_wait_6, value);
	}

	inline static int32_t get_offset_of_size_7() { return static_cast<int32_t>(offsetof(TableItem3C_t749400553, ___size_7)); }
	inline int32_t get_size_7() const { return ___size_7; }
	inline int32_t* get_address_of_size_7() { return &___size_7; }
	inline void set_size_7(int32_t value)
	{
		___size_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
