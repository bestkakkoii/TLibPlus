#ifndef _M_IX86
#error "The following code only works for x86!"
#endif

#include "framework.h"
#include "TDebuger.h"
#include "TMessage.h"

#include <exception>
#include <dbghelp.h>
//#pragma comment(lib,"Dbghelp.lib")


#include <string>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <vector>
#include <assert.h>
#include <winternl.h>
#include <regex>


#pragma comment(lib,"ntdll.lib")


//#include <memoryapi.h>
//#pragma comment(lib,"Kernel32.lib")

using namespace std;

string FormatErrorMessage(DWORD error, const string& msg);
void DisableSetUnhandledExceptionFilter();
long CALLBACK CrashInfocallback(_EXCEPTION_POINTERS* pexcp);

class Win32Exception : public runtime_error
{
private:
    DWORD m_error;

public:
    static _EXCEPTION_RECORD lpexc;
    static _CONTEXT lpcontext;
    static const wchar_t* Lasterrorcode;
    static bool enable;
    static bool isinit;
    static HWND ParendhWnd;

    Win32Exception(DWORD error, const string& msg) : runtime_error(FormatErrorMessage(error, msg)), m_error(error) { }

    DWORD GetErrorCode() const { return m_error; }
};


const wchar_t* Win32Exception::Lasterrorcode = L"";
_EXCEPTION_RECORD Win32Exception::lpexc = { 0 };
_CONTEXT Win32Exception::lpcontext = { 0 };
bool Win32Exception::enable = false;
bool Win32Exception::isinit = false;

HWND Win32Exception::ParendhWnd = 0;

DWORD TDebug::OriginalCRC32 = 0;

TDebug dgb;

void WINAPI ThreadProc(LPVOID lParam) {
    TDebug::OriginalCRC32 = dgb.TMemoryChecker();
    while (true)
    {
        for (size_t i = 0; i < 3; i++)
        {
            Sleep(1000);
        }
        DWORD NewCRC32 = dgb.TMemoryChecker();
        if (TDebug::OriginalCRC32 != NewCRC32)
        {
            MessageBox(0, L"Stop debugging program!", L"", MB_OK);
            TerminateProcess(GetCurrentProcess(), 0xBABEFACE);
        }
        dgb.TPEBChecker();
    }
}

TDebug::TDebug(void)
{
    //OriginalCRC32 = TMemoryChecker();
    //CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)ThreadProc, NULL, 0, NULL);
}


TDebug::~TDebug(void)
{

}


bool TDebug::TPEB_BegingDebugged()
{
    bool BegingDebugged = false;
    __asm
    {
        mov eax, fs: [0x30] ;               //获取PEB
        mov al, byte ptr ds : [eax + 0x2] ;//获取Peb.BegingDebugged
        mov BegingDebugged, al;
    }
    return BegingDebugged;                //如果为1则说明正在被调试
}

//反调试2
bool TDebug::TNQIP_ProcessDebugPort()
{
    long nDebugPort = 0;
    NtQueryInformationProcess(
        GetCurrentProcess(),//目标进程句柄
        ProcessDebugPort,   //查询信息的类型
        &nDebugPort,        //输出查询的信息
        sizeof(nDebugPort), //查询类型的大小
        NULL);
    return nDebugPort == 0xFFFFFFFF ? true : false;
}

#pragma warning(push)
#pragma warning(disable:6387)
PVOID TDebug::TGetPEB64()
{

    PVOID pPeb = 0;
#ifndef _WIN64
    // 1. There are two copies of PEB - PEB64 and PEB32 in WOW64 process
    // 2. PEB64 follows after PEB32
    // 3. This is true for version less then Windows 8, else __readfsdword returns address of real PEB64

    BOOL isWow64 = FALSE;
    typedef BOOL(WINAPI* pfnIsWow64Process)(HANDLE hProcess, PBOOL isWow64);
    pfnIsWow64Process fnIsWow64Process = (pfnIsWow64Process)
        GetProcAddress(GetModuleHandleA("Kernel32.dll"), "IsWow64Process");
    if (fnIsWow64Process(GetCurrentProcess(), &isWow64))
    {
        if (isWow64)
        {
            pPeb = (PVOID)__readfsdword(0x0C * sizeof(PVOID));
            pPeb = (PVOID)((PBYTE)pPeb + 0x1000);
        }
    }

#endif

    return pPeb;
}
#pragma   warning(pop)  

