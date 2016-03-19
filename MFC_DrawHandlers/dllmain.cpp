// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "MFC_DrawHandlers_i.h"
#include "dllmain.h"
#include "xdlldata.h"

CMFC_DrawHandlersModule _AtlModule;

class CMFC_DrawHandlersApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CMFC_DrawHandlersApp, CWinApp)
END_MESSAGE_MAP()

CMFC_DrawHandlersApp theApp;

BOOL CMFC_DrawHandlersApp::InitInstance()
{
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, NULL))
		return FALSE;
	return CWinApp::InitInstance();
}

int CMFC_DrawHandlersApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
