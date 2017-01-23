#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Byte
struct Byte_t3683104436;
// System.Int32
struct Int32_t2071877448;
// System.Int16
struct Int16_t4041245914;
// System.UInt16
struct UInt16_t986882611;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Normalization
struct  Normalization_t891178407  : public Il2CppObject
{
public:

public:
};

struct Normalization_t891178407_StaticFields
{
public:
	// System.Byte* Mono.Globalization.Unicode.Normalization::props
	uint8_t* ___props_0;
	// System.Int32* Mono.Globalization.Unicode.Normalization::mappedChars
	int32_t* ___mappedChars_1;
	// System.Int16* Mono.Globalization.Unicode.Normalization::charMapIndex
	int16_t* ___charMapIndex_2;
	// System.Int16* Mono.Globalization.Unicode.Normalization::helperIndex
	int16_t* ___helperIndex_3;
	// System.UInt16* Mono.Globalization.Unicode.Normalization::mapIdxToComposite
	uint16_t* ___mapIdxToComposite_4;
	// System.Byte* Mono.Globalization.Unicode.Normalization::combiningClass
	uint8_t* ___combiningClass_5;
	// System.Object Mono.Globalization.Unicode.Normalization::forLock
	Il2CppObject * ___forLock_6;
	// System.Boolean Mono.Globalization.Unicode.Normalization::isReady
	bool ___isReady_7;

public:
	inline static int32_t get_offset_of_props_0() { return static_cast<int32_t>(offsetof(Normalization_t891178407_StaticFields, ___props_0)); }
	inline uint8_t* get_props_0() const { return ___props_0; }
	inline uint8_t** get_address_of_props_0() { return &___props_0; }
	inline void set_props_0(uint8_t* value)
	{
		___props_0 = value;
	}

	inline static int32_t get_offset_of_mappedChars_1() { return static_cast<int32_t>(offsetof(Normalization_t891178407_StaticFields, ___mappedChars_1)); }
	inline int32_t* get_mappedChars_1() const { return ___mappedChars_1; }
	inline int32_t** get_address_of_mappedChars_1() { return &___mappedChars_1; }
	inline void set_mappedChars_1(int32_t* value)
	{
		___mappedChars_1 = value;
	}

	inline static int32_t get_offset_of_charMapIndex_2() { return static_cast<int32_t>(offsetof(Normalization_t891178407_StaticFields, ___charMapIndex_2)); }
	inline int16_t* get_charMapIndex_2() const { return ___charMapIndex_2; }
	inline int16_t** get_address_of_charMapIndex_2() { return &___charMapIndex_2; }
	inline void set_charMapIndex_2(int16_t* value)
	{
		___charMapIndex_2 = value;
	}

	inline static int32_t get_offset_of_helperIndex_3() { return static_cast<int32_t>(offsetof(Normalization_t891178407_StaticFields, ___helperIndex_3)); }
	inline int16_t* get_helperIndex_3() const { return ___helperIndex_3; }
	inline int16_t** get_address_of_helperIndex_3() { return &___helperIndex_3; }
	inline void set_helperIndex_3(int16_t* value)
	{
		___helperIndex_3 = value;
	}

	inline static int32_t get_offset_of_mapIdxToComposite_4() { return static_cast<int32_t>(offsetof(Normalization_t891178407_StaticFields, ___mapIdxToComposite_4)); }
	inline uint16_t* get_mapIdxToComposite_4() const { return ___mapIdxToComposite_4; }
	inline uint16_t** get_address_of_mapIdxToComposite_4() { return &___mapIdxToComposite_4; }
	inline void set_mapIdxToComposite_4(uint16_t* value)
	{
		___mapIdxToComposite_4 = value;
	}

	inline static int32_t get_offset_of_combiningClass_5() { return static_cast<int32_t>(offsetof(Normalization_t891178407_StaticFields, ___combiningClass_5)); }
	inline uint8_t* get_combiningClass_5() const { return ___combiningClass_5; }
	inline uint8_t** get_address_of_combiningClass_5() { return &___combiningClass_5; }
	inline void set_combiningClass_5(uint8_t* value)
	{
		___combiningClass_5 = value;
	}

	inline static int32_t get_offset_of_forLock_6() { return static_cast<int32_t>(offsetof(Normalization_t891178407_StaticFields, ___forLock_6)); }
	inline Il2CppObject * get_forLock_6() const { return ___forLock_6; }
	inline Il2CppObject ** get_address_of_forLock_6() { return &___forLock_6; }
	inline void set_forLock_6(Il2CppObject * value)
	{
		___forLock_6 = value;
		Il2CppCodeGenWriteBarrier(&___forLock_6, value);
	}

	inline static int32_t get_offset_of_isReady_7() { return static_cast<int32_t>(offsetof(Normalization_t891178407_StaticFields, ___isReady_7)); }
	inline bool get_isReady_7() const { return ___isReady_7; }
	inline bool* get_address_of_isReady_7() { return &___isReady_7; }
	inline void set_isReady_7(bool value)
	{
		___isReady_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
