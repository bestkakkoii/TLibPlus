#pragma once

#include <windows.h>
#include "Asm/MgAsmCom.h"
#include "Asm/MgAsmComDef.h"
#include <xstring>
//#include <winternl.h>



#define NT_SUCCESS(x) ((x) >= 0)

constexpr auto FINDDATATYPE_FINDDATAEX = 1;
constexpr auto FINDDATATYPE_FINDDOUBLEEX = 2;
constexpr auto FINDDATATYPE_FINDFLOATEX = 3;
constexpr auto FINDDATATYPE_FINDINTEX = 4;
constexpr auto FINDDATATYPE_FINDSTRINGEX = 5;
constexpr auto ProcessBasicInformation = 0;

typedef struct _INT
{
    INT t;
}_INT;

typedef struct _WCHAR
{
    WCHAR* a;
}_WCHAR;

typedef struct _CHAR
{
    CHAR* a;
}_CHAR;

typedef struct _LONG
{
    LONG a;
}_LONG;

typedef struct _LONGLONG
{
    LONGLONG a;
}_LONGLONG;

typedef struct _SHORT
{
    SHORT a;
}_SHORT;

typedef struct _BYTE
{
    BYTE a;
}_BYTE;

typedef struct _UINT
{
    UINT a;
}_UINT;

typedef struct _ULONG
{
    ULONG a;
}_ULONG;

typedef struct _USHORT
{
    USHORT a;
}_USHORT;

typedef struct _ULONGLONG
{
    ULONGLONG a;
}_ULONGLONG;

typedef struct _BOOL
{
    BOOL a;
}_BOOL;

typedef struct  _FindDataInfo //线程传参数结构体
{
    HANDLE hprocess;
    DWORD dwncount;	//要找的地址数据个数
    int count;//记录个数
    double double_value_min;
    double double_value_max;
    float float_value_min;
    float float_value_max;
    LONG int_value_min;
    LONG int_value_max;
    BYTE FindIntType;//找0:32位,1:16位,2:8位
    LONG FindDataType;//找数据的类型
    wchar_t Findstring[MAX_PATH];
    DWORD Finddata[MAX_PATH];  //要找的数据字符串
    DWORD dwbegin[MAX_PATH * 10];
    DWORD dwend[MAX_PATH * 10];
    bool bfindindex[MAX_PATH * 10];//做地址标志位,标识多线程要处理的地址
    wchar_t* retstr;
    CRITICAL_SECTION m_mutex;//多线程临界区
    _FindDataInfo()
    {
        hprocess = NULL;
        retstr = NULL;
        dwncount = 0;
        count = 0;
        double_value_min = 0;
        double_value_max = 0;
        float_value_min = 0;
        float_value_max = 0;
        int_value_min = 0;
        int_value_max = 0;
        FindIntType = -1;//找0:32位,1:16位,2:8位
        FindDataType = -1;//找数据的类型
        memset(Finddata, 0, MAX_PATH * sizeof(DWORD));
        memset(Findstring, 0, MAX_PATH);
        memset(dwbegin, 0, MAX_PATH * 10);
        memset(dwend, 0, MAX_PATH * 10);
        memset(bfindindex, 0, MAX_PATH * 10);	//模式为false
    }
}FindDataInfo, * PFindDataInfo;

typedef struct {
    unsigned short Length;
    unsigned short MaximumLength;
    unsigned short* Buffer;
} UNICODE_STRING;
typedef UNICODE_STRING* PUNICODE_STRING;

typedef struct _CLIENT_ID {
    HANDLE UniqueProcess;
    HANDLE UniqueThread;
} CLIENT_ID;
typedef CLIENT_ID* PCLIENT_ID;

typedef struct _OBJECT_ATTRIBUTES {
    ULONG  Length;
    HANDLE  RootDirectory;
    PUNICODE_STRING  ObjectName;
    ULONG  Attributes;
    PVOID  SecurityDescriptor;
    PVOID  SecurityQualityOfService;
} OBJECT_ATTRIBUTES, * POBJECT_ATTRIBUTES;
typedef CONST OBJECT_ATTRIBUTES* PCOBJECT_ATTRIBUTES;

