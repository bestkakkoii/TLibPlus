#pragma once
#include "framework.h"
#include <regex>

//#include <Winsock2.h>
//#include <WS2tcpip.h> 
//#pragma comment(lib,"ws2_32.lib")


using namespace std;


class TRuntime
{
private:
	void ProcessEvent(MSG msg);

public:
	TRuntime(void);
	~TRuntime(void);
public:
	void DoubleDeBuffer(HWND hWnd, const wchar_t* fileName);
	bool TExitProcessW(const wchar_t* fileName);
	bool TCheckProcess(const wchar_t* Name);
	bool TGetProcessCommandLineW(DWORD dwProcessId, LPWSTR pszCmdLine, DWORD cchCmdLine);
	const wchar_t* TGetExecutablePathAboveVista(DWORD dwProcessId);
	void TDelay(long nTime, bool en);
	void TDelay_Ms(DWORD nus);
public:
	double TPi();
	long TRand(long MIN, long MAX);
	double TRandDouble(double DOUBLE_MIN, double DOUBLE_MAX);
	long TBitoperationW(const wchar_t* in, long type);
	void TRectinvolute(HWND hWnd, long midx, long  midy, long  nLen, long  rCount);
	void TCircleinvolute(HWND hWnd, long midx, long  midy, long  nLen, long  hfcirLen, long  rCount);
	bool TRectangleScaling(double imageWidth, double imageHeight, double setWidth, double setHeight, double& width, double& height);
public:
	const wchar_t* TArrayUniqueL(const wchar_t* szArr);
	const wchar_t* TArrayUniqueW(const wchar_t* szArr);
	const wchar_t* TArraySortL(const wchar_t* szArr, bool en);
	const wchar_t* TArraySortW(const wchar_t* szArr);
	const wchar_t* TArrayFilterW(const wchar_t* szArr, const wchar_t* str);
	const wchar_t* TArrayAllocW(long dim, const wchar_t* szsize);
	const wchar_t* TArrayReverseW(const wchar_t* szArr);
	const wchar_t* TArrayRotateW(const wchar_t* szArr, long mov, bool en);
	const wchar_t* TArrayShiftW(const wchar_t* szArr, long mov, bool en);
	long TArrayGetHighestW(const wchar_t* szArr, bool en);
	long TArrayGetLowestW(const wchar_t* szArr, bool en);
public:
	DWORD TMmapW(const wchar_t* _FileName, const wchar_t*& buf);
	const wchar_t* TEnumIniSectionW(const wchar_t* _FileName);
	const wchar_t* TEnumIniKeyW(const wchar_t* key, const wchar_t* _FileName);
	char* TCPTransformA(const char* pStrSrc, long nCPSrc, long nCPTar);
	const wchar_t* TConvertLanguageW(const wchar_t* lpstr, long type);
	const wchar_t* TStringSplitW(const wchar_t* in, const wchar_t* delimit, LONG& len);
	const wchar_t* TStringSortW(wchar_t* crr);
	const wchar_t* TStringRandomW(wchar_t* crr);
	const wchar_t* TStringUniqueW(wchar_t* crr);
	const wchar_t* TStringReverseW(wchar_t* crr);
	const wchar_t* TStringRotateW(wchar_t* crr, long mov, bool en);
	const wchar_t* TStringShiftW(wchar_t* crr, long mov, bool en);

public:
	string TXml2JsonA(string strXml);
	string TJson2XmlA(string strJson);
private:
#pragma region private


	long regexSplit(wstring& str, const wstring str_reg, vector<wstring>& vect, long pos)
	{
		if (pos != -1) pos = 0;  //pos=0 匹配到的位置，pos=-1匹配位置的前一字串 
		wregex Pattern(str_reg);
		wsregex_token_iterator it(str.begin(), str.end(), Pattern, pos);
		wsregex_token_iterator end;
		for (; it != end; ++it, it++) vect.push_back(*it);
		return vect.size();  //if 0 没有匹配到，else 匹配到的个数
	}

	string& replace_all(string& str, const string& old_value, const string& new_value)
	{
		while (true)
		{
			string::size_type   pos(0);
			if ((pos = str.find(old_value)) != string::npos)
				str.replace(pos, old_value.length(), new_value);
			else
				break;
		}
		return   str;
	}

