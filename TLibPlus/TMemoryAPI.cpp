#include "TMemoryAPI.h"
#include "pch.h"
#include <stdio.h>
#include <string.h>
#include <tlhelp32.h>
#include <psapi.h>
#include <exception>
#include <vector>
#include <sstream>


constexpr auto STATUS_INFO_LENGTH_MISMATCH = 0xC0000004;
constexpr auto SystemHandleInformation = 16;



DWORD GetWindowThreadProcessIdRet = 0;
__declspec(naked) DWORD WINAPI My_GetWindowThreadProcessId(HWND hWnd, LPDWORD lpdwProcessId)
{
	_asm
	{
		mov edi, edi
		push ebp
		mov ebp, esp
		jmp GetWindowThreadProcessIdRet;
	}
}

HANDLE TMemoryAPI::My_OpenProcess(DWORD dwProcessId)
{
	ElevatePrivileges(SE_DEBUG_NAME);
	HANDLE hprocess = NULL;

	hprocess = My_NtOpenProcess(dwProcessId);
	if (hprocess == NULL)
	{
		My_ZwOpenProcess(dwProcessId);
		if (hprocess == NULL)
		{
			::OpenProcess(PROCESS_ALL_ACCESS, false, dwProcessId);
			if (hprocess == NULL)
			{
				return 0;
			}
		}
	}

	return hprocess;
}


HANDLE TMemoryAPI::My_ZwOpenProcess(DWORD dwProcessId)
{
	HANDLE ProcessHandle = (HANDLE)0;
	OBJECT_ATTRIBUTES ObjectAttribute = { sizeof(OBJECT_ATTRIBUTES), 0,NULL,NULL };
	ObjectAttribute.Attributes = 0;
	CLIENT_ID ClientIds = { 0 };
	ClientIds.UniqueProcess = (HANDLE)dwProcessId;
	ClientIds.UniqueThread = (HANDLE)0;
	ZwOpenProcess(&ProcessHandle, PROCESS_ALL_ACCESS, &ObjectAttribute, &ClientIds);
	ProcessHandle;

	return ProcessHandle;
}

HANDLE TMemoryAPI::My_NtOpenProcess(DWORD dwProcessId)
{

	HANDLE ProcessHandle = 0;
	OBJECT_ATTRIBUTES ObjectAttribute = { sizeof(OBJECT_ATTRIBUTES), 0,NULL,NULL };
	CLIENT_ID ClientId = { 0 };

	InitializeObjectAttributes(&ObjectAttribute, NULL, NULL, NULL, NULL);
	ClientId.UniqueProcess = (PVOID)dwProcessId;
	ClientId.UniqueThread = (PVOID)0;

	if (NT_SUCCESS(NtOpenProcess(&ProcessHandle, MAXIMUM_ALLOWED, &ObjectAttribute, &ClientId)))
	{
		return ProcessHandle;
	}

	return 0;
}

HANDLE TMemoryAPI::My_NtOpenThread(DWORD dwProcessId, DWORD dwThreadId)
{
	HANDLE ThreadHandle = 0;
	OBJECT_ATTRIBUTES ObjectAttributes = { 0 };
	CLIENT_ID ClientId = { 0 };
	InitializeObjectAttributes(&ObjectAttributes, NULL, NULL, NULL, NULL);
	ClientId.UniqueProcess = (PVOID)dwProcessId;
	ClientId.UniqueThread = (PVOID)dwThreadId;

	if (NT_SUCCESS(NtOpenThread(&ThreadHandle, MAXIMUM_ALLOWED, &ObjectAttributes, &ClientId)))
	{
		if (ThreadHandle)
		{
			return ThreadHandle;
		}
	}
	return 0;
}

TMemoryAPI::TMemoryAPI(void)
{
	retstringlen = 0;//线程函数返回地址的长度
	std::string asmcodearry = "";//存储AsmAdd的指令
	char Asmcalladdr[MAX_PATH] = { 0 }; //记录保存CALL指令
	LPVOID allocatememory = 0;

	NtWow64ReadVirtualMemory64 = 0;
	NtWow64WriteVirtualMemory64 = 0;
	NtWow64QueryInformationProcess64 = 0;
	NtQueryInformationProcess = 0;
	ZwOpenProcess = 0;
	ZwProtectVirtualMemory = 0;
	NtCreateThreadEx = 0;
	NtOpenProcess = 0;
	NtOpenThread = 0;
	NtQueueApcThread = 0;
	NtAllocateVirtualMemory = 0;
	NtSuspendThread = 0;
	NtProtectVirtualMemory = 0;
	GetWindowThreadProcessIdRet = 0;
	NtWriteVirtualMemory = 0;
	NtReadVirtualMemory = 0;

	NtdllModule = GetModuleHandle(L"ntdll.dll");
	if (NtdllModule == NULL)
	{
		return;
	}

	//NtdllModule = LoadLibrary(TEXT("Ntdll.dll "));
	NtWow64ReadVirtualMemory64 = (pfnNtWow64ReadVirtualMemory64)GetProcAddress(NtdllModule, "NtWow64ReadVirtualMemory64");

	NtWow64WriteVirtualMemory64 = (pfnNtWow64WriteVirtualMemory64)GetProcAddress(NtdllModule, "NtWow64WriteVirtualMemory64");

	NtWow64QueryInformationProcess64 = (pfnNtWow64QueryInformationProcess64)GetProcAddress(NtdllModule, "NtWow64QueryInformationProcess64");

	NtQueryInformationProcess = (pfnNtQueryInformationProcess)GetProcAddress(NtdllModule, "NtQueryInformationProcess");

	ZwOpenProcess = (pfnZwOpenProcess)GetProcAddress(NtdllModule, "ZwOpenProcess");

	ZwProtectVirtualMemory = (pfnZwVirtualProtectEx)GetProcAddress(NtdllModule, "ZwVirtualProtectEx");

	NtOpenProcess = (pfnNtOpenProcess)GetProcAddress(NtdllModule, "NtOpenProcess");

	NtOpenThread = (pfnNtOpenThread)GetProcAddress(NtdllModule, "NtOpenThread");

	NtQueueApcThread = (pfnNtQueueApcThread)GetProcAddress(NtdllModule, "NtQueueApcThread");

	NtAllocateVirtualMemory = (pfnNtAllocateVirtualMemory)GetProcAddress(NtdllModule, "NtAllocateVirtualMemory");

	NtSuspendThread = (pfnNtSuspendThread)GetProcAddress(NtdllModule, "NtSuspendThread");

	NtCreateThreadEx = (pfnNtCreateThreadEx)GetProcAddress(NtdllModule, "NtCreateThreadEx");

	NtReadVirtualMemory = (pfnNtReadVirtualMemory)GetProcAddress(NtdllModule, "NtReadVirtualMemory");

	NtWriteVirtualMemory = (pfnNtWriteVirtualMemory)GetProcAddress(NtdllModule, "NtWriteVirtualMemory");


	if (GetWindowThreadProcessIdRet == 0)
	{
		DWORD addr = (DWORD)GetProcAddress(GetModuleHandle(L"user32.dll"), "GetWindowThreadProcessId");
		if (addr != NULL)
			GetWindowThreadProcessIdRet = addr + 5;
	}

}




