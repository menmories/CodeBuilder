// CodeBuilder.cpp : ����Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "CodeBuilder.h"

int APIENTRY _tWinMain( _In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPTSTR lpCmdLine, _In_ int nShowCmd )
{
    if (!SUCCEEDED(CoInitialize(NULL)))
    {
		return -1;
    }


	CoUninitialize();
	return 0;
}
