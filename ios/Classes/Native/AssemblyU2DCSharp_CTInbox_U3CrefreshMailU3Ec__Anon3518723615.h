#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mail
struct Mail_t3972794259;
// CTInbox
struct CTInbox_t2559313007;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CTInbox/<refreshMail>c__AnonStorey2
struct  U3CrefreshMailU3Ec__AnonStorey2_t3518723615  : public Il2CppObject
{
public:
	// Mail CTInbox/<refreshMail>c__AnonStorey2::mail
	Mail_t3972794259 * ___mail_0;
	// CTInbox CTInbox/<refreshMail>c__AnonStorey2::$this
	CTInbox_t2559313007 * ___U24this_1;

public:
	inline static int32_t get_offset_of_mail_0() { return static_cast<int32_t>(offsetof(U3CrefreshMailU3Ec__AnonStorey2_t3518723615, ___mail_0)); }
	inline Mail_t3972794259 * get_mail_0() const { return ___mail_0; }
	inline Mail_t3972794259 ** get_address_of_mail_0() { return &___mail_0; }
	inline void set_mail_0(Mail_t3972794259 * value)
	{
		___mail_0 = value;
		Il2CppCodeGenWriteBarrier(&___mail_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CrefreshMailU3Ec__AnonStorey2_t3518723615, ___U24this_1)); }
	inline CTInbox_t2559313007 * get_U24this_1() const { return ___U24this_1; }
	inline CTInbox_t2559313007 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(CTInbox_t2559313007 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