TMemoryAPI::~TMemoryAPI(void)
{

}

////获得未导出api的地址
//bool TMemoryAPI::TGetUnDocumentAPI()
//{
//#pragma warning(push)
//#pragma warning(disable:6387)
//
//	return true;
//#pragma   warning(pop)  
//}

DWORD TMemoryAPI::TGetCallstartData(DWORD Allocaddr, DWORD* startaddr, char* code)//获取CALL地址前的汇编指令
{
	CMgAsmBase::t_asmmodel  tam;
	char erro[MAX_PATH] = { 0 };
	char asmcode[MAX_PATH] = { 0 };
	Allocaddr = Allocaddr + 0x1000;
	if (code == NULL)
		sprintf(asmcode, "push %x", Allocaddr);
	else
		sprintf(asmcode, "%s", code);
	LONG l = tasm.Assemble(asmcode, Allocaddr, &tam, 0, 0, erro); //将汇编指令转为机器码
	for (int i = 0; i < l; i++)
	{
		startaddr[i] = tam.code[i];
	}
	return l;
}

bool TMemoryAPI::TGetDataValue(wchar_t* strs, DWORD* Data_range, int& nconut)
{
	int len = wcslen(strs);
	int index = 0;
	int n = 0;
	int m = 0;
	int unknow = 0;//标记??模糊查询
	wchar_t s[3] = { 0 };
	for (int i = 0; i < len; i++)
	{
		if (strs[i] != ' ')
		{
			s[n] = strs[i];
			if (strs[i] == '?')
				unknow = 256;
			if (n == 1 && strs[i + 1] != ' ' && (i + 1) != len)
			{
				if (unknow == 0)
					Data_range[index] = wcstol(s, 0, 16);
				else
				{
					Data_range[index] = unknow;
					unknow = 0;
				}
				memset(s, 0, n);
				n = 0;
				m = i;
				index++;
				continue;
			}
			n++;
		}
		else if (n != 0)
		{
			if (unknow == 0)
				Data_range[index] = wcstol(s, 0, 16);
			else
			{
				Data_range[index] = unknow;
				unknow = 0;
			}
			memset(s, 0, n);
			n = 0;
			m = i;
			index++;
		}
	}
	Data_range[index] = wcstol(&strs[m + 1], 0, 16);
	nconut = index + 1;
	return true;
}

LONG TMemoryAPI::TAsmCall(LONG hwnd, LONG mode, LONG timeout)
{
	bool bret = false;
	int len = asmcodearry.length();
	if (strlen(Asmcalladdr) <= 0)
		return bret;
	DWORD ExitCode = -1;
	DWORD dwProcessId = 0;
	DWORD treadid = 0;

	DWORD dwThreadid = My_GetWindowThreadProcessId((HWND)hwnd, &dwProcessId);

	ElevatePrivileges(SE_DEBUG_NAME);
	HANDLE hprocess = NULL;
	if (mode == 1 || mode == 6)	//1 : 对hwnd指定的进程内执行,注入模式为创建远程线程
	{
		hprocess = My_OpenProcess(dwProcessId);
		if (hprocess == NULL)
		{
			return bret;
		}
	}
	else if (mode == 0) //0 : 在本进程中进行执行，这时hwnd无效
	{
		hprocess = GetCurrentProcess();
		treadid = GetCurrentThreadId();
	}
	else
	{
		return bret;
	}

	//allocatememory = (LPVOID)NtAllocateVirtualMemory(hprocess, NULL, NULL, (PSIZE_T)0x4096, MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	//if (allocatememory == NULL)
	allocatememory = VirtualAllocEx(hprocess, NULL, 0x4096, MEM_COMMIT, PAGE_EXECUTE_READWRITE);


	if (allocatememory)
	{
		char retstring[MAX_PATH * 10] = { 0 };
		int retstrlen = 0;
		if (len != 0)
		{
			//asmcodearry="9C60"+asmcodearry;//pushfd,pushad;保持堆栈平衡
			len = asmcodearry.length();
			for (int i = 0; i < len; i++)
			{
				int stringlen = 0;
				{
					stringlen = strlen(&asmcodearry.c_str()[i]);
					if (stringlen > 0)
					{
						LONG val = ::strtol(&asmcodearry.c_str()[i], 0, 16);
						if (val >= 0x10)
						{
							if (val <= 0xff)
							{
								if (retstrlen == 0)
									retstrlen = strlen(retstring);
								if (retstrlen == 0)
									sprintf(retstring, "%s", &asmcodearry.c_str()[i]);
								else
									sprintf(retstring, "%s %s", retstring, &asmcodearry.c_str()[i]);
							}

							else
							{
								int len = strlen(&asmcodearry.c_str()[i]);
								char str[16] = { 0 };
								strcpy(str, &asmcodearry.c_str()[i]);
								for (int n = 0; n < len; n = n + 2)
								{
									char nstr[2] = { 0 };
									strncpy(nstr, &str[n], 2);
									int strn = strtol(nstr, 0, 16);
									if (n + 2 != len || n + 2 < len)
									{
										if (retstrlen == 0)
											retstrlen = strlen(retstring);
										if (retstrlen == 0)
										{
											if (strn >= 0x10)
												sprintf(retstring, "%X", strn);
											else
												sprintf(retstring, "0%X", strn);
										}

										else
										{
											if (strn >= 0x10)
												sprintf(retstring, "%s %X", retstring, strn);
											else
												sprintf(retstring, "%s 0%X", retstring, strn);
										}
									}
									else
									{
										if (len % 2 == 0)
										{
											if (strn >= 0x10)
												sprintf(retstring, "%s %X", retstring, strn);
											else
												sprintf(retstring, "%s 0%X", retstring, strn);
										}
										else
										{
											if (strn >= 0x10)
												sprintf(retstring, "%s %X", retstring, strn);
											else
												sprintf(retstring, "%s 0%X", retstring, strn);
										}
									}

								}

							}
						}
						else
							sprintf(retstring, "%s 0%s", retstring, &asmcodearry.c_str()[i]);

						i = i + stringlen - 1;
					}

					else
						sprintf(retstring, "%s 00", retstring);
				}
			}
		}
		DWORD datas[MAX_PATH * 10] = { 0 };
		int count = 0;
		int lenth = 0;
		if (strlen(retstring) > 0)
		{
			DWORD data[10] = { 0 };
			int len = TGetCallstartData((DWORD)allocatememory, data, (char*)0);
			for (int i = 0; i < len; i++)
			{
				datas[i] = data[i];
			}
			memset(data, 0, len);
			int l = len;
			lenth = lenth + len;
			len = TGetCallstartData((DWORD)allocatememory + l, data, (char*)"push dword ptr fs:[0]");
			for (int i = 0; i < len; i++)
			{
				datas[lenth + i] = data[i];
			}
			memset(data, 0, len);
			l = len;
			lenth = lenth + len;
			len = TGetCallstartData((DWORD)allocatememory + l, data, (char*)"mov dword ptr fs:[0],esp");
			for (int i = 0; i < len; i++)
			{
				datas[lenth + i] = data[i];
			}
			lenth = lenth + len;

			USES_CONVERSION;
			wchar_t wretsting[MAX_PATH * 10] = { 0 };
			wcscpy(wretsting, CA2WEX(retstring));
			TGetDataValue(wretsting, &datas[lenth], count);

		}

		BYTE helpByte[MAX_PATH * 10] = { 0 };
		for (int i = 0; i < count + lenth; i++)
		{
			helpByte[i] = (BYTE)datas[i];
		}

		char erro[MAX_PATH] = { 0 };
		int calllen = tasm.Assemble(Asmcalladdr, ((DWORD)allocatememory + count + lenth), &am, 0, 0, erro); //将汇编指令转为机器码
		if (calllen > 0)
		{
			memcpy(&helpByte[count + lenth], am.code, calllen);
			calllen = calllen + count + lenth;

			if (count != 0)
			{
				BYTE CallendData[] = { 0x8b,0x1c,0x24,0x64,0x89,0x1d,0x0,0x0,0x0,0x0,0x81,0xc4,0x08,0x0,0x0,0x0,0xc2,0x04,0x0 };
				//CallendData存储的机器码对应汇编指令
				//mov ebx,dword ptr ss:[esp]
				//mov dword ptr fs:[0],ebx
				//add esp,0x8
				//retn 0x4;
				memcpy(&helpByte[calllen], CallendData, sizeof(CallendData));

				calllen = calllen + sizeof(CallendData) + 1;
			}

			bret = WriteProcessMemory(hprocess, (void*)allocatememory, (void*)helpByte, calllen, 0);


			HANDLE hthread = NULL;
			bret = false;
			if (mode == 0 || mode == 1)
			{
				NtCreateThreadEx(&hthread, 0x1FFFFF, NULL, hprocess, (LPTHREAD_START_ROUTINE)(allocatememory), 0, FALSE, NULL, NULL, NULL, NULL);
				if (hthread == NULL)
				{
					hthread = CreateRemoteThread(hprocess, NULL, 0, (LPTHREAD_START_ROUTINE)(allocatememory), 0, 0, &treadid);
					if (hthread == NULL)
					{
						CloseHandle(hprocess);
						printf("[!]ThreadHandle error\n");
						return bret;
					}
					else
					{
						bret = true;
					}
				}
				else
				{
					bret = true;
				}
			}
			else  if (mode == 6)
			{
				hthread = My_NtOpenThread(dwProcessId, dwThreadid);
				if (hthread)
				{
					if (NT_SUCCESS(NtQueueApcThread(hthread, (PIO_APC_ROUTINE)(allocatememory), 0, NULL, NULL)))
					{
						bret = false;
					}
				}
				// cleanup
				CloseHandle(hthread);
			}
			WaitForSingleObject(hthread, timeout);
			//Sleep(50);//等待50毫秒，等待线程执行完毕
			::GetExitCodeThread(hthread, &ExitCode);
			if (ExitCode != STILL_ACTIVE)//判断线程是否退出
			{
				if (allocatememory)
				{
					::VirtualFreeEx(hprocess, allocatememory, 0, MEM_RELEASE);
					allocatememory = NULL;
				}
			}
		}

	}

	asmcodearry.clear();
	memset(Asmcalladdr, 0, MAX_PATH);

	CloseHandle(hprocess);
	return ExitCode;
}

