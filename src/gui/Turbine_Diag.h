/////////////////////////////////////////////////////////////////////////////
// Name:        Turbine_Diag.h
// Purpose:     Dialog for Turbine Engine
// Author:      Matthew Gong
// Created:     06/29/2005
// Copyright:   (c) Matthew Gong
// Licence:     GPL licence
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(__APPLE__)
// #pragma interface
#endif

// -*- C++ -*- generated by wxGlade 0.4cvs on Tue Jun 28 16:57:11 2005

#include <wx/wx.h>
#include <wx/image.h>
// begin wxGlade: ::dependencies
#include <wx/treectrl.h>
#include <wx/notebook.h>
#include <wx/imaglist.h>
// end wxGlade


#ifndef TURBINE_DIAG_H
#define TURBINE_DIAG_H

class TreeItemEvtHandler;

#include "Engine_Diag.h"

extern bool newTurbineEngine(const wxString & filename);

class TurbineDialog: public EngineDialog {
public:
    // begin wxGlade: TurbineDialog::ids
    // end wxGlade

    TurbineDialog(wxWindow* parent, int id, const wxString& title=_("Turbine Setup"), const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: TurbineDialog::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: TurbineDialog::attributes
    wxStaticText* label_name;
    wxTextCtrl* text_ctrl_name;
    wxStaticText* label_bypass;
    wxTextCtrl* text_ctrl_bypass;
    wxStaticText* label_mil;
    wxTextCtrl* text_ctrl_mil;
    wxComboBox* combo_box_mil;
    wxStaticText* label_max;
    wxTextCtrl* text_ctrl_max;
    wxComboBox* combo_box_max;
    wxStaticText* label_in1;
    wxTextCtrl* text_ctrl_in1;
    wxStaticText* label_in2;
    wxTextCtrl* text_ctrl_in2;
    wxStaticText* label_mn1;
    wxTextCtrl* text_ctrl_mn1;
    wxStaticText* label_mn2;
    wxTextCtrl* text_ctrl_mn2;
    wxStaticText* label_tsfc;
    wxTextCtrl* text_ctrl_tsfc;
    wxStaticText* label_atsfc;
    wxTextCtrl* text_ctrl_atsfc;
    wxPanel* notebook_1_pane_1;
    wxTreeCtrl* tree_ctrl_func;
    wxPanel* notebook_1_pane_2;
    wxNotebook* notebook_1;
    wxButton* button_ok;
    wxButton* button_cancel;
    // end wxGlade

protected :
    void init_tree();
    wxTreeItemId root;
    TreeItemEvtHandler * tree_item_evt_handler;

public :
    bool Load(const wxString & fn);
    bool Save(const wxString & fn=wxEmptyString);

public :
    bool TransferDataToWindow(){return true;}
    bool TransferDataFromWindow(){return true;}
    bool Validate(){return true;}
}; // wxGlade: end class


#endif // TURBINE_DIAG_H
