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

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Examples.GUIHelper
struct  GUIHelper_t1081137527  : public Il2CppObject
{
public:

public:
};

struct GUIHelper_t1081137527_StaticFields
{
public:
	// UnityEngine.GUIStyle BestHTTP.Examples.GUIHelper::centerAlignedLabel
	GUIStyle_t1799908754 * ___centerAlignedLabel_0;
	// UnityEngine.GUIStyle BestHTTP.Examples.GUIHelper::rightAlignedLabel
	GUIStyle_t1799908754 * ___rightAlignedLabel_1;
	// UnityEngine.Rect BestHTTP.Examples.GUIHelper::ClientArea
	Rect_t3681755626  ___ClientArea_2;

public:
	inline static int32_t get_offset_of_centerAlignedLabel_0() { return static_cast<int32_t>(offsetof(GUIHelper_t1081137527_StaticFields, ___centerAlignedLabel_0)); }
	inline GUIStyle_t1799908754 * get_centerAlignedLabel_0() const { return ___centerAlignedLabel_0; }
	inline GUIStyle_t1799908754 ** get_address_of_centerAlignedLabel_0() { return &___centerAlignedLabel_0; }
	inline void set_centerAlignedLabel_0(GUIStyle_t1799908754 * value)
	{
		___centerAlignedLabel_0 = value;
		Il2CppCodeGenWriteBarrier(&___centerAlignedLabel_0, value);
	}

	inline static int32_t get_offset_of_rightAlignedLabel_1() { return static_cast<int32_t>(offsetof(GUIHelper_t1081137527_StaticFields, ___rightAlignedLabel_1)); }
	inline GUIStyle_t1799908754 * get_rightAlignedLabel_1() const { return ___rightAlignedLabel_1; }
	inline GUIStyle_t1799908754 ** get_address_of_rightAlignedLabel_1() { return &___rightAlignedLabel_1; }
	inline void set_rightAlignedLabel_1(GUIStyle_t1799908754 * value)
	{
		___rightAlignedLabel_1 = value;
		Il2CppCodeGenWriteBarrier(&___rightAlignedLabel_1, value);
	}

	inline static int32_t get_offset_of_ClientArea_2() { return static_cast<int32_t>(offsetof(GUIHelper_t1081137527_StaticFields, ___ClientArea_2)); }
	inline Rect_t3681755626  get_ClientArea_2() const { return ___ClientArea_2; }
	inline Rect_t3681755626 * get_address_of_ClientArea_2() { return &___ClientArea_2; }
	inline void set_ClientArea_2(Rect_t3681755626  value)
	{
		___ClientArea_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
