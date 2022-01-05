/***************************************************************
 * Name:      wxWidgetsMain.h
 * Purpose:   Defines Application Frame
 * Author:    Holger Lech (hlech65730@aol.com)
 * Created:   2022-01-01
 * Copyright: Holger Lech ()
 * License:
 **************************************************************/

#ifndef WXWIDGETSMAIN_H
#define WXWIDGETSMAIN_H



#include "wxWidgetsApp.h"


#include "GUIFrame.h"

class wxWidgetsFrame: public GUIFrame
{
    public:
        wxWidgetsFrame(wxFrame *frame);
        ~wxWidgetsFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // WXWIDGETSMAIN_H
