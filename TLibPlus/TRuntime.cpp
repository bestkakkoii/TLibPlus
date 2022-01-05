#include "TRuntime.h"
#include "pch.h"
#include "TJson.h"
#include <Stdio.h>
#include <Tchar.h>
#include <algorithm>
#include <sstream>
#include <string>
#include <iostream>
#include <numbers>
#include <random>
#include <shellapi.h>
#include <iomanip>
#include <ranges>
#include <string_view>
#include <type_traits>


//#include <memoryapi.h>
//#pragma comment(lib,"Kernel32.lib")

TRuntime::TRuntime(void)
{
}


TRuntime::~TRuntime(void)
{

}

constexpr DOUBLE MyPI = std::numbers::pi;


void TRuntime::DoubleDeBuffer(HWND hWnd, const wchar_t* fileName)
{

}


double TRuntime::TPi()
{
	return MyPI;
}


long TRuntime::TRand(long MIN, long MAX)
{
	std::random_device rd;
	std::default_random_engine eng(rd());
	std::uniform_int_distribution<LONG> distr(MIN, MAX);
	return distr(eng);
}
double TRuntime::TRandDouble(double DOUBLE_MIN, double DOUBLE_MAX)
{
	std::random_device rd;
	std::default_random_engine eng(rd());
	std::uniform_real_distribution<> distr(DOUBLE_MIN, DOUBLE_MAX);

	return distr(eng);
}

bool TRuntime::TCheckProcess(const wchar_t* Name)
{
	//获取进程名称
	//d:\Projects\Debug\Test.exe
	wchar_t szFileFullPath[MAX_PATH] = { 0 }, szProcessName[MAX_PATH] = { 0 };
	::GetModuleFileName(NULL, szFileFullPath, MAX_PATH);//获取文件路径
	long length = ::wcslen(szFileFullPath);
	long j;
	for (long i = length - 1; i >= 0; i--)//从路径后面开始找\，即倒着找右斜杠
	{
		if (szFileFullPath[i] == '\\')//找到第一个\，就可以马上获取进程名称了
		{
			i++;
			for (j = 0; i <= length; j++)//结束符\0不能少,即i=length
			{
				szProcessName[j] = szFileFullPath[i++];
			}
			break;
		}
	}

	//szProcessName就是本程序的进程名称了
	if (::wcscmp(szProcessName, Name) != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

const wchar_t* TRuntime::TGetExecutablePathAboveVista(DWORD dwProcessId)
{
#pragma warning(push)
#pragma warning(disable:6385)
#pragma warning(disable:6386)
	wchar_t buffer[MAX_PATH] = { 0 };
	DWORD length = sizeof(buffer);
	const wchar_t* szText = L"";
	HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_QUERY_LIMITED_INFORMATION, 0, dwProcessId);
	if (hProcess != 0)
	{
		if (QueryFullProcessImageName(hProcess, 0, buffer, &length))
		{
			szText = (const wchar_t*)buffer;
		}
	}
	if (hProcess != NULL)
		CloseHandle(hProcess);
	return szText;
#pragma   warning(pop)  
}



void TRuntime::TDelay_Ms(DWORD nus)
{
	//LARGE_INTEGER startTim = { 0 };  // starting time
	//LARGE_INTEGER curTim = { 0 };    // cunrrent time
	//LARGE_INTEGER preTim = { 0 };    // previous time
	//LARGE_INTEGER cpuFreq = { 0 };   // cpu frequency

	//double h_tickend = 0.0;
	//double h_wait = (double)nus;
	//double FREQ_1US = 1000000.0;

	//QueryPerformanceCounter(&preTim);
	//memcpy(&startTim, &preTim, (sizeof(LARGE_INTEGER)));
	//double h_tickstart = (double)(startTim.QuadPart);
	//h_tickend = h_tickstart;

	//QueryPerformanceFrequency(&cpuFreq);
	//double h_freq = (double)(cpuFreq.QuadPart);
	//double h_count_n = h_freq / FREQ_1US;

	//while ((h_tickend - h_tickstart) / h_count_n < h_wait) {

	//	QueryPerformanceCounter(&curTim);

	//	memcpy(&preTim, &curTim, (sizeof(LARGE_INTEGER)));
	//	h_tickend = (double)(preTim.QuadPart);
	//}
}

void TRuntime::TDelay(long nTime, bool en)
{
	//ULONGLONG tm0 = 0, tm1 = 0;
	//tm0 = GetTickCount64();//获取当前时间，单位为ms
	//MSG msg = { 0 };
	//while ((tm1 - tm0) < s)
	//{

	//	tm1 = GetTickCount64();
	//}
	//return;
	HANDLE hTimer = 0;
	MSG msg = { 0 };
	LARGE_INTEGER lar = { 0 };

	lar.QuadPart = -10 * static_cast<LONGLONG>(nTime) * 1000;

	if ((hTimer = CreateWaitableTimer(NULL, FALSE, NULL)) != NULL)
	{
		SetWaitableTimer(hTimer, &lar, NULL, NULL, NULL, FALSE);

		while (MsgWaitForMultipleObjects(1, &hTimer, FALSE, INFINITE, QS_ALLINPUT) != WAIT_OBJECT_0)
		{
			if(!en)
				ProcessEvent(msg);
		}
		CloseHandle(hTimer);
	}
}

void TRuntime::ProcessEvent(MSG msg)
{
	while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
	{
		TranslateMessage(&msg);//translates virtual-key messages into character messages
		DispatchMessage(&msg);//dispatches a message to a window procedure
	}
}

//获取进程命令行
bool TRuntime::TGetProcessCommandLineW(DWORD dwProcessId, LPWSTR pszCmdLine, DWORD cchCmdLine)
{
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, dwProcessId);
	if (hProcess == NULL)
	{
		return false;
	}
	BOOL			bRet;
	DWORD			dwPos;
	LPBYTE			lpAddr;
	DWORD			dwRetLen;

	bRet = false;

	dwPos = 0;
	lpAddr = (LPBYTE)GetCommandLine;
	//win7
	if (lpAddr[dwPos] == 0xeb && lpAddr[dwPos + 1] == 0x05)
	{
		dwPos += 2;
		dwPos += 5;
	Win8:
		if (lpAddr[dwPos] == 0xff && lpAddr[dwPos + 1] == 0x25)
		{
			dwPos += 2;
			lpAddr = *(LPBYTE*)(lpAddr + dwPos);

			dwPos = 0;
			lpAddr = *(LPBYTE*)lpAddr;
		WinXp:
			if (lpAddr[dwPos] == 0xa1)
			{
				dwPos += 1;
				lpAddr = *(LPBYTE*)(lpAddr + dwPos);
				bRet = ReadProcessMemory(hProcess,
					lpAddr,
					&lpAddr,
					sizeof(LPBYTE),
					&dwRetLen);
				if (bRet)
				{
					bRet = ReadProcessMemory(hProcess,
						lpAddr,
						pszCmdLine,
						cchCmdLine,
						&dwRetLen);
				}
			}
		}
		else
		{
			goto WinXp;
		}
	}
	else
	{
		goto Win8;
	}
	CloseHandle(hProcess);
	return bRet;
}

