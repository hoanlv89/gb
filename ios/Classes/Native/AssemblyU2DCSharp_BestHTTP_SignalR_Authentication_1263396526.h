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
// BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate
struct OnAuthenticationSuccededDelegate_t4078916882;
// BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate
struct OnAuthenticationFailedDelegate_t1617501265;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.SignalR.Authentication.HeaderAuthenticator
struct  HeaderAuthenticator_t1263396526  : public Il2CppObject
{
public:
	// System.String BestHTTP.SignalR.Authentication.HeaderAuthenticator::<User>k__BackingField
	String_t* ___U3CUserU3Ek__BackingField_0;
	// System.String BestHTTP.SignalR.Authentication.HeaderAuthenticator::<Roles>k__BackingField
	String_t* ___U3CRolesU3Ek__BackingField_1;
	// BestHTTP.SignalR.Authentication.OnAuthenticationSuccededDelegate BestHTTP.SignalR.Authentication.HeaderAuthenticator::OnAuthenticationSucceded
	OnAuthenticationSuccededDelegate_t4078916882 * ___OnAuthenticationSucceded_2;
	// BestHTTP.SignalR.Authentication.OnAuthenticationFailedDelegate BestHTTP.SignalR.Authentication.HeaderAuthenticator::OnAuthenticationFailed
	OnAuthenticationFailedDelegate_t1617501265 * ___OnAuthenticationFailed_3;

public:
	inline static int32_t get_offset_of_U3CUserU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HeaderAuthenticator_t1263396526, ___U3CUserU3Ek__BackingField_0)); }
	inline String_t* get_U3CUserU3Ek__BackingField_0() const { return ___U3CUserU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUserU3Ek__BackingField_0() { return &___U3CUserU3Ek__BackingField_0; }
	inline void set_U3CUserU3Ek__BackingField_0(String_t* value)
	{
		___U3CUserU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CRolesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HeaderAuthenticator_t1263396526, ___U3CRolesU3Ek__BackingField_1)); }
	inline String_t* get_U3CRolesU3Ek__BackingField_1() const { return ___U3CRolesU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CRolesU3Ek__BackingField_1() { return &___U3CRolesU3Ek__BackingField_1; }
	inline void set_U3CRolesU3Ek__BackingField_1(String_t* value)
	{
		___U3CRolesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRolesU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_OnAuthenticationSucceded_2() { return static_cast<int32_t>(offsetof(HeaderAuthenticator_t1263396526, ___OnAuthenticationSucceded_2)); }
	inline OnAuthenticationSuccededDelegate_t4078916882 * get_OnAuthenticationSucceded_2() const { return ___OnAuthenticationSucceded_2; }
	inline OnAuthenticationSuccededDelegate_t4078916882 ** get_address_of_OnAuthenticationSucceded_2() { return &___OnAuthenticationSucceded_2; }
	inline void set_OnAuthenticationSucceded_2(OnAuthenticationSuccededDelegate_t4078916882 * value)
	{
		___OnAuthenticationSucceded_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAuthenticationSucceded_2, value);
	}

	inline static int32_t get_offset_of_OnAuthenticationFailed_3() { return static_cast<int32_t>(offsetof(HeaderAuthenticator_t1263396526, ___OnAuthenticationFailed_3)); }
	inline OnAuthenticationFailedDelegate_t1617501265 * get_OnAuthenticationFailed_3() const { return ___OnAuthenticationFailed_3; }
	inline OnAuthenticationFailedDelegate_t1617501265 ** get_address_of_OnAuthenticationFailed_3() { return &___OnAuthenticationFailed_3; }
	inline void set_OnAuthenticationFailed_3(OnAuthenticationFailedDelegate_t1617501265 * value)
	{
		___OnAuthenticationFailed_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAuthenticationFailed_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
