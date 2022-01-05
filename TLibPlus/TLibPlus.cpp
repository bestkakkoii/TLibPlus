// TLibPlus.cpp: DLL 匯出的實作。

//
// 注意:  COM+ 1.0 資訊: 
//      請記得執行 Microsoft Transaction Explorer 來安裝元件。
//      根據預設不會執行註冊。

#include "framework.h"
#include "resource.h"
#include "TLibPlus_i.h"
#include "dllmain.h"


// 用來判斷 DLL 是否可被 OLE 卸載。
_Use_decl_annotations_
STDAPI DllCanUnloadNow(void)
{
	return _AtlModule.DllCanUnloadNow();
}

// 傳回 Class Factory 以建立所要求類型的物件。
_Use_decl_annotations_
STDAPI DllGetClassObject(_In_ REFCLSID rclsid, _In_ REFIID riid, _Outptr_ LPVOID* ppv)
{
	return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}

// DllRegisterServer - 將項目加入到系統登錄。
_Use_decl_annotations_
STDAPI DllRegisterServer(void)
{
	// 登錄物件、Typelib 和所有 Typelib 中的介面
	HRESULT hr = _AtlModule.DllRegisterServer();
	return hr;
}

// DllUnregisterServer - 從系統登錄移除項目。
_Use_decl_annotations_
STDAPI DllUnregisterServer(void)
{
	HRESULT hr = _AtlModule.DllUnregisterServer();
	return hr;
}

// DllInstall - 針對個別使用者及個別電腦，在系統登錄中加入/移除項目。
STDAPI DllInstall(BOOL bInstall, _In_opt_  LPCWSTR pszCmdLine)
{
	HRESULT hr = E_FAIL;
	static const wchar_t szUserSwitch[] = L"user";

	if (pszCmdLine != nullptr)
	{
		if (_wcsnicmp(pszCmdLine, szUserSwitch, _countof(szUserSwitch)) == 0)
		{
			ATL::AtlSetPerUserRegistration(true);
		}
	}

	if (bInstall)
	{
		hr = DllRegisterServer();
		if (FAILED(hr))
		{
			DllUnregisterServer();
		}
	}
	else
	{
		hr = DllUnregisterServer();
	}

	return hr;
}


