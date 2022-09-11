/////////////////////////////////////////////////////////////////////////////
// Name:        controls.cpp
// Purpose:     Controls wxWidgets sample
// Author:      Robert Roebling
// Modified by:
// Copyright:   (c) Robert Roebling, Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////


#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#if wxUSE_TOOLTIPS
    #include "wx/tooltip.h"
#ifdef __WXMSW__
    #include "wx/numdlg.h"
#endif // __WXMSW__
#endif // wxUSE_TOOLTIPS


#ifndef wxUSE_SPINBTN
    #define wxUSE_SPINBTN 1
#endif

#include "wx/progdlg.h"

#if wxUSE_SPINCTRL
    #include "wx/spinctrl.h"
#endif // wxUSE_SPINCTRL

#if !wxUSE_TOGGLEBTN
    #define wxToggleButton wxCheckBox
    #define EVT_TOGGLEBUTTON EVT_CHECKBOX
#endif

#ifndef wxHAS_IMAGES_IN_RESOURCES
    #include "../sample.xpm"
#endif


