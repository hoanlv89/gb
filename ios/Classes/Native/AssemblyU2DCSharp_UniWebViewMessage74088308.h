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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewMessage
struct  UniWebViewMessage_t74088308 
{
public:
	union
	{
		struct
		{
			// System.String UniWebViewMessage::<rawMessage>k__BackingField
			String_t* ___U3CrawMessageU3Ek__BackingField_0;
			// System.String UniWebViewMessage::<scheme>k__BackingField
			String_t* ___U3CschemeU3Ek__BackingField_1;
			// System.String UniWebViewMessage::<path>k__BackingField
			String_t* ___U3CpathU3Ek__BackingField_2;
			// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::<args>k__BackingField
			Dictionary_2_t3943999495 * ___U3CargsU3Ek__BackingField_3;
		};
		uint8_t UniWebViewMessage_t74088308__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CrawMessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UniWebViewMessage_t74088308, ___U3CrawMessageU3Ek__BackingField_0)); }
	inline String_t* get_U3CrawMessageU3Ek__BackingField_0() const { return ___U3CrawMessageU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CrawMessageU3Ek__BackingField_0() { return &___U3CrawMessageU3Ek__BackingField_0; }
	inline void set_U3CrawMessageU3Ek__BackingField_0(String_t* value)
	{
		___U3CrawMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrawMessageU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CschemeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UniWebViewMessage_t74088308, ___U3CschemeU3Ek__BackingField_1)); }
	inline String_t* get_U3CschemeU3Ek__BackingField_1() const { return ___U3CschemeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CschemeU3Ek__BackingField_1() { return &___U3CschemeU3Ek__BackingField_1; }
	inline void set_U3CschemeU3Ek__BackingField_1(String_t* value)
	{
		___U3CschemeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CschemeU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CpathU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UniWebViewMessage_t74088308, ___U3CpathU3Ek__BackingField_2)); }
	inline String_t* get_U3CpathU3Ek__BackingField_2() const { return ___U3CpathU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CpathU3Ek__BackingField_2() { return &___U3CpathU3Ek__BackingField_2; }
	inline void set_U3CpathU3Ek__BackingField_2(String_t* value)
	{
		___U3CpathU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpathU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CargsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UniWebViewMessage_t74088308, ___U3CargsU3Ek__BackingField_3)); }
	inline Dictionary_2_t3943999495 * get_U3CargsU3Ek__BackingField_3() const { return ___U3CargsU3Ek__BackingField_3; }
	inline Dictionary_2_t3943999495 ** get_address_of_U3CargsU3Ek__BackingField_3() { return &___U3CargsU3Ek__BackingField_3; }
	inline void set_U3CargsU3Ek__BackingField_3(Dictionary_2_t3943999495 * value)
	{
		___U3CargsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CargsU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UniWebViewMessage
struct UniWebViewMessage_t74088308_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CrawMessageU3Ek__BackingField_0;
			char* ___U3CschemeU3Ek__BackingField_1;
			char* ___U3CpathU3Ek__BackingField_2;
			Dictionary_2_t3943999495 * ___U3CargsU3Ek__BackingField_3;
		};
		uint8_t UniWebViewMessage_t74088308__padding[1];
	};
};
// Native definition for COM marshalling of UniWebViewMessage
struct UniWebViewMessage_t74088308_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CrawMessageU3Ek__BackingField_0;
			Il2CppChar* ___U3CschemeU3Ek__BackingField_1;
			Il2CppChar* ___U3CpathU3Ek__BackingField_2;
			Dictionary_2_t3943999495 * ___U3CargsU3Ek__BackingField_3;
		};
		uint8_t UniWebViewMessage_t74088308__padding[1];
	};
};
