///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	//this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	//SetTitle(_("Krzywe Lissajous w 3D"));
	//SetIcon(wxNullIcon);
	//SetClientSize(this->FromDIP(wxSize(1200, 800)));

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_staticText18 = new wxStaticText(this, wxID_ANY, wxT(" "), wxDefaultPosition, wxSize(-1, 5), 0);
	m_staticText18->Wrap(-1);
	bSizer4->Add(m_staticText18, 0, wxALL, 5);

	m_staticText19 = new wxStaticText(this, wxID_ANY, wxT("Curve equations:"), wxDefaultPosition, wxSize(-1, 20), 0);
	m_staticText19->Wrap(-1);
	bSizer4->Add(m_staticText19, 0, wxALL, 5);

	m_staticText20 = new wxStaticText(this, wxID_ANY, wxT(" "), wxDefaultPosition, wxSize(-1, 1), 0);
	m_staticText20->Wrap(-1);
	bSizer4->Add(m_staticText20, 0, wxALL, 5);

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Value of A"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText2->Wrap( -1 );
	bSizer4->Add( m_staticText2, 0, wxALL, 5 );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Value of B"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText3->Wrap( -1 );
	bSizer4->Add( m_staticText3, 0, wxALL, 5 );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Value of C"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText4->Wrap( -1 );
	bSizer4->Add( m_staticText4, 0, wxALL, 5 );

	m_staticline6 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer4->Add( m_staticline6, 0, wxEXPAND | wxALL, 5 );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Value of a"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText5->Wrap( -1 );
	bSizer4->Add( m_staticText5, 0, wxALL, 5 );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Value of b"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText6->Wrap( -1 );
	bSizer4->Add( m_staticText6, 0, wxALL, 5 );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Value of c"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText7->Wrap( -1 );
	bSizer4->Add( m_staticText7, 0, wxALL, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer4->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Value of delta"), wxDefaultPosition, wxSize( -1,26 ), 0 );
	m_staticText8->Wrap( -1 );
	bSizer4->Add( m_staticText8, 0, wxALL, 5 );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Value of phi"), wxDefaultPosition, wxSize( -1,26 ), 0 );
	m_staticText9->Wrap( -1 );
	bSizer4->Add( m_staticText9, 0, wxALL, 5 );

	m_staticline8 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer4->Add( m_staticline8, 0, wxEXPAND | wxALL, 5 );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Rotation X"), wxDefaultPosition, wxSize( -1,26 ), 0 );
	m_staticText10->Wrap( -1 );
	bSizer4->Add( m_staticText10, 0, wxALL, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Rotation Y"), wxDefaultPosition, wxSize( -1,26 ), 0 );
	m_staticText11->Wrap( -1 );
	bSizer4->Add( m_staticText11, 0, wxALL, 5 );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Rotation Z"), wxDefaultPosition, wxSize( -1,26 ), 0 );
	m_staticText12->Wrap( -1 );
	bSizer4->Add( m_staticText12, 0, wxALL, 5 );

	m_staticline9 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxLI_HORIZONTAL );
	bSizer4->Add( m_staticline9, 0, wxEXPAND | wxALL, 5 );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Line or Points"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText13->Wrap( -1 );
	bSizer4->Add( m_staticText13, 0, wxALL, 5 );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Number of points"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText14->Wrap( -1 );
	bSizer4->Add( m_staticText14, 0, wxALL, 5 );

	m_staticline10 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer4->Add( m_staticline10, 0, wxEXPAND | wxALL, 5 );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Allow to animate"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer4->Add( m_staticText15, 0, wxALL, 5 );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Start/Stop Animation"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText16->Wrap( -1 );
	bSizer4->Add( m_staticText16, 0, wxALL, 5 );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Line length"), wxDefaultPosition, wxSize( -1,23 ), 0 );
	m_staticText17->Wrap( -1 );
	bSizer4->Add( m_staticText17, 0, wxALL, 5 );


	bSizer1->Add( bSizer4, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText(this, wxID_ANY, wxT("x = A * sin(a * t + delta)\ny = B * sin(b * t)\nz = C * sin(c * t + phi)"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText1->Wrap(-1);
	bSizer2->Add(m_staticText1, 0, wxALL, 5);

	m_textCtrl_A = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl_A, 0, wxALL, 5 );

	m_textCtrl_B = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl_B, 0, wxALL, 5 );

	m_textCtrl_C = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl_C, 0, wxALL, 5 );

	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

	m_textCtrl_a = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl_a, 0, wxALL, 5 );

	m_textCtrl_b = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl_b, 0, wxALL, 5 );

	m_textCtrl_c = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl_c, 0, wxALL, 5 );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	m_slider_delta = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer2->Add( m_slider_delta, 0, wxALL, 5 );

	m_slider_phi = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer2->Add( m_slider_phi, 0, wxALL, 5 );

	m_staticline3 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline3, 0, wxEXPAND | wxALL, 5 );

	m_slider_rotateX = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer2->Add( m_slider_rotateX, 0, wxALL, 5 );

	m_slider_rotateY = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer2->Add( m_slider_rotateY, 0, wxALL, 5 );

	m_slider_rotateZ = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer2->Add( m_slider_rotateZ, 0, wxALL, 5 );

	m_staticline4 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline4, 0, wxEXPAND | wxALL, 5 );

	wxString m_choice_linePointsChoices[] = { wxT("Line"), wxT("Points") };
	int m_choice_linePointsNChoices = sizeof( m_choice_linePointsChoices ) / sizeof( wxString );
	m_choice_linePoints = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_linePointsNChoices, m_choice_linePointsChoices, 0 );
	m_choice_linePoints->SetSelection( 0 );
	bSizer2->Add( m_choice_linePoints, 0, wxALL, 5 );

	m_textCtrl_numberOfPoints = new wxTextCtrl( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl_numberOfPoints, 0, wxALL, 5 );

	m_staticline5 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline5, 0, wxEXPAND | wxALL, 5 );

	m_checkBox_animation = new wxCheckBox( this, wxID_ANY, wxT("Animation"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_checkBox_animation, 0, wxALL, 5 );

	m_button_StartStop = new wxButton( this, wxID_ANY, wxT("Start/Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button_StartStop, 0, wxALL, 5 );

	m_textCtrl_lineLength = new wxTextCtrl( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl_lineLength, 0, wxALL, 5 );

	


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer3->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );


	bSizer1->Add( bSizer3, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_textCtrl_A->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_A ), NULL, this );
	m_textCtrl_B->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_B ), NULL, this );
	m_textCtrl_C->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_C ), NULL, this );
	m_textCtrl_a->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_a ), NULL, this );
	m_textCtrl_b->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_b ), NULL, this );
	m_textCtrl_c->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_c ), NULL, this );
	m_slider_delta->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_rotateX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateY->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateZ->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_choice_linePoints->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::OnChoice_linePoints ), NULL, this );
	m_textCtrl_numberOfPoints->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_numberOfPoints ), NULL, this );
	m_checkBox_animation->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::OnCheckBox_animation ), NULL, this );
	m_button_StartStop->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::OnButtonClick_StartStop ), NULL, this );
	m_textCtrl_lineLength->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_lineLength ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_textCtrl_A->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_A ), NULL, this );
	m_textCtrl_B->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_B ), NULL, this );
	m_textCtrl_C->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_C ), NULL, this );
	m_textCtrl_a->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_a ), NULL, this );
	m_textCtrl_b->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_b ), NULL, this );
	m_textCtrl_c->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_c ), NULL, this );
	m_slider_delta->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_delta->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_delta ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_phi ), NULL, this );
	m_slider_rotateX->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateX->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_rotateX ), NULL, this );
	m_slider_rotateY->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateY->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_rotateY ), NULL, this );
	m_slider_rotateZ->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_slider_rotateZ->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::OnScroll_rotateZ ), NULL, this );
	m_choice_linePoints->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::OnChoice_linePoints ), NULL, this );
	m_textCtrl_numberOfPoints->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_numberOfPoints ), NULL, this );
	m_checkBox_animation->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::OnCheckBox_animation ), NULL, this );
	m_button_StartStop->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::OnButtonClick_StartStop ), NULL, this );
	m_textCtrl_lineLength->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::OnText_lineLength ), NULL, this );

}
