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
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FBFriendItem
struct  FBFriendItem_t904511001  : public Il2CppObject
{
public:
	// System.String FBFriendItem::id
	String_t* ___id_0;
	// System.String FBFriendItem::name
	String_t* ___name_1;
	// System.String FBFriendItem::name_lower_chars
	String_t* ___name_lower_chars_2;
	// System.String FBFriendItem::imageUrl
	String_t* ___imageUrl_3;
	// System.Boolean FBFriendItem::isSelected
	bool ___isSelected_4;
	// UnityEngine.UI.Toggle FBFriendItem::toggle
	Toggle_t3976754468 * ___toggle_5;
	// System.Boolean FBFriendItem::isPassFilter
	bool ___isPassFilter_6;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(FBFriendItem_t904511001, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(FBFriendItem_t904511001, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_name_lower_chars_2() { return static_cast<int32_t>(offsetof(FBFriendItem_t904511001, ___name_lower_chars_2)); }
	inline String_t* get_name_lower_chars_2() const { return ___name_lower_chars_2; }
	inline String_t** get_address_of_name_lower_chars_2() { return &___name_lower_chars_2; }
	inline void set_name_lower_chars_2(String_t* value)
	{
		___name_lower_chars_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_lower_chars_2, value);
	}

	inline static int32_t get_offset_of_imageUrl_3() { return static_cast<int32_t>(offsetof(FBFriendItem_t904511001, ___imageUrl_3)); }
	inline String_t* get_imageUrl_3() const { return ___imageUrl_3; }
	inline String_t** get_address_of_imageUrl_3() { return &___imageUrl_3; }
	inline void set_imageUrl_3(String_t* value)
	{
		___imageUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&___imageUrl_3, value);
	}

	inline static int32_t get_offset_of_isSelected_4() { return static_cast<int32_t>(offsetof(FBFriendItem_t904511001, ___isSelected_4)); }
	inline bool get_isSelected_4() const { return ___isSelected_4; }
	inline bool* get_address_of_isSelected_4() { return &___isSelected_4; }
	inline void set_isSelected_4(bool value)
	{
		___isSelected_4 = value;
	}

	inline static int32_t get_offset_of_toggle_5() { return static_cast<int32_t>(offsetof(FBFriendItem_t904511001, ___toggle_5)); }
	inline Toggle_t3976754468 * get_toggle_5() const { return ___toggle_5; }
	inline Toggle_t3976754468 ** get_address_of_toggle_5() { return &___toggle_5; }
	inline void set_toggle_5(Toggle_t3976754468 * value)
	{
		___toggle_5 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_5, value);
	}

	inline static int32_t get_offset_of_isPassFilter_6() { return static_cast<int32_t>(offsetof(FBFriendItem_t904511001, ___isPassFilter_6)); }
	inline bool get_isPassFilter_6() const { return ___isPassFilter_6; }
	inline bool* get_address_of_isPassFilter_6() { return &___isPassFilter_6; }
	inline void set_isPassFilter_6(bool value)
	{
		___isPassFilter_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
