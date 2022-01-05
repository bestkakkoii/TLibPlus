// TLibPlusInterface.cpp: CTLibPlusInterface 的实作

#include "pch.h"
#include "framework.h"
#include "TLibPlusInterface.h"
#include "TInputBox.h"

#include <comutil.h>
//#pragma comment(lib, "comsuppw.lib")

constexpr auto CODEPAGE_GB2312 = 936;
constexpr auto CODEPAGE_BIG5 = 950;
constexpr auto CODEPAGE_UTF8 = 65001;
// CTLibPlusInterface

#pragma region 中文
#pragma region 系统
STDMETHODIMP CTLibPlusInterface::版本(BSTR* retver)
{
	CComBSTR newbstr;
	std::ignore = newbstr.Append(T_VERSION);
	std::ignore = newbstr.CopyTo(retver);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::输入框(LONG hWnd, LONG Color, BSTR szCaption, BSTR szPrompt, BSTR szDefaultText, BSTR* retstring)
{
	if (Color == NULL)
		Color = RGB(255, 255, 255);
	if (hWnd == NULL)
		hWnd = 0;

	LPWSTR result = T_InputBox::GetString((HWND)hWnd, (COLORREF)Color, szCaption, szPrompt, szDefaultText);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);

	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::扫描调试器(LONG* nret)
{
	gDbgObj.TPEBChecker();
	*nret = 1;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::反向量化异常处理初始化(LONG* nret)
{
	bool bret = gDbgObj.TAntiVEH();
	*nret = (LONG)bret;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::异常回调初始化(LONG hWnd, LONG en, LONG* nret)
{
	bool bret = gDbgObj.TInitMinDump((HWND)hWnd, en);
	*nret = (LONG)bret;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::获取最后异常信息(BSTR* retstring)
{
	_EXCEPTION_RECORD pMyC = { 0 };
	_CONTEXT pMyC2 = { 0 };

	wchar_t* result = gDbgObj.TGetLastErrorMsg(pMyC, pMyC2);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);

	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::延时(ULONG s, LONG en, LONG* nret)
{
	gRtObj.TDelay(s, (bool)en);
	*nret = 1;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::退出(BSTR fileName, LONG* nret)
{
	bool bret = gRtObj.TExitProcessW(fileName);

	*nret = (LONG)bret;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::取类型大小(BSTR type, LONG* nret)
{
	if (type == NULL)
		return NULL;

	_wcslwr_s(type, wcslen(type) + 1);

	const wchar_t* a = type;
	if (_wcsicmp(a, L"wchar *") == 0)
		*nret = sizeof(wchar_t*);
	else if (_wcsicmp(a, L"char *") == 0)
		*nret = sizeof(char*);
	else if (_wcsicmp(a, L"wchar") == 0)
		*nret = sizeof(wchar_t);
	else if (_wcsicmp(a, L"char") == 0)
		*nret = sizeof(char);
	else if (_wcsicmp(a, L"bool") == 0)
		*nret = sizeof(bool);
	else if (_wcsicmp(a, L"byte") == 0)
		*nret = sizeof(BYTE);
	else if (_wcsicmp(a, L"short") == 0)
		*nret = sizeof(short);
	else if (_wcsicmp(a, L"int") == 0)
		*nret = sizeof(int);
	else if (_wcsicmp(a, L"long") == 0)
		*nret = sizeof(long);
	else if (_wcsicmp(a, L"float") == 0)
		*nret = sizeof(float);
	else if (_wcsicmp(a, L"double") == 0)
		*nret = sizeof(double);
	else if (_wcsicmp(a, L"longlong") == 0)
		*nret = sizeof(long long);
	else if (_wcsicmp(a, L"word") == 0)
		*nret = sizeof(WORD);
	else if (_wcsicmp(a, L"dword") == 0)
		*nret = sizeof(DWORD);
	else if (_wcsicmp(a, L"uchar") == 0)
		*nret = sizeof(UCHAR);
	else if (_wcsicmp(a, L"ushort") == 0)
		*nret = sizeof(USHORT);
	else if (_wcsicmp(a, L"uint") == 0)
		*nret = sizeof(UINT);
	else if (_wcsicmp(a, L"ulong") == 0)
		*nret = sizeof(ULONG);
	else if (_wcsicmp(a, L"ulonglong") == 0)
		*nret = sizeof(ULONGLONG);
	else if (_wcsicmp(a, L"longdouble") == 0)
		*nret = sizeof(long double);
	else if (_wcsicmp(a, L"void *") == 0)
		*nret = sizeof(void*);
	else if (_wcsicmp(a, L"longint") == 0)
		*nret = sizeof(long int);
	else if (_wcsicmp(a, L"string") == 0)
		*nret = sizeof(string);
	else if (_wcsicmp(a, L"wstring") == 0)
		*nret = sizeof(wstring);
	else
		*nret = 0;

	return S_OK;
}
#pragma endregion

#pragma region memory
STDMETHODIMP CTLibPlusInterface::进程提权(BSTR dwPrivilege, LONG* nret)
{
	if (dwPrivilege == NULL)
		dwPrivilege = (BSTR)SE_DEBUG_NAME;

	*nret = (LONG)ElevatePrivileges(dwPrivilege);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::清理内存(LONG hWnd, LONG* nret)
{
	if (hWnd == 0)
	{
		*nret = 0;
		return S_OK;
	}

	*nret = (LONG)gMemoryObj.TFreeProcessMemory((HWND)hWnd);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::汇编加入(BSTR asm_ins, LONG* nret)
{
	*nret = gMemoryObj.TAsmAdd(asm_ins);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::汇编注入(LONG hwnd, LONG mode, LONG timeout, LONG* nret)
{
	*nret = gMemoryObj.TAsmCall(hwnd, mode, timeout);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::汇编清空(LONG* nret)
{
	*nret = gMemoryObj.TAsmClear();
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::汇编转十六进制机器码(LONG base_addr, BSTR* retstring)
{
	wchar_t  retstr[MAX_PATH * 10] = { 0 };

	gMemoryObj.TAsmCode(base_addr, retstr);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(retstr);
	std::ignore = newbstr.CopyTo(retstring);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::十六进制机器码转汇编(BSTR asm_code, LONG base_addr, BSTR* retstring)
{
	wchar_t  retstr[MAX_PATH * 10] = { 0 };
	gMemoryObj.TAssemble(asm_code, base_addr, true, retstr);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(retstr);
	std::ignore = newbstr.CopyTo(retstring);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存字符串取十进制地址(LONG hWnd, BSTR strs, VARIANT* ret, LONG* nret)
{
	if (hWnd == NULL)
		hWnd = 0;
	if (strs == NULL)
	{
		return S_OK;
	}

	LONGLONG result = gMemoryObj.TGetFindDataAddr(strs, (HWND)hWnd);
	ret->vt = VT_VOID;
	*ret->pllVal = result;
	if (result > 0 && result <= 2147483647)
		*nret = (LONG)result;
	else if (result > 0)
		*nret = 1;
	else
		*nret = 0;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存遍历读整数(LONG hWnd, LONGLONG addr, LONGLONG offest, LONG count, LONG type, BSTR* retstring)
{
	const wchar_t* result = gMemoryObj.TReadIntTraverseAddr((HWND)hWnd, addr, offest, count, type);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存读整数(LONG hWnd, LONGLONG addr, LONG type, LONGLONG* nret)
{
	*nret = gMemoryObj.TReadIntAddr((HWND)hWnd, addr, type);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存读十六进制数据(LONG hwnd, LONGLONG addr, LONG len, BSTR* retstring)
{
	wchar_t retstr[MAX_PATH] = { 0 };
	gMemoryObj.TReadDataAddr(hwnd, addr, retstr, len);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(retstr);
	std::ignore = newbstr.CopyTo(retstring);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存写整数(LONG hWnd, LONGLONG addr, LONG type, LONGLONG value, LONG* nret)
{
	switch (type)
	{
	case 0:
		*nret = gMemoryObj.TWriteIntAddr((HWND)hWnd, addr, type, (int)value, 0, 0, 0);
		break;
	case 1:
		*nret = gMemoryObj.TWriteIntAddr((HWND)hWnd, addr, type, 0, (short)value, 0, 0);
		break;
	case 2:
		*nret = gMemoryObj.TWriteIntAddr((HWND)hWnd, addr, type, 0, 0, (BYTE)value, 0);
		break;
	case 3:
		*nret = gMemoryObj.TWriteIntAddr((HWND)hWnd, addr, type, 0, 0, 0, (long long)value);
		break;
	default:
		*nret = 0;
	}
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存写十六进制数据(LONG hwnd, LONGLONG addr, BSTR data, LONG* nret)
{
	// TODO: 在此添加实现代码
	*nret = gMemoryObj.TWriteDataAddr(hwnd, addr, data);
	return S_OK;
}


STDMETHODIMP CTLibPlusInterface::内存填充(VARIANT* _Dst, LONG Val, LONG Size, LONG* nret)
{
	_Dst->vt = VT_VOID;
	*nret = (LONG)memset(_Dst->plVal, (int)Val, (size_t)Size);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存複製(VARIANT* _Dst, VARIANT* _Src, LONG Size, LONG* nret)
{
	_Dst->vt = VT_VOID;
	_Src->vt = VT_VOID;
	*nret = (LONG)memcpy(_Dst->plVal, _Src->plVal, (size_t)Size);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存申请空间(BSTR sztype, LONG size, VARIANT* nret)
{
	void* p;
	p = (LONG*)gMemoryObj.TNew(sztype, size);
	nret->vt = VT_VOID;
	nret->byref = p;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存申请堆(BSTR sztype, LONG size, VARIANT* nret)
{
	void* p;
	p = gMemoryObj.TMalloc(sztype, size);
	nret->vt = VT_VOID;
	nret->byref = p;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::指针写(VARIANT* Pvoid, BSTR type, VARIANT* value, LONG* nret)
{
	_wcslwr_s(type, wcslen(type) + 1);

	const wchar_t* a = type;

	if (_wcsicmp(a, L"wchar") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_LPWSTR;
		swap(*Pvoid->pbstrVal, value->bstrVal);
	}
	else if (_wcsicmp(a, L"double") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_R8;
		swap(*Pvoid->pdblVal, value->dblVal);
	}
	else if (_wcsicmp(a, L"longlong") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_R8;
		swap(*Pvoid->pllVal, value->llVal);
	}
	else if (_wcsicmp(a, L"byte") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_UI1;
		swap(*Pvoid->pbVal, value->bVal);
	}
	else if (_wcsicmp(a, L"short") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_I2;
		swap(*Pvoid->piVal, value->iVal);
	}
	else if (_wcsicmp(a, L"float") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_R4;
		swap(*Pvoid->pfltVal, value->fltVal);
	}
	else
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_I4;
		swap(*Pvoid->plVal, value->lVal);
	}

	*nret = 1;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::指针读(VARIANT* Pvoid, BSTR type, VARIANT* nret)
{
	_wcslwr_s(type, wcslen(type) + 1);

	const wchar_t* a = type;
	if (_wcsicmp(a, L"wchar") == 0)
	{
		nret->vt = VT_LPWSTR;
		nret->bstrVal = *Pvoid->pbstrVal;
	}
	else if (_wcsicmp(a, L"double") == 0)
	{
		nret->vt = VT_R8;
		nret->dblVal = *Pvoid->pdblVal;
	}
	else if (_wcsicmp(a, L"longlong") == 0)
	{
		nret->vt = VT_I8;
		nret->llVal = *Pvoid->pllVal;
	}
	else if (_wcsicmp(a, L"byte") == 0)
	{
		nret->vt = VT_UI1;
		nret->bVal = *Pvoid->pbVal;
	}
	else if (_wcsicmp(a, L"short") == 0)
	{
		nret->vt = VT_I2;
		nret->iVal = *Pvoid->piVal;
	}
	else if (_wcsicmp(a, L"float") == 0)
	{
		nret->vt = VT_R4;
		nret->fltVal = *Pvoid->pfltVal;
	}
	else if (_wcsicmp(a, L"char") == 0)
	{
		nret->vt = VT_LPSTR;
		nret->cVal = *Pvoid->pcVal;
	}
	else
	{
		nret->vt = VT_I4;
		nret->lVal = *Pvoid->plVal;
	}
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存释放空间(VARIANT* _Block, LONG* nret)
{
	delete(_Block->byref);
	_Block->plVal = nullptr;
	*nret = 1;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存数组释放空间(VARIANT* _Block, LONG* nret)
{
	delete[](_Block->byref);
	_Block->plVal = nullptr;
	*nret = 1;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存堆释放(VARIANT* _Block, LONG* nret)
{
	free(_Block->byref);
	_Block->plVal = nullptr;
	*nret = 1;
	return S_OK;
}


#pragma endregion

#pragma region calc
STDMETHODIMP CTLibPlusInterface::随机数(LONG MIN, LONG MAX, LONG* nret)
{
	*nret = (LONG)gRtObj.TRand(MIN, MAX);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::随机浮点数(DOUBLE DOUBLE_MIN, DOUBLE DOUBLE_MAX, DOUBLE* dret)
{
	*dret = (DOUBLE)gRtObj.TRandDouble(DOUBLE_MIN, DOUBLE_MAX);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::位右移(LONG l, LONG _Radix, LONG* nret)
{
	*nret = (LONG)(l >> _Radix);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::位左移(LONG l, LONG _Radix, LONG* nret)
{
	*nret = (LONG)(l << _Radix);

	return S_OK;
}


STDMETHODIMP CTLibPlusInterface::位与(BSTR ins, LONG* nret)
{
	if (ins == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TBitoperationW(ins, 0);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::位或(BSTR ins, LONG* nret)
{
	if (ins == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TBitoperationW(ins, 1);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::位异或(BSTR ins, LONG* nret)
{
	if (ins == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TBitoperationW(ins, 2);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::位反(LONG ins, LONG* nret)
{
	if (ins == NULL)
		return S_OK;

	*nret = (LONG)(~ins);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::圆周率(DOUBLE* dret)
{

	*dret = gRtObj.TPi(); return S_OK;
}

STDMETHODIMP CTLibPlusInterface::反余弦(DOUBLE _X, DOUBLE* dret)
{
	*dret = acos(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::反双曲余弦(DOUBLE _X, DOUBLE* dret)
{
	*dret = acosh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::反正弦(DOUBLE _X, DOUBLE* dret)
{
	*dret = asin(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::反双曲正弦(DOUBLE _X, DOUBLE* dret)
{
	*dret = asinh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::反正切(DOUBLE _X, DOUBLE* dret)
{
	*dret = atan(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::坐标反正切(DOUBLE _Y, DOUBLE _X, DOUBLE* dret)
{
	*dret = atan2(_Y, _X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::弧双曲正切(DOUBLE _X, DOUBLE* dret)
{
	*dret = atanh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::立方根(DOUBLE _X, DOUBLE* dret)
{
	*dret = cbrt(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数上限值(DOUBLE _X, DOUBLE* dret)
{
	*dret = ceil(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::以y符返x(DOUBLE _Number, DOUBLE _Sign, DOUBLE* dret)
{
	*dret = copysign(_Number, _Sign); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::余弦(DOUBLE _X, DOUBLE* dret)
{
	*dret = cos(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::双曲余弦(DOUBLE _X, DOUBLE* dret)
{
	*dret = cosh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数幂指数(DOUBLE _X, DOUBLE* dret)
{
	*dret = exp(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数幂指数2底(DOUBLE _X, DOUBLE* dret)
{
	*dret = exp2(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数幂指数x减1(DOUBLE _X, DOUBLE* dret)
{
	*dret = expm1(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数绝对值(DOUBLE _X, DOUBLE* dret)
{
	*dret = fabs(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数xy正差(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = fdim(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数下限值(DOUBLE _X, DOUBLE* dret)
{
	*dret = floor(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数x乘以y加z(DOUBLE _X, DOUBLE _Y, DOUBLE _Z, DOUBLE* dret)
{
	*dret = fma(_X, _Y, _Z); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数两数取最大(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = fmax(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数两数取最小(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = fmin(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数取余数(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = fmod(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数取尾数与指数(DOUBLE _X, VARIANT* _Y, DOUBLE* dret)
{
	int* i = 0;
	*dret = frexp(_X, i);
	_Y->vt = VT_INT;
	_Y->lVal = *i;

	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数平方和的平方根(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = hypot(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数绝对值对数(DOUBLE _X, DOUBLE* dret)
{
	*dret = ilogb(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数x乘以2的e幂(DOUBLE _X, LONG _Y, DOUBLE* dret)
{
	*dret = ldexp(_X, (int)_Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数取对数(DOUBLE _X, DOUBLE* dret)
{
	*dret = log(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数取对数10底(DOUBLE _X, DOUBLE* dret)
{
	*dret = log10(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数取对数2底(DOUBLE _X, DOUBLE* dret)
{
	*dret = log2(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数取绝对值对数b(DOUBLE _X, DOUBLE* dret)
{
	*dret = logb(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数x加1对数(DOUBLE _X, DOUBLE* dret)
{
	*dret = log1p(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数舍入整参数(DOUBLE _X, LONG* dret)
{
	*dret = lrint(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数四捨五入成整数(DOUBLE _X, LONG* dret)
{
	*dret = lround(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数拆解整数与小数(DOUBLE x, VARIANT* intpart, DOUBLE* dret)
{
	double d = 0;
	*dret = modf(x, &d);
	intpart->vt = VT_R8;
	intpart->dblVal = d;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::取NaN值(BSTR _X, DOUBLE* dret)
{
	*dret = nan((const char*)_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数参数舍入(DOUBLE _X, DOUBLE* dret)
{
	*dret = nearbyint(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数下一个表示值(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = nextafter(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::求幂(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = pow(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::求余数(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = remainder(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::求商(DOUBLE _X, DOUBLE _Y, VARIANT* _Z, DOUBLE* dret)
{
	int i[100] = { 0 };
	*dret = remquo(_X, _Y, i);
	_Z->vt = VT_INT;
	_Z->lVal = *i;

	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数舍入参数(DOUBLE _X, DOUBLE* dret)
{
	*dret = rint(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数四捨五入至最接近整数位(DOUBLE _X, DOUBLE* dret)
{
	*dret = round(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::x和FLT_RADX乘以n的乘积长整(DOUBLE _X, LONG _Y, DOUBLE* dret)
{
	*dret = scalbln(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::x和FLT_RADX乘以n的乘积(DOUBLE _X, LONG _Y, DOUBLE* dret)
{
	*dret = scalbn(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::正弦(DOUBLE _X, DOUBLE* dret)
{
	*dret = sin(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::双曲正弦(DOUBLE _X, DOUBLE* dret)
{
	*dret = sinh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::平方根(DOUBLE _X, DOUBLE* dret)
{
	*dret = sqrt(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::取切线(DOUBLE _X, DOUBLE* dret)
{
	*dret = tan(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::取双曲正切(DOUBLE _X, DOUBLE* dret)
{
	*dret = tanh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::浮点数符号截断(DOUBLE _X, DOUBLE* dret)
{
	*dret = trunc(_X); return S_OK;
}
#pragma endregion

#pragma region array
STDMETHODIMP CTLibPlusInterface::数组整型取最大(BSTR szArr, LONG en, LONG* nret)
{
	if (szArr == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TArrayGetHighestW((const wchar_t*)szArr, (bool)en);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组整型取最小(BSTR szArr, LONG en, LONG* nret)
{
	if (szArr == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TArrayGetLowestW((const wchar_t*)szArr, (bool)en);


	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组整型去重(BSTR szArr, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayUniqueL((const wchar_t*)szArr);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组去重(BSTR szArr, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayUniqueW((const wchar_t*)szArr);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组整型排序(BSTR szArr, LONG en, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArraySortL((const wchar_t*)szArr, (bool)en);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组排序(BSTR szArr, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArraySortW(szArr);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组过滤(BSTR szArr, BSTR str, BSTR* retstring)
{
	if (szArr == NULL || str == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayFilterW((const wchar_t*)szArr, (const wchar_t*)str);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组多维初始化(LONG dim, BSTR szsize, BSTR* retstring)
{
	if (dim == NULL || szsize == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayAllocW((long)dim, (const wchar_t*)szsize);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组倒序(BSTR szArr, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayReverseW(szArr);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组旋转(BSTR szArr, LONG mov, LONG en, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayRotateW((const wchar_t*)szArr, (long)mov, (bool)en);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::数组移位(BSTR szArr, LONG mov, LONG en, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayShiftW((const wchar_t*)szArr, (long)mov, (bool)en);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}
#pragma endregion

#pragma region string/file
STDMETHODIMP CTLibPlusInterface::字符串分割(BSTR ins, BSTR delimit, VARIANT* nret, BSTR* outs)
{
	if (ins == NULL || delimit == NULL)
	{
		outs = 0;
		return S_OK;
	}
	LONG len = 0;
	const wchar_t* result = gRtObj.TStringSplitW(ins, delimit, len);
	nret->vt = VT_I4;
	nret->lVal = len;

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(outs);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串排序(BSTR ins, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringSortW((wchar_t*)ins);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串洗牌(BSTR ins, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringRandomW((wchar_t*)ins);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串去重(BSTR ins, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringUniqueW((wchar_t*)ins);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串倒序(BSTR ins, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringReverseW((wchar_t*)ins);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串旋转(BSTR ins, LONG mov, LONG en, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringRotateW((wchar_t*)ins, (long)mov, (bool)en);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串移位(BSTR ins, LONG mov, LONG en, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringShiftW((wchar_t*)ins, (long)mov, (bool)en);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串Xml转Json(BSTR _Src, BSTR* retstring)
{
	if (_Src == NULL)
		return NULL;

	char* lpszText = _com_util::ConvertBSTRToString(_Src);
	string s = gRtObj.TXml2JsonA(lpszText);
	const char* out = "";
	out = _strdup(s.c_str());

	CComBSTR newbstr;
	std::ignore = newbstr.Append(out);
	std::ignore = newbstr.CopyTo(retstring);
	free(&lpszText);
	free(&out);
	lpszText = nullptr;
	out = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串Json转Xml(BSTR _Src, BSTR* retstring)
{
	if (_Src == NULL)
		return NULL;

	char* lpszText = _com_util::ConvertBSTRToString(_Src);
	string s = gRtObj.TJson2XmlA(lpszText);
	const char* out = "";
	out = _strdup(s.c_str());

	CComBSTR newbstr;
	std::ignore = newbstr.Append(out);
	std::ignore = newbstr.CopyTo(retstring);
	free(&lpszText);
	free(&out);
	lpszText = nullptr;
	out = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::文件流指针打开(BSTR _FileName, BSTR _Mode, LONG* nret)
{
	if (_FileName == NULL || _Mode == NULL)
		return S_OK;

	*nret = (LONG)_wfopen((const wchar_t*)_FileName, (const wchar_t*)_Mode);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::文件流指针移动(LONG _Stream, LONG _Offset, LPWSTR dst, LONG* nret)
{
	if (_Stream == NULL || dst == NULL)
		return S_OK;

	int _Origin = 0;
	_wcslwr_s((wchar_t*)dst, wcslen(dst) + 1);

	if ((wchar_t*)dst == (wchar_t*)L"cur")
		_Origin = SEEK_CUR;
	else if ((wchar_t*)dst == (wchar_t*)L"end")
		_Origin = SEEK_END;
	else
		_Origin = SEEK_SET;

	*nret = (LONG)fseek((FILE*)_Stream, (long)_Offset, _Origin);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::文件流指针读取(LONG _ElementSize, LONG _ElementCount, LONG _Stream, VARIANT* nret, BSTR* _Buffer)
{
	if (_Stream == NULL)
		return S_OK;

	wchar_t* out = new wchar_t[_ElementCount * _ElementSize];
	memset(out, 0, _ElementCount * _ElementSize);
	nret->vt = VT_I4;

	nret->lVal = (LONG)fread(out, (size_t)_ElementSize, (size_t)_ElementCount, (FILE*)_Stream);
	if (out == NULL)
	{
		return S_OK;
	}

	CComBSTR newbstr;
	std::ignore = newbstr.Append(out);
	std::ignore = newbstr.CopyTo(_Buffer);
	delete[](&out);
	out = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::文件流指针写入(LONG _Buffer, LONG _ElementSize, LONG _ElementCount, LONG _Stream, LONG* nret)
{
	if (_Stream == NULL)
		return NULL;

	*nret = (LONG)fwrite((const void*)_Buffer, (size_t)_ElementSize, (size_t)_ElementCount, (FILE*)_Stream);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::文件流指针複製(LPWSTR _Buffer, LONG _BufferCount, LONG _Stream, BSTR* retstring)
{
	if (_Stream == NULL)
		return NULL;

	wchar_t* result = fgetws((wchar_t*)_Buffer, (int)_BufferCount, (FILE*)_Stream);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::文件流指针关闭(LONG _Stream, LONG* nret)
{
	if (_Stream == NULL)
		return NULL;

	return (LONG)fclose((FILE*)_Stream);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::内存映射(BSTR _FileName, VARIANT* dwret, BSTR* buf)
{
	if (_FileName == NULL)
		return S_OK;

	const wchar_t* result = { 0 };
	dwret->vt = VT_I4;
	dwret->lVal = gRtObj.TMmapW((const wchar_t*)_FileName, result);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(buf);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::配置文件枚举小节(BSTR _FileName, BSTR* retstring)
{
	if (_FileName == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TEnumIniSectionW((const wchar_t*)_FileName);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::配置文件枚举键名(BSTR  _Key, BSTR _FileName, BSTR* retstring)
{
	if (_FileName == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TEnumIniKeyW((const wchar_t*)_Key, (const wchar_t*)_FileName);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}
#pragma endregion

#pragma region trans
STDMETHODIMP CTLibPlusInterface::交换变量(VARIANT* a, VARIANT* b, LONG* nret)
{

	swap(a->plVal, a->plVal);

	*nret = 1;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::交换高低4位(BYTE a, LONG* nret)
{

	*nret = ((a >> 4) | (a << 4));
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::交换高低8位(WORD a, LONG* nret)
{
	*nret = ((a >> 8) | (a << 8));
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::交换高低16位(LONG a, LONG* nret)
{
	*nret = ((a >> 16) | (a << 16));
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::交换高低32位(LONGLONG a, LONGLONG* nret)
{
	*nret = ((a >> 32) | (a << 32));

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::进制字符串转长整形(BSTR _String, LONG _Radix, LONG* nret)
{
	if (_String == NULL || _Radix == NULL)
		return S_OK;

	*nret = (LONG)wcstol((const wchar_t*)_String, NULL, (int)_Radix);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::进制字符串转超长整形(BSTR _String, LONG _Radix, VARIANT* llret, LONG* nret)
{
	if (_String == NULL || _Radix == NULL)
		return S_OK;

	LONGLONG result = _wcstoi64((const wchar_t*)_String, NULL, (int)_Radix);
	llret->vt = VT_VOID;
	*llret->pllVal = result;
	if (result > 0 && result <= 2147483647)
		*nret = (LONG)result;
	else if (result > 0)
		*nret = 1;
	else
		*nret = 0;
	return S_OK;
	return S_OK;
}


STDMETHODIMP CTLibPlusInterface::十进制字符串转十进制长整形(BSTR _String, LONG* nret)
{
	if (_String == NULL)
		return S_OK;

	*nret = (LONG)_wtol((const wchar_t*)_String);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::十进制字符串转十进制超长整形(BSTR _String, VARIANT* llret, LONG* nret)
{
	if (_String == NULL)
		return NULL;

	LONGLONG result = _wtoi64((const wchar_t*)_String);
	llret->vt = VT_VOID;
	*llret->pllVal = result;
	if (result > 0 && result <= 2147483647)
		*nret = (LONG)result;
	else if (result > 0)
		*nret = 1;
	else
		*nret = 0;
	return S_OK;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::十进制长整形转进制字符串(LONG _Value, LONG _Radix, BSTR* retstring)
{
	if (_Value == NULL || _Radix == NULL)
		return NULL;
	wchar_t _Buffer[MAX_PATH] = { 0 };
	wchar_t* result = _ltow(_Value, _Buffer, _Radix);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&_Buffer);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::十进制超长整形进制转字符串(LONGLONG _Value, LONG _Radix, BSTR* retstring)
{
	if (_Value == NULL || _Radix == NULL)
		return NULL;
	wchar_t _Buffer[MAX_PATH] = { 0 };
	wchar_t* result = _i64tow(_Value, _Buffer, _Radix);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);

	free(&_Buffer);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串转双精度浮点数(BSTR _String, DOUBLE* dret)
{
	if (_String == NULL)
		return NULL;

	_CRT_DOUBLE d{};
	std::ignore = _atodbl(&d, (char*)_String);
	*dret = d.x;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::字符串转浮点数(BSTR _String, FLOAT* fret)
{
	if (_String == NULL)
		return NULL;

	_CRT_FLOAT f{};
	std::ignore = _atoflt(&f, (const char*)_String);
	*fret = f.f;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::转WORD(LONG a, LONG b, WORD* wret)
{
	*wret = MAKEWORD(a, b);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::转LONG(LONG a, LONG b, LONG* nret)
{
	*nret = MAKELONG(a, b);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::取低WORD(LONG l, WORD* wret)
{
	*wret = LOWORD(l);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::取高WORD(LONG l, WORD* wret)
{
	*wret = HIWORD(l);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::取低BYTE(WORD w, BYTE* byret)
{
	*byret = LOBYTE(w);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::取高BYTE(WORD w, BYTE* byret)
{
	*byret = HIBYTE(w);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::是否资源标识符(LONG _r, LONG* nret)
{
	*nret = IS_INTRESOURCE(_r);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::转资源管理类型(LONG i, BSTR* retstring)
{
	const wchar_t* result = MAKEINTRESOURCE(i);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::转W参数(LONG l, LONG h, LONG* nret)
{
	*nret = MAKEWPARAM(l, h);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::转L参数(LONG l, LONG h, LONG* nret)
{
	*nret = MAKELPARAM(l, h);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::转LRESULT(LONG l, LONG h, LONG* nret)
{
	*nret = MAKELRESULT(l, h);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::转LGID(LONG s, LONG p, WORD* wret)
{
	*wret = MAKELANGID(s, p);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::取主语言标识符(LONG lgid, WORD* wret)
{
	*wret = PRIMARYLANGID(lgid);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::取子语言标识符(LONG lgid, WORD* wret)
{
	*wret = SUBLANGID(lgid);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::取LCID(LONG srtid, LONG lgid, DWORD* dwret)
{
	*dwret = MAKELCID(srtid, lgid);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::L参数转XY(LONG l, VARIANT* x, VARIANT* y, LONG* nret)
{
	POINTS pt = MAKEPOINTS(l);
	SHORT i = pt.x;
	SHORT j = pt.y;
	x->vt = VT_I2;
	x->iVal = i;
	y->vt = VT_I2;
	y->iVal = j;
	*nret = 1;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::取图像索引(LONG i, LONG* nret)
{
	return INDEXTOSTATEIMAGEMASK(i);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::繁简体转换(BSTR str, LONG type, BSTR* retstring)
{
	const wchar_t* result = gRtObj.TConvertLanguageW(str, type);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// GB2312转UTF8
STDMETHODIMP CTLibPlusInterface::GB2312转UTF8(BSTR pStrGB2312, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrGB2312, CODEPAGE_GB2312, CODEPAGE_UTF8);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// UTF8转GB2312
STDMETHODIMP CTLibPlusInterface::UTF8转GB2312(BSTR pStrUTF8, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrUTF8, CODEPAGE_UTF8, CODEPAGE_GB2312);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// GB2312转BIG5
STDMETHODIMP CTLibPlusInterface::GB2312转BIG5(BSTR pStrGB2312, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrGB2312, CODEPAGE_GB2312, CODEPAGE_BIG5);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// BIG5转GB2312
STDMETHODIMP CTLibPlusInterface::BIG5转GB2312(BSTR pStrBIG5, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrBIG5, CODEPAGE_BIG5, CODEPAGE_GB2312);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// UTF8转BIG5
STDMETHODIMP CTLibPlusInterface::UTF8转BIG5(BSTR pStrUTF8, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrUTF8, CODEPAGE_UTF8, CODEPAGE_BIG5);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// BIG5转UTF8
STDMETHODIMP CTLibPlusInterface::BIG5转UTF8(BSTR pStrBIG5, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrBIG5, CODEPAGE_BIG5, CODEPAGE_UTF8);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}
#pragma endregion

#pragma region net
STDMETHODIMP CTLibPlusInterface::网络初始化(LONG* nret)
{
	*nret = gNetObj._NetWSAStartup();
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络关闭(LONG* nret)
{
	*nret = gNetObj._NetClose();
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络套接字(BSTR sztype, LONG* nret)
{
	*nret = (LONG)gNetObj._NetSocket(sztype);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络关闭套接字(LONG sockhandle, LONG* nret)
{
	*nret = gNetObj._NetCloseSocket(sockhandle);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络连接(LONG sockhandle, BSTR serv_ip, USHORT serv_port, LONG* nret)
{
	char* lpszText = _com_util::ConvertBSTRToString(serv_ip);
	*nret = gNetObj._NetConnect(sockhandle, (const char*)lpszText, (u_short)serv_port);
	free(&lpszText);
	lpszText = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络绑定(LONG sockhandle, USHORT serv_port, LONG* nret)
{
	*nret = gNetObj._NetBind(sockhandle, (u_short)serv_port);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络监听(LONG sockhandle, LONG ncout, LONG* nret)
{
	*nret = gNetObj._NetListen(sockhandle, (int)ncout);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络接受(LONG sockhandle, VARIANT* nret, BSTR* serv_ip)
{
	const char* result = { 0 };

	nret->vt = VT_I4;
	nret->lVal = gNetObj._NetAccept(sockhandle, result);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(serv_ip);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络接收(LONG sockhandle, BSTR* Recvbuff)
{
	char* result = { 0 };
	std::ignore = gNetObj._NetRecv(sockhandle, result);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(Recvbuff);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络发送(LONG sockhandle, BSTR data, LONG* nret)
{
	char* lpszText = _com_util::ConvertBSTRToString(data);
	*nret = gNetObj._NetSend(sockhandle, (const char*)lpszText);
	free(&lpszText);
	lpszText = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络发送到(LONG sockhandle, BSTR data, LONG* nret)
{
	char* lpszText = _com_util::ConvertBSTRToString(data);
	*nret = gNetObj._NetSendTo(sockhandle, (const char*)lpszText);
	free(&lpszText);
	lpszText = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::网络接收来自(LONG sockhandle, LONG length, BSTR serv_ip, USHORT rPort, BSTR* data)
{
	char* result = { 0 };

	char* lpszText = _com_util::ConvertBSTRToString(serv_ip);
	std::ignore = gNetObj._NetRecvFrom(sockhandle, result, (long)length, (const char*)lpszText, (u_short)rPort);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(data);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::获取IP(LONG type, BSTR param, BSTR* data)
{
	wchar_t* result = { 0 };
	char* lpszText = _com_util::ConvertBSTRToString(param);
	if (type == 1)
		result = gNetObj.GetReadIp(lpszText);
	else if (type == 2)
		result = gNetObj.GetExIp(lpszText);
	else
		result = gNetObj.GetLocalIp();


	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(data);
	delete[](&result);
	result = nullptr;
	return S_OK;
}
#pragma endregion
#pragma endregion

#pragma region English
#pragma region 系统
STDMETHODIMP CTLibPlusInterface::Ver(BSTR* retver)
{
	CComBSTR newbstr;
	std::ignore = newbstr.Append(T_VERSION);
	std::ignore = newbstr.CopyTo(retver);
	return S_OK;
}

int CTLibPlusInterface::demo(long pvoid, long p0, long p1, long p2, long p3)
{
	lpTest = (pfnTEST)pvoid;
	return lpTest(p0, p1, p2, p3);
}

STDMETHODIMP CTLibPlusInterface::TEST(LONG pvoid, LONG count, LONG p0, LONG p1, LONG p2, LONG p3, LONG* nret)
{
	long value = 0;
	for (long i = 0; i < count; i++)
	{
		value += demo(pvoid, p0, p1, p2, p3);
	}

	*nret = value;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::InputBox(LONG hWnd, LONG Color, BSTR szCaption, BSTR szPrompt, BSTR szDefaultText, BSTR* retstring)
{
	if (Color == NULL)
		Color = RGB(255, 255, 255);
	if (hWnd == NULL)
		hWnd = 0;

	LPWSTR result = T_InputBox::GetString((HWND)hWnd, (COLORREF)Color, szCaption, szPrompt, szDefaultText);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::AntiDebuger(LONG* nret)
{
	gDbgObj.TPEBChecker();
	*nret = 1;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::AntiVEHCallBack(LONG* nret)
{
	bool bret = gDbgObj.TAntiVEH();
	*nret = (LONG)bret;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::InitExceptionCallback(LONG hWnd, LONG en, LONG* nret)
{
	bool bret = gDbgObj.TInitMinDump((HWND)hWnd, en);
	*nret = (LONG)bret;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::GetLastException(BSTR* retstring)
{
	_EXCEPTION_RECORD pMyC = { 0 };
	_CONTEXT pMyC2 = { 0 };

	wchar_t* result = gDbgObj.TGetLastErrorMsg(pMyC, pMyC2);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);

	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Delay(ULONG s, LONG en, LONG* nret)
{
	gRtObj.TDelay(s, (bool)en);
	*nret = 1;
	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Exit(BSTR fileName, LONG* nret)
{
	bool bret = gRtObj.TExitProcessW(fileName);

	*nret = (LONG)bret;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Sizeof(BSTR type, LONG* nret)
{
	if (type == NULL)
		return NULL;

	_wcslwr_s(type, wcslen(type) + 1);

	const wchar_t* a = type;
	if (_wcsicmp(a, L"wchar *") == 0)
		*nret = sizeof(wchar_t*);
	else if (_wcsicmp(a, L"char *") == 0)
		*nret = sizeof(char*);
	else if (_wcsicmp(a, L"wchar") == 0)
		*nret = sizeof(wchar_t);
	else if (_wcsicmp(a, L"char") == 0)
		*nret = sizeof(char);
	else if (_wcsicmp(a, L"bool") == 0)
		*nret = sizeof(bool);
	else if (_wcsicmp(a, L"byte") == 0)
		*nret = sizeof(BYTE);
	else if (_wcsicmp(a, L"short") == 0)
		*nret = sizeof(short);
	else if (_wcsicmp(a, L"int") == 0)
		*nret = sizeof(int);
	else if (_wcsicmp(a, L"long") == 0)
		*nret = sizeof(long);
	else if (_wcsicmp(a, L"float") == 0)
		*nret = sizeof(float);
	else if (_wcsicmp(a, L"double") == 0)
		*nret = sizeof(double);
	else if (_wcsicmp(a, L"longlong") == 0)
		*nret = sizeof(long long);
	else if (_wcsicmp(a, L"word") == 0)
		*nret = sizeof(WORD);
	else if (_wcsicmp(a, L"dword") == 0)
		*nret = sizeof(DWORD);
	else if (_wcsicmp(a, L"uchar") == 0)
		*nret = sizeof(UCHAR);
	else if (_wcsicmp(a, L"ushort") == 0)
		*nret = sizeof(USHORT);
	else if (_wcsicmp(a, L"uint") == 0)
		*nret = sizeof(UINT);
	else if (_wcsicmp(a, L"ulong") == 0)
		*nret = sizeof(ULONG);
	else if (_wcsicmp(a, L"ulonglong") == 0)
		*nret = sizeof(ULONGLONG);
	else if (_wcsicmp(a, L"longdouble") == 0)
		*nret = sizeof(long double);
	else if (_wcsicmp(a, L"void *") == 0)
		*nret = sizeof(void*);
	else if (_wcsicmp(a, L"longint") == 0)
		*nret = sizeof(long int);
	else if (_wcsicmp(a, L"string") == 0)
		*nret = sizeof(string);
	else if (_wcsicmp(a, L"wstring") == 0)
		*nret = sizeof(wstring);
	else
		*nret = 0;

	return S_OK;
}
#pragma endregion

#pragma region memory
STDMETHODIMP CTLibPlusInterface::EnablePrivilege(BSTR dwPrivilege, LONG* nret)
{
	if (dwPrivilege == NULL)
		dwPrivilege = (BSTR)SE_DEBUG_NAME;

	*nret = (LONG)ElevatePrivileges(dwPrivilege);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::FreeProcessMemory(LONG hWnd, LONG* nret)
{
	if (hWnd == 0)
	{
		*nret = 0;
		return S_OK;
	}

	*nret = (LONG)gMemoryObj.TFreeProcessMemory((HWND)hWnd);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::AsmAdd(BSTR asm_ins, LONG* nret)
{
	*nret = gMemoryObj.TAsmAdd(asm_ins);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::AsmCall(LONG hwnd, LONG mode, LONG timeout, LONG* nret)
{
	*nret = gMemoryObj.TAsmCall(hwnd, mode, timeout);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::AsmClear(LONG* nret)
{
	*nret = gMemoryObj.TAsmClear();
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Assemble(LONG base_addr, BSTR* retstring)
{
	wchar_t  retstr[MAX_PATH * 10] = { 0 };

	gMemoryObj.TAsmCode(base_addr, retstr);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(retstr);
	std::ignore = newbstr.CopyTo(retstring);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::DisAssemble(BSTR asm_code, LONG base_addr, BSTR* retstring)
{
	wchar_t  retstr[MAX_PATH * 10] = { 0 };
	gMemoryObj.TAssemble(asm_code, base_addr, true, retstr);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(retstr);
	std::ignore = newbstr.CopyTo(retstring);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::GetFindDataAddr(LONG hWnd, BSTR strs, VARIANT* ret, LONG* nret)
{
	if (hWnd == NULL)
		hWnd = 0;
	if (strs == NULL)
	{
		return S_OK;
	}

	LONGLONG result = gMemoryObj.TGetFindDataAddr(strs, (HWND)hWnd);
	ret->vt = VT_VOID;
	*ret->pllVal = result;
	if (result > 0 && result <= 2147483647)
		*nret = (LONG)result;
	else if (result > 0)
		*nret = 1;
	else
		*nret = 0;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ReadIntAddr(LONG hWnd, LONGLONG addr, LONG type, LONGLONG* nret)
{
	*nret = gMemoryObj.TReadIntAddr((HWND)hWnd, addr, type);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ReadDataAddr(LONG hwnd, LONGLONG addr, LONG len, BSTR* retstring)
{
	wchar_t retstr[MAX_PATH] = { 0 };
	gMemoryObj.TReadDataAddr(hwnd, addr, retstr, len);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(retstr);
	std::ignore = newbstr.CopyTo(retstring);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ReadIntTraverseAddr(LONG hWnd, LONGLONG addr, LONGLONG offest, LONG count, LONG type, BSTR* retstring)
{
	const wchar_t* result = gMemoryObj.TReadIntTraverseAddr((HWND)hWnd, addr, offest, count, type);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::WriteIntAddr(LONG hWnd, LONGLONG addr, LONG type, LONGLONG value, LONG* nret)
{
	switch (type)
	{
	case 0:
		*nret = gMemoryObj.TWriteIntAddr((HWND)hWnd, addr, type, (int)value, 0, 0, 0);
		break;
	case 1:
		*nret = gMemoryObj.TWriteIntAddr((HWND)hWnd, addr, type, 0, (short)value, 0, 0);
		break;
	case 2:
		*nret = gMemoryObj.TWriteIntAddr((HWND)hWnd, addr, type, 0, 0, (BYTE)value, 0);
		break;
	case 3:
		*nret = gMemoryObj.TWriteIntAddr((HWND)hWnd, addr, type, 0, 0, 0, (long long)value);
		break;
	default:
		*nret = 0;
	}
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::WriteDataAddr(LONG hwnd, LONGLONG addr, BSTR data, LONG* nret)
{
	// TODO: 在此添加实现代码
	*nret = gMemoryObj.TWriteDataAddr(hwnd, addr, data);
	return S_OK;
}


STDMETHODIMP CTLibPlusInterface::Memset(VARIANT* _Dst, LONG Val, LONG Size, LONG* nret)
{
	_Dst->vt = VT_VOID;
	*nret = (LONG)memset(_Dst->byref, (int)Val, (size_t)Size);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Memcpy(VARIANT* _Dst, VARIANT* _Src, LONG Size, LONG* nret)
{
	_Dst->vt = VT_VOID;
	_Src->vt = VT_VOID;
	*nret = (LONG)memcpy(_Dst->byref, _Src->byref, (size_t)Size);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::New(BSTR sztype, LONG size, VARIANT* nret)
{
	void* p;
	p = (LONG*)gMemoryObj.TNew(sztype, size);
	nret->vt = VT_VOID;
	nret->byref = p;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Malloc(BSTR sztype, LONG size, VARIANT* nret)
{
	void* p;
	p = gMemoryObj.TMalloc(sztype, size);
	nret->vt = VT_VOID;
	nret->byref = p;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Set(VARIANT* Pvoid, BSTR type, VARIANT* value, LONG* nret)
{
	_wcslwr_s(type, wcslen(type) + 1);

	const wchar_t* a = type;

	if (_wcsicmp(a, L"wchar") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_LPWSTR;
		swap(*Pvoid->pbstrVal, value->bstrVal);
	}
	else if (_wcsicmp(a, L"double") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_R8;
		swap(*Pvoid->pdblVal, value->dblVal);
	}
	else if (_wcsicmp(a, L"longlong") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_R8;
		swap(*Pvoid->pllVal, value->llVal);
	}
	else if (_wcsicmp(a, L"byte") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_UI1;
		swap(*Pvoid->pbVal, value->bVal);
	}
	else if (_wcsicmp(a, L"short") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_I2;
		swap(*Pvoid->piVal, value->iVal);
	}
	else if (_wcsicmp(a, L"float") == 0)
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_R4;
		swap(*Pvoid->pfltVal, value->fltVal);
	}
	else
	{
		Pvoid->vt = VT_VOID;
		value->vt = VT_I4;
		swap(*Pvoid->plVal, value->lVal);
	}

	*nret = 1;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Get(VARIANT* Pvoid, BSTR type, VARIANT* nret)
{
	_wcslwr_s(type, wcslen(type) + 1);

	const wchar_t* a = type;

	if (_wcsicmp(a, L"wchar") == 0)
	{
		nret->vt = VT_LPWSTR;
		nret->bstrVal = *Pvoid->pbstrVal;
	}
	else if (_wcsicmp(a, L"double") == 0)
	{
		nret->vt = VT_R8;
		nret->dblVal = *Pvoid->pdblVal;
	}
	else if (_wcsicmp(a, L"longlong") == 0)
	{
		nret->vt = VT_I8;
		nret->llVal = *Pvoid->pllVal;
	}
	else if (_wcsicmp(a, L"byte") == 0)
	{
		nret->vt = VT_UI1;
		nret->bVal = *Pvoid->pbVal;
	}
	else if (_wcsicmp(a, L"short") == 0)
	{
		nret->vt = VT_I2;
		nret->iVal = *Pvoid->piVal;
	}
	else if (_wcsicmp(a, L"float") == 0)
	{
		nret->vt = VT_R4;
		nret->fltVal = *Pvoid->pfltVal;
	}
	else if (_wcsicmp(a, L"char") == 0)
	{
		nret->vt = VT_LPSTR;
		nret->cVal = *Pvoid->pcVal;
	}
	else
	{
		nret->vt = VT_I4;
		nret->lVal = *Pvoid->plVal;
	}
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Delete(VARIANT* _Block, LONG* nret)
{
	_Block->vt = VT_VOID;
	delete(_Block->byref);
	_Block->plVal = nullptr;
	*nret = 1;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Deletes(VARIANT* _Block, LONG* nret)
{
	_Block->vt = VT_VOID;
	delete[](_Block->byref);
	_Block->plVal = nullptr;
	*nret = 1;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Free(VARIANT* _Block, LONG* nret)
{
	_Block->vt = VT_VOID;
	free(_Block->byref);
	_Block->plVal = nullptr;
	*nret = 1;
	return S_OK;
}
#pragma endregion

#pragma region calc
STDMETHODIMP CTLibPlusInterface::Rand(LONG MIN, LONG MAX, LONG* nret)
{
	*nret = (LONG)gRtObj.TRand(MIN, MAX);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::RandDouble(DOUBLE DOUBLE_MIN, DOUBLE DOUBLE_MAX, DOUBLE* dret)
{
	*dret = (DOUBLE)gRtObj.TRandDouble(DOUBLE_MIN, DOUBLE_MAX);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ShiftRight(LONG l, LONG _Radix, LONG* nret)
{
	*nret = (LONG)(l >> _Radix);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ShiftLeft(LONG l, LONG _Radix, LONG* nret)
{
	*nret = (LONG)(l << _Radix);

	return S_OK;
}


STDMETHODIMP CTLibPlusInterface::AND(BSTR ins, LONG* nret)
{
	if (ins == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TBitoperationW(ins, 0);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::OR(BSTR ins, LONG* nret)
{
	if (ins == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TBitoperationW(ins, 1);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::XOR(BSTR ins, LONG* nret)
{
	if (ins == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TBitoperationW(ins, 2);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NOT(LONG ins, LONG* nret)
{
	if (ins == NULL)
		return S_OK;

	*nret = (LONG)(~ins);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::PI(DOUBLE* dret)
{

	*dret = gRtObj.TPi(); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Acos(DOUBLE _X, DOUBLE* dret)
{
	*dret = acos(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Acosh(DOUBLE _X, DOUBLE* dret)
{
	*dret = acosh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Asin(DOUBLE _X, DOUBLE* dret)
{
	*dret = asin(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Asinh(DOUBLE _X, DOUBLE* dret)
{
	*dret = asinh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Atan(DOUBLE _X, DOUBLE* dret)
{
	*dret = atan(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Atan2(DOUBLE _Y, DOUBLE _X, DOUBLE* dret)
{
	*dret = atan2(_Y, _X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Atanh(DOUBLE _X, DOUBLE* dret)
{
	*dret = atanh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Cbrt(DOUBLE _X, DOUBLE* dret)
{
	*dret = cbrt(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Ceil(DOUBLE _X, DOUBLE* dret)
{
	*dret = ceil(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Copysign(DOUBLE _Number, DOUBLE _Sign, DOUBLE* dret)
{
	*dret = copysign(_Number, _Sign); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Cos(DOUBLE _X, DOUBLE* dret)
{
	*dret = cos(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Cosh(DOUBLE _X, DOUBLE* dret)
{
	*dret = cosh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Exp(DOUBLE _X, DOUBLE* dret)
{
	*dret = exp(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Exp2(DOUBLE _X, DOUBLE* dret)
{
	*dret = exp2(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Expm1(DOUBLE _X, DOUBLE* dret)
{
	*dret = expm1(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Fabs(DOUBLE _X, DOUBLE* dret)
{
	*dret = fabs(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Fdim(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = fdim(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Floor(DOUBLE _X, DOUBLE* dret)
{
	*dret = floor(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Fma(DOUBLE _X, DOUBLE _Y, DOUBLE _Z, DOUBLE* dret)
{
	*dret = fma(_X, _Y, _Z); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Fmax(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = fmax(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Fmin(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = fmin(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Fmod(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = fmod(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Frexp(DOUBLE _X, VARIANT* _Y, DOUBLE* dret)
{
	int* i = 0;
	*dret = frexp(_X, i);
	_Y->vt = VT_INT;
	_Y->iVal = *i;

	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Hypot(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = hypot(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Ilogb(DOUBLE _X, DOUBLE* dret)
{
	*dret = ilogb(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Ldexp(DOUBLE _X, LONG _Y, DOUBLE* dret)
{
	*dret = ldexp(_X, (int)_Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Log(DOUBLE _X, DOUBLE* dret)
{
	*dret = log(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Log10(DOUBLE _X, DOUBLE* dret)
{
	*dret = log10(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Log2(DOUBLE _X, DOUBLE* dret)
{
	*dret = log2(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Logb(DOUBLE _X, DOUBLE* dret)
{
	*dret = logb(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Log1p(DOUBLE _X, DOUBLE* dret)
{
	*dret = log1p(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Lrint(DOUBLE _X, LONG* dret)
{
	*dret = lrint(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Lround(DOUBLE _X, LONG* dret)
{
	*dret = lround(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Modf(DOUBLE x, VARIANT* intpart, DOUBLE* dret)
{
	double d = 0;
	*dret = modf(x, &d);
	intpart->vt = VT_R8;
	intpart->dblVal = d;

	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Nan(BSTR _X, DOUBLE* dret)
{
	*dret = nan((const char*)_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Nearbyint(DOUBLE _X, DOUBLE* dret)
{
	*dret = nearbyint(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Nextafter(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = nextafter(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Pow(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = pow(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Remainder(DOUBLE _X, DOUBLE _Y, DOUBLE* dret)
{
	*dret = remainder(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Remquo(DOUBLE _X, DOUBLE _Y, VARIANT* _Z, DOUBLE* dret)
{
	int i[100] = { 0 };
	*dret = remquo(_X, _Y, i);
	_Z->vt = VT_INT;
	_Z->iVal = *i;

	return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Rint(DOUBLE _X, DOUBLE* dret)
{
	*dret = rint(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Round(DOUBLE _X, DOUBLE* dret)
{
	*dret = round(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Scalbln(DOUBLE _X, LONG _Y, DOUBLE* dret)
{
	*dret = scalbln(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Scalbn(DOUBLE _X, LONG _Y, DOUBLE* dret)
{
	*dret = scalbn(_X, _Y); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Sin(DOUBLE _X, DOUBLE* dret)
{
	*dret = sin(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Sinh(DOUBLE _X, DOUBLE* dret)
{
	*dret = sinh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Sqrt(DOUBLE _X, DOUBLE* dret)
{
	*dret = sqrt(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Tan(DOUBLE _X, DOUBLE* dret)
{
	*dret = tan(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Tanh(DOUBLE _X, DOUBLE* dret)
{
	*dret = tanh(_X); return S_OK;
}
STDMETHODIMP CTLibPlusInterface::Trunc(DOUBLE _X, DOUBLE* dret)
{
	*dret = trunc(_X); return S_OK;
}
#pragma endregion

#pragma region array
STDMETHODIMP CTLibPlusInterface::ArrayGetHighest(BSTR szArr, LONG en, LONG* nret)
{
	if (szArr == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TArrayGetHighestW((const wchar_t*)szArr, (bool)en);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArrayGetLowest(BSTR szArr, LONG en, LONG* nret)
{
	if (szArr == NULL)
		return S_OK;

	*nret = (LONG)gRtObj.TArrayGetLowestW((const wchar_t*)szArr, (bool)en);


	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArrayUniqueInt(BSTR szArr, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayUniqueL((const wchar_t*)szArr);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArrayUnique(BSTR szArr, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayUniqueW(szArr);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArraySortInt(BSTR szArr, LONG en, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArraySortL(szArr, en);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArraySort(BSTR szArr, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArraySortW((const wchar_t*)szArr);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArrayFilter(BSTR szArr, BSTR str, BSTR* retstring)
{
	if (szArr == NULL || str == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayFilterW((const wchar_t*)szArr, (const wchar_t*)str);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArrayAlloc(LONG dim, BSTR szsize, BSTR* retstring)
{
	if (dim == NULL || szsize == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayAllocW((long)dim, (const wchar_t*)szsize);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArrayReverse(BSTR szArr, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayReverseW((const wchar_t*)szArr);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArrayRotate(BSTR szArr, LONG mov, LONG en, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayRotateW((const wchar_t*)szArr, (long)mov, (bool)en);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ArrayShift(BSTR szArr, LONG mov, LONG en, BSTR* retstring)
{
	if (szArr == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TArrayShiftW((const wchar_t*)szArr, (long)mov, (bool)en);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}
#pragma endregion

#pragma region string/file
STDMETHODIMP CTLibPlusInterface::StringSplit(BSTR ins, BSTR delimit, VARIANT* nret, BSTR* outs)
{
	if (ins == NULL || delimit == NULL)
	{
		outs = NULL;
		return S_OK;
	}
	LONG len = 0;
	const wchar_t* result = gRtObj.TStringSplitW(ins, delimit, len);
	nret->vt = VT_I4;
	nret->lVal = len;
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(outs);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringSort(BSTR ins, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringSortW((wchar_t*)ins);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringShuffle(BSTR ins, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringRandomW((wchar_t*)ins);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringUnique(BSTR ins, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringUniqueW((wchar_t*)ins);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringReverse(BSTR ins, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringReverseW((wchar_t*)ins);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringRotate(BSTR ins, LONG mov, LONG en, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringRotateW((wchar_t*)ins, (long)mov, (bool)en);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringShift(BSTR ins, LONG mov, LONG en, BSTR* retstring)
{
	if (ins == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TStringShiftW((wchar_t*)ins, (long)mov, (bool)en);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringXml2Json(BSTR _Src, BSTR* retstring)
{
	if (_Src == NULL)
		return NULL;
	char* lpszText = _com_util::ConvertBSTRToString(_Src);
	string s = gRtObj.TXml2JsonA(lpszText);

	const char* out = "";
	out = _strdup(s.c_str());
	CComBSTR newbstr;
	std::ignore = newbstr.Append(out);
	std::ignore = newbstr.CopyTo(retstring);
	free(&lpszText);
	free(&out);
	lpszText = nullptr;
	out = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringJson2Xml(BSTR _Src, BSTR* retstring)
{
	if (_Src == NULL)
		return NULL;

	char* lpszText = _com_util::ConvertBSTRToString(_Src);
	string s = gRtObj.TJson2XmlA(lpszText);

	const char* out = "";
	out = _strdup(s.c_str());
	CComBSTR newbstr;
	std::ignore = newbstr.Append(out);
	std::ignore = newbstr.CopyTo(retstring);
	free(&lpszText);
	free(&out);
	lpszText = nullptr;
	out = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Fwopen(BSTR _FileName, BSTR _Mode, LONG* nret)
{
	if (_FileName == NULL || _Mode == NULL)
		return S_OK;

	*nret = (LONG)_wfopen((const wchar_t*)_FileName, (const wchar_t*)_Mode);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Fseek(LONG _Stream, LONG _Offset, LPWSTR dst, LONG* nret)
{
	if (_Stream == NULL || dst == NULL)
		return S_OK;

	int _Origin = 0;
	_wcslwr_s((wchar_t*)dst, wcslen(dst) + 1);

	if ((wchar_t*)dst == (wchar_t*)L"cur")
		_Origin = SEEK_CUR;
	else if ((wchar_t*)dst == (wchar_t*)L"end")
		_Origin = SEEK_END;
	else
		_Origin = SEEK_SET;

	*nret = (LONG)fseek((FILE*)_Stream, (long)_Offset, _Origin);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Fread(LONG _ElementSize, LONG _ElementCount, LONG _Stream, VARIANT* nret, BSTR* _Buffer)
{
	if (_Stream == NULL)
		return S_OK;

	wchar_t* out = new wchar_t[_ElementCount * _ElementSize];
	memset(out, 0, _ElementCount * _ElementSize);
	nret->vt = VT_I4;

	nret->lVal = (LONG)fread(out, (size_t)_ElementSize, (size_t)_ElementCount, (FILE*)_Stream);
	if (out == NULL)
	{
		return S_OK;
	}

	CComBSTR newbstr;
	std::ignore = newbstr.Append(out);
	std::ignore = newbstr.CopyTo(_Buffer);
	delete[](&out);
	out = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Fwrite(LONG _Buffer, LONG _ElementSize, LONG _ElementCount, LONG _Stream, LONG* nret)
{
	if (_Stream == NULL)
		return NULL;

	*nret = (LONG)fwrite((const void*)_Buffer, (size_t)_ElementSize, (size_t)_ElementCount, (FILE*)_Stream);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Fgetws(LPWSTR _Buffer, LONG _BufferCount, LONG _Stream, BSTR* retstring)
{
	if (_Stream == NULL)
		return NULL;

	wchar_t* result = fgetws((wchar_t*)_Buffer, (int)_BufferCount, (FILE*)_Stream);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Fclose(LONG _Stream, LONG* nret)
{
	if (_Stream == NULL)
		return NULL;

	return (LONG)fclose((FILE*)_Stream);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::Mmap(BSTR _FileName, VARIANT* dwret, BSTR* buf)
{
	if (_FileName == NULL)
		return S_OK;

	const wchar_t* result = { 0 };
	dwret->vt = VT_I4;
	dwret->lVal = gRtObj.TMmapW((const wchar_t*)_FileName, result);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(buf);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::EnumIniSection(BSTR _FileName, BSTR* retstring)
{
	if (_FileName == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TEnumIniSectionW((const wchar_t*)_FileName);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::EnumIniKey(BSTR  _Key, BSTR _FileName, BSTR* retstring)
{
	if (_FileName == NULL)
		return S_OK;

	const wchar_t* result = gRtObj.TEnumIniKeyW((const wchar_t*)_Key, (const wchar_t*)_FileName);

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}
#pragma endregion

#pragma region trans
STDMETHODIMP CTLibPlusInterface::Swap(VARIANT* a, VARIANT* b, LONG* nret)
{
	swap((a->pvarVal), (b->pvarVal));
	*nret = 1;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::SwapByte(BYTE a, LONG* nret)
{

	*nret = ((a >> 4) | (a << 4));
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::SwapWord(WORD a, LONG* nret)
{
	*nret = ((a >> 8) | (a << 8));
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::SwapLong(LONG a, LONG* nret)
{
	*nret = ((a >> 16) | (a << 16));
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::SwapInt64(LONGLONG a, LONGLONG* nret)
{
	*nret = ((a >> 32) | (a << 32));

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::XStringToL(BSTR _String, LONG _Radix, LONG* nret)
{
	if (_String == NULL || _Radix == NULL)
		return S_OK;

	*nret = (LONG)wcstol((const wchar_t*)_String, NULL, (int)_Radix);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::XStringToI64(BSTR _String, LONG _Radix, VARIANT* llret, LONG* nret)
{
	if (_String == NULL || _Radix == NULL)
		return S_OK;

	LONGLONG result = _wcstoi64((const wchar_t*)_String, NULL, (int)_Radix);
	llret->vt = VT_VOID;
	*llret->pllVal = result;
	if (result > 0 && result <= 2147483647)
		*nret = (LONG)result;
	else if (result > 0)
		*nret = 1;
	else
		*nret = 0;
	return S_OK;
}


STDMETHODIMP CTLibPlusInterface::StringToL(BSTR _String, LONG* nret)
{
	if (_String == NULL)
		return S_OK;

	*nret = (LONG)_wtol((const wchar_t*)_String);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringToI64(BSTR _String, VARIANT* llret, LONG* nret)
{
	if (_String == NULL)
		return NULL;

	LONGLONG result = _wtoi64(_String);

	llret->vt = VT_VOID;
	*llret->pllVal = result;
	if (result > 0 && result <= 2147483647)
		*nret = (LONG)result;
	else if (result > 0)
		*nret = 1;
	else
		*nret = 0;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::LToXString(LONG _Value, LONG _Radix, BSTR* retstring)
{
	if (_Value == NULL || _Radix == NULL)
		return NULL;
	wchar_t _Buffer[MAX_PATH] = { 0 };
	wchar_t* result = _ltow(_Value, _Buffer, _Radix);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&_Buffer);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::I64ToXString(LONGLONG _Value, LONG _Radix, BSTR* retstring)
{
	if (_Value == NULL || _Radix == NULL)
		return NULL;
	wchar_t _Buffer[MAX_PATH] = { 0 };
	wchar_t* result = _i64tow(_Value, _Buffer, _Radix);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&_Buffer);
	free(&result);
	result = nullptr;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringToDbl(BSTR _String, DOUBLE* dret)
{
	if (_String == NULL)
		return NULL;

	_CRT_DOUBLE d{};
	std::ignore = _atodbl(&d, (char*)_String);
	*dret = d.x;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::StringToFlt(BSTR _String, FLOAT* fret)
{
	if (_String == NULL)
		return NULL;

	_CRT_FLOAT f{};
	std::ignore = _atoflt(&f, (const char*)_String);
	*fret = f.f;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TMAKEWORD(LONG a, LONG b, WORD* wret)
{
	*wret = MAKEWORD(a, b);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TMAKELONG(LONG a, LONG b, LONG* nret)
{
	*nret = MAKELONG(a, b);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TLOWORD(LONG l, WORD* wret)
{
	*wret = LOWORD(l);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::THIWORD(LONG l, WORD* wret)
{
	*wret = HIWORD(l);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TLOBYTE(WORD w, BYTE* byret)
{
	*byret = LOBYTE(w);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::THIBYTE(WORD w, BYTE* byret)
{
	*byret = HIBYTE(w);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TIS_INTRESOURCE(LONG _r, LONG* nret)
{
	*nret = IS_INTRESOURCE(_r);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TMAKEINTRESOURCE(LONG i, BSTR* retstring)
{
	const wchar_t* result = MAKEINTRESOURCE(i);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TMAKEWPARAM(LONG l, LONG h, LONG* nret)
{
	*nret = MAKEWPARAM(l, h);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TMAKELPARAM(LONG l, LONG h, LONG* nret)
{
	*nret = MAKELPARAM(l, h);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TMAKELRESULT(LONG l, LONG h, LONG* nret)
{
	*nret = MAKELRESULT(l, h);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TMAKELANGID(LONG s, LONG p, WORD* wret)
{
	*wret = MAKELANGID(s, p);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TPRIMARYLANGID(LONG lgid, WORD* wret)
{
	*wret = PRIMARYLANGID(lgid);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TSUBLANGID(LONG lgid, WORD* wret)
{
	*wret = SUBLANGID(lgid);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TMAKELCID(LONG srtid, LONG lgid, DWORD* dwret)
{
	*dwret = MAKELCID(srtid, lgid);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TMAKEPOINTS(LONG l, VARIANT* x, VARIANT* y, LONG* nret)
{
	POINTS pt = MAKEPOINTS(l);
	SHORT i = pt.x;
	SHORT j = pt.y;
	x->vt = VT_I2;
	x->iVal = i;
	y->vt = VT_I2;
	y->iVal = j;
	*nret = 1;

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::TINDEXTOSTATEIMAGEMASK(LONG i, LONG* nret)
{
	return INDEXTOSTATEIMAGEMASK(i);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::ConvertLanguage(BSTR str, LONG type, BSTR* retstring)
{
	const wchar_t* result = gRtObj.TConvertLanguageW(str, type);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// GB2312转UTF8
STDMETHODIMP CTLibPlusInterface::GB2312ToUTF8(BSTR pStrGB2312, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrGB2312, CODEPAGE_GB2312, CODEPAGE_UTF8);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// UTF8转GB2312
STDMETHODIMP CTLibPlusInterface::UTF8ToGB2312(BSTR pStrUTF8, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrUTF8, CODEPAGE_UTF8, CODEPAGE_GB2312);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// GB2312转BIG5
STDMETHODIMP CTLibPlusInterface::GB2312ToBIG5(BSTR pStrGB2312, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrGB2312, CODEPAGE_GB2312, CODEPAGE_BIG5);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// BIG5转GB2312
STDMETHODIMP CTLibPlusInterface::BIG5ToGB2312(BSTR pStrBIG5, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrBIG5, CODEPAGE_BIG5, CODEPAGE_GB2312);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// UTF8转BIG5
STDMETHODIMP CTLibPlusInterface::UTF8ToBIG5(BSTR pStrUTF8, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrUTF8, CODEPAGE_UTF8, CODEPAGE_BIG5);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}

// BIG5转UTF8
STDMETHODIMP CTLibPlusInterface::BIG5ToUTF8(BSTR pStrBIG5, BSTR* retstring)
{
	const char* result = gRtObj.TCPTransformA((const char*)pStrBIG5, CODEPAGE_BIG5, CODEPAGE_UTF8);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(retstring);
	free(&result);
	result = nullptr;
	return S_OK;
}
#pragma endregion

#pragma region net
STDMETHODIMP CTLibPlusInterface::NetWSAStartup(LONG* nret)
{
	*nret = gNetObj._NetWSAStartup();
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetClose(LONG* nret)
{
	*nret = gNetObj._NetClose();
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetSocket(BSTR sztype, LONG* nret)
{
	*nret = (LONG)gNetObj._NetSocket(sztype);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetCloseSocket(LONG sockhandle, LONG* nret)
{
	*nret = gNetObj._NetCloseSocket(sockhandle);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetConnect(LONG sockhandle, BSTR serv_ip, USHORT serv_port, LONG* nret)
{
	char* lpszText = _com_util::ConvertBSTRToString(serv_ip);
	*nret = gNetObj._NetConnect(sockhandle, (const char*)lpszText, (u_short)serv_port);

	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetBind(LONG sockhandle, USHORT serv_port, LONG* nret)
{
	*nret = gNetObj._NetBind(sockhandle, (u_short)serv_port);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetListen(LONG sockhandle, LONG ncout, LONG* nret)
{
	*nret = gNetObj._NetListen(sockhandle, (int)ncout);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetAccept(LONG sockhandle, VARIANT* nret, BSTR* serv_ip)
{
	const char* result = { 0 };

	nret->vt = VT_I4;
	nret->lVal = gNetObj._NetAccept(sockhandle, result);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(serv_ip);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetRecv(LONG sockhandle, BSTR* Recvbuff)
{
	char* result = { 0 };
	std::ignore = gNetObj._NetRecv(sockhandle, result);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(Recvbuff);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetSend(LONG sockhandle, BSTR data, LONG* nret)
{
	char* lpszText = _com_util::ConvertBSTRToString(data);
	*nret = gNetObj._NetSend(sockhandle, (const char*)lpszText);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetSendTo(LONG sockhandle, BSTR data, LONG* nret)
{
	char* lpszText = _com_util::ConvertBSTRToString(data);
	*nret = gNetObj._NetSendTo(sockhandle, (const char*)data);
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::NetRecvFrom(LONG sockhandle, LONG length, BSTR serv_ip, USHORT rPort, BSTR* data)
{
	char* result = { 0 };
	char* lpszText = _com_util::ConvertBSTRToString(serv_ip);
	std::ignore = gNetObj._NetRecvFrom(sockhandle, result, (long)length, (const char*)lpszText, (u_short)rPort);
	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(data);
	free(&result);
	result = nullptr;
	return S_OK;
}

STDMETHODIMP CTLibPlusInterface::GetIP(LONG type, BSTR param, BSTR* data)
{
	wchar_t* result = { 0 };
	const char* lpszText = _com_util::ConvertBSTRToString(param);
	if (type == 1)
		result = gNetObj.GetReadIp(lpszText);
	else if (type == 2)
		result = gNetObj.GetExIp(lpszText);
	else
		result = gNetObj.GetLocalIp();

	CComBSTR newbstr;
	std::ignore = newbstr.Append(result);
	std::ignore = newbstr.CopyTo(data);
	delete[](&result);
	result = nullptr;
	return S_OK;
}
#pragma endregion



#pragma endregion