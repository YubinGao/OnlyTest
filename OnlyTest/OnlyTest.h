
// OnlyTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// COnlyTestApp: 
// �йش����ʵ�֣������ OnlyTest.cpp
//

class COnlyTestApp : public CWinApp
{
public:
	COnlyTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern COnlyTestApp theApp;