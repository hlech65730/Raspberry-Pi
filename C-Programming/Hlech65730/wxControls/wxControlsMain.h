/***************************************************************
 * Name:      wxControlsMain.h
 * Purpose:   Defines Application Frame
 * Author:    Hlech65730 (Hlech65730@aol.com)
 * Created:   2022-08-14
 * Copyright: Hlech65730 ()
 * License:
 **************************************************************/

#ifndef WXCONTROLSMAIN_H
#define WXCONTROLSMAIN_H

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "wxControlsApp.h"
#include "wx/spinbutt.h"
#include "wx/tglbtn.h"
#include "wx/bookctrl.h"
#include "wx/imaglist.h"
#include "wx/artprov.h"
#include "wx/cshelp.h"
#include "wx/gbsizer.h"
#include <wx/button.h>
#include <wx/statline.h>

#ifndef __WXMSW__
    #include "icons/choice.xpm"
    #include "icons/combo.xpm"
    #include "icons/list.xpm"
    #include "icons/radio.xpm"
    #include "icons/text.xpm"
    #include "icons/gauge.xpm"
#endif

class wxControlsDialog: public wxDialog
{
    public:
        wxControlsDialog(wxDialog *dlg, const wxString& title);
        ~wxControlsDialog();

    protected:
        enum
        {
            idBtnQuit = 1000,
            idBtnAbout
        };
        wxStaticText* m_staticText1;
        wxButton* BtnAbout;
        wxStaticLine* m_staticline1;
        wxButton* BtnQuit;

    private:
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // WXCONTROLSMAIN_H
