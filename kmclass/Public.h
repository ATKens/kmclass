/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_kmclass,
    0x8ddc557c,0x3fbc,0x4100,0x89,0xe6,0xed,0x6c,0x8b,0xe3,0x79,0x19);
// {8ddc557c-3fbc-4100-89e6-ed6c8be37919}
