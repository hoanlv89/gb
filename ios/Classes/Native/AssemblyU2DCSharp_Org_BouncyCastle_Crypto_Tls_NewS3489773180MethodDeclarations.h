#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Org.BouncyCastle.Crypto.Tls.NewSessionTicket
struct NewSessionTicket_t3489773180;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.NewSessionTicket::.ctor(System.Int64,System.Byte[])
extern "C"  void NewSessionTicket__ctor_m1217715498 (NewSessionTicket_t3489773180 * __this, int64_t ___ticketLifetimeHint0, ByteU5BU5D_t3397334013* ___ticket1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Tls.NewSessionTicket::get_TicketLifetimeHint()
extern "C"  int64_t NewSessionTicket_get_TicketLifetimeHint_m1793609451 (NewSessionTicket_t3489773180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.NewSessionTicket::get_Ticket()
extern "C"  ByteU5BU5D_t3397334013* NewSessionTicket_get_Ticket_m1826280234 (NewSessionTicket_t3489773180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.NewSessionTicket::Encode(System.IO.Stream)
extern "C"  void NewSessionTicket_Encode_m2324990326 (NewSessionTicket_t3489773180 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.NewSessionTicket Org.BouncyCastle.Crypto.Tls.NewSessionTicket::Parse(System.IO.Stream)
extern "C"  NewSessionTicket_t3489773180 * NewSessionTicket_Parse_m1250400454 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
