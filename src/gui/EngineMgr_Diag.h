/////////////////////////////////////////////////////////////////////////////
// Name:        EngineMgr_Diag.h
// Purpose:     Manager of Engines
// Author:      Matthew Gong
// Created:     06/20/2005
// Copyright:   (c) Matthew Gong
// Licence:     GPL licence
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(__APPLE__)
// #pragma interface
#endif

// -*- C++ -*- generated by wxGlade 0.3.5.1 on Tue May  3 16:09:10 2005

#include <wx/wx.h>
#include <wx/image.h>
// begin wxGlade: ::dependencies
#include <wx/listctrl.h>
// end wxGlade


#ifndef ENGINEMGR_DIAG_H
#define ENGINEMGR_DIAG_H

class wxFileConfig;

class EngineMgrDialog: public wxDialog {
public:
    // begin wxGlade: EngineMgrDialog::ids
    enum {
       ENGINE_LIST = 24650,
       ENGINE_ADD,
       ENGINE_DEL,
       ENGINE_DUP,
       ENGINE_DETAIL,
       ENGINE_NAME,
       ENGINE_DSCP,
    };
    // end wxGlade

    EngineMgrDialog(const wxString & eng, wxWindow* parent, int id, const wxString& title=_("Engine/Thruster Manager"), const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxSize(660,480), long style=wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX);
    ~EngineMgrDialog();

    static void InitEngineCfg(void);
    wxString GetResult()
    {
      return text_ctrl_symbol->GetValue();
    }

private:
    // begin wxGlade: EngineMgrDialog::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: EngineMgrDialog::attributes
    wxListCtrl* engine_list;
    wxStaticText* label_symbol;
    wxTextCtrl* text_ctrl_symbol;
    wxStaticText* label_type;
    wxTextCtrl* text_ctrl_type;
    wxStaticText* label_name;
    wxTextCtrl* text_ctrl_name;
    wxStaticText* label_dscp;
    wxTextCtrl* text_ctrl_dscp;
    wxBitmapButton* bitmap_button_add;
    wxBitmapButton* bitmap_button_del;
    wxBitmapButton* bitmap_button_dup;
    wxButton* btn_detail;
    wxButton* btn_apply;
    wxButton* btn_close;
    // end wxGlade

    wxFileConfig * config;
    void after_construct();
    void before_destruct();
    void apply(const long & i);

    void OnSelectList(wxListEvent & event);
    void OnDeselectList(wxListEvent & event);
    void OnEnterName(wxCommandEvent & event);
    void OnApply(wxCommandEvent & event);
    void OnDel(wxCommandEvent & event);
    void OnAdd(wxCommandEvent & event);
    void OnDup(wxCommandEvent & event);
    void OnDetail(wxCommandEvent & event);
    void OnDoubleClickList(wxListEvent & event);

    DECLARE_EVENT_TABLE() 
};


#endif // ENGINEMGR_DIAG_H
