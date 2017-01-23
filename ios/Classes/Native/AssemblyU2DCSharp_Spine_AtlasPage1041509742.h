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
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Spine_Format1041889017.h"
#include "AssemblyU2DCSharp_Spine_TextureFilter159958433.h"
#include "AssemblyU2DCSharp_Spine_TextureWrap2009314079.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.AtlasPage
struct  AtlasPage_t1041509742  : public Il2CppObject
{
public:
	// System.String Spine.AtlasPage::name
	String_t* ___name_0;
	// Spine.Format Spine.AtlasPage::format
	int32_t ___format_1;
	// Spine.TextureFilter Spine.AtlasPage::minFilter
	int32_t ___minFilter_2;
	// Spine.TextureFilter Spine.AtlasPage::magFilter
	int32_t ___magFilter_3;
	// Spine.TextureWrap Spine.AtlasPage::uWrap
	int32_t ___uWrap_4;
	// Spine.TextureWrap Spine.AtlasPage::vWrap
	int32_t ___vWrap_5;
	// System.Object Spine.AtlasPage::rendererObject
	Il2CppObject * ___rendererObject_6;
	// System.Int32 Spine.AtlasPage::width
	int32_t ___width_7;
	// System.Int32 Spine.AtlasPage::height
	int32_t ___height_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AtlasPage_t1041509742, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_format_1() { return static_cast<int32_t>(offsetof(AtlasPage_t1041509742, ___format_1)); }
	inline int32_t get_format_1() const { return ___format_1; }
	inline int32_t* get_address_of_format_1() { return &___format_1; }
	inline void set_format_1(int32_t value)
	{
		___format_1 = value;
	}

	inline static int32_t get_offset_of_minFilter_2() { return static_cast<int32_t>(offsetof(AtlasPage_t1041509742, ___minFilter_2)); }
	inline int32_t get_minFilter_2() const { return ___minFilter_2; }
	inline int32_t* get_address_of_minFilter_2() { return &___minFilter_2; }
	inline void set_minFilter_2(int32_t value)
	{
		___minFilter_2 = value;
	}

	inline static int32_t get_offset_of_magFilter_3() { return static_cast<int32_t>(offsetof(AtlasPage_t1041509742, ___magFilter_3)); }
	inline int32_t get_magFilter_3() const { return ___magFilter_3; }
	inline int32_t* get_address_of_magFilter_3() { return &___magFilter_3; }
	inline void set_magFilter_3(int32_t value)
	{
		___magFilter_3 = value;
	}

	inline static int32_t get_offset_of_uWrap_4() { return static_cast<int32_t>(offsetof(AtlasPage_t1041509742, ___uWrap_4)); }
	inline int32_t get_uWrap_4() const { return ___uWrap_4; }
	inline int32_t* get_address_of_uWrap_4() { return &___uWrap_4; }
	inline void set_uWrap_4(int32_t value)
	{
		___uWrap_4 = value;
	}

	inline static int32_t get_offset_of_vWrap_5() { return static_cast<int32_t>(offsetof(AtlasPage_t1041509742, ___vWrap_5)); }
	inline int32_t get_vWrap_5() const { return ___vWrap_5; }
	inline int32_t* get_address_of_vWrap_5() { return &___vWrap_5; }
	inline void set_vWrap_5(int32_t value)
	{
		___vWrap_5 = value;
	}

	inline static int32_t get_offset_of_rendererObject_6() { return static_cast<int32_t>(offsetof(AtlasPage_t1041509742, ___rendererObject_6)); }
	inline Il2CppObject * get_rendererObject_6() const { return ___rendererObject_6; }
	inline Il2CppObject ** get_address_of_rendererObject_6() { return &___rendererObject_6; }
	inline void set_rendererObject_6(Il2CppObject * value)
	{
		___rendererObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___rendererObject_6, value);
	}

	inline static int32_t get_offset_of_width_7() { return static_cast<int32_t>(offsetof(AtlasPage_t1041509742, ___width_7)); }
	inline int32_t get_width_7() const { return ___width_7; }
	inline int32_t* get_address_of_width_7() { return &___width_7; }
	inline void set_width_7(int32_t value)
	{
		___width_7 = value;
	}

	inline static int32_t get_offset_of_height_8() { return static_cast<int32_t>(offsetof(AtlasPage_t1041509742, ___height_8)); }
	inline int32_t get_height_8() const { return ___height_8; }
	inline int32_t* get_address_of_height_8() { return &___height_8; }
	inline void set_height_8(int32_t value)
	{
		___height_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
