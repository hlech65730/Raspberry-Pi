/***************************************************************
 * Name:      wxControlsMain.cpp
 * Purpose:   Code for Application Frame
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

#include "wxControlsMain.h"

//----------------------------------------------------------------------
// MyPanel
//----------------------------------------------------------------------

const int  ID_BOOK              = 1000;

const int  ID_LISTBOX           = 130;
const int  ID_LISTBOX_SEL_NUM   = 131;
const int  ID_LISTBOX_SEL_STR   = 132;
const int  ID_LISTBOX_CLEAR     = 133;
const int  ID_LISTBOX_APPEND    = 134;
const int  ID_LISTBOX_DELETE    = 135;
const int  ID_LISTBOX_FONT      = 136;
const int  ID_LISTBOX_ENABLE    = 137;
const int  ID_LISTBOX_SORTED    = 138;

const int  ID_CHOICE            = 120;
const int  ID_CHOICE_SEL_NUM    = 121;
const int  ID_CHOICE_SEL_STR    = 122;
const int  ID_CHOICE_CLEAR      = 123;
const int  ID_CHOICE_APPEND     = 124;
const int  ID_CHOICE_DELETE     = 125;
const int  ID_CHOICE_FONT       = 126;
const int  ID_CHOICE_ENABLE     = 127;
const int  ID_CHOICE_SORTED     = 128;

const int  ID_COMBO             = 140;
const int  ID_COMBO_SEL_NUM     = 141;
const int  ID_COMBO_SEL_STR     = 142;
const int  ID_COMBO_CLEAR       = 143;
const int  ID_COMBO_APPEND      = 144;
const int  ID_COMBO_DELETE      = 145;
const int  ID_COMBO_FONT        = 146;
const int  ID_COMBO_ENABLE      = 147;
const int  ID_COMBO_SET_TEXT    = 148;

const int  ID_RADIOBOX          = 160;
const int  ID_RADIOBOX_SEL_NUM  = 161;
const int  ID_RADIOBOX_SEL_STR  = 162;
const int  ID_RADIOBOX_FONT     = 163;
const int  ID_RADIOBOX_ENABLE   = 164;
const int  ID_RADIOBOX2         = 165;
const int  ID_RADIOBUTTON_1     = 166;
const int  ID_RADIOBUTTON_2     = 167;

const int  ID_SET_FONT          = 170;

#if wxUSE_SLIDER
const int  ID_SLIDER            = 181;
#endif // wxUSE_SLIDER

const int  ID_SPIN              = 182;
#if wxUSE_PROGRESSDLG
const int  ID_BTNPROGRESS       = 183;
#endif // wxUSE_PROGRESSDLG
const int  ID_BUTTON_LABEL      = 184;
const int  ID_SPINCTRL          = 185;
const int  ID_BTNNEWTEXT        = 186;

const int  ID_BUTTON_TEST1      = 190;
const int  ID_BUTTON_TEST2      = 191;
const int  ID_BITMAP_BTN        = 192;
const int  ID_BITMAP_BTN_ENABLE = 193;

const int  ID_CHANGE_COLOUR     = 200;

const int  ID_SIZER_CHECK1      = 201;
const int  ID_SIZER_CHECK2      = 202;
const int  ID_SIZER_CHECK3      = 203;
const int  ID_SIZER_CHECK4      = 204;
const int  ID_SIZER_CHECK14     = 205;
const int  ID_SIZER_CHECKBIG    = 206;


wxBEGIN_EVENT_TABLE(MyButton, wxButton)
    EVT_LEFT_DCLICK(MyButton::OnDClick)
wxEND_EVENT_TABLE()

wxBEGIN_EVENT_TABLE(MyComboBox, wxComboBox)
    EVT_CHAR(MyComboBox::OnChar)
    EVT_KEY_DOWN(MyComboBox::OnKeyDown)
    EVT_KEY_UP(MyComboBox::OnKeyUp)

    EVT_SET_FOCUS(MyComboBox::OnFocusGot)
wxEND_EVENT_TABLE()

wxBEGIN_EVENT_TABLE(MyRadioBox, wxRadioBox)
    EVT_SET_FOCUS(MyRadioBox::OnFocusGot)
    EVT_KILL_FOCUS(MyRadioBox::OnFocusLost)
wxEND_EVENT_TABLE()

wxBEGIN_EVENT_TABLE(MyChoice, wxChoice)
    EVT_SET_FOCUS(MyChoice::OnFocusGot)
    EVT_KILL_FOCUS(MyChoice::OnFocusLost)
wxEND_EVENT_TABLE()

wxBEGIN_EVENT_TABLE(MyPanel, wxPanel)
EVT_IDLE      (                         MyPanel::OnIdle)
EVT_BOOKCTRL_PAGE_CHANGING(ID_BOOK,     MyPanel::OnPageChanging)
EVT_BOOKCTRL_PAGE_CHANGED(ID_BOOK,      MyPanel::OnPageChanged)
EVT_LISTBOX   (ID_LISTBOX,              MyPanel::OnListBox)
EVT_LISTBOX   (ID_LISTBOX_SORTED,       MyPanel::OnListBox)
EVT_LISTBOX_DCLICK(ID_LISTBOX,          MyPanel::OnListBoxDoubleClick)
EVT_BUTTON    (ID_LISTBOX_SEL_NUM,      MyPanel::OnListBoxButtons)
EVT_BUTTON    (ID_LISTBOX_SEL_STR,      MyPanel::OnListBoxButtons)
EVT_BUTTON    (ID_LISTBOX_CLEAR,        MyPanel::OnListBoxButtons)
EVT_BUTTON    (ID_LISTBOX_APPEND,       MyPanel::OnListBoxButtons)
EVT_BUTTON    (ID_LISTBOX_DELETE,       MyPanel::OnListBoxButtons)
EVT_BUTTON    (ID_LISTBOX_FONT,         MyPanel::OnListBoxButtons)
EVT_CHECKBOX  (ID_LISTBOX_ENABLE,       MyPanel::OnListBoxButtons)
EVT_COMBOBOX  (ID_COMBO,                MyPanel::OnCombo)
EVT_TEXT      (ID_COMBO,                MyPanel::OnComboTextChanged)
EVT_TEXT_ENTER(ID_COMBO,                MyPanel::OnComboTextEnter)
EVT_BUTTON    (ID_COMBO_SEL_NUM,        MyPanel::OnComboButtons)
EVT_BUTTON    (ID_COMBO_SEL_STR,        MyPanel::OnComboButtons)
EVT_BUTTON    (ID_COMBO_CLEAR,          MyPanel::OnComboButtons)
EVT_BUTTON    (ID_COMBO_APPEND,         MyPanel::OnComboButtons)
EVT_BUTTON    (ID_COMBO_DELETE,         MyPanel::OnComboButtons)
EVT_BUTTON    (ID_COMBO_FONT,           MyPanel::OnComboButtons)
EVT_BUTTON    (ID_COMBO_SET_TEXT,       MyPanel::OnComboButtons)
EVT_CHECKBOX  (ID_COMBO_ENABLE,         MyPanel::OnComboButtons)
EVT_RADIOBOX  (ID_RADIOBOX,             MyPanel::OnRadio)
EVT_RADIOBOX  (ID_RADIOBOX2,            MyPanel::OnRadio)
EVT_BUTTON    (ID_RADIOBOX_SEL_NUM,     MyPanel::OnRadioButtons)
EVT_BUTTON    (ID_RADIOBOX_SEL_STR,     MyPanel::OnRadioButtons)
EVT_BUTTON    (ID_RADIOBOX_FONT,        MyPanel::OnRadioButtons)
EVT_CHECKBOX  (ID_RADIOBOX_ENABLE,      MyPanel::OnRadioButtons)
EVT_RADIOBUTTON(ID_RADIOBUTTON_1,       MyPanel::OnRadioButton1)
EVT_RADIOBUTTON(ID_RADIOBUTTON_2,       MyPanel::OnRadioButton2)
EVT_BUTTON    (ID_SET_FONT,             MyPanel::OnSetFont)
EVT_SPIN      (ID_SPIN,                 MyPanel::OnSpinUpdate)
EVT_SPIN_UP   (ID_SPIN,                 MyPanel::OnSpinUp)
EVT_SPIN_DOWN (ID_SPIN,                 MyPanel::OnSpinDown)
EVT_BUTTON    (ID_BTNNEWTEXT,           MyPanel::OnNewText)
EVT_TOGGLEBUTTON(ID_BUTTON_LABEL,       MyPanel::OnUpdateLabel)
EVT_CHECKBOX  (ID_CHANGE_COLOUR,        MyPanel::OnChangeColour)
EVT_BUTTON    (ID_BUTTON_TEST1,         MyPanel::OnTestButton)
EVT_BUTTON    (ID_BUTTON_TEST2,         MyPanel::OnTestButton)
EVT_BUTTON    (ID_BITMAP_BTN,           MyPanel::OnBmpButton)
EVT_TOGGLEBUTTON(ID_BITMAP_BTN_ENABLE,  MyPanel::OnBmpButtonToggle)

EVT_CHECKBOX  (ID_SIZER_CHECK1,         MyPanel::OnSizerCheck)
EVT_CHECKBOX  (ID_SIZER_CHECK2,         MyPanel::OnSizerCheck)
EVT_CHECKBOX  (ID_SIZER_CHECK3,         MyPanel::OnSizerCheck)
EVT_CHECKBOX  (ID_SIZER_CHECK4,         MyPanel::OnSizerCheck)
EVT_CHECKBOX  (ID_SIZER_CHECK14,        MyPanel::OnSizerCheck)
EVT_CHECKBOX  (ID_SIZER_CHECKBIG,       MyPanel::OnSizerCheck)

wxEND_EVENT_TABLE()

wxBEGIN_EVENT_TABLE(MyButton, wxButton)
    EVT_LEFT_DCLICK(MyButton::OnDClick)
wxEND_EVENT_TABLE()

wxBEGIN_EVENT_TABLE(MyComboBox, wxComboBox)
    EVT_CHAR(MyComboBox::OnChar)
    EVT_KEY_DOWN(MyComboBox::OnKeyDown)
    EVT_KEY_UP(MyComboBox::OnKeyUp)

    EVT_SET_FOCUS(MyComboBox::OnFocusGot)
wxEND_EVENT_TABLE()

wxBEGIN_EVENT_TABLE(MyRadioBox, wxRadioBox)
    EVT_SET_FOCUS(MyRadioBox::OnFocusGot)
    EVT_KILL_FOCUS(MyRadioBox::OnFocusLost)
wxEND_EVENT_TABLE()

wxBEGIN_EVENT_TABLE(MyChoice, wxChoice)
    EVT_SET_FOCUS(MyChoice::OnFocusGot)
    EVT_KILL_FOCUS(MyChoice::OnFocusLost)
wxEND_EVENT_TABLE()


class MyFrame: public wxFrame
{
public:
    MyFrame(const wxChar *title, int x, int y);

    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnClearLog(wxCommandEvent& event);

#if wxUSE_TOOLTIPS
    void OnSetTooltipDelay(wxCommandEvent& event);
    void OnToggleTooltips(wxCommandEvent& event);
#ifdef __WXMSW__
    void OnSetMaxTooltipWidth(wxCommandEvent& event);
#endif // __WXMSW__
#endif // wxUSE_TOOLTIPS

    void OnEnableAll(wxCommandEvent& event);
    void OnHideAll(wxCommandEvent& event);
    void OnHideList(wxCommandEvent& event);
    void OnContextHelp(wxCommandEvent& event);

    void OnIdle( wxIdleEvent& event );
    void OnIconized( wxIconizeEvent& event );
    void OnMaximized( wxMaximizeEvent& event );
    void OnSize( wxSizeEvent& event );
    void OnMove( wxMoveEvent& event );

    MyPanel *GetPanel() const { return m_panel; }

private:
#if wxUSE_STATUSBAR
    void UpdateStatusBar(const wxPoint& pos, const wxSize& size)
    {
        if ( m_frameStatusBar )
        {
            wxString msg;
            wxSize sizeAll = GetSize(),
                   sizeCl = GetClientSize();
            msg.Printf(_("pos=(%d, %d), size=%dx%d or %dx%d (client=%dx%d)"),
                       pos.x, pos.y,
                       size.x, size.y,
                       sizeAll.x, sizeAll.y,
                       sizeCl.x, sizeCl.y);
            SetStatusText(msg, 1);
        }
    }
#endif // wxUSE_STATUSBAR

    MyPanel *m_panel;

    wxDECLARE_EVENT_TABLE();
};

//----------------------------------------------------------------------
// MyFrame
//----------------------------------------------------------------------

wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(CONTROLS_QUIT,   MyFrame::OnQuit)
    EVT_MENU(CONTROLS_ABOUT,  MyFrame::OnAbout)
    EVT_MENU(CONTROLS_CLEAR_LOG,  MyFrame::OnClearLog)
#if wxUSE_TOOLTIPS
    EVT_MENU(CONTROLS_SET_TOOLTIP_DELAY,  MyFrame::OnSetTooltipDelay)
    EVT_MENU(CONTROLS_ENABLE_TOOLTIPS,  MyFrame::OnToggleTooltips)
#ifdef __WXMSW__
    EVT_MENU(CONTROLS_SET_TOOLTIPS_MAX_WIDTH, MyFrame::OnSetMaxTooltipWidth)
#endif // __WXMSW__
#endif // wxUSE_TOOLTIPS

    EVT_MENU(CONTROLS_ENABLE_ALL, MyFrame::OnEnableAll)
    EVT_MENU(CONTROLS_HIDE_ALL,   MyFrame::OnHideAll)
    EVT_MENU(CONTROLS_HIDE_LIST,   MyFrame::OnHideList)
    EVT_MENU(CONTROLS_CONTEXT_HELP, MyFrame::OnContextHelp)

    EVT_ICONIZE(MyFrame::OnIconized)
    EVT_MAXIMIZE(MyFrame::OnMaximized)
    EVT_SIZE(MyFrame::OnSize)
    EVT_MOVE(MyFrame::OnMove)

    EVT_IDLE(MyFrame::OnIdle)
wxEND_EVENT_TABLE()

MyFrame::MyFrame(const wxChar *title, int x, int y)
       : wxFrame(NULL, wxID_ANY, title, wxPoint(x, y), wxSize(700, 450))
{
    SetHelpText( wxT("Controls sample demonstrating various widgets") );

    // Give it an icon
    // The wxICON() macros loads an icon from a resource under Windows
    // and uses an #included XPM image under GTK+ and Motif

    SetIcon( wxICON(sample) );

    wxMenu *file_menu = new wxMenu;

    file_menu->Append(CONTROLS_CLEAR_LOG, wxT("&Clear log\tCtrl-L"));
    file_menu->AppendSeparator();
    file_menu->Append(CONTROLS_ABOUT, wxT("&About\tF1"));
    file_menu->AppendSeparator();
    file_menu->Append(CONTROLS_QUIT, wxT("E&xit\tAlt-X"), wxT("Quit controls sample"));

    wxMenuBar *menu_bar = new wxMenuBar;
    menu_bar->Append(file_menu, wxT("&File"));

#if wxUSE_TOOLTIPS
    wxMenu *tooltip_menu = new wxMenu;
    tooltip_menu->Append(CONTROLS_SET_TOOLTIP_DELAY, wxT("Set &delay\tCtrl-D"));
    tooltip_menu->AppendSeparator();
    tooltip_menu->Append(CONTROLS_ENABLE_TOOLTIPS, wxT("&Toggle tooltips\tCtrl-T"),
            wxT("enable/disable tooltips"), true);
    tooltip_menu->Check(CONTROLS_ENABLE_TOOLTIPS, true);
#ifdef __WXMSW__
    tooltip_menu->Append(CONTROLS_SET_TOOLTIPS_MAX_WIDTH, "Set maximal &width");
#endif // __WXMSW__
    menu_bar->Append(tooltip_menu, wxT("&Tooltips"));
#endif // wxUSE_TOOLTIPS

    wxMenu *panel_menu = new wxMenu;
    panel_menu->Append(CONTROLS_ENABLE_ALL, wxT("&Disable all\tCtrl-E"),
                       wxT("Enable/disable all panel controls"), true);
    panel_menu->Append(CONTROLS_HIDE_ALL, wxT("&Hide all\tCtrl-I"),
                       wxT("Show/hide thoe whole panel controls"), true);
    panel_menu->Append(CONTROLS_HIDE_LIST, wxT("Hide &list ctrl\tCtrl-S"),
                       wxT("Enable/disable all panel controls"), true);
    panel_menu->Append(CONTROLS_CONTEXT_HELP, wxT("&Context help...\tCtrl-H"),
                       wxT("Get context help for a control"));
    menu_bar->Append(panel_menu, wxT("&Panel"));

    SetMenuBar(menu_bar);

#if wxUSE_STATUSBAR
    CreateStatusBar(2);
#endif // wxUSE_STATUSBAR

    m_panel = new MyPanel( this, 10, 10, 300, 100 );
}

void MyFrame::OnQuit (wxCommandEvent& WXUNUSED(event) )
{
    Close(true);
}

void MyFrame::OnAbout( wxCommandEvent& WXUNUSED(event) )
{
    wxBusyCursor bc;

    wxMessageDialog dialog(this, wxT("This is a control sample"), wxT("About Controls"), wxOK );
    dialog.ShowModal();
}

void MyFrame::OnClearLog(wxCommandEvent& WXUNUSED(event))
{
    m_panel->m_text->Clear();
}

#if wxUSE_TOOLTIPS
void MyFrame::OnSetTooltipDelay(wxCommandEvent& WXUNUSED(event))
{
    static long s_delay = 5000;

    wxString delay;
    delay.Printf( wxT("%ld"), s_delay);

    delay = wxGetTextFromUser(wxT("Enter delay (in milliseconds)"),
            wxT("Set tooltip delay"),
            delay,
            this);
    if ( !delay )
        return; // cancelled

    wxSscanf(delay, wxT("%ld"), &s_delay);

    wxToolTip::SetDelay(s_delay);

    wxLogStatus(this, wxT("Tooltip delay set to %ld milliseconds"), s_delay);
}

void MyFrame::OnToggleTooltips(wxCommandEvent& WXUNUSED(event))
{
    static bool s_enabled = true;

    s_enabled = !s_enabled;

    wxToolTip::Enable(s_enabled);

    wxLogStatus(this, wxT("Tooltips %sabled"), s_enabled ? wxT("en") : wxT("dis") );
}

#ifdef __WXMSW__

void MyFrame::OnSetMaxTooltipWidth(wxCommandEvent& WXUNUSED(event))
{
    static int s_maxWidth = 0;

    wxNumberEntryDialog dlg
                        (
                         this,
                         "Change maximal tooltip width",
                         "&Width in pixels:",
                         GetTitle(),
                         s_maxWidth,
                         -1,
                         600
                        );
    if ( dlg.ShowModal() == wxID_CANCEL )
        return;

    s_maxWidth = dlg.GetValue();
    wxToolTip::SetMaxWidth(s_maxWidth);

    // we need to set the tooltip again to test the new width
    m_panel->SetAllToolTips();
}

#endif // __WXMSW__

#endif // wxUSE_TOOLTIPS

void MyFrame::OnEnableAll(wxCommandEvent& WXUNUSED(event))
{
    static bool s_enable = true;

    s_enable = !s_enable;
    m_panel->Enable(s_enable);
    static bool s_enableCheckbox = true;
    if ( !s_enable )
    {
        // this is a test for correct behaviour of either enabling or disabling
        // a child when its parent is disabled: the checkbox should have the
        // correct state when the parent is enabled back
        m_panel->m_checkbox->Enable(s_enableCheckbox);
        s_enableCheckbox = !s_enableCheckbox;
    }
}

void MyFrame::OnHideAll(wxCommandEvent& WXUNUSED(event))
{
    static bool s_show = true;

    s_show = !s_show;
    m_panel->Show(s_show);
}

void MyFrame::OnHideList(wxCommandEvent& WXUNUSED(event))
{
    static bool s_show = true;

    s_show = !s_show;
    m_panel->m_listbox->Show(s_show);
}

void MyFrame::OnContextHelp(wxCommandEvent& WXUNUSED(event))
{
    // starts a local event loop
    wxContextHelp chelp(this);
}

void MyFrame::OnMove( wxMoveEvent& event )
{
#if wxUSE_STATUSBAR
    UpdateStatusBar(event.GetPosition(), GetSize());
#endif // wxUSE_STATUSBAR

    event.Skip();
}

void MyFrame::OnIconized( wxIconizeEvent& event )
{
    wxLogMessage(wxT("Frame %s"), event.IsIconized() ? wxT("iconized")
                                                    : wxT("restored"));
    event.Skip();
}

void MyFrame::OnMaximized( wxMaximizeEvent& WXUNUSED(event) )
{
    wxLogMessage(wxT("Frame maximized"));
}

void MyFrame::OnSize( wxSizeEvent& event )
{
#if wxUSE_STATUSBAR
    UpdateStatusBar(GetPosition(), event.GetSize());
#endif // wxUSE_STATUSBAR

    event.Skip();
}

void MyFrame::OnIdle( wxIdleEvent& WXUNUSED(event) )
{
    // track the window which has the focus in the status bar
    static wxWindow *s_windowFocus = NULL;
    wxWindow *focus = wxWindow::FindFocus();
    if ( focus != s_windowFocus )
    {
        s_windowFocus = focus;

        wxString msg;
        if ( focus )
        {
            msg.Printf(
                    "Focus: %s"
#ifdef __WXMSW__
                    ", HWND = %08x"
#endif
                    , s_windowFocus->GetName().c_str()
#ifdef __WXMSW__
                    , (unsigned)wxPtrToUInt(s_windowFocus->GetHWND())
#endif
                      );
        }
        else
        {
            msg = wxT("No focus");
        }

#if wxUSE_STATUSBAR
        SetStatusText(msg);
#endif // wxUSE_STATUSBAR
    }
}

void MyComboBox::OnChar(wxKeyEvent& event)
{
    wxLogMessage(wxT("MyComboBox::OnChar"));

    if ( event.GetKeyCode() == 'w' )
    {
        wxLogMessage(wxT("MyComboBox: 'w' will be ignored."));
    }
    else
    {
        event.Skip();
    }
}

void MyComboBox::OnKeyDown(wxKeyEvent& event)
{
    wxLogMessage(wxT("MyComboBox::OnKeyDown"));

    if ( event.GetKeyCode() == 'w' )
    {
        wxLogMessage(wxT("MyComboBox: 'w' will be ignored."));
    }
    else
    {
        event.Skip();
    }
}

void MyComboBox::OnKeyUp(wxKeyEvent& event)
{
    wxLogMessage(wxT("MyComboBox::OnKeyUp"));

    event.Skip();
}

static void SetListboxClientData(const wxChar *name, wxListBox *control)
{
    size_t count = control->GetCount();
    for ( size_t n = 0; n < count; n++ )
    {
        wxString s;
        s.Printf(wxT("%s client data for '%s'"),
                 name, control->GetString(n).c_str());

        control->SetClientObject(n, new wxStringClientData(s));
    }
}

#if wxUSE_CHOICE

static void SetChoiceClientData(const wxChar *name, wxChoice *control)
{
    size_t count = control->GetCount();
    for ( size_t n = 0; n < count; n++ )
    {
        wxString s;
        s.Printf(wxT("%s client data for '%s'"),
                 name, control->GetString(n).c_str());

        control->SetClientObject(n, new wxStringClientData(s));
    }
}

#endif // wxUSE_CHOICE
