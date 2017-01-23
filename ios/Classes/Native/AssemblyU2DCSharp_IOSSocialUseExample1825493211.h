#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSSocialUseExample
struct  IOSSocialUseExample_t1825493211  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GUIStyle IOSSocialUseExample::style
	GUIStyle_t1799908754 * ___style_2;
	// UnityEngine.GUIStyle IOSSocialUseExample::style2
	GUIStyle_t1799908754 * ___style2_3;
	// UnityEngine.Texture2D IOSSocialUseExample::textureForPost
	Texture2D_t3542995729 * ___textureForPost_4;

public:
	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(IOSSocialUseExample_t1825493211, ___style_2)); }
	inline GUIStyle_t1799908754 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t1799908754 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t1799908754 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier(&___style_2, value);
	}

	inline static int32_t get_offset_of_style2_3() { return static_cast<int32_t>(offsetof(IOSSocialUseExample_t1825493211, ___style2_3)); }
	inline GUIStyle_t1799908754 * get_style2_3() const { return ___style2_3; }
	inline GUIStyle_t1799908754 ** get_address_of_style2_3() { return &___style2_3; }
	inline void set_style2_3(GUIStyle_t1799908754 * value)
	{
		___style2_3 = value;
		Il2CppCodeGenWriteBarrier(&___style2_3, value);
	}

	inline static int32_t get_offset_of_textureForPost_4() { return static_cast<int32_t>(offsetof(IOSSocialUseExample_t1825493211, ___textureForPost_4)); }
	inline Texture2D_t3542995729 * get_textureForPost_4() const { return ___textureForPost_4; }
	inline Texture2D_t3542995729 ** get_address_of_textureForPost_4() { return &___textureForPost_4; }
	inline void set_textureForPost_4(Texture2D_t3542995729 * value)
	{
		___textureForPost_4 = value;
		Il2CppCodeGenWriteBarrier(&___textureForPost_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