void TDebug::TCheckNtGlobalFlag()
{
    // PVOID pPeb = GetPEB();
    PVOID pPeb64 = TGetPEB64();
    DWORD offsetNtGlobalFlag = 0;
#ifdef _WIN64
    offsetNtGlobalFlag = 0xBC;
#else
    offsetNtGlobalFlag = 0x68;
#endif
    //DWORD NtGlobalFlag = *(PDWORD)((PBYTE)pPeb + offsetNtGlobalFlag);
    //if (NtGlobalFlag & NT_GLOBAL_FLAG_DEBUGGED)
    //{
        //std::cout << "Stop debugging program!" << std::endl;
        //exit(-1);
    //}
    if (pPeb64)
    {
        DWORD NtGlobalFlagWow64 = *(PDWORD)((PBYTE)pPeb64 + 0xBC);
        if (NtGlobalFlagWow64 & NT_GLOBAL_FLAG_DEBUGGED)
        {
            //std::cout << "Stop debugging program!" << std::endl;
            TerminateProcess(GetCurrentProcess(), 0xBABEFACE);
        }
    }
}

PIMAGE_NT_HEADERS TDebug::TGetImageNtHeaders(PBYTE pImageBase)
{
    PIMAGE_DOS_HEADER pImageDosHeader = (PIMAGE_DOS_HEADER)pImageBase;
    return (PIMAGE_NT_HEADERS)(pImageBase + pImageDosHeader->e_lfanew);
}
PIMAGE_SECTION_HEADER TDebug::TFindRDataSection(PBYTE pImageBase)
{
    static const std::string rdata = ".rdata";
    PIMAGE_NT_HEADERS pImageNtHeaders = TGetImageNtHeaders(pImageBase);
    PIMAGE_SECTION_HEADER pImageSectionHeader = IMAGE_FIRST_SECTION(pImageNtHeaders);
    int n = 0;
    for (; n < pImageNtHeaders->FileHeader.NumberOfSections; ++n)
    {
        if (rdata == (char*)pImageSectionHeader[n].Name)
        {
            break;
        }
    }
    return &pImageSectionHeader[n];
}

void TDebug::TCheckGlobalFlagsClearInProcess()
{
    PBYTE pImageBase = (PBYTE)GetModuleHandle(NULL);
    PIMAGE_NT_HEADERS pImageNtHeaders = TGetImageNtHeaders(pImageBase);
    PIMAGE_LOAD_CONFIG_DIRECTORY pImageLoadConfigDirectory = (PIMAGE_LOAD_CONFIG_DIRECTORY)(pImageBase
        + pImageNtHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG].VirtualAddress);
    if (pImageLoadConfigDirectory->GlobalFlagsClear != 0)
    {
        //std::cout << "Stop debugging program!" << std::endl;
        TerminateProcess(GetCurrentProcess(), 0xBABEFACE);
    }
}

void TDebug::TCheckGlobalFlagsClearInFile()
{
    HANDLE hExecutable = INVALID_HANDLE_VALUE;
    HANDLE hExecutableMapping = NULL;
    PBYTE pMappedImageBase = NULL;
    __try
    {
        PBYTE pImageBase = (PBYTE)GetModuleHandle(NULL);
        PIMAGE_SECTION_HEADER pImageSectionHeader = TFindRDataSection(pImageBase);
        TCHAR pszExecutablePath[MAX_PATH];
        DWORD dwPathLength = GetModuleFileName(NULL, pszExecutablePath, MAX_PATH);
        if (0 == dwPathLength) __leave;
        hExecutable = CreateFile(pszExecutablePath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
        if (INVALID_HANDLE_VALUE == hExecutable) __leave;
        hExecutableMapping = CreateFileMapping(hExecutable, NULL, PAGE_READONLY, 0, 0, NULL);
        if (NULL == hExecutableMapping) __leave;
        pMappedImageBase = (PBYTE)MapViewOfFile(hExecutableMapping, FILE_MAP_READ, 0, 0,
            pImageSectionHeader->PointerToRawData + pImageSectionHeader->SizeOfRawData);
        if (NULL == pMappedImageBase) __leave;
        PIMAGE_NT_HEADERS pImageNtHeaders = TGetImageNtHeaders(pMappedImageBase);
        PIMAGE_LOAD_CONFIG_DIRECTORY pImageLoadConfigDirectory = (PIMAGE_LOAD_CONFIG_DIRECTORY)(pMappedImageBase
            + (pImageSectionHeader->PointerToRawData
                + (pImageNtHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG].VirtualAddress - pImageSectionHeader->VirtualAddress)));
        if (pImageLoadConfigDirectory->GlobalFlagsClear != 0)
        {
            //std::cout << "Stop debugging program!" << std::endl;
            TerminateProcess(GetCurrentProcess(), 0xBABEFACE);
        }
    }
    __finally
    {
        if (NULL != pMappedImageBase)
            UnmapViewOfFile(pMappedImageBase);
        if (NULL != hExecutableMapping)
            CloseHandle(hExecutableMapping);
        if (INVALID_HANDLE_VALUE != hExecutable)
            CloseHandle(hExecutable);
    }
}

