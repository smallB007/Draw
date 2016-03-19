
// MFC_DrawView.cpp : implementation of the CMFC_DrawView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFC_Draw.h"
#endif

#include "MFC_DrawDoc.h"
#include "MFC_DrawView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_DrawView

IMPLEMENT_DYNCREATE(CMFC_DrawView, CScrollView)

BEGIN_MESSAGE_MAP(CMFC_DrawView, CScrollView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFC_DrawView construction/destruction

CMFC_DrawView::CMFC_DrawView()
{
	// TODO: add construction code here

}

CMFC_DrawView::~CMFC_DrawView()
{
}

BOOL CMFC_DrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

// CMFC_DrawView drawing

void CMFC_DrawView::OnDraw(CDC* /*pDC*/)
{
	CMFC_DrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}

void CMFC_DrawView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}


// CMFC_DrawView printing

BOOL CMFC_DrawView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFC_DrawView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFC_DrawView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMFC_DrawView diagnostics

#ifdef _DEBUG
void CMFC_DrawView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CMFC_DrawView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CMFC_DrawDoc* CMFC_DrawView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_DrawDoc)));
	return (CMFC_DrawDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_DrawView message handlers
