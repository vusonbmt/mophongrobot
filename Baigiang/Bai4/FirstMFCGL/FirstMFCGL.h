// FirstMFCGL.h : main header file for the FirstMFCGL application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CFirstMFCGLApp:
// See FirstMFCGL.cpp for the implementation of this class
//

class CFirstMFCGLApp : public CWinApp
{
public:
	CFirstMFCGLApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CFirstMFCGLApp theApp;