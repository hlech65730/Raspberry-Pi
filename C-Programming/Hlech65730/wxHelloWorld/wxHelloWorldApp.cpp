/***************************************************************
 * Name:      wxHelloWorldApp.cpp
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

#include "wxHelloWorldApp.h"
#include "wxHelloWorldMain.h"

IMPLEMENT_APP(wxHelloWorldApp);

bool wxHelloWorldApp::OnInit()
{

   MyFrame *frame = new MyFrame();
    frame->Show();
    return true;

}
