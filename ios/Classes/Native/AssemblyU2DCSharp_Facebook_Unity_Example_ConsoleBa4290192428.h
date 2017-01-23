#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3116948387;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.ConsoleBase
struct  ConsoleBase_t4290192428  : public MonoBehaviour_t1158329972
{
public:
	// System.String Facebook.Unity.Example.ConsoleBase::status
	String_t* ___status_8;
	// System.String Facebook.Unity.Example.ConsoleBase::lastResponse
	String_t* ___lastResponse_9;
	// UnityEngine.Vector2 Facebook.Unity.Example.ConsoleBase::scrollPosition
	Vector2_t2243707579  ___scrollPosition_10;
	// System.Nullable`1<System.Single> Facebook.Unity.Example.ConsoleBase::scaleFactor
	Nullable_1_t339576247  ___scaleFactor_11;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textStyle
	GUIStyle_t1799908754 * ___textStyle_12;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::buttonStyle
	GUIStyle_t1799908754 * ___buttonStyle_13;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textInputStyle
	GUIStyle_t1799908754 * ___textInputStyle_14;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::labelStyle
	GUIStyle_t1799908754 * ___labelStyle_15;
	// UnityEngine.Texture2D Facebook.Unity.Example.ConsoleBase::<LastResponseTexture>k__BackingField
	Texture2D_t3542995729 * ___U3CLastResponseTextureU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_status_8() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___status_8)); }
	inline String_t* get_status_8() const { return ___status_8; }
	inline String_t** get_address_of_status_8() { return &___status_8; }
	inline void set_status_8(String_t* value)
	{
		___status_8 = value;
		Il2CppCodeGenWriteBarrier(&___status_8, value);
	}

	inline static int32_t get_offset_of_lastResponse_9() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___lastResponse_9)); }
	inline String_t* get_lastResponse_9() const { return ___lastResponse_9; }
	inline String_t** get_address_of_lastResponse_9() { return &___lastResponse_9; }
	inline void set_lastResponse_9(String_t* value)
	{
		___lastResponse_9 = value;
		Il2CppCodeGenWriteBarrier(&___lastResponse_9, value);
	}

	inline static int32_t get_offset_of_scrollPosition_10() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___scrollPosition_10)); }
	inline Vector2_t2243707579  get_scrollPosition_10() const { return ___scrollPosition_10; }
	inline Vector2_t2243707579 * get_address_of_scrollPosition_10() { return &___scrollPosition_10; }
	inline void set_scrollPosition_10(Vector2_t2243707579  value)
	{
		___scrollPosition_10 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_11() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___scaleFactor_11)); }
	inline Nullable_1_t339576247  get_scaleFactor_11() const { return ___scaleFactor_11; }
	inline Nullable_1_t339576247 * get_address_of_scaleFactor_11() { return &___scaleFactor_11; }
	inline void set_scaleFactor_11(Nullable_1_t339576247  value)
	{
		___scaleFactor_11 = value;
	}

	inline static int32_t get_offset_of_textStyle_12() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___textStyle_12)); }
	inline GUIStyle_t1799908754 * get_textStyle_12() const { return ___textStyle_12; }
	inline GUIStyle_t1799908754 ** get_address_of_textStyle_12() { return &___textStyle_12; }
	inline void set_textStyle_12(GUIStyle_t1799908754 * value)
	{
		___textStyle_12 = value;
		Il2CppCodeGenWriteBarrier(&___textStyle_12, value);
	}

	inline static int32_t get_offset_of_buttonStyle_13() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___buttonStyle_13)); }
	inline GUIStyle_t1799908754 * get_buttonStyle_13() const { return ___buttonStyle_13; }
	inline GUIStyle_t1799908754 ** get_address_of_buttonStyle_13() { return &___buttonStyle_13; }
	inline void set_buttonStyle_13(GUIStyle_t1799908754 * value)
	{
		___buttonStyle_13 = value;
		Il2CppCodeGenWriteBarrier(&___buttonStyle_13, value);
	}

	inline static int32_t get_offset_of_textInputStyle_14() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___textInputStyle_14)); }
	inline GUIStyle_t1799908754 * get_textInputStyle_14() const { return ___textInputStyle_14; }
	inline GUIStyle_t1799908754 ** get_address_of_textInputStyle_14() { return &___textInputStyle_14; }
	inline void set_textInputStyle_14(GUIStyle_t1799908754 * value)
	{
		___textInputStyle_14 = value;
		Il2CppCodeGenWriteBarrier(&___textInputStyle_14, value);
	}

	inline static int32_t get_offset_of_labelStyle_15() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___labelStyle_15)); }
	inline GUIStyle_t1799908754 * get_labelStyle_15() const { return ___labelStyle_15; }
	inline GUIStyle_t1799908754 ** get_address_of_labelStyle_15() { return &___labelStyle_15; }
	inline void set_labelStyle_15(GUIStyle_t1799908754 * value)
	{
		___labelStyle_15 = value;
		Il2CppCodeGenWriteBarrier(&___labelStyle_15, value);
	}

	inline static int32_t get_offset_of_U3CLastResponseTextureU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428, ___U3CLastResponseTextureU3Ek__BackingField_16)); }
	inline Texture2D_t3542995729 * get_U3CLastResponseTextureU3Ek__BackingField_16() const { return ___U3CLastResponseTextureU3Ek__BackingField_16; }
	inline Texture2D_t3542995729 ** get_address_of_U3CLastResponseTextureU3Ek__BackingField_16() { return &___U3CLastResponseTextureU3Ek__BackingField_16; }
	inline void set_U3CLastResponseTextureU3Ek__BackingField_16(Texture2D_t3542995729 * value)
	{
		___U3CLastResponseTextureU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLastResponseTextureU3Ek__BackingField_16, value);
	}
};

