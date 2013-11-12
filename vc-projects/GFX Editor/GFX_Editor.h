// GFX_Editor.h : main header file for the GFX_EDITOR application
//

#if !defined(AFX_GFX_EDITOR_H__21A834A5_2F39_11D4_8760_00A024851A35__INCLUDED_)
#define AFX_GFX_EDITOR_H__21A834A5_2F39_11D4_8760_00A024851A35__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CGFX_EditorApp:
// See GFX_Editor.cpp for the implementation of this class
//

class CGFX_EditorApp : public CWinApp
{
public:
	CGFX_EditorApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGFX_EditorApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CGFX_EditorApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GFX_EDITOR_H__21A834A5_2F39_11D4_8760_00A024851A35__INCLUDED_)
