/////////////////////////////////////////////////////////////////////////////
// Name:        Mass_Diag.h
// Purpose:     Manager of the Aircraft Mass & Moment of interial
// Author:      Matthew Gong
// Created:     05/22/2005
// Copyright:   (c) Matthew Gong
// Licence:     GPL licence
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(__APPLE__)
// #pragma interface
#endif

// -*- C++ -*- generated by wxGlade 0.3.5.1 on Sun May 22 14:59:18 2005

#include <wx/wx.h>
#include <wx/image.h>
// begin wxGlade: ::dependencies
// end wxGlade


#ifndef MASS_DIAG_H
#define MASS_DIAG_H

#include "FGXMLElement.h"

class ClientData_pm : public wxClientData
{
  public:
    ClientData_pm();
    ~ClientData_pm(){}
    void Load(JSBSim::Element * el);
    void Save(wxTextOutputStream & out, const wxString & prefix);
    wxString GetText() const;
    void ShowDialog();

  protected:
    wxString name;
    double weight;
    wxString weight_unit;
    double x,y,z;
    wxString loc_unit;

    friend class PMDialog;
};

class PMDialog: public wxDialog {
public:
    // begin wxGlade: PMDialog::ids
    // end wxGlade

    PMDialog(wxWindow* parent, int id, const wxString& title=_("Properties of PointMass"), const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxSize(510, 180), long style=wxDEFAULT_DIALOG_STYLE);
    void Load(const ClientData_pm * data);
    void Save(ClientData_pm * data);

private:
    // begin wxGlade: PMDialog::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: PMDialog::attributes
    wxStaticBox* sizer_location_copy_staticbox;
    wxStaticText* label_name;
    wxTextCtrl* text_ctrl_name;
    wxStaticText* label_weight;
    wxTextCtrl* text_ctrl_weight;
    wxComboBox* combo_box_weight;
    wxStaticText* label_location_x_copy;
    wxTextCtrl* text_ctrl_location_x;
    wxStaticText* label_location_y_copy;
    wxTextCtrl* text_ctrl_location_y;
    wxStaticText* label_location_z_copy;
    wxTextCtrl* text_ctrl_location_z;
    wxComboBox* combo_box_location;
    wxButton* button_ok;
    wxButton* button_cancel;
    // end wxGlade

public :
    bool TransferDataToWindow(){return true;}
    bool TransferDataFromWindow(){return true;}
    bool Validate(){return true;}
};


#endif // MASS_DIAG_H