int TDebug::TGetHeapFlagsOffset(bool x64)
{
    return x64 ?
        true ? 0x70 : 0x14 : //x64 offsets
        true ? 0x40 : 0x0C; //x86 offsets
}
int TDebug::TGetHeapForceFlagsOffset(bool x64)
{
    return x64 ?
        true ? 0x74 : 0x18 : //x64 offsets
        true ? 0x44 : 0x10; //x86 offsets
}
void TDebug::TCheckHeap()
{
    //PVOID pPeb = GetPEB();
    PVOID pPeb64 = TGetPEB64();
    PVOID heap = 0;
    DWORD offsetProcessHeap = 0;
    PDWORD heapFlagsPtr = 0, heapForceFlagsPtr = 0;
    //BOOL x64 = FALSE;
#ifdef _WIN64
    x64 = TRUE;
    offsetProcessHeap = 0x30;
#else
    offsetProcessHeap = 0x18;
#endif
    // heap = (PVOID) * (PDWORD_PTR)((PBYTE)pPeb + offsetProcessHeap);
     //heapFlagsPtr = (PDWORD)((PBYTE)heap + GetHeapFlagsOffset(x64));
     //heapForceFlagsPtr = (PDWORD)((PBYTE)heap + GetHeapForceFlagsOffset(x64));
     //if (*heapFlagsPtr & ~HEAP_GROWABLE || *heapForceFlagsPtr != 0)
    // {
         //std::cout << "Stop debugging program!" << std::endl;
        // exit(-1);
     //}
    if (pPeb64)
    {
        heap = (PVOID) * (PDWORD_PTR)((PBYTE)pPeb64 + 0x30);
        heapFlagsPtr = (PDWORD)((PBYTE)heap + TGetHeapFlagsOffset(true));
        heapForceFlagsPtr = (PDWORD)((PBYTE)heap + TGetHeapForceFlagsOffset(true));
        if (*heapFlagsPtr & ~HEAP_GROWABLE || *heapForceFlagsPtr != 0)
        {
            // std::cout << "Stop debugging program!" << std::endl;
            TerminateProcess(GetCurrentProcess(), 0xBABEFACE);
        }
    }
}

int TDebug::TIsRemotePresent()
{
    BOOL isDebuggerPresent = FALSE;
    if (CheckRemoteDebuggerPresent(GetCurrentProcess(), &isDebuggerPresent))
    {
        if (isDebuggerPresent)
        {
            //std::cout << "Stop debugging program!" << std::endl;
            TerminateProcess(GetCurrentProcess(), 0xBABEFACE);
        }
    }
    return 0;
}

void TDebug::TPEBChecker()
{
    VMPBEGIN
    if (TPEB_BegingDebugged()) { TerminateProcess(GetCurrentProcess(), 0xBABEFACE); }
    if (TNQIP_ProcessDebugPort()) { TerminateProcess(GetCurrentProcess(), 0xBABEFACE); }
    if (IsDebuggerPresent()) { TerminateProcess(GetCurrentProcess(), 0xBABEFACE); }
    TCheckNtGlobalFlag();
    TCheckGlobalFlagsClearInProcess();
    TCheckGlobalFlagsClearInFile();
    TCheckHeap();
    TIsRemotePresent();
    VMPEND
}