	string formatJson(string json)
	{
		string result = "";
		long level = 0;
		for (string::size_type index = 0; index < json.size(); index++)
		{
			char c = json[index];

			if (level > 0 && '\n' == json[json.size() - 1])
			{
				result += getLevelStr(level);
			}

			switch (c)
			{
			case '{':
			case '[':
				result = result + c + "\n";
				level++;
				result += getLevelStr(level);
				break;
			case ',':
				result = result + c + "\n";
				result += getLevelStr(level);
				break;
			case '}':
			case ']':
				result += "\n";
				level--;
				result += getLevelStr(level);
				result += c;
				break;
			default:
				result += c;
				break;
			}

		}
		return result;
	}
	vector<wstring> wcharS_split11(const wchar_t* in, const wchar_t* delimit);
	//vector<wstring> wcharS_split(const wchar_t* in, const wchar_t* delimit)
	//{
	//	vector<wstring> ret;
	//	long length = wcsnlen_s(in, 1024) + 1;
	//	wchar_t* tempIn = new wchar_t[length];

	//	wcscpy_s(tempIn, length, in);

	//	wchar_t* next_token = NULL;
	//	wchar_t* token = NULL;
	//	token = wcstok_s(tempIn, delimit, &next_token);

	//	while (token != NULL)
	//	{
	//		if (token != NULL)
	//		{
	//			ret.push_back(wstring(token));
	//			token = wcstok_s(NULL, delimit, &next_token);
	//		}
	//	}
	//	delete[] tempIn;
	//	return ret;
	//}

	std::vector<long> tciarr2vec(const wchar_t* szArr)
	{
		wstring s = szArr;
		vector<long> ret;
		std::wstring pattern(L"=\\s*(\\d+)");
		std::wregex re(pattern);
		//end是尾后迭代器，regex_iterator是regex_iterator的string类型的版本
		for (std::wsregex_token_iterator it(s.begin(), s.end(), re, 1), end; it != end; ++it)
		{
			wstring  a = it->str();
			ret.push_back(std::stoi(a));
		}
		return ret;
	}

	std::vector<wstring> tcwarr2vec(const wchar_t* szArr)
	{
		wstring s = szArr;
		vector<wstring> ret;
		std::wstring pattern(L"=\\s*([\"\\w *\"|\\d+]+)");
		std::wregex re(pattern);
		//end是尾后迭代器，regex_iterator是regex_iterator的string类型的版本
		for (std::wsregex_token_iterator it(s.begin(), s.end(), re, 1), end; it != end; ++it)
		{
			wstring  a = it->str();

			ret.push_back(a);
		}
		return ret;
	}
	wstring& rightTrim(wstring& str, wstring& wchars)
	{
		str.erase(str.find_last_not_of(wchars) + 1);
		return str;
	}


	// 转换成Unicode
	wchar_t* ToWideChar(const char* pStr, long nCodePage)
	{
		long nStrLen = MultiByteToWideChar(nCodePage, 0, pStr, -1, NULL, 0);
		wchar_t* pWStr = new wchar_t[nStrLen + 1];
		memset(pWStr, 0, nStrLen + 1);
		MultiByteToWideChar(nCodePage, 0, pStr, -1, pWStr, nStrLen);
		return pWStr;
	}


	// 转换成多字节
	char* ToMultiByte(const wchar_t* pWStr, long nCodePage)
	{
		long nStrLen = WideCharToMultiByte(nCodePage, 0, pWStr, -1, NULL, 0, NULL, NULL);
		char* pStr = new char[nStrLen + 1];
		memset(pStr, 0, nStrLen + 1);
		WideCharToMultiByte(nCodePage, 0, pWStr, -1, pStr, nStrLen, NULL, NULL);
		return pStr;
	}


	string getLevelStr(long level)
	{
		string levelStr = "";
		for (long i = 0; i < level; i++)
		{
			levelStr += "\t"; //这里可以\t换成你所需要缩进的空格数
		}
		return levelStr;

	}

	long tohex(wstring str)
	{
		const wchar_t* s = { 0 };

		if (str.find_first_of(L"#") != string::npos)
		{
			str.replace(str.find(L"#"), 1, L"");
			s = str.c_str();
			return wcstol(s, NULL, 16);
		}
		else
		{
			s = str.c_str();
			return _wtol(s);
		}
	}

