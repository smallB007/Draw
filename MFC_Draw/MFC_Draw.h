
// MFC_Draw.h : main header file for the MFC_Draw application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFC_DrawApp:
// See MFC_Draw.cpp for the implementation of this class
//

class CMFC_DrawApp : public CBCGPWinApp
	//public CWinApp
{
public:
	CMFC_DrawApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_DrawApp theApp;