bool TMemoryAPI::TAsmAdd(wchar_t* asm_ins)
{
	bool bret = false;
	char asmcode[MAX_PATH] = { 0 };
	USES_CONVERSION;
	strcpy(asmcode, CW2AEX(asm_ins));
	char erro[MAX_PATH] = { 0 };
	int len = -1;
	char* charcall = strstr(::CharLowerA(asmcode), "call");
	if (charcall != NULL)//判断是否是Call指令,记住Call地址
	{
		if (strlen(Asmcalladdr) == 0)
			strcpy(Asmcalladdr, charcall);
		return true;
	}
	else
		len = tasm.Assemble(asmcode, NULL, &am, 0, 0, erro); //将汇编指令转为机器码

	if (len < 0)
		return bret;
	else
		bret = true;

	for (int i = 0; i < len; i++)
	{
		char  asmcodes[10] = { 0 };
		if (am.code[i] >= 0x10)
			sprintf(asmcodes, "%X", am.code[i]);
		else
			sprintf(asmcodes, "0%X", am.code[i]);
		if (am.code[i] != 0)
			asmcodearry = asmcodearry + asmcodes;//这里做拼接
		else
		{
			int serlen = asmcodearry.length();
			serlen = serlen + 1;
			asmcodearry.resize(serlen);
		}
	}
	return bret;
}

bool TMemoryAPI::TAsmClear()
{
	asmcodearry.clear();
	memset(Asmcalladdr, 0, MAX_PATH);

	return true;
}


const wchar_t* TMemoryAPI::TReadIntTraverseAddr(HWND hWnd, long long addr, long long offest, long count, long type)
{
	long n = 0;

	std::wstringstream ss(L"");

	if (count == 0)
		return NULL;

	for (long i = 0; i < count; i++)
	{
		if (i == 0)
			ss << L"array(";
		if (i == (count - 1))
			ss << L"\"" << n << L"\"=" << TReadIntAddr(hWnd, addr + (offest * i), type) << ")";
		else
			ss << L"\"" << n << L"\"=" << TReadIntAddr(hWnd, addr + (offest * i), type) << ",";

		n++;
	}
	const wchar_t* out = L"";
	std::wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}


