//#pragma once
//#include <wx/dcclient.h>
//#include <wx/dcbuffer.h>
//
//#include "LissajousCurve.h"
//
//class Animator {
//	private:
//		LissajousCurve* curve;
//		double dt = 0;
//		wxClientDC* dc1;
//		wxBufferedDC* dc;
//
//	public:
//		Animator(){}
//
//		void setCurve(LissajousCurve* _curve) {
//			curve = _curve;
//		}
//
//		void setPanel(wxPanel* panel) {
//			dc1 = new wxClientDC(panel);
//			dc = new wxBufferedDC(dc1);
//		}
//
//		void update(wxBufferedDC& dc){
//
//			dt += 0.1;
//			curve->A += 0.1;
//			curve->update();
//			wxPoint center(50 + dt, 50 + dt);
//			double depthSize = 5;
//			wxSize size(depthSize, depthSize); // Rozmiar elipsy
//			wxRect rect(center - size / 2, size);
//			dc.DrawEllipse(rect);
//		}
//
//		void render() {
//			
//		}
//};