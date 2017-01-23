#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate
struct OnAuthenticationSuccededDelegate_t4078916882;
// BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate
struct OnAuthenticationFailedDelegate_t1617501265;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.Cookies.Cookie
struct Cookie_t4162804382;
// System.Predicate`1<BestHTTP.Cookies.Cookie>
struct Predicate_1_t2605774497;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.SignalR.Authentication.SampleCookieAuthentication
struct  SampleCookieAuthentication_t1523935682  : public Il2CppObject
{
public:
	// System.Uri BestHTTP.SignalR.Authentication.SampleCookieAuthentication::<AuthUri>k__BackingField
	Uri_t19570940 * ___U3CAuthUriU3Ek__BackingField_0;
	// System.String BestHTTP.SignalR.Authentication.SampleCookieAuthentication::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_1;
	// System.String BestHTTP.SignalR.Authentication.SampleCookieAuthentication::<Password>k__BackingField
	String_t* ___U3CPasswordU3Ek__BackingField_2;
	// System.String BestHTTP.SignalR.Authentication.SampleCookieAuthentication::<UserRoles>k__BackingField
	String_t* ___U3CUserRolesU3Ek__BackingField_3;
	// System.Boolean BestHTTP.SignalR.Authentication.SampleCookieAuthentication::<IsPreAuthRequired>k__BackingField
	bool ___U3CIsPreAuthRequiredU3Ek__BackingField_4;
	// BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate BestHTTP.SignalR.Authentication.SampleCookieAuthentication::OnAuthenticationSucceded
	OnAuthenticationSuccededDelegate_t4078916882 * ___OnAuthenticationSucceded_5;
	// BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate BestHTTP.SignalR.Authentication.SampleCookieAuthentication::OnAuthenticationFailed
	OnAuthenticationFailedDelegate_t1617501265 * ___OnAuthenticationFailed_6;
	// BestHTTP.HTTPRequest BestHTTP.SignalR.Authentication.SampleCookieAuthentication::AuthRequest
	HTTPRequest_t138485887 * ___AuthRequest_7;
	// BestHTTP.Cookies.Cookie BestHTTP.SignalR.Authentication.SampleCookieAuthentication::Cookie
	Cookie_t4162804382 * ___Cookie_8;

public:
	inline static int32_t get_offset_of_U3CAuthUriU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682, ___U3CAuthUriU3Ek__BackingField_0)); }
	inline Uri_t19570940 * get_U3CAuthUriU3Ek__BackingField_0() const { return ___U3CAuthUriU3Ek__BackingField_0; }
	inline Uri_t19570940 ** get_address_of_U3CAuthUriU3Ek__BackingField_0() { return &___U3CAuthUriU3Ek__BackingField_0; }
	inline void set_U3CAuthUriU3Ek__BackingField_0(Uri_t19570940 * value)
	{
		___U3CAuthUriU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAuthUriU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CUserNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682, ___U3CUserNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CUserNameU3Ek__BackingField_1() const { return ___U3CUserNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CUserNameU3Ek__BackingField_1() { return &___U3CUserNameU3Ek__BackingField_1; }
	inline void set_U3CUserNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CUserNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserNameU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CPasswordU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682, ___U3CPasswordU3Ek__BackingField_2)); }
	inline String_t* get_U3CPasswordU3Ek__BackingField_2() const { return ___U3CPasswordU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPasswordU3Ek__BackingField_2() { return &___U3CPasswordU3Ek__BackingField_2; }
	inline void set_U3CPasswordU3Ek__BackingField_2(String_t* value)
	{
		___U3CPasswordU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPasswordU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CUserRolesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682, ___U3CUserRolesU3Ek__BackingField_3)); }
	inline String_t* get_U3CUserRolesU3Ek__BackingField_3() const { return ___U3CUserRolesU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CUserRolesU3Ek__BackingField_3() { return &___U3CUserRolesU3Ek__BackingField_3; }
	inline void set_U3CUserRolesU3Ek__BackingField_3(String_t* value)
	{
		___U3CUserRolesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserRolesU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CIsPreAuthRequiredU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682, ___U3CIsPreAuthRequiredU3Ek__BackingField_4)); }
	inline bool get_U3CIsPreAuthRequiredU3Ek__BackingField_4() const { return ___U3CIsPreAuthRequiredU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPreAuthRequiredU3Ek__BackingField_4() { return &___U3CIsPreAuthRequiredU3Ek__BackingField_4; }
	inline void set_U3CIsPreAuthRequiredU3Ek__BackingField_4(bool value)
	{
		___U3CIsPreAuthRequiredU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_OnAuthenticationSucceded_5() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682, ___OnAuthenticationSucceded_5)); }
	inline OnAuthenticationSuccededDelegate_t4078916882 * get_OnAuthenticationSucceded_5() const { return ___OnAuthenticationSucceded_5; }
	inline OnAuthenticationSuccededDelegate_t4078916882 ** get_address_of_OnAuthenticationSucceded_5() { return &___OnAuthenticationSucceded_5; }
	inline void set_OnAuthenticationSucceded_5(OnAuthenticationSuccededDelegate_t4078916882 * value)
	{
		___OnAuthenticationSucceded_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAuthenticationSucceded_5, value);
	}

	inline static int32_t get_offset_of_OnAuthenticationFailed_6() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682, ___OnAuthenticationFailed_6)); }
	inline OnAuthenticationFailedDelegate_t1617501265 * get_OnAuthenticationFailed_6() const { return ___OnAuthenticationFailed_6; }
	inline OnAuthenticationFailedDelegate_t1617501265 ** get_address_of_OnAuthenticationFailed_6() { return &___OnAuthenticationFailed_6; }
	inline void set_OnAuthenticationFailed_6(OnAuthenticationFailedDelegate_t1617501265 * value)
	{
		___OnAuthenticationFailed_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnAuthenticationFailed_6, value);
	}

	inline static int32_t get_offset_of_AuthRequest_7() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682, ___AuthRequest_7)); }
	inline HTTPRequest_t138485887 * get_AuthRequest_7() const { return ___AuthRequest_7; }
	inline HTTPRequest_t138485887 ** get_address_of_AuthRequest_7() { return &___AuthRequest_7; }
	inline void set_AuthRequest_7(HTTPRequest_t138485887 * value)
	{
		___AuthRequest_7 = value;
		Il2CppCodeGenWriteBarrier(&___AuthRequest_7, value);
	}

	inline static int32_t get_offset_of_Cookie_8() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682, ___Cookie_8)); }
	inline Cookie_t4162804382 * get_Cookie_8() const { return ___Cookie_8; }
	inline Cookie_t4162804382 ** get_address_of_Cookie_8() { return &___Cookie_8; }
	inline void set_Cookie_8(Cookie_t4162804382 * value)
	{
		___Cookie_8 = value;
		Il2CppCodeGenWriteBarrier(&___Cookie_8, value);
	}
};

struct SampleCookieAuthentication_t1523935682_StaticFields
{
public:
	// System.Predicate`1<BestHTTP.Cookies.Cookie> BestHTTP.SignalR.Authentication.SampleCookieAuthentication::<>f__am$cache0
	Predicate_1_t2605774497 * ___U3CU3Ef__amU24cache0_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(SampleCookieAuthentication_t1523935682_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Predicate_1_t2605774497 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Predicate_1_t2605774497 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Predicate_1_t2605774497 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
