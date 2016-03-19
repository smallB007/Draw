
// MFC_DrawView.h : interface of the CMFC_DrawView class
//

#pragma once


class CMFC_DrawView : public CScrollView
{
protected: // create from serialization only
	CMFC_DrawView();
	DECLARE_DYNCREATE(CMFC_DrawView)

// Attributes
public:
	CMFC_DrawDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMFC_DrawView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFC_DrawView.cpp
inline CMFC_DrawDoc* CMFC_DrawView::GetDocument() const
   { return reinterpret_cast<CMFC_DrawDoc*>(m_pDocument); }
#endif

