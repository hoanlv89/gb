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
// UnityEngine.WWW
struct WWW_t2919945039;
// Countly.Manager
struct Manager_t149474841;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Countly.Manager/<_ProcessConnectionQueue>c__Iterator1
struct  U3C_ProcessConnectionQueueU3Ec__Iterator1_t2036959551  : public Il2CppObject
{
public:
	// System.String Countly.Manager/<_ProcessConnectionQueue>c__Iterator1::<data>__0
	String_t* ___U3CdataU3E__0_0;
	// System.String Countly.Manager/<_ProcessConnectionQueue>c__Iterator1::<urlString>__1
	String_t* ___U3CurlStringU3E__1_1;
	// UnityEngine.WWW Countly.Manager/<_ProcessConnectionQueue>c__Iterator1::<www>__2
	WWW_t2919945039 * ___U3CwwwU3E__2_2;
	// Countly.Manager Countly.Manager/<_ProcessConnectionQueue>c__Iterator1::$this
	Manager_t149474841 * ___U24this_3;
	// System.Object Countly.Manager/<_ProcessConnectionQueue>c__Iterator1::$current
	Il2CppObject * ___U24current_4;
	// System.Boolean Countly.Manager/<_ProcessConnectionQueue>c__Iterator1::$disposing
	bool ___U24disposing_5;
	// System.Int32 Countly.Manager/<_ProcessConnectionQueue>c__Iterator1::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CdataU3E__0_0() { return static_cast<int32_t>(offsetof(U3C_ProcessConnectionQueueU3Ec__Iterator1_t2036959551, ___U3CdataU3E__0_0)); }
	inline String_t* get_U3CdataU3E__0_0() const { return ___U3CdataU3E__0_0; }
	inline String_t** get_address_of_U3CdataU3E__0_0() { return &___U3CdataU3E__0_0; }
	inline void set_U3CdataU3E__0_0(String_t* value)
	{
		___U3CdataU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdataU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CurlStringU3E__1_1() { return static_cast<int32_t>(offsetof(U3C_ProcessConnectionQueueU3Ec__Iterator1_t2036959551, ___U3CurlStringU3E__1_1)); }
	inline String_t* get_U3CurlStringU3E__1_1() const { return ___U3CurlStringU3E__1_1; }
	inline String_t** get_address_of_U3CurlStringU3E__1_1() { return &___U3CurlStringU3E__1_1; }
	inline void set_U3CurlStringU3E__1_1(String_t* value)
	{
		___U3CurlStringU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CurlStringU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__2_2() { return static_cast<int32_t>(offsetof(U3C_ProcessConnectionQueueU3Ec__Iterator1_t2036959551, ___U3CwwwU3E__2_2)); }
	inline WWW_t2919945039 * get_U3CwwwU3E__2_2() const { return ___U3CwwwU3E__2_2; }
	inline WWW_t2919945039 ** get_address_of_U3CwwwU3E__2_2() { return &___U3CwwwU3E__2_2; }
	inline void set_U3CwwwU3E__2_2(WWW_t2919945039 * value)
	{
		___U3CwwwU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwwwU3E__2_2, value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3C_ProcessConnectionQueueU3Ec__Iterator1_t2036959551, ___U24this_3)); }
	inline Manager_t149474841 * get_U24this_3() const { return ___U24this_3; }
	inline Manager_t149474841 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(Manager_t149474841 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3C_ProcessConnectionQueueU3Ec__Iterator1_t2036959551, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3C_ProcessConnectionQueueU3Ec__Iterator1_t2036959551, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3C_ProcessConnectionQueueU3Ec__Iterator1_t2036959551, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
