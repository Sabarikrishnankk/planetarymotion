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

// planetarymotin2View.h : interface of the Cplanetarymotin2View class
//

#pragma once


class Cplanetarymotin2View : public CView
{
	CWinThread* m_pCurrentThread;
	CArray<CPoint, CPoint> m_PointArray;
protected: // create from serialization only
	Cplanetarymotin2View() noexcept;
	DECLARE_DYNCREATE(Cplanetarymotin2View)

// Attributes
public:
	Cplanetarymotin2Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~Cplanetarymotin2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	static UINT StartThread(LPVOID param);
};

#ifndef _DEBUG  // debug version in planetarymotin2View.cpp
inline Cplanetarymotin2Doc* Cplanetarymotin2View::GetDocument() const
   { return reinterpret_cast<Cplanetarymotin2Doc*>(m_pDocument); }
#endif

