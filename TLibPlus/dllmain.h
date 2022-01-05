// dllmain.h : 模組類別的宣告。

class CTLibPlusModule : public ATL::CAtlDllModuleT< CTLibPlusModule >
{
public :
	DECLARE_LIBID(LIBID_TLibPlusLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TLIBPLUS, "{f260a0ab-b8e5-42b4-9a6d-14df287e49f3}")
};

extern class CTLibPlusModule _AtlModule;
