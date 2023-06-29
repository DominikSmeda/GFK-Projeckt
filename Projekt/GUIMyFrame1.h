#ifndef __GUIMyFrame1__
#define __GUIMyFrame1__

/**
@file
Subclass of MyFrame1, which is generated by wxFormBuilder.
*/

#include "GUI.h"
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/window.h>

//// end generated include

#include <wx/filedlg.h>
#include <wx/dcmemory.h>
//#include <wx/dcclient.h>
//#include <wx/dcbuffer.h>
//#include <wx/colourdata.h>
//#include <wx/colordlg.h>
#include "AxisLines.h"
#include "SquareBox.h"
#include "LissajousCurve.h"

/** Implementing MyFrame1 */
class GUIMyFrame1 : public MyFrame1
{
	protected:
		// Handlers for MyFrame1 events.
		void OnText_A( wxCommandEvent& event );
		void OnText_B( wxCommandEvent& event );
		void OnText_C( wxCommandEvent& event );
		void OnText_a( wxCommandEvent& event );
		void OnText_b( wxCommandEvent& event );
		void OnText_c( wxCommandEvent& event );
		void OnScroll_delta( wxScrollEvent& event );
		void OnScroll_phi( wxScrollEvent& event );
		void OnScroll_rotateX( wxScrollEvent& event );
		void OnScroll_rotateY( wxScrollEvent& event );
		void OnScroll_rotateZ( wxScrollEvent& event );
		void OnChoice_linePoints( wxCommandEvent& event );
		void OnText_numberOfPoints( wxCommandEvent& event );
		void OnCheckBox_animation( wxCommandEvent& event );
		void OnButtonClick_StartStop( wxCommandEvent& event );
		void OnText_lineLength( wxCommandEvent& event );
		void OnSize(wxSizeEvent& event );
		void WxPanel_Repaint(wxUpdateUIEvent& event);
	public:
		/** Constructor */
		GUIMyFrame1( wxWindow* parent );
	//// end generated class members



		void update();
	
	private:
		LissajousCurve curve;
		SquareBox box;
		AxisLines axis;
};

#endif // __GUIMyFrame1__