DWORD TDebug::TCRC32(BYTE* ptr, DWORD Size)
{
    DWORD crcTable[256]{}, crcTmp1;

    // 动态生成CRC-32表
    for (int i = 0; i < 256; i++)
    {
        crcTmp1 = i;
        for (int j = 8; j > 0; j--)
        {
            if (crcTmp1 & 1) crcTmp1 = (crcTmp1 >> 1) ^ 0xEDB88320L;
            else crcTmp1 >>= 1;
        }
        crcTable[i] = crcTmp1;
    }
    // 计算CRC32值
    DWORD crcTmp2 = 0xFFFFFFFF;
    while (Size--)
    {
        crcTmp2 = ((crcTmp2 >> 8) & 0x00FFFFFF) ^ crcTable[(crcTmp2 ^ (*ptr)) & 0xFF];
        ptr++;
    }
    return (crcTmp2 ^ 0xFFFFFFFF);
}

// 检查内存中CRC32特征值
DWORD TDebug::TMemoryChecker()
{
    PIMAGE_DOS_HEADER pDosHeader = NULL;
    PIMAGE_NT_HEADERS pNtHeader = NULL;
    PIMAGE_SECTION_HEADER pSecHeader = NULL;
    DWORD ImageBase;

    // 获取基地址
    ImageBase = (DWORD)GetModuleHandle(NULL);

    // 定位到PE头结构
    pDosHeader = (PIMAGE_DOS_HEADER)ImageBase;
    pNtHeader = (PIMAGE_NT_HEADERS32)((DWORD)pDosHeader + pDosHeader->e_lfanew);

    pSecHeader = IMAGE_FIRST_SECTION(pNtHeader);
    DWORD va_base = ImageBase + pSecHeader->VirtualAddress;   // 定位代码节va基地址
    DWORD sec_len = pSecHeader->Misc.VirtualSize;             // 获取代码节长度

    DWORD CheckCRC32 = TCRC32((BYTE*)(va_base), sec_len);
    // printf(".text节CRC32 = %x \n", CheckCRC32);
    return CheckCRC32;
}

LONG CALLBACK ExceptionHandler(PEXCEPTION_POINTERS ExceptionInfo)
{

    PCONTEXT ctx = ExceptionInfo->ContextRecord;
    if (ctx->Dr0 != 0 || ctx->Dr1 != 0 || ctx->Dr2 != 0 || ctx->Dr3 != 0)
    {

        TerminateProcess(GetCurrentProcess(), 0xBABEFACE);
    }
    ctx->Eip += 2;
    return EXCEPTION_CONTINUE_EXECUTION;
}

bool TDebug::TAntiVEH()
{

    AddVectoredExceptionHandler(0, ExceptionHandler);
    long ret = GetLastError();
    __asm int 1h;
    return (ret == 0);
}

const wchar_t* TDebug::TExceptionDescription(DWORD code)
{
    switch (code) {
    case EXCEPTION_ACCESS_VIOLATION:         return L"EXCEPTION_ACCESS_VIOLATION";
    case EXCEPTION_ARRAY_BOUNDS_EXCEEDED:    return L"EXCEPTION_ARRAY_BOUNDS_EXCEEDED";
    case EXCEPTION_BREAKPOINT:               return L"EXCEPTION_BREAKPOINT";
    case EXCEPTION_DATATYPE_MISALIGNMENT:    return L"EXCEPTION_DATATYPE_MISALIGNMENT";
    case EXCEPTION_FLT_DENORMAL_OPERAND:     return L"EXCEPTION_FLT_DENORMAL_OPERAND";
    case EXCEPTION_FLT_DIVIDE_BY_ZERO:       return L"EXCEPTION_FLT_DIVIDE_BY_ZERO";
    case EXCEPTION_FLT_INEXACT_RESULT:       return L"EXCEPTION_FLT_INEXACT_RESULT";
    case EXCEPTION_FLT_INVALID_OPERATION:    return L"EXCEPTION_FLT_INVALID_OPERATION";
    case EXCEPTION_FLT_OVERFLOW:             return L"EXCEPTION_FLT_OVERFLOW";
    case EXCEPTION_FLT_STACK_CHECK:          return L"EXCEPTION_FLT_STACK_CHECK";
    case EXCEPTION_FLT_UNDERFLOW:            return L"EXCEPTION_FLT_UNDERFLOW";
    case EXCEPTION_ILLEGAL_INSTRUCTION:      return L"EXCEPTION_ILLEGAL_INSTRUCTION";
    case EXCEPTION_IN_PAGE_ERROR:            return L"EXCEPTION_IN_PAGE_ERROR";
    case EXCEPTION_INT_DIVIDE_BY_ZERO:       return L"EXCEPTION_INT_DIVIDE_BY_ZERO";
    case EXCEPTION_INT_OVERFLOW:             return L"EXCEPTION_INT_OVERFLOW";
    case EXCEPTION_INVALID_DISPOSITION:      return L"EXCEPTION_INVALID_DISPOSITION";
    case EXCEPTION_NONCONTINUABLE_EXCEPTION: return L"EXCEPTION_NONCONTINUABLE_EXCEPTION";
    case EXCEPTION_PRIV_INSTRUCTION:         return L"EXCEPTION_PRIV_INSTRUCTION";
    case EXCEPTION_SINGLE_STEP:              return L"EXCEPTION_SINGLE_STEP";
    case EXCEPTION_STACK_OVERFLOW:           return L"EXCEPTION_STACK_OVERFLOW";
    case EXCEPTION_GUARD_PAGE:                  return L"EXCEPTION_GUARD_PAGE";
    case EXCEPTION_INVALID_HANDLE:              return L"EXCEPTION_INVALID_HANDLE";
    default: return L"UNKNOWN EXCEPTION";
    }
}

