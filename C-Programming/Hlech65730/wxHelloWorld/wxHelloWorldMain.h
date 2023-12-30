/***************************************************************
 * Name:      wxHelloWorldMain.h
 * Purpose:   Defines Application Frame
 * Author:    Hlech65730 (hlech65730@aol.com)
 * Created:   2023-12-29
 * Copyright: Hlech65730 ()
 * License:
 **************************************************************/

#ifndef WXHELLLOWORLDMAIN_H
#define WXHELLLOWORLDMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "wxHelloWorldApp.h"


//#include <wx/button.h>
//#include <wx/statline.h>

class MyFrame : public wxFrame
{
public:
    MyFrame();

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};


#endif // WXHELLLOWORLDMAIN_H