struct ConsoleBase_t4290192428_StaticFields
{
public:
	// System.Int32 Facebook.Unity.Example.ConsoleBase::ButtonHeight
	int32_t ___ButtonHeight_2;
	// System.Int32 Facebook.Unity.Example.ConsoleBase::MainWindowWidth
	int32_t ___MainWindowWidth_3;
	// System.Int32 Facebook.Unity.Example.ConsoleBase::MainWindowFullWidth
	int32_t ___MainWindowFullWidth_4;
	// System.Int32 Facebook.Unity.Example.ConsoleBase::MarginFix
	int32_t ___MarginFix_5;
	// System.Collections.Generic.Stack`1<System.String> Facebook.Unity.Example.ConsoleBase::menuStack
	Stack_1_t3116948387 * ___menuStack_7;

public:
	inline static int32_t get_offset_of_ButtonHeight_2() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428_StaticFields, ___ButtonHeight_2)); }
	inline int32_t get_ButtonHeight_2() const { return ___ButtonHeight_2; }
	inline int32_t* get_address_of_ButtonHeight_2() { return &___ButtonHeight_2; }
	inline void set_ButtonHeight_2(int32_t value)
	{
		___ButtonHeight_2 = value;
	}

	inline static int32_t get_offset_of_MainWindowWidth_3() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428_StaticFields, ___MainWindowWidth_3)); }
	inline int32_t get_MainWindowWidth_3() const { return ___MainWindowWidth_3; }
	inline int32_t* get_address_of_MainWindowWidth_3() { return &___MainWindowWidth_3; }
	inline void set_MainWindowWidth_3(int32_t value)
	{
		___MainWindowWidth_3 = value;
	}

	inline static int32_t get_offset_of_MainWindowFullWidth_4() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428_StaticFields, ___MainWindowFullWidth_4)); }
	inline int32_t get_MainWindowFullWidth_4() const { return ___MainWindowFullWidth_4; }
	inline int32_t* get_address_of_MainWindowFullWidth_4() { return &___MainWindowFullWidth_4; }
	inline void set_MainWindowFullWidth_4(int32_t value)
	{
		___MainWindowFullWidth_4 = value;
	}

	inline static int32_t get_offset_of_MarginFix_5() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428_StaticFields, ___MarginFix_5)); }
	inline int32_t get_MarginFix_5() const { return ___MarginFix_5; }
	inline int32_t* get_address_of_MarginFix_5() { return &___MarginFix_5; }
	inline void set_MarginFix_5(int32_t value)
	{
		___MarginFix_5 = value;
	}

	inline static int32_t get_offset_of_menuStack_7() { return static_cast<int32_t>(offsetof(ConsoleBase_t4290192428_StaticFields, ___menuStack_7)); }
	inline Stack_1_t3116948387 * get_menuStack_7() const { return ___menuStack_7; }
	inline Stack_1_t3116948387 ** get_address_of_menuStack_7() { return &___menuStack_7; }
	inline void set_menuStack_7(Stack_1_t3116948387 * value)
	{
		___menuStack_7 = value;
		Il2CppCodeGenWriteBarrier(&___menuStack_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
