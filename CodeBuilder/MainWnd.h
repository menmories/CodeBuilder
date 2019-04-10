#pragma once
class CMainWnd : public WindowImplBase
{
public:
	CMainWnd();
	~CMainWnd();
public:
	virtual void InitWindow();

	CDuiString GetSkinFile()override;

	virtual LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
protected:
	LPCTSTR GetWindowClassName()const;

	bool OnCreateProjectBtnClicked(void*);
private:
	CButtonUI* m_btn_createproject;
};