bool TDebug::TInitMinDump(HWND hWnd, bool en)
{
    if (Win32Exception::isinit) return true;

    Win32Exception::ParendhWnd = hWnd;
    Win32Exception::lpexc = { 0 };
    Win32Exception::lpcontext = { 0 };
    Win32Exception::enable = en;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)CrashInfocallback);
    int ret = GetLastError();
    DisableSetUnhandledExceptionFilter();
    Win32Exception::isinit = true;
    return (ret == 0);
}

wchar_t* TDebug::TGetLastErrorMsg(_EXCEPTION_RECORD& lpexception, _CONTEXT& lpContext)
{
    lpexception = Win32Exception::lpexc;
    lpContext = Win32Exception::lpcontext;
    Win32Exception::lpexc = { 0 };
    Win32Exception::lpcontext = { 0 };
    wchar_t* msg = (wchar_t*)Win32Exception::Lasterrorcode;
    Win32Exception::Lasterrorcode = L"";
    return msg;
}

string FormatErrorMessage(DWORD error, const string& msg)
{
    static const int BUFFERLENGTH = 1024;
    vector<char> buf(BUFFERLENGTH);
    FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, 0, error, 0, buf.data(),
        BUFFERLENGTH - 1, 0);
    return string(buf.data()) + "   (" + msg + ")";
}

void ThrowLastErrorIf(bool expression, const string& msg)
{
    if (expression) {
        throw Win32Exception(GetLastError(), msg);
    }
}

void DisableSetUnhandledExceptionFilter() {
    try {
        void* addr = (void*)SetUnhandledExceptionFilter;
        if (addr) {
            unsigned char code[16]{};
            int size = 0;

            code[size++] = 0x33;
            code[size++] = 0xC0;
            code[size++] = 0xC2;
            code[size++] = 0x04;
            code[size++] = 0x00;

            DWORD dwOldFlag, dwTempFlag;
            VirtualProtect(addr, size, PAGE_EXECUTE_READWRITE, &dwOldFlag);
            WriteProcessMemory(GetCurrentProcess(), addr, code, size, NULL);
            VirtualProtect(addr, size, dwOldFlag, &dwTempFlag);
        }
    }
    catch (const Win32Exception& e) {
        // 异常处理
        SetLastError(e.GetErrorCode());
    }
}

long CALLBACK CrashInfocallback(_EXCEPTION_POINTERS* pexcp) {
    _EXCEPTION_RECORD e = *pexcp->ExceptionRecord;
    Win32Exception::lpexc = *pexcp->ExceptionRecord;
    Win32Exception::lpcontext = *pexcp->ContextRecord;

    DWORD code = e.ExceptionCode;
    wchar_t Buffer[256] = { 0 };
    wstring tmp = TDebug::TExceptionDescription(code);
    wchar_t* hex = _ltow(code, Buffer, 16);
    _wcsupr_s((wchar_t*)hex, wcslen(hex) + 1);
    wstring strHex = hex;
    tmp += L": 0x" + strHex;

    Win32Exception::Lasterrorcode = tmp.c_str();

    if (Win32Exception::enable)
    {
        throw pexcp;
    }
    else
    {
        MessageBox(Win32Exception::ParendhWnd, Win32Exception::Lasterrorcode, L"Exception Occurred", MB_OK | MB_ICONERROR);
    }
    return 0;
}