LONGLONG TMemoryAPI::TReadIntAddr(HWND hWnd, long long addr, long type)
{
	DWORD dwProcessId = 0;
	//GetWindowThreadProcessId((HWND)hWnd, &dwProcessId);
	My_GetWindowThreadProcessId((HWND)hWnd, &dwProcessId);
	if (dwProcessId == NULL)
		return 0;

	ElevatePrivileges(SE_DEBUG_NAME);
	HANDLE hprocess = NULL;

	hprocess = My_OpenProcess(dwProcessId);
	if (hprocess == NULL)
	{
		return 0;
	}

	long long llBuffer[MAX_PATH] = { 0 };
	int lBuffer = 0;
	short sBuffer = 0;
	BYTE bBuffer = 0;
	long long nret[MAX_PATH] = { 0 };

	BOOL bTarget = FALSE;
	BOOL bSource = FALSE;

	SYSTEM_INFO si;
	GetSystemInfo(&si);

	IsWow64Process(GetCurrentProcess(), &bSource);
	IsWow64Process(hprocess, &bTarget);
	if (bTarget == FALSE && bSource == TRUE)
	{
		switch (type)
		{
		case 0:
			if (NT_SUCCESS(NtWow64ReadVirtualMemory64(hprocess, (PVOID64)addr, &lBuffer, sizeof(long), NULL)))
			{
				*nret = lBuffer;
			}
			break;
		case 1:
			if (NT_SUCCESS(NtWow64ReadVirtualMemory64(hprocess, (PVOID64)addr, &sBuffer, sizeof(short), NULL)))
			{
				*nret = sBuffer;
			}
			break;
		case 2:
			if (NT_SUCCESS(NtWow64ReadVirtualMemory64(hprocess, (PVOID64)addr, &bBuffer, sizeof(BYTE), NULL)))
			{
				*nret = bBuffer;
			}
			break;
		case 3:
			if (NT_SUCCESS(NtWow64ReadVirtualMemory64(hprocess, (PVOID64)addr, &llBuffer, sizeof(long long), NULL)))
			{
				*nret = *llBuffer;
			}
			break;
		}

	}
	else if (bTarget == TRUE && bSource == TRUE || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_AMD64 || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
	{
		switch (type)
		{
		case 0:
			ReadProcessMemory(hprocess, (PVOID)addr, (LPVOID)&lBuffer, sizeof(int), NULL);

			*nret = lBuffer;

			break;
		case 1:
			ReadProcessMemory(hprocess, (PVOID)addr, (LPVOID)&sBuffer, sizeof(short), NULL);
			*nret = sBuffer;

			break;
		case 2:
			ReadProcessMemory(hprocess, (PVOID)addr, (LPVOID)&bBuffer, sizeof(BYTE), NULL);
			*nret = bBuffer;

			break;
		case 3:
			ReadProcessMemory(hprocess, (PVOID)addr, (LPVOID)&llBuffer, sizeof(long long), NULL);
			*nret = *llBuffer;

			break;
		}
	}
	CloseHandle(hprocess);
	return *nret;
}

bool TMemoryAPI::TReadDataAddr(LONG hWnd, long long addr, wchar_t* retstr, LONG len)
{
	DWORD dwProcessId = 0;
	//GetWindowThreadProcessId((HWND)hWnd, &dwProcessId);
	My_GetWindowThreadProcessId((HWND)hWnd, &dwProcessId);
	if (dwProcessId == NULL)
		return 0;

	ElevatePrivileges(SE_DEBUG_NAME);
	HANDLE hprocess = NULL;

	hprocess = My_OpenProcess(dwProcessId);
	if (hprocess == NULL)
	{
		return 0;
	}

	BYTE finddata[MAX_PATH] = { 0 };

	long long nret[MAX_PATH] = { 0 };
	bool bret = false;

	BOOL bTarget = FALSE;
	BOOL bSource = FALSE;
	ULONG64 dwread = 0;

	SYSTEM_INFO si;
	GetSystemInfo(&si);

	IsWow64Process(GetCurrentProcess(), &bSource);
	IsWow64Process(hprocess, &bTarget);
	if (bTarget == FALSE && bSource == TRUE)
	{
		NtWow64ReadVirtualMemory64(hprocess, (PVOID64)addr, &finddata, len, &dwread);

	}
	else if (bTarget == TRUE && bSource == TRUE || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_AMD64 || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
	{
		ReadProcessMemory(hprocess, (PVOID)addr, (LPVOID)&finddata, len, (SIZE_T*)&dwread);
	}
	if (dwread > 0)
	{
		for (int i = 0; i < len; i++)
		{
			if (i == 0)
			{
				if (finddata[i] < 0x10)
				{
					if (finddata[i] >= 0)
						swprintf(retstr, L"%s 0%X", retstr, finddata[i]);
					else
					{
						LONG val = finddata[i] - 0xffffff00;
						swprintf(retstr, L"%s %X", retstr, val);
					}
				}
				else
					swprintf(retstr, L"%X", finddata[i]);
				bret = true;
			}
			else
			{
				if (finddata[i] < 0x10)
				{
					if (finddata[i] >= 0)
						swprintf(retstr, L"%s 0%X", retstr, finddata[i]);
					else
					{
						LONG val = finddata[i] - 0xffffff00;
						swprintf(retstr, L"%s %X", retstr, val);
					}
				}

				else
					swprintf(retstr, L"%s %X", retstr, finddata[i]);


				bret = true;
			}
		}
	}

	CloseHandle(hprocess);
	return bret;
}


bool TMemoryAPI::TWriteIntAddr(HWND hWnd, long long addr, long type, int ivalue, short svalue, BYTE bvalue, long long llvalue)
{
	bool bret = false;

	DWORD dwProcessId = 0;
	//GetWindowThreadProcessId((HWND)hWnd, &dwProcessId);
	My_GetWindowThreadProcessId(hWnd, &dwProcessId);
	if (dwProcessId == NULL)
		return 0;

	HANDLE hprocess = My_OpenProcess(dwProcessId);
	if (hprocess == NULL)
	{
		return 0;
	}

	long long llBuffer = 0;
	int lBuffer = 0;
	short sBuffer = 0;
	BYTE bBuffer = 0;
	LONGLONG nret = 0;

	BOOL bTarget = FALSE;
	BOOL bSource = FALSE;

	SYSTEM_INFO si;
	GetSystemInfo(&si);

	IsWow64Process(GetCurrentProcess(), &bSource);
	IsWow64Process(hprocess, &bTarget);


	ULONG64 dwwrite = 0;

	DWORD dwback;
	if (NtProtectVirtualMemory)
		NtProtectVirtualMemory(hprocess, (PVOID*)addr, (PULONG)sizeof(int), PAGE_EXECUTE_READWRITE, &dwback);
	else if (ZwProtectVirtualMemory)
		ZwProtectVirtualMemory(hprocess, (void*)addr, sizeof(int), PAGE_EXECUTE_READWRITE, &dwback);
	else
		::VirtualProtectEx(hprocess, (void*)addr, sizeof(int), PAGE_EXECUTE_READWRITE, &dwback);

	if (type == 0)
	{
		if (bTarget == FALSE && bSource == TRUE)
			bret = NtWow64WriteVirtualMemory64(hprocess, (ULONG64)addr, &ivalue, sizeof(int), &dwwrite);
		else if (bTarget == TRUE && bSource == TRUE || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_AMD64 || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
			bret = WriteProcessMemory(hprocess, (void*)addr, &ivalue, sizeof(int), (SIZE_T*)&dwwrite);
	}
	else if (type == 1)
	{
		if (bTarget == FALSE && bSource == TRUE)
			bret = NtWow64WriteVirtualMemory64(hprocess, (ULONG64)addr, &svalue, sizeof(short), &dwwrite);
		else if (bTarget == TRUE && bSource == TRUE || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_AMD64 || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
			bret = WriteProcessMemory(hprocess, (void*)addr, &svalue, sizeof(short), (SIZE_T*)&dwwrite);
	}
	else if (type == 2)
	{
		if (bTarget == FALSE && bSource == TRUE)
			bret = NtWow64WriteVirtualMemory64(hprocess, (ULONG64)addr, &bvalue, sizeof(BYTE), &dwwrite);
		else if (bTarget == TRUE && bSource == TRUE || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_AMD64 || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
			bret = WriteProcessMemory(hprocess, (void*)addr, &bvalue, sizeof(BYTE), (SIZE_T*)&dwwrite);
	}
	else if (type == 3)
	{
		if (bTarget == FALSE && bSource == TRUE)
			bret = NtWow64WriteVirtualMemory64(hprocess, (ULONG64)addr, &llvalue, sizeof(long long), &dwwrite);
		else if (bTarget == TRUE && bSource == TRUE || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_AMD64 || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
			bret = WriteProcessMemory(hprocess, (void*)addr, &llvalue, sizeof(long long), (SIZE_T*)&dwwrite);
	}

	if (NtProtectVirtualMemory)
		bret = NtProtectVirtualMemory(hprocess, (PVOID*)addr, (PULONG)sizeof(int), dwback, &dwback);
	else if (ZwProtectVirtualMemory)
		bret = ZwProtectVirtualMemory(hprocess, (void*)addr, sizeof(int), dwback, &dwback);
	else
		bret = VirtualProtectEx(hprocess, (void*)addr, sizeof(int), dwback, &dwback);


	CloseHandle(hprocess);
	return bret;
}

bool TMemoryAPI::TWriteDataAddr(LONG hWnd, long long addr, wchar_t* data)
{
	bool bret = false;

	DWORD dwProcessId = 0;
	//GetWindowThreadProcessId((HWND)hWnd, &dwProcessId);
	My_GetWindowThreadProcessId((HWND)hWnd, &dwProcessId);
	if (dwProcessId == NULL)
		return 0;

	HANDLE hprocess = My_OpenProcess(dwProcessId);
	if (hprocess == NULL)
	{
		return 0;
	}


	BOOL bTarget = FALSE;
	BOOL bSource = FALSE;

	SYSTEM_INFO si;
	GetSystemInfo(&si);

	IsWow64Process(GetCurrentProcess(), &bSource);
	IsWow64Process(hprocess, &bTarget);

	ULONG64 dwwrite = 0;
	DWORD Finddata[MAX_PATH] = { 0 };
	int nconut = 0;//返回 data的个数
	TGetDataValue(data, Finddata, nconut);
	if (nconut <= 0)
		return bret;


	BYTE strvalue[MAX_PATH * 10] = { 0 };
	for (int i = 0; i < nconut; i++)
	{
		strvalue[i] = (BYTE)Finddata[i];
	}

	DWORD dwback;
	if (NtProtectVirtualMemory)
		NtProtectVirtualMemory(hprocess, (PVOID*)addr, (PULONG)sizeof(int), PAGE_EXECUTE_READWRITE, &dwback);
	else if (ZwProtectVirtualMemory)
		ZwProtectVirtualMemory(hprocess, (void*)addr, sizeof(int), PAGE_EXECUTE_READWRITE, &dwback);
	else
		::VirtualProtectEx(hprocess, (void*)addr, sizeof(int), PAGE_EXECUTE_READWRITE, &dwback);
	

	if (bTarget == FALSE && bSource == TRUE)
		bret = NtWow64WriteVirtualMemory64(hprocess, (ULONG64)addr, strvalue, nconut, &dwwrite);
	else if (bTarget == TRUE && bSource == TRUE || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_AMD64 || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
		bret = WriteProcessMemory(hprocess, (void*)addr, strvalue, nconut, (SIZE_T*)&dwwrite);



	if (NtProtectVirtualMemory)
		bret = NtProtectVirtualMemory(hprocess, (PVOID*)addr, (PULONG)sizeof(int), dwback, &dwback);
	else if (ZwProtectVirtualMemory)
		bret = ZwProtectVirtualMemory(hprocess, (void*)addr, sizeof(int), dwback, &dwback);
	else
		bret = VirtualProtectEx(hprocess, (void*)addr, sizeof(int), dwback, &dwback);

	CloseHandle(hprocess);
	return bret;
}


LONGLONG TMemoryAPI::TGetFindDataAddr(wchar_t* strs, HWND hWnd)
{

	DWORD dwProcessId = 0;
	My_GetWindowThreadProcessId((HWND)hWnd, &dwProcessId);
	if (dwProcessId == NULL)
		return 0;

	DWORD64 readaddr = 0;
	DWORD64  longAdd = 0;
	wchar_t module[MAX_PATH] = { 0 };
	int moduleindex = 0;//记录模块长度
	int nindex = 0;//记录指针个数
	int noffset = 0;//
	int index = 0;
	bool subindex[MAX_PATH] = { 0 };//标记"-"号的位置:true,默认是"+":false
	wchar_t offsetaddrstr[MAX_PATH][MAX_PATH] = { 0 };//存储偏移地址
	DWORD64	 offsetaddr[MAX_PATH] = { 0 };
	HANDLE hprocess = 0;

	for (int i = 0; i < MAX_PATH; i++)
	{
		memset(offsetaddrstr[i], 0, 16);
	}
	int len = wcslen(strs);
	if (len < 1)
	{
		longAdd = -1;
		return longAdd;
	}
	for (int i = 0; i < len; i++)
	{
		if (strs[i] == '<' || moduleindex > 0)
		{
			if (strs[i] == '>')
			{
				moduleindex = -1;
			}
			else if (strs[i + 1] != '>')
			{
				module[moduleindex] = strs[i + 1];
				moduleindex++;
			}
		}
		if (strs[i] == '>' && moduleindex == 0)
		{
			longAdd = -1;
			return longAdd;
		}
		if (strs[i] == '[')
			nindex++;//记录指针个数
		else if (((strs[i] == '+' || index > 0) || (strs[i] == '-' || index > 0) || moduleindex == 0))
		{
			if (strs[i] == '-')//记录-号的下标
				subindex[noffset] = true;
			if (strs[i] == ']')
			{
				index = 0;
				noffset++;
			}
			else if (strs[i] != ']' && (strs[i] == '+' || strs[i] == '-'))
			{
				offsetaddrstr[noffset][index] = strs[i + 1];
				index++;
				i++;
			}
			else if (strs[i] != ']')
			{
				offsetaddrstr[noffset][index] = strs[i];
				index++;
			}
		}
		else if ((noffset == nindex))//记录最后一个偏移地址
		{
			if (strs[i] == '-')//记录-号的下标
				subindex[noffset] = true;
			if (strs[i] == '+' || strs[i] == '-')
			{
				offsetaddrstr[noffset][index] = strs[i + 1];
				index++;
			}
			else if (index > 0)
			{
				offsetaddrstr[noffset][index] = strs[i + 1];
				index++;
			}

		}


	}
	LONGLONG Baseaddr = 0;
	BOOL bTarget = FALSE;
	BOOL bSource = FALSE;
	SYSTEM_INFO si;
	GetSystemInfo(&si);

	hprocess = My_OpenProcess(dwProcessId);
	if (hprocess == NULL)
	{
		return 0;
	}


	IsWow64Process(GetCurrentProcess(), &bSource);
	IsWow64Process(hprocess, &bTarget);

	//wchar_t* bbb = _i64tow(aaa, NULL, 10);


	if (moduleindex == -1)//说明有传入<modulename>
	{
		Baseaddr = GetModuleBase(hprocess, module, bTarget, bSource, si);
		if (Baseaddr == 0)
		{
			HANDLE tlh = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, dwProcessId);
			MODULEENTRY32 modEntry = { 0 };
			modEntry.dwSize = sizeof(MODULEENTRY32);
			Module32First(tlh, &modEntry);
			do
			{
				if (!_wcsicmp(module, modEntry.szModule))
				{
					Baseaddr = (DWORD)modEntry.modBaseAddr;
					modEntry.th32ModuleID;
					break;
				}
			} while (Module32Next(tlh, &modEntry));
			CloseHandle(tlh);
		}
		if (Baseaddr == 0)
		{
			longAdd = -1;
			CloseHandle(hprocess);
			return longAdd;
		}
	}




	if (nindex > 0) //说明不是一级指针
	{

		for (int i = 0; i < nindex; i++)
		{
			offsetaddr[i] = _wcstoi64(offsetaddrstr[i], 0, 16);
			if (i == 0 && Baseaddr > 0)
				readaddr = Baseaddr + offsetaddr[i];
			else if (i == 0)
				readaddr = offsetaddr[i];
			else if (readaddr != 0)
			{
				if (subindex[i])
					readaddr = longAdd - offsetaddr[i];
				else
					readaddr = longAdd + offsetaddr[i];
			}

			longAdd = 0;
			if (bTarget == FALSE && bSource == TRUE)
			{
				NtWow64ReadVirtualMemory64(hprocess, (PVOID64)readaddr, &longAdd, sizeof(longAdd), NULL);
			}
			else if (bTarget == TRUE && bSource == TRUE || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_AMD64 || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
			{
				ReadProcessMemory(hprocess, (void*)readaddr, &longAdd, sizeof(longAdd), 0);
			}
			if (longAdd <= 0)//说明读取错误地址
			{
				longAdd = -1;
				CloseHandle(hprocess);
				return longAdd;
			}


		}
		offsetaddr[nindex] = _wcstoi64(offsetaddrstr[nindex], 0, 16);
		if (subindex[nindex])
			longAdd = longAdd - offsetaddr[nindex];
		else
			longAdd = longAdd + offsetaddr[nindex];
		CloseHandle(hprocess);
	}
	else if (moduleindex != -1)//1367DBC
		longAdd = _wcstoi64(strs, 0, 16);
	else if (moduleindex == -1) //<xx.exe>+1367DBC
	{
		longAdd = _wcstoi64(offsetaddrstr[0], 0, 16);
		longAdd = Baseaddr + longAdd;
	}
	CloseHandle(hprocess);
	return longAdd;
}

LONGLONG TMemoryAPI::GetModuleBase(HANDLE m_ProcessHandle, wchar_t* name, BOOL bTarget, BOOL bSource, SYSTEM_INFO si)
{
	if (bTarget == FALSE && bSource == TRUE)
	{
		PROCESS_BASIC_INFORMATION64 pbi64 = { 0 };
		if (NT_SUCCESS(NtWow64QueryInformationProcess64(m_ProcessHandle, ProcessBasicInformation, &pbi64, sizeof(pbi64), NULL)))
		{
			DWORD64 Ldr64 = 0;
			LIST_ENTRY64 ListEntry64 = { 0 };
			LDR_DATA_TABLE_ENTRY64 LDTE64 = { 0 };
			wchar_t ProPath64[256] = { 0 };
			if (NT_SUCCESS(NtWow64ReadVirtualMemory64(m_ProcessHandle, (PVOID64)(pbi64.PebBaseAddress + offsetof(PEB64, Ldr)), &Ldr64, sizeof(Ldr64), NULL)))
			{
				if (NT_SUCCESS(NtWow64ReadVirtualMemory64(m_ProcessHandle, (PVOID64)(Ldr64 + offsetof(PEB_LDR_DATA64, InLoadOrderModuleList)), &ListEntry64, sizeof(LIST_ENTRY64), NULL)))
				{
					if (NT_SUCCESS(NtWow64ReadVirtualMemory64(m_ProcessHandle, (PVOID64)(ListEntry64.Flink), &LDTE64, sizeof(_LDR_DATA_TABLE_ENTRY64), NULL)))
					{
						while (1)
						{
							if (LDTE64.InLoadOrderLinks.Flink == ListEntry64.Flink) break;
							if (NT_SUCCESS(NtWow64ReadVirtualMemory64(m_ProcessHandle, (PVOID64)LDTE64.FullDllName.Buffer, ProPath64, sizeof(ProPath64), NULL)))
							{
								std::wstring s(ProPath64);
								if ((s.find(name)) != std::wstring::npos)
								{
									return LDTE64.DllBase;
								}


								//printf("模块基址:0x%llX\t模块大小:0x%X\t模块路径:%ls\n", LDTE64.DllBase, LDTE64.SizeOfImage, ProPath64);
							}
							if (!NT_SUCCESS(NtWow64ReadVirtualMemory64(m_ProcessHandle, (PVOID64)LDTE64.InLoadOrderLinks.Flink, &LDTE64, sizeof(_LDR_DATA_TABLE_ENTRY64), NULL))) break;
						}
					}
				}
			}
		}
	}
	else if (bTarget == TRUE && bSource == TRUE || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_AMD64 || si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
	{
		PROCESS_BASIC_INFORMATION32 pbi32 = { 0 };
		if (NT_SUCCESS(NtQueryInformationProcess(m_ProcessHandle, ProcessBasicInformation, &pbi32, sizeof(pbi32), NULL)))
		{
			DWORD Ldr32 = 0;
			LIST_ENTRY32 ListEntry32 = { 0 };
			LDR_DATA_TABLE_ENTRY32 LDTE32 = { 0 };
			wchar_t ProPath32[256] = { 0 };
			if (ReadProcessMemory(m_ProcessHandle, (PVOID)(pbi32.PebBaseAddress + offsetof(PEB32, Ldr)), &Ldr32, sizeof(Ldr32), NULL))
			{
				if (ReadProcessMemory(m_ProcessHandle, (PVOID)(Ldr32 + offsetof(PEB_LDR_DATA32, InLoadOrderModuleList)), &ListEntry32, sizeof(LIST_ENTRY32), NULL))
				{
					if (ReadProcessMemory(m_ProcessHandle, (PVOID)(ListEntry32.Flink), &LDTE32, sizeof(_LDR_DATA_TABLE_ENTRY32), NULL))
					{
						while (1)
						{
							if (LDTE32.InLoadOrderLinks.Flink == ListEntry32.Flink) break;
							if (ReadProcessMemory(m_ProcessHandle, (PVOID)LDTE32.FullDllName.Buffer, ProPath32, sizeof(ProPath32), NULL))
							{

								std::wstring s(ProPath32);
								if ((s.find(name)) != std::wstring::npos)
								{
									return LDTE32.DllBase;
								}



								//printf("模块基址:0x%X\t模块大小:0x%X\t模块路径:%ls\n", LDTE32.DllBase, LDTE32.SizeOfImage, ProPath32);
							}
							if (!ReadProcessMemory(m_ProcessHandle, (PVOID)LDTE32.InLoadOrderLinks.Flink, &LDTE32, sizeof(_LDR_DATA_TABLE_ENTRY32), NULL)) break;
						}
					}
				}
			}
		}
	}
	CloseHandle(m_ProcessHandle);
	return 0;
}



bool TMemoryAPI::TFreeProcessMemory(HWND hwnd)
{
	DWORD nPid = 0;
	GetWindowThreadProcessId(hwnd, &nPid);
	ElevatePrivileges(SE_DEBUG_NAME);
	HANDLE hprocess = NULL;
	hprocess = OpenProcess(PROCESS_ALL_ACCESS, false, nPid);

	SetProcessWorkingSetSize(hprocess, (SIZE_T)-1, (SIZE_T)-1);

	//内存整理
	EmptyWorkingSet(hprocess);
	CloseHandle(hprocess);
	return true;
}

void* TMemoryAPI::TMalloc(wchar_t* sztype, long size)
{
	if (sztype == NULL)
		return NULL;

	_wcslwr_s(sztype, wcslen(sztype) + 1);
	const wchar_t* a = sztype;
	try
	{
		if (_wcsicmp(a, L"int") == 0)
		{
			_INT* p;
			p = (_INT*)malloc(sizeof(_INT));
			return p;
		}
		else if (_wcsicmp(a, L"wchar") == 0)
		{
			_WCHAR* p;
			p = (_WCHAR*)malloc(sizeof(_WCHAR));
			p->a = (WCHAR*)malloc(size);
			return p;
		}
		else if (_wcsicmp(a, L"char") == 0)
		{
			_CHAR* p;
			p = (_CHAR*)malloc(sizeof(_CHAR));
#pragma warning(push)
#pragma warning(disable:6011)
			p->a = (CHAR*)malloc(size);
#pragma   warning(pop)  
			return p;
		}
		else if (_wcsicmp(a, L"long") == 0)
		{
			_LONG* p;
			p = (_LONG*)malloc(sizeof(_LONG));
			return p;
		}
		else if (_wcsicmp(a, L"longlong") == 0)
		{
			_LONGLONG* p;
			p = (_LONGLONG*)malloc(sizeof(_LONGLONG));
			return p;
		}
		else if (_wcsicmp(a, L"short") == 0)
		{
			_SHORT* p;
			p = (_SHORT*)malloc(sizeof(_SHORT));
			return p;
		}
		else if (_wcsicmp(a, L"byte") == 0)
		{
			_BYTE* p;
			p = (_BYTE*)malloc(sizeof(_BYTE));
			return p;
		}
		else if (_wcsicmp(a, L"float") == 0)
		{
			_CRT_FLOAT* p;
			p = (_CRT_FLOAT*)malloc(sizeof(_CRT_FLOAT));
			return p;
		}
		else if (_wcsicmp(a, L"double") == 0)
		{
			_CRT_DOUBLE* p;
			p = (_CRT_DOUBLE*)malloc(sizeof(_CRT_DOUBLE));
			return p;
		}
		else if (_wcsicmp(a, L"longdouble") == 0)
		{
			_LONGDOUBLE* p;
			p = (_LONGDOUBLE*)malloc(sizeof(_LONGDOUBLE));
			return p;
		}
		else if (_wcsicmp(a, L"uint") == 0)
		{
			_UINT* p;
			p = (_UINT*)malloc(sizeof(_UINT));
			return p;
		}
		else if (_wcsicmp(a, L"ulong") == 0)
		{
			_ULONG* p;
			p = (_ULONG*)malloc(sizeof(_ULONG));
			return p;
		}
		else if (_wcsicmp(a, L"ushort") == 0)
		{
			_USHORT* p;
			p = (_USHORT*)malloc(sizeof(_USHORT));
			return p;
		}
		else if (_wcsicmp(a, L"ulonglong") == 0)
		{
			_ULONGLONG* p;
			p = (_ULONGLONG*)malloc(sizeof(_ULONGLONG));
			return p;
		}
		else if (_wcsicmp(a, L"bool") == 0)
		{
			_BOOL* p;
			p = (_BOOL*)malloc(sizeof(_BOOL));
			return p;
		}
	}
	catch (const std::exception&)
	{

	}
	return NULL;
}

void* TMemoryAPI::TNew(wchar_t* sztype, long size)
{
	if (sztype == NULL)
		return NULL;

	_wcslwr_s(sztype, wcslen(sztype) + 1);
	const wchar_t* a = sztype;
	try
	{
		if (size == 0)
		{
			if (_wcsicmp(a, L"int") == 0)
			{
				return (void*)new int;
			}
			else if (_wcsicmp(a, L"wchar") == 0)
			{
				return (void*)new WCHAR;
			}
			else if (_wcsicmp(a, L"char") == 0)
			{
				return (void*)new CHAR;
			}
			else if (_wcsicmp(a, L"long") == 0)
			{
				return (void*)new LONG;
			}
			else if (_wcsicmp(a, L"longlong") == 0)
			{
				return (void*)new LONGLONG;
			}
			else if (_wcsicmp(a, L"short") == 0)
			{
				return (void*)new SHORT;
			}
			else if (_wcsicmp(a, L"byte") == 0)
			{
				return (void*)new BYTE;
			}
			else if (_wcsicmp(a, L"float") == 0)
			{
				return (void*)new FLOAT;
			}
			else if (_wcsicmp(a, L"double") == 0)
			{
				return (void*)new double;
			}
			else if (_wcsicmp(a, L"longdouble") == 0)
			{
				return (void*)new long double;
			}
			else if (_wcsicmp(a, L"uint") == 0)
			{
				return (void*)new UINT;
			}
			else if (_wcsicmp(a, L"ulong") == 0)
			{
				return (void*)new ULONG;
			}
			else if (_wcsicmp(a, L"ushort") == 0)
			{
				return (void*)new USHORT;
			}
			else if (_wcsicmp(a, L"ulonglong") == 0)
			{
				return (void*)new ULONGLONG;
			}
			else if (_wcsicmp(a, L"bool") == 0)
			{
				return (void*)new BOOL;
			}
			return NULL;
		}

		if (_wcsicmp(a, L"int") == 0)
		{
			return (void*)new int[size];
		}
		else if (_wcsicmp(a, L"wchar") == 0)
		{
			return (void*)new WCHAR[size];
		}
		else if (_wcsicmp(a, L"char") == 0)
		{
			return (void*)new CHAR[size];
		}
		else if (_wcsicmp(a, L"long") == 0)
		{
			return (void*)new LONG[size];
		}
		else if (_wcsicmp(a, L"longlong") == 0)
		{
			return (void*)new LONGLONG[size];
		}
		else if (_wcsicmp(a, L"short") == 0)
		{
			return (void*)new SHORT[size];
		}
		else if (_wcsicmp(a, L"byte") == 0)
		{
			return (void*)new BYTE[size];
		}
		else if (_wcsicmp(a, L"float") == 0)
		{
			return (void*)new FLOAT[size];
		}
		else if (_wcsicmp(a, L"double") == 0)
		{
			return (void*)new double[size];
		}
		else if (_wcsicmp(a, L"longdouble") == 0)
		{
			return (void*)new long double[size];
		}
		else if (_wcsicmp(a, L"uint") == 0)
		{
			return (void*)new UINT[size];
		}
		else if (_wcsicmp(a, L"ulong") == 0)
		{
			return (void*)new ULONG[size];
		}
		else if (_wcsicmp(a, L"ushort") == 0)
		{
			return (void*)new USHORT[size];
		}
		else if (_wcsicmp(a, L"ulonglong") == 0)
		{
			return (void*)new ULONGLONG[size];
		}
		else if (_wcsicmp(a, L"bool") == 0)
		{
			return (void*)new BOOL[size];
		}
	}
	catch (const std::exception&)
	{

	}
	return NULL;
}

bool TMemoryAPI::TAsmCode(LONG base_addr, wchar_t* retstr)
{
	bool bret = false;
	int len = asmcodearry.length();
	char retstring[MAX_PATH * 10] = { 0 };
	int retstrlen = 0;
	for (int i = 0; i < len; i++)
	{
		int stringlen = 0;
		{
			stringlen = strlen(&asmcodearry.c_str()[i]);
			if (stringlen > 0)
			{
				LONG val = ::strtol(&asmcodearry.c_str()[i], 0, 16);
				if (val >= 0x10)
				{
					if (val <= 0xff)
					{
						if (retstrlen == 0)
							retstrlen = strlen(retstring);
						if (retstrlen == 0)
							sprintf(retstring, "%s", &asmcodearry.c_str()[i]);
						else
							sprintf(retstring, "%s %s", retstring, &asmcodearry.c_str()[i]);
					}

					else
					{
						int len = strlen(&asmcodearry.c_str()[i]);
						char str[MAX_PATH] = { 0 };
						strcpy(str, &asmcodearry.c_str()[i]);
						for (int n = 0; n < len; n = n + 2)
						{
							char nstr[2] = { 0 };
							strncpy(nstr, &str[n], 2);
							int strn = strtol(nstr, 0, 16);
							if (n + 2 != len || n + 2 < len)
							{
								if (retstrlen == 0)
									retstrlen = strlen(retstring);
								if (retstrlen == 0)
								{
									if (strn >= 0x10)
										sprintf(retstring, "%X", strn);
									else
										sprintf(retstring, "0%X", strn);
								}

								else
								{
									if (strn >= 0x10)
										sprintf(retstring, "%s %X", retstring, strn);
									else
										sprintf(retstring, "%s 0%X", retstring, strn);
								}
							}
							else
							{
								if (len % 2 == 0)
								{
									if (strn >= 0x10)
										sprintf(retstring, "%s %X", retstring, strn);
									else
										sprintf(retstring, "%s 0%X", retstring, strn);
								}
								else
								{
									if (strn >= 0x10)
										sprintf(retstring, "%s %X", retstring, strn);
									else
										sprintf(retstring, "%s 0%X", retstring, strn);
								}
							}

						}

					}
				}
				else
					sprintf(retstring, "%s 0%s", retstring, &asmcodearry.c_str()[i]);

				i = i + stringlen - 1;
			}

			else
				sprintf(retstring, "%s 00", retstring);
		}
		bret = true;
	}
	if (strlen(Asmcalladdr) != 0)
	{
		char erro[MAX_PATH] = { 0 };
		int calllen = tasm.Assemble(Asmcalladdr, base_addr, &am, 0, 0, erro); //将汇编指令转为机器码
		for (int i = 0; i < calllen; i++)
		{
			if (strlen(retstring) == 0)
			{
				if (am.code[i] >= 0)
					if (am.code[i] >= 0x10)
						sprintf(retstring, "%X", am.code[i]);
					else
						sprintf(retstring, "%s 0%X", retstring, am.code[i]);
				else
				{
					LONG val = am.code[i] - 0xffffff00;
					if (val >= 0x10)
						sprintf(retstring, "%s %X", retstring, val);
					else
						sprintf(retstring, "%s 0%X", retstring, val);

				}
			}
			else
			{
				if (am.code[i] >= 0)
					if (am.code[i] >= 0x10)
						sprintf(retstring, "%s %X", retstring, am.code[i]);
					else
						sprintf(retstring, "%s 0%X", retstring, am.code[i]);
				else
				{
					LONG val = am.code[i] - 0xffffff00;
					if (val >= 0x10)
						sprintf(retstring, "%s %X", retstring, val);
					else
						sprintf(retstring, "%s 0%X", retstring, val);

				}
			};
			bret = true;
		}
	}
	USES_CONVERSION;
	wcscpy(retstr, CA2WEX(retstring));

	return bret;
}

bool TMemoryAPI::TAssemble(wchar_t* asm_code, LONG base_addr, LONG is_upper, wchar_t* retstr)
{
	bool bret = false;

	if (wcslen(asm_code) <= 0)
		return bret;
	CMgDisasmBase::t_disasm da;
	tdsm.m_nIDEAL = 0; tdsm.m_nLowercase = is_upper; tdsm.m_nPutDefSeg = 0;

	DWORD datas[MAX_PATH * 10] = { 0 };
	int count = 0;
	TGetDataValue(asm_code, datas, count);
	if (count <= 0)
		return bret;

	BYTE helpByte[MAX_PATH * 10] = { 0 };
	for (int i = 0; i < count; i++)
	{
		helpByte[i] = (BYTE)datas[i];
	}

	ulong l = tdsm.Disasm((char*)helpByte, count, 0, &da, DISASM_CODE);
	USES_CONVERSION;
	wcscpy(retstr, CA2WEX(da.result));

	return bret;
}