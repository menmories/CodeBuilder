// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable: 4217)
#pragma warning(disable: 4091)

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�: 
#include <windows.h>

// C ����ʱͷ�ļ�
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

#include <atlbase.h>
#include <atlstr.h>

// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include <UIlib.h>
#ifdef _DEBUG
#pragma comment(lib, "Duilib_d.lib")
#else
#pragma comment(lib, "Duilib.lib")
#endif

using namespace DuiLib;