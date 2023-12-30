/***************************************************************
 * Name:      wxCanHatMain.cpp
 * Purpose:   Code for Application Frame
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

#include "wxCanHatMain.h"

//helper functions
enum
{
    ID_Hello = 1,
    TEXT_Main = wxID_HIGHEST + 1 // declares an id which will be used to call our button
};

MyFrame::MyFrame()
        : wxFrame(nullptr, wxID_ANY, "CAN-HAT")
{
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl+H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);

    CreateStatusBar();
    SetStatusText("Input for CAN-HAT");

    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);

    // Initialize our text box with an id of TEXT_Main, and the label "hi"
    MainEditBox = new wxTextCtrl(this, TEXT_Main, "Hi!", wxDefaultPosition, wxDefaultSize,
    wxTE_MULTILINE | wxTE_RICH , wxDefaultValidator, wxTextCtrlNameStr);

}

void MyFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets Hello World example",
                 "About Hello World", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}

