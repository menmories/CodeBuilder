// CodeBuilder.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "CodeBuilder.h"
#include "MainWnd.h"
int APIENTRY _tWinMain( _In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPTSTR lpCmdLine, _In_ int nShowCmd )
{

    if (!SUCCEEDED(CoInitialize(NULL)))
    {
		return -1;
    }
	CPaintManagerUI::SetInstance(hInstance);
	CPaintManagerUI::SetCurrentPath(CPaintManagerUI::GetInstancePath());
	CPaintManagerUI::SetResourcePath(L"Resource");
	CMainWnd* pMainWnd = new CMainWnd();
	pMainWnd->Create(NULL, _T("Redrain wke demo"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
	pMainWnd->CenterWindow();
	pMainWnd->ShowModal();
	delete pMainWnd;
	CoUninitialize();
	return 0;
}
