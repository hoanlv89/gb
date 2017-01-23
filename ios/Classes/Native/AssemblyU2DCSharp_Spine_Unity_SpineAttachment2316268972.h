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

#include "AssemblyU2DCSharp_Spine_Unity_SpineAttributeBase2518254498.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SpineAttachment
struct  SpineAttachment_t2316268972  : public SpineAttributeBase_t2518254498
{
public:
	// System.Boolean Spine.Unity.SpineAttachment::returnAttachmentPath
	bool ___returnAttachmentPath_2;
	// System.Boolean Spine.Unity.SpineAttachment::currentSkinOnly
	bool ___currentSkinOnly_3;
	// System.Boolean Spine.Unity.SpineAttachment::placeholdersOnly
	bool ___placeholdersOnly_4;
	// System.String Spine.Unity.SpineAttachment::slotField
	String_t* ___slotField_5;

public:
	inline static int32_t get_offset_of_returnAttachmentPath_2() { return static_cast<int32_t>(offsetof(SpineAttachment_t2316268972, ___returnAttachmentPath_2)); }
	inline bool get_returnAttachmentPath_2() const { return ___returnAttachmentPath_2; }
	inline bool* get_address_of_returnAttachmentPath_2() { return &___returnAttachmentPath_2; }
	inline void set_returnAttachmentPath_2(bool value)
	{
		___returnAttachmentPath_2 = value;
	}

	inline static int32_t get_offset_of_currentSkinOnly_3() { return static_cast<int32_t>(offsetof(SpineAttachment_t2316268972, ___currentSkinOnly_3)); }
	inline bool get_currentSkinOnly_3() const { return ___currentSkinOnly_3; }
	inline bool* get_address_of_currentSkinOnly_3() { return &___currentSkinOnly_3; }
	inline void set_currentSkinOnly_3(bool value)
	{
		___currentSkinOnly_3 = value;
	}

	inline static int32_t get_offset_of_placeholdersOnly_4() { return static_cast<int32_t>(offsetof(SpineAttachment_t2316268972, ___placeholdersOnly_4)); }
	inline bool get_placeholdersOnly_4() const { return ___placeholdersOnly_4; }
	inline bool* get_address_of_placeholdersOnly_4() { return &___placeholdersOnly_4; }
	inline void set_placeholdersOnly_4(bool value)
	{
		___placeholdersOnly_4 = value;
	}

	inline static int32_t get_offset_of_slotField_5() { return static_cast<int32_t>(offsetof(SpineAttachment_t2316268972, ___slotField_5)); }
	inline String_t* get_slotField_5() const { return ___slotField_5; }
	inline String_t** get_address_of_slotField_5() { return &___slotField_5; }
	inline void set_slotField_5(String_t* value)
	{
		___slotField_5 = value;
		Il2CppCodeGenWriteBarrier(&___slotField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
