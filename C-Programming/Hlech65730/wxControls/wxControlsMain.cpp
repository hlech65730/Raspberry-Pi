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
