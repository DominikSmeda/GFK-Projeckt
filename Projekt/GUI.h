///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/slider.h>
#include <wx/choice.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/wxprec.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText3;
		wxStaticText* m_staticText4;
		wxStaticLine* m_staticline6;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText6;
		wxStaticText* m_staticText7;
		wxStaticLine* m_staticline7;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxStaticLine* m_staticline8;
		wxStaticText* m_staticText10;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText12;
		wxStaticLine* m_staticline9;
		wxStaticText* m_staticText13;
		wxStaticText* m_staticText14;
		wxStaticLine* m_staticline10;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText16;
		wxStaticText* m_staticText17;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText19;
		wxStaticText* m_staticText20;
		wxTextCtrl* m_textCtrl_A;
		wxTextCtrl* m_textCtrl_B;
		wxTextCtrl* m_textCtrl_C;
		wxStaticLine* m_staticline1;
		wxTextCtrl* m_textCtrl_a;
		wxTextCtrl* m_textCtrl_b;
		wxTextCtrl* m_textCtrl_c;
		wxStaticLine* m_staticline2;
		wxSlider* m_slider_delta;
		wxSlider* m_slider_phi;
		wxStaticLine* m_staticline3;
		wxSlider* m_slider_rotateX;
		wxSlider* m_slider_rotateY;
		wxSlider* m_slider_rotateZ;
		wxStaticLine* m_staticline4;
		wxChoice* m_choice_linePoints;
		wxTextCtrl* m_textCtrl_numberOfPoints;
		wxStaticLine* m_staticline5;
		wxCheckBox* m_checkBox_animation;
		wxButton* m_button_StartStop;
		wxTextCtrl* m_textCtrl_lineLength;
		wxStaticText* m_staticText1;
		wxPanel* m_panel1;
		wxTimer* WxTimer1;

		// Virtual event handlers, override them in your derived class
		virtual void OnText_A( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnText_B( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnText_C( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnText_a( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnText_b( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnText_c( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnScroll_delta( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnScroll_phi( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnScroll_rotateX( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnScroll_rotateY( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnScroll_rotateZ( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnChoice_linePoints( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnText_numberOfPoints( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCheckBox_animation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClick_StartStop( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnText_lineLength( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSize(wxSizeEvent& event) { event.Skip(); }
		virtual void WxPanel_Repaint(wxUpdateUIEvent& event) { event.Skip(); }

		void Timer1_Timer(wxTimerEvent& e);
		void CheckBox1_Click(wxCommandEvent& e);
		virtual void RequestAnimationFrame(){}
	public:
		
		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = "Krzywe Lissajous w 3D", const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1200,800 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL);

		~MyFrame1();

};

