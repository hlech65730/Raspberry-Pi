/***************************************************************
 * Name:      wxCanHatApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Hlech65730 (hlech65730@aol.com)
 * Created:   2023-12-29
 * Copyright: Hlech65730 ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxCanHatApp.h"
#include "wxCanHatMain.h"

IMPLEMENT_APP(wxCanHatApp);

bool wxCanHatApp::OnInit()
{

   MyFrame *frame = new MyFrame();
    frame->Show();
    return true;

}