typedef struct {
    unsigned long AllocationSize;
    unsigned long ActualSize;
    unsigned long Flags;
    unsigned long Unknown1;
    UNICODE_STRING Unknown2;
    void* InputHandle;
    void* OutputHandle;
    void* ErrorHandle;
    UNICODE_STRING CurrentDirectory;
    void* CurrentDirectoryHandle;
    UNICODE_STRING SearchPaths;
    UNICODE_STRING ApplicationName;
    UNICODE_STRING CommandLine;
    void* EnvironmentBlock;
    unsigned long Unknown[9];
    UNICODE_STRING Unknown3;
    UNICODE_STRING Unknown4;
    UNICODE_STRING Unknown5;
    UNICODE_STRING Unknown6;
} PROCESS_PARAMETERS;

typedef struct {
    unsigned long AllocationSize;
    unsigned long Unknown1;
    void* ProcessHinstance;
    void* ListDlls;
    PROCESS_PARAMETERS* ProcessParameters;
    unsigned long Unknown2;
    void* Heap;
} PEB;

typedef struct {
    unsigned int ExitStatus;
    PEB* PebBaseAddress;
    unsigned int AffinityMask;
    unsigned int BasePriority;
    unsigned long UniqueProcessId;
    unsigned long InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION;

typedef struct _PROCESS_BASIC_INFORMATION32 {
    NTSTATUS ExitStatus;
    UINT32 PebBaseAddress;
    UINT32 AffinityMask;
    UINT32 BasePriority;
    UINT32 UniqueProcessId;
    UINT32 InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION32;

typedef struct _UNICODE_STRING32
{
    USHORT Length;
    USHORT MaximumLength;
    PWSTR Buffer;
} UNICODE_STRING32, * PUNICODE_STRING32;

typedef struct _PEB32
{
    UCHAR InheritedAddressSpace;
    UCHAR ReadImageFileExecOptions;
    UCHAR BeingDebugged;
    UCHAR BitField;
    ULONG Mutant;
    ULONG ImageBaseAddress;
    ULONG Ldr;
    ULONG ProcessParameters;
    ULONG SubSystemData;
    ULONG ProcessHeap;
    ULONG FastPebLock;
    ULONG AtlThunkSListPtr;
    ULONG IFEOKey;
    ULONG CrossProcessFlags;
    ULONG UserSharedInfoPtr;
    ULONG SystemReserved;
    ULONG AtlThunkSListPtr32;
    ULONG ApiSetMap;
} PEB32, * PPEB32;

typedef struct _PEB_LDR_DATA32
{
    ULONG Length;
    BOOLEAN Initialized;
    ULONG SsHandle;
    LIST_ENTRY32 InLoadOrderModuleList;
    LIST_ENTRY32 InMemoryOrderModuleList;
    LIST_ENTRY32 InInitializationOrderModuleList;
    ULONG EntryInProgress;
} PEB_LDR_DATA32, * PPEB_LDR_DATA32;

typedef struct _LDR_DATA_TABLE_ENTRY32
{
    LIST_ENTRY32 InLoadOrderLinks;
    LIST_ENTRY32 InMemoryOrderModuleList;
    LIST_ENTRY32 InInitializationOrderModuleList;
    ULONG DllBase;
    ULONG EntryPoint;
    ULONG SizeOfImage;
    UNICODE_STRING32 FullDllName;
    UNICODE_STRING32 BaseDllName;
    ULONG Flags;
    USHORT LoadCount;
    USHORT TlsIndex;
    union
    {
        LIST_ENTRY32 HashLinks;
        ULONG SectionPointer;
    };
    ULONG CheckSum;
    union
    {
        ULONG TimeDateStamp;
        ULONG LoadedImports;
    };
    ULONG EntryPointActivationContext;
    ULONG PatchInformation;
} LDR_DATA_TABLE_ENTRY32, * PLDR_DATA_TABLE_ENTRY32;

typedef struct _PROCESS_BASIC_INFORMATION64 {
    NTSTATUS ExitStatus;
    UINT32 Reserved0;
    UINT64 PebBaseAddress;
    UINT64 AffinityMask;
    UINT32 BasePriority;
    UINT32 Reserved1;
    UINT64 UniqueProcessId;
    UINT64 InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION64;
typedef struct _PEB64
{
    UCHAR InheritedAddressSpace;
    UCHAR ReadImageFileExecOptions;
    UCHAR BeingDebugged;
    UCHAR BitField;
    ULONG64 Mutant;
    ULONG64 ImageBaseAddress;
    ULONG64 Ldr;
    ULONG64 ProcessParameters;
    ULONG64 SubSystemData;
    ULONG64 ProcessHeap;
    ULONG64 FastPebLock;
    ULONG64 AtlThunkSListPtr;
    ULONG64 IFEOKey;
    ULONG64 CrossProcessFlags;
    ULONG64 UserSharedInfoPtr;
    ULONG SystemReserved;
    ULONG AtlThunkSListPtr32;
    ULONG64 ApiSetMap;
} PEB64, * PPEB64;

typedef struct _PEB_LDR_DATA64
{
    ULONG Length;
    BOOLEAN Initialized;
    ULONG64 SsHandle;
    LIST_ENTRY64 InLoadOrderModuleList;
    LIST_ENTRY64 InMemoryOrderModuleList;
    LIST_ENTRY64 InInitializationOrderModuleList;
    ULONG64 EntryInProgress;
} PEB_LDR_DATA64, * PPEB_LDR_DATA64;

typedef struct _UNICODE_STRING64
{
    USHORT Length;
    USHORT MaximumLength;
    ULONG64 Buffer;
} UNICODE_STRING64, * PUNICODE_STRING64;

typedef struct _LDR_DATA_TABLE_ENTRY64
{
    LIST_ENTRY64 InLoadOrderLinks;
    LIST_ENTRY64 InMemoryOrderModuleList;
    LIST_ENTRY64 InInitializationOrderModuleList;
    ULONG64 DllBase;
    ULONG64 EntryPoint;
    ULONG SizeOfImage;
    UNICODE_STRING64 FullDllName;
    UNICODE_STRING64 BaseDllName;
    ULONG Flags;
    USHORT LoadCount;
    USHORT TlsIndex;
    union
    {
        LIST_ENTRY64 HashLinks;
        ULONG64 SectionPointer;
    };
    ULONG CheckSum;
    union
    {
        ULONG TimeDateStamp;
        ULONG64 LoadedImports;
    };
    ULONG64 EntryPointActivationContext;
    ULONG64 PatchInformation;
} LDR_DATA_TABLE_ENTRY64, * PLDR_DATA_TABLE_ENTRY64;

typedef struct _IO_STATUS_BLOCK {
#pragma warning(push)
#pragma warning(disable: 4201) // we'll always use the Microsoft compiler
    union {
        NTSTATUS Status;
        PVOID Pointer;
    } DUMMYUNIONNAME;
#pragma warning(pop)

    ULONG_PTR Information;
} IO_STATUS_BLOCK, * PIO_STATUS_BLOCK;

#ifndef InitializeObjectAttributes
#define InitializeObjectAttributes( p, n, a, r, s ) { \
    (p)->Length = sizeof( OBJECT_ATTRIBUTES );          \
    (p)->RootDirectory = r;                             \
    (p)->Attributes = a;                                \
    (p)->ObjectName = n;                                \
    (p)->SecurityDescriptor = s;                        \
    (p)->SecurityQualityOfService = NULL;               \
    }
#endif

typedef
VOID
(NTAPI* PIO_APC_ROUTINE) (
    IN PVOID ApcContext,
    IN PIO_STATUS_BLOCK IoStatusBlock,
    IN ULONG Reserved
    );


typedef NTSTATUS(NTAPI* pfnNtWow64QueryInformationProcess64)(
    IN HANDLE ProcessHandle,
    IN ULONG ProcessInformationClass,
    OUT PVOID ProcessInformation,
    IN ULONG ProcessInformationLength,
    OUT PULONG ReturnLength OPTIONAL
    );


typedef NTSTATUS(NTAPI* pfnNtWow64ReadVirtualMemory64)(
    IN HANDLE ProcessHandle,
    IN PVOID64 BaseAddress,
    OUT PVOID Buffer,
    IN ULONG64 Size,
    OUT PULONG64 NumberOfBytesRead
    );

typedef NTSTATUS(NTAPI* pfnNtWow64WriteVirtualMemory64)(
    IN  HANDLE   ProcessHandle,
    IN  ULONG64  BaseAddress,
    OUT PVOID    BufferData,
    IN  ULONG64  BufferLength,
    OUT PULONG64 ReturnLength OPTIONAL);

typedef NTSTATUS(NTAPI* pfnNtQueryInformationProcess)(
    HANDLE ProcessHandle,
    ULONG ProcessInformationClass,
    PVOID ProcessInformation,
    UINT32 ProcessInformationLength,
    UINT32* ReturnLength);

typedef NTSTATUS(NTAPI* pfnZwOpenProcess)(
    OUT PHANDLE  ProcessHandle,
    IN ACCESS_MASK  DesiredAccess,
    IN POBJECT_ATTRIBUTES ObjectAttributes,
    __in_opt PCLIENT_ID  ClientId);


typedef NTSTATUS(NTAPI* pfnNtReadVirtualMemory)(
    IN HANDLE hProcess,
    IN LPCVOID lpBaseAddress,
    OUT LPVOID lpBuffer,
    IN DWORD nSize,
    OUT LPDWORD lpNumberOfBytesRead);

typedef NTSTATUS(NTAPI* pfnNtWriteVirtualMemory)(
    IN HANDLE hProcess,
    OUT LPVOID lpBaseAddress,
    IN LPVOID lpBuffer,
    IN DWORD nSize,
    OUT LPDWORD lpNumberOfBytesWritten);

typedef NTSTATUS(NTAPI* pfnZwVirtualProtect)(
    LPVOID lpAddress,
    DWORD dwSize,
    DWORD flNewProtect,
    PDWORD lpflOldProtect);

typedef NTSTATUS(NTAPI* pfnZwVirtualProtectEx)(
    HANDLE hProcess,
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flNewProtect,
    PDWORD lpflOldProtect);


typedef NTSTATUS(NTAPI* pfnCreateRemoteThread)(
    __in          HANDLE hProcess,
    __in          LPSECURITY_ATTRIBUTES lpThreadAttributes,
    __in          SIZE_T dwStackSize,
    __in          LPTHREAD_START_ROUTINE lpStartAddress,
    __in          LPVOID lpParameter,
    __in          DWORD dwCreationFlags,
    __out         LPDWORD lpThreadId
    );

typedef NTSTATUS(NTAPI* pfnNtWriteVirtualMemory)(
    HANDLE ProcessHandle,
    PVOID BaseAddress,
    PVOID Buffer,
    ULONG NumberOfBytesToWrite,
    PULONG NumberOfBytesWritten);

typedef NTSTATUS(NTAPI* pfnNtOpenProcess)(
    PHANDLE ProcessHandle,
    ACCESS_MASK DesiredAccess,
    POBJECT_ATTRIBUTES ObjectAttributes,
    PCLIENT_ID ClientId);

typedef NTSTATUS(NTAPI* pfnNtOpenThread)(
    PHANDLE ThreadHandle,
    ACCESS_MASK AccessMask,
    POBJECT_ATTRIBUTES ObjectAttributes,
    PCLIENT_ID);

typedef NTSTATUS(NTAPI* pfnNtSuspendThread)(
    HANDLE ThreadHandle,
    PULONG SuspendCount);

typedef NTSTATUS(NTAPI* pfnNtAlertResumeThread)(
    HANDLE ThreadHandle,
    PULONG SuspendCount);

typedef NTSTATUS(NTAPI* pfnNtAllocateVirtualMemory)(
    HANDLE ProcessHandle,
    PVOID* BaseAddress,
    ULONG_PTR ZeroBits,
    PSIZE_T RegionSize,
    ULONG AllocationType,
    ULONG Protect);

typedef NTSTATUS(NTAPI* pfnNtQueueApcThread)(
    HANDLE ThreadHandle,
    PIO_APC_ROUTINE ApcRoutine,
    PVOID ApcRoutineContext OPTIONAL,
    PIO_STATUS_BLOCK ApcStatusBlock OPTIONAL,
    ULONG ApcReserved OPTIONAL);

typedef NTSTATUS(NTAPI* pfnNtCreateThreadEx)(
    OUT PHANDLE hThread,
    IN ACCESS_MASK DesiredAccess,
    IN PVOID ObjectAttributes,
    IN HANDLE ProcessHandle,
    IN PVOID lpStartAddress,
    IN PVOID lpParameter,
    IN ULONG Flags,
    IN SIZE_T StackZeroBits,
    IN SIZE_T SizeOfStackCommit,
    IN SIZE_T SizeOfStackReserve,
    OUT PVOID lpBytesBuffer);

typedef NTSTATUS(NTAPI* pfnNtProtectVirtualMemory)(
    IN HANDLE               ProcessHandle,
    IN OUT PVOID* BaseAddress,
    IN OUT PULONG           NumberOfBytesToProtect,
    IN ULONG                NewAccessProtection,
    OUT PULONG              OldAccessProtection);


typedef NTSTATUS(NTAPI* pfnNtWriteVirtualMemory)(
    IN  HANDLE ProcessHandle,
    OUT PVOID BaseAddress,
    IN  PVOID Buffer,
    IN  ULONG BufferSize,
    OUT PULONG NumberOfBytesWritten OPTIONAL);


//typedef BOOL(__stdcall* myDeviceIoControl)(HANDLE hDevice, DWORD dwIoControlCode,
//	LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer,
//	DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped);
//
//typedef DWORD(__stdcall* myGetTickCount)();
//
//typedef void(__stdcall* mySleep)(DWORD dwMilliseconds);
//
//
//typedef DWORD(_stdcall* myGetWindowThreadProcessId)(HWND hWnd, LPDWORD lpdwProcessId);


typedef NTSTATUS(WINAPI* pfnTEST)(
    IN LONG p0,
    OUT LONG p1,
    IN LONG p2,
    IN LONG p3);


class TMemoryAPI
{
public:
    TMemoryAPI(void);
    ~TMemoryAPI(void);
    CMgAsmBase tasm;
    CMgDisasmBase tdsm;
public:
    HMODULE NtdllModule;
    pfnNtWow64QueryInformationProcess64 NtWow64QueryInformationProcess64;
    pfnNtWow64ReadVirtualMemory64 NtWow64ReadVirtualMemory64;
    pfnNtWow64WriteVirtualMemory64 NtWow64WriteVirtualMemory64;
    pfnNtQueryInformationProcess NtQueryInformationProcess;
    pfnNtOpenProcess NtOpenProcess;
    pfnNtOpenThread NtOpenThread;
    pfnNtQueueApcThread NtQueueApcThread;
    pfnNtAllocateVirtualMemory NtAllocateVirtualMemory;
    pfnNtSuspendThread NtSuspendThread;
    pfnNtCreateThreadEx NtCreateThreadEx;
    pfnNtProtectVirtualMemory NtProtectVirtualMemory;
    pfnNtReadVirtualMemory NtReadVirtualMemory;
    pfnNtWriteVirtualMemory NtWriteVirtualMemory;


    pfnZwOpenProcess ZwOpenProcess;
    pfnZwVirtualProtectEx ZwProtectVirtualMemory;



    LONG TAsmCall(LONG hwnd, LONG mode, LONG timeout);
    bool TAsmAdd(wchar_t* asm_ins);
    bool TAsmClear();
    bool TAsmCode(LONG base_addr, wchar_t* retstr);
    bool TAssemble(wchar_t* asm_code, LONG base_addr, LONG is_upper, wchar_t* retstr);
    const wchar_t* TReadIntTraverseAddr(HWND hWnd, long long addr, long long offest, long count, long type);
    LONGLONG TReadIntAddr(HWND hWnd, long long addr, long type);
    bool TReadDataAddr(LONG hWnd, long long addr, wchar_t* retstr, LONG len);
    bool TWriteIntAddr(HWND hWnd, long long addr, long type, int ivalue, short svalue, BYTE bvalue, long long llvalue);
    bool TWriteDataAddr(LONG hwnd, long long addr, wchar_t* data);
    LONGLONG TGetFindDataAddr(wchar_t* strs, HWND hWnd);
    bool TFreeProcessMemory(HWND hwnd);
    void* TNew(wchar_t* sztype, long size);
    void* TMalloc(wchar_t* sztype, long size);
private:
    int retstringlen;//线程函数返回地址的长度
    CMgAsmBase::t_asmmodel  am;
    std::string asmcodearry;//存储AsmAdd的指令
    char Asmcalladdr[MAX_PATH]; //记录保存CALL指令
    LPVOID allocatememory;
private:
    DWORD TGetCallstartData(DWORD Allocaddr, DWORD* startaddr, char* code);
    bool TGetDataValue(wchar_t* strs, DWORD* Data_range, int& nconut);
    HANDLE My_NtOpenThread(DWORD dwProcessId, DWORD dwThreadId);
    HANDLE My_OpenProcess(DWORD dwProcessId);
    HANDLE My_NtOpenProcess(DWORD dwProcessId);
    HANDLE My_ZwOpenProcess(DWORD dwProcessId);
    LONGLONG GetModuleBase(HANDLE m_ProcessHandle, wchar_t* name, BOOL bTarget, BOOL bSource, SYSTEM_INFO si);
};