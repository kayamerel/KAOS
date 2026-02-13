#pragma once

#include <stdint.h>

// UEFI base types

typedef bool BOOLEAN;
typedef intptr_t INTN;
typedef uintptr_t UINTN;
typedef int8_t INT8;
typedef uint8_t UINT8;
typedef int16_t INT16;
typedef uint16_t UINT16;
typedef int32_t INT32;
typedef uint32_t UINT32;
typedef int64_t INT64;
typedef uint64_t UINT64;
typedef uint8_t CHAR8;
typedef char16_t CHAR16;
typedef void VOID;

typedef struct EFI_GUID {
    UINT32 Data1;
    UINT16 Data2;
    UINT16 Data3;
    UINT8 Data4[8];
} EFI_GUID;

typedef UINTN EFI_STATUS;
typedef VOID* EFI_HANDLE;
typedef VOID* EFI_EVENT;
typedef UINT64 EFI_LBA;
typedef UINTN EFI_TPL;

typedef struct EFI_MAC_ADDRESS {
    UINT8 Addr[32];
} EFI_MAC_ADDRESS;

typedef struct EFI_IPv4_ADDRESS {
    UINT8 Addr[4];
} EFI_IPV4_ADDRESS;

typedef struct EFI_IPv6_ADDRESS {
    UINT8 Addr[16];
} EFI_IPV6_ADDRESS;

typedef union EFI_IP_ADDRESS {
    UINT32 Addr[4];
    EFI_IPV4_ADDRESS IPv4;
    EFI_IPV6_ADDRESS IPv6;
} EFI_IP_ADDRESS;

typedef const CONST;




