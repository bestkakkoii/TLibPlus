#pragma once
#include <windows.h>


constexpr auto FLG_HEAP_ENABLE_TAIL_CHECK   = 0x10;
constexpr auto FLG_HEAP_ENABLE_FREE_CHECK   = 0x20;
constexpr auto FLG_HEAP_VALIDATE_PARAMETERS = 0x40;
#define NT_GLOBAL_FLAG_DEBUGGED (FLG_HEAP_ENABLE_TAIL_CHECK | FLG_HEAP_ENABLE_FREE_CHECK | FLG_HEAP_VALIDATE_PARAMETERS)


class TDebug
{
public:
	TDebug(void);
	~TDebug(void);
public:
	static DWORD OriginalCRC32;
	bool TAntiVEH();
	bool TInitMinDump(HWND hWnd, bool en);
	wchar_t* TGetLastErrorMsg(_EXCEPTION_RECORD& lpexception, _CONTEXT& lpContext);
	void TPEBChecker();
	DWORD TMemoryChecker();
	static const wchar_t* TExceptionDescription(DWORD code);
private:

	DWORD TCRC32(BYTE* ptr, DWORD Size);
	bool TPEB_BegingDebugged();
	bool TNQIP_ProcessDebugPort();
	PVOID TGetPEB64();
	void TCheckNtGlobalFlag();
	PIMAGE_NT_HEADERS TGetImageNtHeaders(PBYTE pImageBase);
	PIMAGE_SECTION_HEADER TFindRDataSection(PBYTE pImageBase);
	void TCheckGlobalFlagsClearInProcess();
	void TCheckGlobalFlagsClearInFile();
	int TGetHeapFlagsOffset(bool x64);
	int TGetHeapForceFlagsOffset(bool x64);
	void TCheckHeap();
	int TIsRemotePresent();


};

