#include "stdafx.h"
#include "MainWnd.h"


CMainWnd::CMainWnd()
{
}


CMainWnd::~CMainWnd()
{
}

void CMainWnd::InitWindow()
{
	m_btn_createproject = (CButtonUI*)m_PaintManager.FindControl(_T("btn_createproject"));
	m_btn_createproject->OnNotify += MakeDelegate(this, &CMainWnd::OnCreateProjectBtnClicked);
}

CDuiString CMainWnd::GetSkinFile()
{
	return CDuiString(_T("MainWnd.xml"));
}

LRESULT CMainWnd::HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (uMsg == WM_CLOSE)
	{
		DestroyWindow(m_hWnd);
	}
	return WindowImplBase::HandleMessage(uMsg, wParam, lParam);
}

LPCTSTR CMainWnd::GetWindowClassName() const
{
	return _T("CodeBuilder_MainWnd");
}

bool CMainWnd::OnCreateProjectBtnClicked(void* lParam)
{
	//CMainWnd* pThis = reinterpret_cast<CMainWnd*>(lParam);
	//MessageBoxA(NULL, "111", "", 0);
	return false;
}