bool TRuntime::TExitProcessW(const wchar_t* fileName)
{
	DWORD dwProceeId = GetCurrentProcessId();
	wstring szPath = fileName;
	wstring szContent = L"";
	szContent += L"SET pid=" + to_wstring(dwProceeId) + L"\r\n";
	szContent += L":loop\r\n";
	szContent += L"tasklist /nh /fi \"pid eq %pid%\"|find /i \"%pid%\" > nul\r\n";
	szContent += L"if %errorlevel%==0 (\r\n";
	szContent += L"ping -n 2 127.0.0.1 > nul\r\n";
	szContent += L"goto loop )\r\n";
	szContent += L"ping -n 2 127.0.0.1 > nul\r\n";
	szContent += L"Rd /s /q \"" + szPath + L"\"\r\n";
	szContent += L"del %0";
	wchar_t TmpPath[MAX_PATH] = { 0 };
	GetTempPathW(MAX_PATH, TmpPath);
	wstring SavePath = TmpPath;
	SavePath += to_wstring(dwProceeId) + L".bat";

	if ((wchar_t*)fileName != (wchar_t*)L"")
	{
		FILE* pFileOut = _wfopen(SavePath.c_str(), L"w");
		fwprintf(pFileOut, L"%s", szContent.c_str());
		fclose(pFileOut);
		ShellExecute(NULL, L"open", SavePath.c_str(), L"", NULL, 0);
	}

	DWORD lpExitCode = 0;
	HANDLE hProcess = GetCurrentProcess();
	GetExitCodeProcess(hProcess, &lpExitCode);
	return TerminateProcess(hProcess, lpExitCode);
}