	void _AND(vector<long> s, long len, long& ret)
	{
		switch (len)
		{
		case 2:
			ret = s[0] & s[1];
			break;
		case 3:
			ret = s[0] & s[1] & s[2];
			break;
		case 4:
			ret = s[0] & s[1] & s[2] & s[3];
			break;
		case 5:
			ret = s[0] & s[1] & s[2] & s[3] & s[4];
			break;
		case 6:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5];
			break;
		case 7:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5] & s[6];
			break;
		case 8:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5] & s[6] & s[7];
			break;
		case 9:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5] & s[6] & s[7] & s[8];
			break;
		case 10:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5] & s[6] & s[7] & s[8] & s[9];
			break;
		case 11:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5] & s[6] & s[7] & s[8] & s[9] & s[10];
			break;
		case 12:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5] & s[6] & s[7] & s[8] & s[9] & s[10] & s[11];
			break;
		case 13:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5] & s[6] & s[7] & s[8] & s[9] & s[10] & s[11] & s[12];
			break;
		case 14:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5] & s[6] & s[7] & s[8] & s[9] & s[10] & s[11] & s[12] & s[13];
			break;
		case 15:
			ret = s[0] & s[1] & s[2] & s[3] & s[4] & s[5] & s[6] & s[7] & s[8] & s[9] & s[10] & s[11] & s[12] & s[13] & s[14];
			break;
		}
	}

	void _OR(vector<long> s, long len, long& ret)
	{
		switch (len)
		{
		case 2:
			ret = s[0] | s[1];
			break;
		case 3:
			ret = s[0] | s[1] | s[2];
			break;
		case 4:
			ret = s[0] | s[1] | s[2] | s[3];
			break;
		case 5:
			ret = s[0] | s[1] | s[2] | s[3] | s[4];
			break;
		case 6:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5];
			break;
		case 7:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5] | s[6];
			break;
		case 8:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5] | s[6] | s[7];
			break;
		case 9:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5] | s[6] | s[7] | s[8];
			break;
		case 10:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5] | s[6] | s[7] | s[8] | s[9];
			break;
		case 11:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5] | s[6] | s[7] | s[8] | s[9] | s[10];
			break;
		case 12:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5] | s[6] | s[7] | s[8] | s[9] | s[10] | s[11];
			break;
		case 13:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5] | s[6] | s[7] | s[8] | s[9] | s[10] | s[11] | s[12];
			break;
		case 14:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5] | s[6] | s[7] | s[8] | s[9] | s[10] | s[11] | s[12] | s[13];
			break;
		case 15:
			ret = s[0] | s[1] | s[2] | s[3] | s[4] | s[5] | s[6] | s[7] | s[8] | s[9] | s[10] | s[11] | s[12] | s[13] | s[14];
			break;
		}
	}



	void _XOR(vector<long> s, long len, long& ret)
	{
		switch (len)
		{
		case 2:
			ret = s[0] ^ s[1];
			break;
		case 3:
			ret = s[0] ^ s[1] ^ s[2];
			break;
		case 4:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3];
			break;
		case 5:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4];
			break;
		case 6:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5];
			break;
		case 7:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5] ^ s[6];
			break;
		case 8:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5] ^ s[6] ^ s[7];
			break;
		case 9:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5] ^ s[6] ^ s[7] ^ s[8];
			break;
		case 10:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5] ^ s[6] ^ s[7] ^ s[8] ^ s[9];
			break;
		case 11:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5] ^ s[6] ^ s[7] ^ s[8] ^ s[9] ^ s[10];
			break;
		case 12:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5] ^ s[6] ^ s[7] ^ s[8] ^ s[9] ^ s[10] ^ s[11];
			break;
		case 13:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5] ^ s[6] ^ s[7] ^ s[8] ^ s[9] ^ s[10] ^ s[11] ^ s[12];
			break;
		case 14:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5] ^ s[6] ^ s[7] ^ s[8] ^ s[9] ^ s[10] ^ s[11] ^ s[12] ^ s[13];
			break;
		case 15:
			ret = s[0] ^ s[1] ^ s[2] ^ s[3] ^ s[4] ^ s[5] ^ s[6] ^ s[7] ^ s[8] ^ s[9] ^ s[10] ^ s[11] ^ s[12] ^ s[13] ^ s[14];
			break;
		}
	}
#pragma endregion
};
