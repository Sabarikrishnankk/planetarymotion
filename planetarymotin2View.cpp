// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface
// (the "Fluent UI") and is provided only as referential material to supplement the
// Microsoft Foundation Classes Reference and related electronic documentation
// included with the MFC C++ library software.
// License terms to copy, use or distribute the Fluent UI are available separately.
// To learn more about our Fluent UI licensing program, please visit
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// planetarymotin2View.cpp : implementation of the Cplanetarymotin2View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "planetarymotin2.h"
#endif

#include "planetarymotin2Doc.h"
#include "planetarymotin2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cplanetarymotin2View

IMPLEMENT_DYNCREATE(Cplanetarymotin2View, CView)

BEGIN_MESSAGE_MAP(Cplanetarymotin2View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cplanetarymotin2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_BUTTON2, &Cplanetarymotin2View::OnButton2)
	ON_COMMAND(ID_BUTTON3, &Cplanetarymotin2View::OnButton3)
	ON_COMMAND(ID_BUTTON4, &Cplanetarymotin2View::OnButton4)
END_MESSAGE_MAP()

// Cplanetarymotin2View construction/destruction

Cplanetarymotin2View::Cplanetarymotin2View() noexcept
{
	//
	// TODO: add construction code here

}

Cplanetarymotin2View::~Cplanetarymotin2View()
{
}

BOOL Cplanetarymotin2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Cplanetarymotin2View drawing

void Cplanetarymotin2View::OnDraw(CDC* pDC)
{
	Cplanetarymotin2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	{
		CPen redpen;
		redpen.CreatePen(PS_SOLID, 0, RGB(255, 0, 0));

		CPen* pOIdPen = pDC->SelectObject(&redpen);
		{
			pDC->Ellipse(300, 60, 60, 300);


		}
		pDC->SelectObject(pOIdPen);
	}
	{
		CPen greenpen;
		greenpen.CreatePen(PS_SOLID, 0, RGB(0, 255, 0));

		CPen* pOIdPen = pDC->SelectObject(&greenpen);
		{

			pDC->Ellipse(250, 100, 100, 250);

		}
		pDC->SelectObject(pOIdPen);
	}
	{
		CBrush t;
		t.CreateSolidBrush(RGB(10, 30, 50));







		{

			pDC->SelectObject(&t);


			pDC->Ellipse(140, 190, 190, 140);

		}

	}
	{
		CBrush t;
		t.CreateSolidBrush(RGB(0, 0, 255));




		{
			pDC->SelectObject(&t);
			pDC->Ellipse(280, 250, 250, 280);
		}


	}
	{
		CBrush t;
		t.CreateSolidBrush(RGB(255, 0, 0));







		{

			pDC->SelectObject(&t);

			pDC->Ellipse(240, 210, 210, 240);


		}

		// TODO: add draw code for native data here
	}

}
// Cplanetarymotin2View printing


void Cplanetarymotin2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cplanetarymotin2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void Cplanetarymotin2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void Cplanetarymotin2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void Cplanetarymotin2View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cplanetarymotin2View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cplanetarymotin2View diagnostics

#ifdef _DEBUG
void Cplanetarymotin2View::AssertValid() const
{
	CView::AssertValid();
}

void Cplanetarymotin2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cplanetarymotin2Doc* Cplanetarymotin2View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cplanetarymotin2Doc)));
	return (Cplanetarymotin2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cplanetarymotin2View message handlers


void Cplanetarymotin2View::OnButton2()
{
	//
	// TODO: Add your command handler code here
}


void Cplanetarymotin2View::OnButton3()
{
	//
	// TODO: Add your command handler code here
}


void Cplanetarymotin2View::OnButton4()
{
	//
	// TODO: Add your command handler code here
}


UINT Cplanetarymotin2View::StartThread(LPVOID param)
{
	

	// TODO: Add your implementation code here.
	return 0;
}
