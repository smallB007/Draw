
// MainFrm.h : interface of the CMainFrame class
//
 
#pragma once

class CMainFrame : public CBCGPFrameWnd
	//public CFrameWnd
{
	
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
// 	CToolBar          m_wndToolBar;
 	CStatusBar        m_wndStatusBar;

	CBCGPMenuBar    m_wndMenuBar;   // New menu bar
	CBCGPToolBar     m_wndToolBar;      // Application toolbar 


// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

};


