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
// Utils/Executor
struct Executor_t2576254565;
// Utils/ExeOneStringParam
struct ExeOneStringParam_t2750684624;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SuperScene/<HTTPRequest>c__Iterator1
struct  U3CHTTPRequestU3Ec__Iterator1_t139228441  : public Il2CppObject
{
public:
	// System.String SuperScene/<HTTPRequest>c__Iterator1::url
	String_t* ___url_0;
	// UnityEngine.WWW SuperScene/<HTTPRequest>c__Iterator1::<www>__0
	WWW_t2919945039 * ___U3CwwwU3E__0_1;
	// Utils/Executor SuperScene/<HTTPRequest>c__Iterator1::onFailed
	Executor_t2576254565 * ___onFailed_2;
	// System.String SuperScene/<HTTPRequest>c__Iterator1::<data>__1
	String_t* ___U3CdataU3E__1_3;
	// Utils/ExeOneStringParam SuperScene/<HTTPRequest>c__Iterator1::onSuccess
	ExeOneStringParam_t2750684624 * ___onSuccess_4;
	// System.Object SuperScene/<HTTPRequest>c__Iterator1::$current
	Il2CppObject * ___U24current_5;
	// System.Boolean SuperScene/<HTTPRequest>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 SuperScene/<HTTPRequest>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CHTTPRequestU3Ec__Iterator1_t139228441, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_1() { return static_cast<int32_t>(offsetof(U3CHTTPRequestU3Ec__Iterator1_t139228441, ___U3CwwwU3E__0_1)); }
	inline WWW_t2919945039 * get_U3CwwwU3E__0_1() const { return ___U3CwwwU3E__0_1; }
	inline WWW_t2919945039 ** get_address_of_U3CwwwU3E__0_1() { return &___U3CwwwU3E__0_1; }
	inline void set_U3CwwwU3E__0_1(WWW_t2919945039 * value)
	{
		___U3CwwwU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwwwU3E__0_1, value);
	}

	inline static int32_t get_offset_of_onFailed_2() { return static_cast<int32_t>(offsetof(U3CHTTPRequestU3Ec__Iterator1_t139228441, ___onFailed_2)); }
	inline Executor_t2576254565 * get_onFailed_2() const { return ___onFailed_2; }
	inline Executor_t2576254565 ** get_address_of_onFailed_2() { return &___onFailed_2; }
	inline void set_onFailed_2(Executor_t2576254565 * value)
	{
		___onFailed_2 = value;
		Il2CppCodeGenWriteBarrier(&___onFailed_2, value);
	}

	inline static int32_t get_offset_of_U3CdataU3E__1_3() { return static_cast<int32_t>(offsetof(U3CHTTPRequestU3Ec__Iterator1_t139228441, ___U3CdataU3E__1_3)); }
	inline String_t* get_U3CdataU3E__1_3() const { return ___U3CdataU3E__1_3; }
	inline String_t** get_address_of_U3CdataU3E__1_3() { return &___U3CdataU3E__1_3; }
	inline void set_U3CdataU3E__1_3(String_t* value)
	{
		___U3CdataU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdataU3E__1_3, value);
	}

	inline static int32_t get_offset_of_onSuccess_4() { return static_cast<int32_t>(offsetof(U3CHTTPRequestU3Ec__Iterator1_t139228441, ___onSuccess_4)); }
	inline ExeOneStringParam_t2750684624 * get_onSuccess_4() const { return ___onSuccess_4; }
	inline ExeOneStringParam_t2750684624 ** get_address_of_onSuccess_4() { return &___onSuccess_4; }
	inline void set_onSuccess_4(ExeOneStringParam_t2750684624 * value)
	{
		___onSuccess_4 = value;
		Il2CppCodeGenWriteBarrier(&___onSuccess_4, value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CHTTPRequestU3Ec__Iterator1_t139228441, ___U24current_5)); }
	inline Il2CppObject * get_U24current_5() const { return ___U24current_5; }
	inline Il2CppObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_5, value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CHTTPRequestU3Ec__Iterator1_t139228441, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CHTTPRequestU3Ec__Iterator1_t139228441, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
