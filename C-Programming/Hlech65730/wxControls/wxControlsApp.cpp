/***************************************************************
 * Name:      wxControlsApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Hlech65730 (Hlech65730@aol.com)
 * Created:   2022-08-14
 * Copyright: Hlech65730 ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxControlsApp.h"
#include "wxControlsMain.h"

IMPLEMENT_APP(wxControlsApp);

bool wxControlsApp::OnInit()
{
    
    wxControlsDialog* dlg = new wxControlsDialog(0L, _("wxWidgets Application Template"));
    
    dlg->Show();
    return true;
}
