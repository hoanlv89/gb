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
// Facebook.Unity.FacebookSettings
struct FacebookSettings_t63976131;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<Facebook.Unity.FacebookSettings/UrlSchemes>
struct List_1_t786234260;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.FacebookSettings
struct  FacebookSettings_t63976131  : public ScriptableObject_t1975622470
{
public:
	// System.Int32 Facebook.Unity.FacebookSettings::selectedAppIndex
	int32_t ___selectedAppIndex_6;
	// System.Collections.Generic.List`1<System.String> Facebook.Unity.FacebookSettings::appIds
	List_1_t1398341365 * ___appIds_7;
	// System.Collections.Generic.List`1<System.String> Facebook.Unity.FacebookSettings::appLabels
	List_1_t1398341365 * ___appLabels_8;
	// System.Boolean Facebook.Unity.FacebookSettings::cookie
	bool ___cookie_9;
	// System.Boolean Facebook.Unity.FacebookSettings::logging
	bool ___logging_10;
	// System.Boolean Facebook.Unity.FacebookSettings::status
	bool ___status_11;
	// System.Boolean Facebook.Unity.FacebookSettings::xfbml
	bool ___xfbml_12;
	// System.Boolean Facebook.Unity.FacebookSettings::frictionlessRequests
	bool ___frictionlessRequests_13;
	// System.String Facebook.Unity.FacebookSettings::iosURLSuffix
	String_t* ___iosURLSuffix_14;
	// System.Collections.Generic.List`1<Facebook.Unity.FacebookSettings/UrlSchemes> Facebook.Unity.FacebookSettings::appLinkSchemes
	List_1_t786234260 * ___appLinkSchemes_15;

public:
	inline static int32_t get_offset_of_selectedAppIndex_6() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___selectedAppIndex_6)); }
	inline int32_t get_selectedAppIndex_6() const { return ___selectedAppIndex_6; }
	inline int32_t* get_address_of_selectedAppIndex_6() { return &___selectedAppIndex_6; }
	inline void set_selectedAppIndex_6(int32_t value)
	{
		___selectedAppIndex_6 = value;
	}

	inline static int32_t get_offset_of_appIds_7() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___appIds_7)); }
	inline List_1_t1398341365 * get_appIds_7() const { return ___appIds_7; }
	inline List_1_t1398341365 ** get_address_of_appIds_7() { return &___appIds_7; }
	inline void set_appIds_7(List_1_t1398341365 * value)
	{
		___appIds_7 = value;
		Il2CppCodeGenWriteBarrier(&___appIds_7, value);
	}

	inline static int32_t get_offset_of_appLabels_8() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___appLabels_8)); }
	inline List_1_t1398341365 * get_appLabels_8() const { return ___appLabels_8; }
	inline List_1_t1398341365 ** get_address_of_appLabels_8() { return &___appLabels_8; }
	inline void set_appLabels_8(List_1_t1398341365 * value)
	{
		___appLabels_8 = value;
		Il2CppCodeGenWriteBarrier(&___appLabels_8, value);
	}

	inline static int32_t get_offset_of_cookie_9() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___cookie_9)); }
	inline bool get_cookie_9() const { return ___cookie_9; }
	inline bool* get_address_of_cookie_9() { return &___cookie_9; }
	inline void set_cookie_9(bool value)
	{
		___cookie_9 = value;
	}

	inline static int32_t get_offset_of_logging_10() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___logging_10)); }
	inline bool get_logging_10() const { return ___logging_10; }
	inline bool* get_address_of_logging_10() { return &___logging_10; }
	inline void set_logging_10(bool value)
	{
		___logging_10 = value;
	}

	inline static int32_t get_offset_of_status_11() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___status_11)); }
	inline bool get_status_11() const { return ___status_11; }
	inline bool* get_address_of_status_11() { return &___status_11; }
	inline void set_status_11(bool value)
	{
		___status_11 = value;
	}

	inline static int32_t get_offset_of_xfbml_12() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___xfbml_12)); }
	inline bool get_xfbml_12() const { return ___xfbml_12; }
	inline bool* get_address_of_xfbml_12() { return &___xfbml_12; }
	inline void set_xfbml_12(bool value)
	{
		___xfbml_12 = value;
	}

	inline static int32_t get_offset_of_frictionlessRequests_13() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___frictionlessRequests_13)); }
	inline bool get_frictionlessRequests_13() const { return ___frictionlessRequests_13; }
	inline bool* get_address_of_frictionlessRequests_13() { return &___frictionlessRequests_13; }
	inline void set_frictionlessRequests_13(bool value)
	{
		___frictionlessRequests_13 = value;
	}

	inline static int32_t get_offset_of_iosURLSuffix_14() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___iosURLSuffix_14)); }
	inline String_t* get_iosURLSuffix_14() const { return ___iosURLSuffix_14; }
	inline String_t** get_address_of_iosURLSuffix_14() { return &___iosURLSuffix_14; }
	inline void set_iosURLSuffix_14(String_t* value)
	{
		___iosURLSuffix_14 = value;
		Il2CppCodeGenWriteBarrier(&___iosURLSuffix_14, value);
	}

	inline static int32_t get_offset_of_appLinkSchemes_15() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131, ___appLinkSchemes_15)); }
	inline List_1_t786234260 * get_appLinkSchemes_15() const { return ___appLinkSchemes_15; }
	inline List_1_t786234260 ** get_address_of_appLinkSchemes_15() { return &___appLinkSchemes_15; }
	inline void set_appLinkSchemes_15(List_1_t786234260 * value)
	{
		___appLinkSchemes_15 = value;
		Il2CppCodeGenWriteBarrier(&___appLinkSchemes_15, value);
	}
};

struct FacebookSettings_t63976131_StaticFields
{
public:
	// Facebook.Unity.FacebookSettings Facebook.Unity.FacebookSettings::instance
	FacebookSettings_t63976131 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(FacebookSettings_t63976131_StaticFields, ___instance_5)); }
	inline FacebookSettings_t63976131 * get_instance_5() const { return ___instance_5; }
	inline FacebookSettings_t63976131 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(FacebookSettings_t63976131 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