long TRuntime::TBitoperationW(const wchar_t* in, long type)
{
	vector<wstring> w;
	vector<long> s;
	const wchar_t* delimit = { 0 };
	switch (type)
	{
	case 0:
		delimit = L"\\&";
		break;
	case 1:
		delimit = L"\\|";
		break;
	case 2:
		delimit = L"\\^";
		break;
	default:
		return 0;
		break;
	}

	w = wcharS_split11(in, delimit);
	for (auto& n : w)
	{
		s.push_back(tohex(n));
	}

	size_t len = s.size();

	if (len == 0)
		return 0;
	else if (len == 1)
		return s[0];

	long ret = 0;

	switch (type)
	{
	case 0:
		_AND(s, len, ret);
		break;
	case 1:
		_OR(s, len, ret);
		break;
	case 2:
		_XOR(s, len, ret);
		break;
	default:
		return 0;
	}

	return ret;
}

const wchar_t* TRuntime::TStringSplitW(const wchar_t* in, const wchar_t* delimit, LONG& len)
{
	long n = 0;
	vector<wstring> w;
	std::wstringstream ss(L"");

	w = wcharS_split11(in, delimit);
	long plen = w.size();

	if (plen == 0)
	{
		return 0;
	}
	for (long i = 0; i < plen; i++)
	{
		if (i == 0)
			ss << L"array(";
		if (i == (plen - 1))
			ss << L"\"" << n << L"\"=\"" << w[i] << "\")";
		else
			ss << L"\"" << n << L"\"=\"" << w[i] << "\",";

		n++;
	}

	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	if (plen == n)
		len = plen;

	return out;
}

