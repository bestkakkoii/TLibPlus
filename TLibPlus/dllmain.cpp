// dllmain.cpp : DllMain 的實作。

#include "framework.h"
#include "resource.h"
#include "TLibPlus_i.h"
#include "dllmain.h"

CTLibPlusModule _AtlModule;

// DLL 進入點
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved);
}
