#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cmsg
struct  cmsg_t645760586  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean cmsg::isbanknotifier
	bool ___isbanknotifier_6;
	// UnityEngine.RectTransform cmsg::numberCmsg
	RectTransform_t3349966182 * ___numberCmsg_7;

public:
	inline static int32_t get_offset_of_isbanknotifier_6() { return static_cast<int32_t>(offsetof(cmsg_t645760586, ___isbanknotifier_6)); }
	inline bool get_isbanknotifier_6() const { return ___isbanknotifier_6; }
	inline bool* get_address_of_isbanknotifier_6() { return &___isbanknotifier_6; }
	inline void set_isbanknotifier_6(bool value)
	{
		___isbanknotifier_6 = value;
	}

	inline static int32_t get_offset_of_numberCmsg_7() { return static_cast<int32_t>(offsetof(cmsg_t645760586, ___numberCmsg_7)); }
	inline RectTransform_t3349966182 * get_numberCmsg_7() const { return ___numberCmsg_7; }
	inline RectTransform_t3349966182 ** get_address_of_numberCmsg_7() { return &___numberCmsg_7; }
	inline void set_numberCmsg_7(RectTransform_t3349966182 * value)
	{
		___numberCmsg_7 = value;
		Il2CppCodeGenWriteBarrier(&___numberCmsg_7, value);
	}
};

struct cmsg_t645760586_StaticFields
{
public:
	// System.Int32 cmsg::unreadmail
	int32_t ___unreadmail_2;
	// System.Int32 cmsg::unreadbankmail
	int32_t ___unreadbankmail_3;
	// System.Boolean cmsg::hasShowMail
	bool ___hasShowMail_4;
	// System.Boolean cmsg::hasShowBankMail
	bool ___hasShowBankMail_5;

public:
	inline static int32_t get_offset_of_unreadmail_2() { return static_cast<int32_t>(offsetof(cmsg_t645760586_StaticFields, ___unreadmail_2)); }
	inline int32_t get_unreadmail_2() const { return ___unreadmail_2; }
	inline int32_t* get_address_of_unreadmail_2() { return &___unreadmail_2; }
	inline void set_unreadmail_2(int32_t value)
	{
		___unreadmail_2 = value;
	}

	inline static int32_t get_offset_of_unreadbankmail_3() { return static_cast<int32_t>(offsetof(cmsg_t645760586_StaticFields, ___unreadbankmail_3)); }
	inline int32_t get_unreadbankmail_3() const { return ___unreadbankmail_3; }
	inline int32_t* get_address_of_unreadbankmail_3() { return &___unreadbankmail_3; }
	inline void set_unreadbankmail_3(int32_t value)
	{
		___unreadbankmail_3 = value;
	}

	inline static int32_t get_offset_of_hasShowMail_4() { return static_cast<int32_t>(offsetof(cmsg_t645760586_StaticFields, ___hasShowMail_4)); }
	inline bool get_hasShowMail_4() const { return ___hasShowMail_4; }
	inline bool* get_address_of_hasShowMail_4() { return &___hasShowMail_4; }
	inline void set_hasShowMail_4(bool value)
	{
		___hasShowMail_4 = value;
	}

	inline static int32_t get_offset_of_hasShowBankMail_5() { return static_cast<int32_t>(offsetof(cmsg_t645760586_StaticFields, ___hasShowBankMail_5)); }
	inline bool get_hasShowBankMail_5() const { return ___hasShowBankMail_5; }
	inline bool* get_address_of_hasShowBankMail_5() { return &___hasShowBankMail_5; }
	inline void set_hasShowBankMail_5(bool value)
	{
		___hasShowBankMail_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