const wchar_t* TRuntime::TStringRandomW(wchar_t* crr)
{
	wstring v = crr;
	std::random_device rd;
	std::mt19937 g{ rd() };
	std::wstringstream ss(L"");
	std::ranges::shuffle(v, g);
	for (auto str : v)
	{
		ss << str;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TStringSortW(wchar_t* crr)
{
	wstring v = crr;
	std::wstringstream ss(L"");
	std::ranges::stable_sort(v);//v.begin(), v.end()
	for (auto str : v)
	{
		ss << str;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TStringUniqueW(wchar_t* crr)
{
	wstring v = crr;

	std::wstringstream ss(L"");
	for (size_t i = 0; v.cbegin() + i < v.cend(); i++) {
		if (find(v.cbegin() + i + 1, v.cend(), v[i]) == v.end()) {//没找到重复的
			ss << v[i];//字符串拼接字符
		}
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TStringReverseW(wchar_t* crr)
{
	wstring v = crr;
	std::wstringstream ss(L"");
	std::ranges::reverse(v);//v.begin(), v.end()

	for (auto str : v)
	{
		ss << str;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TStringRotateW(wchar_t* crr, long mov, bool en)
{
	wstring v = crr;
	std::wstringstream ss(L"");
	if (en)
		std::ranges::rotate(v.begin(), v.begin() + mov, v.end());
	else
		std::ranges::rotate(v.rbegin(), v.rbegin() + mov, v.rend());

	for (auto str : v)
	{
		ss << str;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TStringShiftW(wchar_t* crr, long mov, bool en)
{
	wstring v = crr;
	std::wstringstream ss(L"");
	if (en)
		std::shift_right(v.begin(), v.begin(), mov);
	else
		std::shift_left(v.begin(), v.begin(), mov);

	for (auto str : v)
	{
		ss << str;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}





long TRuntime::TArrayGetHighestW(const wchar_t* szArr, bool en)
{
	std::vector<long> v = tciarr2vec(szArr);
	vector<long>::iterator p = max_element(v.begin(), v.end());
	if (en)
	{
		return *p;
	}
	else
		return p - v.begin();
}

long TRuntime::TArrayGetLowestW(const wchar_t* szArr, bool en)
{
	std::vector<long> v = tciarr2vec(szArr);
	vector<long>::iterator p = min_element(v.begin(), v.end());
	if (en)
	{
		return *p;
	}
	else
		return p - v.begin();
}

const wchar_t* TRuntime::TArrayUniqueL(const wchar_t* szArr)
{
	long n = 0;
	std::wstringstream ss(L"");
	std::vector<long> v = tciarr2vec(szArr);
	size_t len = v.size();
	ss << L"array(";
	for (size_t i = 0; v.cbegin() + i < v.cend(); i++) {
		if (find(v.cbegin() + i + 1, v.cend(), v[i]) == v.end()) {//没找到重复的
			if (i == (len - 1))
				ss << L"\"" << n << L"\"=" << v[i] << ")";
			else
				ss << L"\"" << n << L"\"=" << v[i] << ",";

			n++;

		}
	}

	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TArrayUniqueW(const wchar_t* szArr)
{
	long n = 0;
	std::wstringstream ss(L"");
	std::vector<wstring> v = tcwarr2vec(szArr);
	size_t len = v.size();
	ss << L"array(";
	for (size_t i = 0; v.cbegin() + i < v.cend(); i++) {
		if (find(v.cbegin() + i + 1, v.cend(), v[i]) == v.end()) {//没找到重复的

			if (i == (len - 1))
				ss << L"\"" << n << L"\"=" << v[i] << ")";
			else
				ss << L"\"" << n << L"\"=" << v[i] << ",";

			n++;
		}
	}

	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TArraySortL(const wchar_t* szArr, bool en)
{
	long n = 0;
	std::wstringstream ss(L"");

	std::vector<long> w = tciarr2vec(szArr);

	if (en)
		std::ranges::stable_sort(w);
	else
		std::stable_sort(w.begin(), w.end(), std::greater<long>());

	size_t len = w.size();

	if (len == 0)
		return NULL;

	for (size_t i = 0; i < len; i++)
	{
		if (i == 0)
			ss << L"array(";
		if (i == (len - 1))
			ss << L"\"" << n << L"\"=" << w[i] << ")";
		else
			ss << L"\"" << n << L"\"=" << w[i] << ",";

		n++;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TArraySortW(const wchar_t* szArr)
{
	long n = 0;
	std::wstringstream ss(L"");

	std::vector<wstring> w = tcwarr2vec(szArr);
	std::ranges::stable_sort(w);

	size_t len = w.size();
	if (len == 0)
		return NULL;

	for (size_t i = 0; i < len; i++)
	{
		if (i == 0)
			ss << L"array(";
		if (i == (len - 1))
			ss << L"\"" << n << L"\"=" << w[i] << ")";
		else
			ss << L"\"" << n << L"\"=" << w[i] << ",";

		n++;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TArrayFilterW(const wchar_t* szArr, const wchar_t* str)
{
	long n = 0;
	std::wstringstream ss(L"");
	std::vector<wstring> w = tcwarr2vec(szArr);

	size_t len = w.size();
	if (len == 0)
		return NULL;

	for (size_t i = 0; i < len; i++)
	{
		if (i == 0)
			ss << L"array(";
		if (w[i].find_first_of(str) != string::npos)
			continue;
		if (i == (len - 1))
			ss << L"\"" << n << L"\"=" << w[i] << ")";
		else
			ss << L"\"" << n << L"\"=" << w[i] << ",";

		n++;
	}

	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TArrayAllocW(long dim, const wchar_t* szsize)
{
	long len = 0, len2 = 0, len3 = 0;
	long i, j, k;
	vector<wstring> ss;
	ss = wcharS_split11(szsize, L"|");

	if (ss.size() != (size_t)dim)
		return NULL;
	std::wstringstream s(L"");
	s << L"array(";
	switch (dim)
	{
	case 1:
		len = _wtol(ss[0].c_str());
		for (i = 0; i < len; i++)
		{
			if (i != (len - 1))
				s << L"null,";
			else
				s << L"null";
		}
		s << L")";
		break;
	case 2:
		len = _wtol(ss[0].c_str());
		len2 = _wtol(ss[1].c_str());
		for (i = 0; i < len; i++)
		{
			s << L"array(";
			for (k = 0; k < len2; k++)
			{
				if (k != (len2 - 1))
					s << L"null,";
				else
					s << L"null";
			}
			s << L")";
			if (i != (len - 1))
				s << L",";
		}
		s << L")";
		break;
	case 3:
		len = _wtol(ss[0].c_str());
		len2 = _wtol(ss[1].c_str());
		len3 = _wtol(ss[2].c_str());
		for (i = 0; i < len; i++)
		{
			s << L"array(";
			for (j = 0; j < len2; j++)
			{
				s << L"array(";
				for (k = 0; k < len3; k++)
				{
					if (k != (len3 - 1))
						s << L"null,";
					else
						s << L"null";
				}
				s << L")";
				if (j != (len2 - 1))
					s << L",";
			}
			if (i != (len - 1))
				s << L"),";
			else
				s << L")";
		}
		s << L")";
		break;
	}

	const wchar_t* out = L"";
	wstring ssss = s.str();
	out = _wcsdup(ssss.c_str());
	return out;
}

const wchar_t* TRuntime::TArrayReverseW(const wchar_t* szArr)
{
	long n = 0;
	std::wstringstream ss(L"");

	std::vector<wstring> w = tcwarr2vec(szArr);
	std::ranges::reverse(w);

	size_t len = w.size();
	if (len == 0)
		return NULL;

	for (size_t i = 0; i < len; i++)
	{
		if (i == 0)
			ss << L"array(";
		if (i == (len - 1))
			ss << L"\"" << n << L"\"=" << w[i] << ")";
		else
			ss << L"\"" << n << L"\"=" << w[i] << ",";

		n++;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TArrayRotateW(const wchar_t* szArr, long mov, bool en)
{
	long n = 0;
	std::wstringstream ss(L"");

	std::vector<wstring> w = tcwarr2vec(szArr);
	if (en)
		std::ranges::rotate(w.begin(), w.begin() + mov, w.end());
	else
		std::ranges::rotate(w.rbegin(), w.rbegin() + mov, w.rend());

	size_t len = w.size();
	if (len == 0)
		return NULL;

	for (size_t i = 0; i < len; i++)
	{
		if (i == 0)
			ss << L"array(";
		if (i == (len - 1))
			ss << L"\"" << n << L"\"=" << w[i] << ")";
		else
			ss << L"\"" << n << L"\"=" << w[i] << ",";

		n++;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}

const wchar_t* TRuntime::TArrayShiftW(const wchar_t* szArr, long mov, bool en)
{
	long n = 0;
	std::wstringstream ss(L"");

	std::vector<wstring> w = tcwarr2vec(szArr);
	if (en)
		std::shift_right(w.begin(), w.begin(), mov);
	else
		std::shift_left(w.begin(), w.begin(), mov);

	size_t len = w.size();
	if (len == 0)
		return NULL;

	for (size_t i = 0; i < len; i++)
	{
		if (i == 0)
			ss << L"array(";
		if (i == (len - 1))
			ss << L"\"" << n << L"\"=" << w[i] << ")";
		else
			ss << L"\"" << n << L"\"=" << w[i] << ",";

		n++;
	}
	const wchar_t* out = L"";
	wstring s = ss.str();
	out = _wcsdup(s.c_str());
	return out;
}


DWORD TRuntime::TMmapW(const wchar_t* _FileName, const wchar_t*& buf)
{
	DWORD dwDesiredAccess = GENERIC_READ + GENERIC_WRITE;
	DWORD dwShareMode = FILE_SHARE_READ + FILE_SHARE_WRITE;

	ElevatePrivileges(L"SE_INCREASE_QUOTE_NAME");
	ElevatePrivileges(L"SE_ASSIGNPRIMARYTOKEN_NAME");
	HANDLE hFile = CreateFile(_FileName, dwDesiredAccess, dwShareMode, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
		return NULL;
	DWORD dwFilesize = GetFileSize(hFile, NULL);
	HANDLE hMap = CreateFileMappingW(hFile, NULL, PAGE_READWRITE, 0, dwFilesize, NULL);
	if (!hMap)
	{
		CloseHandle(hFile);
		return NULL;
	}
	wchar_t* rawBuffer = (wchar_t*)MapViewOfFile(hMap, FILE_MAP_ALL_ACCESS, 0, 0, dwFilesize);
	if (rawBuffer == NULL)
	{
		CloseHandle(hMap);
		CloseHandle(hFile);
		return NULL;
	}
	buf = _wcsdup(rawBuffer);
	UnmapViewOfFile(buf);
	CloseHandle(hMap);
	CloseHandle(hFile);
	return dwFilesize;
}

const wchar_t* TRuntime::TEnumIniSectionW(const wchar_t* _FileName)
{
	long i = 0;
	wchar_t strRetunrStringBuf[1024] = { 0 };
	wchar_t strValue[256] = { 0 };
	long iReturnSize = 0;
	long iCountTotal = 0;
	long iCountPrivate = 0;
	long iBufSize = 1 * 1024;
	std::wstringstream ss(L"");

	memset(strRetunrStringBuf, 0, sizeof(strRetunrStringBuf));
	iReturnSize = GetPrivateProfileSectionNames(strRetunrStringBuf,
		iBufSize,
		_FileName);

	while (iCountTotal < iReturnSize)
	{
		memset(strValue, 0, sizeof(strValue));
		memcpy(strValue, &strRetunrStringBuf[iCountTotal], wcslen(&strRetunrStringBuf[iCountTotal]) * 2);
		iCountPrivate = wcslen(&strRetunrStringBuf[iCountTotal]) + 1;
		iCountTotal += iCountPrivate;

		if (i == 0)
			ss << L"array(";

		ss << L"\"" << i << L"\"=\"" << strValue << "\",";
		i++;
	}

	const wchar_t* out = L"";
	wstring s = ss.str();
	wstring trim = L",";
	rightTrim(s, trim);
	s += L")";
	out = _wcsdup(s.c_str());
	s = L'\0';
	return out;
}

const wchar_t* TRuntime::TEnumIniKeyW(const wchar_t* key, const wchar_t* _FileName)
{
	long i = 0;
	wchar_t strRetunrStringBuf[1024] = { 0 };
	wchar_t strValue[256] = { 0 };
	long iReturnSize = 0;
	long iCountTotal = 0;
	long iCountPrivate = 0;
	long iBufSize = 1 * 1024;
	std::wstringstream ss(L"");

	memset(strRetunrStringBuf, 0, sizeof(strRetunrStringBuf));
	iReturnSize = GetPrivateProfileSection(key, strRetunrStringBuf,
		iBufSize,
		_FileName);

	while (iCountTotal < iReturnSize)
	{
		memset(strValue, 0, sizeof(strValue));
		memcpy(strValue, &strRetunrStringBuf[iCountTotal], wcslen(&strRetunrStringBuf[iCountTotal]) * 2);
		iCountPrivate = wcslen(&strRetunrStringBuf[iCountTotal]) + 1;
		iCountTotal += iCountPrivate;

		if (i == 0)
			ss << L"array(";
		vector<wstring> ww = wcharS_split11(strValue, L"=");
		ss << L"\"" << ww[0] << L"\"=\"" << ww[1] << "\",";
		i++;
	}

	const wchar_t* out = L"";
	wstring s = ss.str();
	wstring trim = L",";
	rightTrim(s, trim);
	s += L")";
	out = _wcsdup(s.c_str());
	s = L'\0';
	return out;
}

string TRuntime::TXml2JsonA(string strXml)
{
	string pNext = strXml;
	cJSON* reJson = cJSON_CreateObject();
	cJSON* jsonArray = cJSON_CreateArray();
	string strArrayKey = "";
	long nPos = 0;

	while ((nPos = pNext.find("<")) >= 0)
	{
		// 获取第一个节点，如：<doc><a a1="1" a2="2">123</a></doc>  
		long nPosS = pNext.find("<");
		long nPosE = pNext.find(">");
		if (nPosS < 0 || nPosE < 0)
		{
			printf("key error!");
		}

		string strKey = pNext.substr(nPosS + 1, nPosE - nPosS - 1);
		// 解释属性，如：<a a1="1" a2="2">  
		cJSON* jsonVal = NULL;
		if ((nPos = strKey.find("=")) > 0)
		{
			jsonVal = cJSON_CreateObject();
			long nPos = strKey.find(" ");
			string temp = strKey.substr(nPos + 1);
			strKey = strKey.substr(0, nPos);
			while ((nPos = temp.find("=")) > 0)
			{
				long nPos1 = temp.find("=");
				long nPos2 = temp.find("\" ", nPos1 + 1);

				string strSubKey = temp.substr(0, nPos1);
				string strSubVal = temp.substr(nPos1 + 1);
				if (nPos2 > 0)
					strSubVal = temp.substr(nPos1 + 1, nPos2 - nPos1 - 1);

				// 去除转义字符 \"   
				if ((long)(nPos = strSubVal.find("\"")) >= 0)
				{
					long nEnd = strSubVal.find("\\", nPos + 1);
					strSubVal = strSubVal.substr(nPos + 1, nEnd - nPos - 1);
				}
				cJSON_AddItemToObject(jsonVal, ("-" + strSubKey).c_str(), cJSON_CreateString(strSubVal.c_str()));

				if (nPos2 < 0)
					break;

				temp = temp.substr(nPos2 + 2);
			}
		}

		long nPosKeyE = pNext.find("</" + strKey + ">");
		if (nPosKeyE < 0)
		{
			printf("key error!");
		}
		// 获取节点内容，如<a a1="1" a2="2">123</a> 或 123  
		string strVal = pNext.substr(nPosE + 1, nPosKeyE - nPosE - 1);
		if ((nPos = strVal.find("<")) >= 0)
		{
			// 包含子节点，如<a a1="1" a2="2">123</a>  
			strVal = TXml2JsonA(strVal);

			if (jsonVal)
			{
				if (strVal != "")
					cJSON_AddItemToObject(jsonVal, "#text", cJSON_Parse(strVal.c_str()));
			}
			else
			{
				jsonVal = cJSON_Parse(strVal.c_str());
			}
		}
		else
		{
			// 不包含子节点，如123  
			if (jsonVal)
			{
				if (strVal != "")
					cJSON_AddItemToObject(jsonVal, "#text", cJSON_CreateString(strVal.c_str()));
			}
			else
			{
				jsonVal = cJSON_CreateString(strVal.c_str());
			}
		}

		// 获取下一个节点  
		pNext = pNext.substr(nPosKeyE + strKey.size() + 3);

		// 根据下一节点判断是否为数组  
		long nPosNext = pNext.find("<");
		long nPosNextSame = pNext.find("<" + strKey + ">");
		if (strArrayKey != "" || (nPosNext >= 0 && nPosNextSame >= 0 && nPosNext == nPosNextSame))
		{
			// 数组  
			cJSON_AddItemToArray(jsonArray, jsonVal);
			strArrayKey = strKey;
		}
		else
		{
			// 非数组  
			cJSON_AddItemToObject(reJson, strKey.c_str(), jsonVal);
		}
	}


	if (strArrayKey != "")
	{
		cJSON_AddItemToObject(reJson, strArrayKey.c_str(), jsonArray);
	}

	string strJson = cJSON_Print(reJson);

	if (reJson)
	{
		cJSON_Delete(reJson);
		reJson = NULL;
	}

	return formatJson(strJson);
}

string TRuntime::TJson2XmlA(string strJson)
{
	string strXml = "";
	cJSON* root = cJSON_Parse(strJson.c_str());
	if (!root)
	{
		printf("strJson error!");
		return "";
	}

	cJSON* pNext = root->child;
	if (!pNext)
	{
		return strJson;
	}

	long nPos = 0;
	while (pNext)
	{
		string strChild = cJSON_Print(pNext);
		string strVal = TJson2XmlA(strChild);

		if (pNext->string != NULL)
		{
			string strKey = pNext->string;
			if ((nPos = strKey.find("-")) == 0)
			{
				// 属性项  
				strXml.append(" ");
				strXml.append(strKey.substr(1));
				strXml.append("=");
				strXml.append(strVal);

				if (pNext->next == NULL)
					strXml.append(">");
			}
			else if ((nPos = strKey.find("#")) == 0)
			{
				// 值  
				strXml.append(">");
				strXml.append(strVal);
			}
			else if ((long)(strVal.find("=")) > 0 /*&& (int)(strVal.find("<")) < 0*/)
			{
				// 包含属性项的键值对  
				strXml.append("<" + strKey);
				strXml.append(strVal);
				strXml.append("</" + strKey + ">");
			}
			else
			{
				// 修正底层无键的值数组的键，如：把<JUAN_XJ_preKey>123</JUAN_XJ_preKey>中的JUAN_XJ_preKey修正  
				if ((long)strVal.find("JUAN_XJ_preKey") >= 0)
				{
					replace_all(strVal, "JUAN_XJ_preKey", strKey);
					strXml.append(strVal);
				}
				else
				{
					strXml.append("<" + strKey + ">");
					strXml.append(strVal);
					strXml.append("</" + strKey + ">");
				}
			}
		}
		else
		{
			// 不包含键的值数组， 如：["123", "456"]，暂时转为<JUAN_XJ_preKey>123</JUAN_XJ_preKey>  
			string strPreKey = "JUAN_XJ_preKey";
			strXml.append("<" + strPreKey + ">");
			strXml.append(strVal);
			strXml.append("</" + strPreKey + ">");
		}

		pNext = pNext->next;
	}

	return strXml;
}


void TRuntime::TRectinvolute(HWND hWnd, long midx, long  midy, long  nLen, long  rCount)
{
	double x, y, v, j, k;
	x = (double)midx;
	y = (double)midy;
	v = (double)nLen;
	for (long i = 0; i < rCount; i++)
	{
		j = 0;
		k = v;
		for (long s = 0; s < 2; s++)
		{
			for (long w = 0; w < i; w++)
			{
				x += j;
				y += k;
				SendMessage(hWnd, WM_MOUSEMOVE, 0, MAKELPARAM(x, y));
				Sleep(10);
				SendMessage(hWnd, WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(x, y));

			}
			j = v;
			k = 0;
		}
		i += 1;
		v *= -1;
	}
}


void TRuntime::TCircleinvolute(HWND hWnd, long midx, long  midy, long  nLen, long  hfcirLen, long  rCount)
{
	RECT rect = { 0 };
	double pi = std::numbers::pi;
	double n = 0;
	double x0, y0, rr, l, r, x, y;
	x0 = (double)midx;
	y0 = (double)midy;
	rr = (double)hfcirLen;
	l = (double)nLen;
	r = 30;
	for (long i = 0; i < rCount; i++)
	{
		while (n < pi * 2)
		{
			x = x0 + r * cos(n);
			y = y0 - r * sin(n);
			SendMessage(hWnd, WM_MOUSEMOVE, 0, MAKELPARAM(x, y));
			Sleep(10);
			n += (double)l / (double)r;
		}
		n = 0;
		r += rr;
	}
}

bool TRuntime::TRectangleScaling(double imageWidth, double imageHeight, double setWidth, double setHeight, double& width, double& height)
{
	double PicZoom;
	imageWidth = (double)(imageWidth);
	imageHeight = (double)(imageHeight);
	setWidth = (double)(setWidth);
	setHeight = (double)(setHeight);
	if (imageHeight != NULL && imageWidth != NULL)
	{
		if (setWidth / imageWidth <= setHeight / imageHeight)
		{
			PicZoom = (setWidth / imageWidth);
			width = imageWidth * PicZoom;
			height = imageHeight * PicZoom;
		}
		else
		{
			PicZoom = (setHeight / imageHeight);
			width = imageWidth * PicZoom;
			height = imageHeight * PicZoom;
		}
		return true;
	}
	return false;
}

//繁简互转
const wchar_t* TRuntime::TConvertLanguageW(const wchar_t* lpstr, long type)
{
	long size;
	//const char* szText = "";
	wchar_t* lpBuffer;
	long num = 0;
	DWORD dwMapFlags = 0;
	long wLocal = 0;
	switch (type)
	{
	case 0:
		wLocal = 0x0404;                          //指定区域设置的区域设置标识符  (#0404 繁体中文语系区域标识符)
		dwMapFlags = LCMAP_SIMPLIFIED_CHINESE;   //映射期间要使用的转换类型或要生成的排序键类型的标誌 (簡體中文标识符)
		break;
	case 1:
		wLocal = 0x0804;                          //(#0804 简体中文语系区域标识符)
		dwMapFlags = LCMAP_TRADITIONAL_CHINESE;  //(繁体中文标识符)
		break;
	default:
		return lpstr;
	}
	size = lstrlenW(lpstr);           //计算char字符长度
	lpBuffer = new wchar_t[size + 1]; //申请一个char *类型的字符串缓存指针
	memset(lpBuffer, 0, size + 1);    //初始化内存

	//对于标识符指定的语言环境，使用指定的转换将一个输入字符串映射到另一个
	//参数1:指定区域设置的区域设置标识符
	//参数2:映射期间要使用的转换类型或要生成的排序键类型的标誌
	//参数3:保存待转换数据的字符串指针
	//参数4:源字符串的大小
	//参数5:接收转换结果的字符串缓存指针
	//参数6:目标字符串的大小
	//成功则返回字符数
	num = LCMapString(wLocal, (long)(dwMapFlags), lpstr, size + 1, lpBuffer, size + 1);
	if (num > 0)
		return lpBuffer;

	return lpstr;
}

char* TRuntime::TCPTransformA(const char* pStrSrc, long nCPSrc, long nCPTar)
{
	wchar_t* pWStr = ToWideChar(pStrSrc, nCPSrc);
	char* pStr = ToMultiByte(pWStr, nCPTar);
	delete[] pWStr;
	return pStr;
}

vector<wstring> TRuntime::wcharS_split11(const wchar_t* in, const wchar_t* delimit)
{
	//vector<wstring> ret;
	//try
	//{
	//	std::wregex re{ delimit };
	//	return vector<wstring>{std::wcregex_token_iterator(in, in + wcslen(in), re, -1),
	//		std::wcregex_token_iterator()};
	//}
	//catch (const std::exception e)
	//{

	//}
	//wstring s = in;
	//vector<wstring> ret;
	//std::wstring pattern(delimit);
	//std::wregex re(pattern);
	////end是尾后迭代器，regex_iterator是regex_iterator的string类型的版本
	//for (std::wsregex_token_iterator it(s.begin(), s.end(), re, -1), end; it != end; ++it)
	//{
	//	wstring  a = it->str();

	//	ret.push_back(a);
	//}

	vector<wstring> ret;
	std::wstring_view words{ in };
	std::wstring_view delim{ delimit };

	auto view = words
		| std::ranges::views::split(delim)
		| std::ranges::views::transform([](auto&& rng) {
		return std::wstring_view(&*rng.begin(), ranges::distance(rng));
			});
	for (std::wstring_view it : view)
	{
		ret.push_back((wstring)it);
	}
	return ret;

}