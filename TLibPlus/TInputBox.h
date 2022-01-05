/*

Adding a InputBox() to any c++ program - an article for Code Project
by Michael Haephrati, Secured Globe, Inc. www.securedglobe.net
haephrati@gmail.com

June 2019
?019 Michael Haephrati and Secured Globe, Inc. 1501 Broadway Ave. STE 1200, New York 10036, NY
*/
#include <windows.h>

#pragma once
constexpr auto ASPECT_RATIO_X = 2;
constexpr auto ASPECT_RATIO_Y = 2;
#define TOP_EDGE		5 * ASPECT_RATIO_Y
#define INPUTBOX_WIDTH	200 * ASPECT_RATIO_X
#define INPUTBOX_HEIGHT 150 * ASPECT_RATIO_Y
#define TEXTEDIT_HEIGHT	60 * ASPECT_RATIO_Y
#define BUTTON_HEIGHT	15 * ASPECT_RATIO_Y
#define BUTTON_WIDTH	60 * ASPECT_RATIO_X
#define FONT_HEIGHT		12 * ASPECT_RATIO_Y

constexpr auto CLASSNAME = L"TInputbox";
constexpr auto PUSH_BUTTON = L"Button";
constexpr auto FONT_NAME = L"Times";
constexpr auto TEXTEDIT_CLASS = L"Edit";
#define SetFontToControl(n)			SendMessage((n), WM_SETFONT, (WPARAM)m_hFont, 0);





class T_InputBox
{
	static HFONT m_hFont;
	static HWND  m_hWndInputBox;
	static HWND  m_hWndParent;
	static HWND  m_hWndEdit;
	static HWND  m_hWndOK;
	static HWND  m_hWndCancel;
	static HWND  m_hWndPrompt;
	static wchar_t m_String[320];
	static HBRUSH hbrBkgnd;
	static COLORREF SOFT_BLUE_RGB;
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);


public:
	static LPWSTR GetString(HWND hWnd, COLORREF COLOR, LPCTSTR szCaption, LPCTSTR szPrompt, LPCTSTR szDefaultText);

};

