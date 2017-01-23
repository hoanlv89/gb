#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_LimitedInpu781897436.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Asn1.IndefiniteLengthInputStream
struct  IndefiniteLengthInputStream_t1999368943  : public LimitedInputStream_t781897436
{
public:
	// System.Int32 Org.BouncyCastle.Asn1.IndefiniteLengthInputStream::_lookAhead
	int32_t ____lookAhead_4;
	// System.Boolean Org.BouncyCastle.Asn1.IndefiniteLengthInputStream::_eofOn00
	bool ____eofOn00_5;

public:
	inline static int32_t get_offset_of__lookAhead_4() { return static_cast<int32_t>(offsetof(IndefiniteLengthInputStream_t1999368943, ____lookAhead_4)); }
	inline int32_t get__lookAhead_4() const { return ____lookAhead_4; }
	inline int32_t* get_address_of__lookAhead_4() { return &____lookAhead_4; }
	inline void set__lookAhead_4(int32_t value)
	{
		____lookAhead_4 = value;
	}

	inline static int32_t get_offset_of__eofOn00_5() { return static_cast<int32_t>(offsetof(IndefiniteLengthInputStream_t1999368943, ____eofOn00_5)); }
	inline bool get__eofOn00_5() const { return ____eofOn00_5; }
	inline bool* get_address_of__eofOn00_5() { return &____eofOn00_5; }
	inline void set__eofOn00_5(bool value)
	{
		____eofOn00_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
