#include "pch.h"

bool ElevatePrivileges(LPCWSTR pszPrivilege)
{
	HANDLE hToken;
	TOKEN_PRIVILEGES tkp{};
	tkp.PrivilegeCount = 1;
	if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
		return false;
	LookupPrivilegeValue(NULL, pszPrivilege, &tkp.Privileges[0].Luid);
	tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	if (!AdjustTokenPrivileges(hToken, FALSE, &tkp, sizeof(TOKEN_PRIVILEGES), NULL, NULL))
	{
		return false;
	}

	return true;
}