#pragma once
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>

#include "vecmat.h"
#include <math.h>


struct LissajousCurve
{
	public:
		double A, B, C, a, b, c, phi, delta;

		LissajousCurve():segmentsSize(1000) {
			A = 1.0;
			B = 0.8;
			C = 0.6;
			a = 3.0;
			b = 2.0;
			c = 1.0;
			delta = 0.0;
			phi = 0.0;

			allocateSegments();
			update();
		}

		~LissajousCurve() {
			delete[] segments;
		}

		Vector4 calculate(double t) {
			Vector4 vec;	
			t = t/100;
			double x =  A * sin(a * t + delta);
			double y = B * sin(b * t);
			double z = C * sin(c * t + phi);
			
			vec.Set(x, y, z);

			return vec;
		}

		void update() {
			
			for (int i = 0; i < segmentsSize; i++) {
				Vector4 v = calculate(i);//przerobi� na operator = 
				segments[i].Set(v.GetX(), v.GetY(), v.GetZ());
			}
		}
		
		size_t getSegmentsSize() {
			return segmentsSize;
		}

		Vector4* getSegments() {
			return segments;
		}

		void setSegmentsSize(size_t size) {
			delete[] segments;

			segmentsSize = size;
			allocateSegments();
			update();
		}

	private:
		size_t segmentsSize;
		Vector4* segments;

		void allocateSegments() {
			segments = new Vector4[segmentsSize];
		}
};

/*
DOB�R T:
W przypadku krzywych Lissajous w trzech wymiarach r�wnie� mo�na dostosowa� parametry w celu unikni�cia powtarzania si� krzywej.R�wnania parametryczne dla trzech wymiar�w wygl�daj� nast�puj�co :

x = A * sin(a * t + ?)
y = B * sin(b * t)
z = C * sin(c * t + ?)

Podobnie jak w przypadku dw�ch wymiar�w, mo�na dostosowa� zakres parametru "t" na podstawie stosunk�w cz�sto�ci(a / b, b / c, a / c) oraz okres�w funkcji sinusoidalnych dla poszczeg�lnych osi.

Je�li stosunki cz�sto�ci(a / b, b / c, a / c) s� liczbami niewymiernymi, krzywa Lissajous w trzech wymiarach nie powt�rzy si�.Mo�na wtedy wybra� dowolny zakres dla parametru "t".
U NAS B�D� ZAWSZE LICZBAMI NIEWYMIERNYMI BO PODAJEMY W GUI WARTOSCI U�AMKOWE I CA�KOWITE.
Je�li stosunki cz�sto�ci s� liczbami wymiernymi, mo�na dostosowa� zakres parametru "t" tak, aby unikn�� powt�rze�.Zakres dla "t" mo�na ustawi� na podstawie okres�w funkcji sinusoidalnych dla poszczeg�lnych osi.

Przyk�adowo, je�li okresy dla osi x, y i z wynosz� odpowiednio T1, T2 i T3, mo�na ustawi� zakres dla "t" na t ?[0, k * NWW(T1, T2, T3)], gdzie NWW oznacza najmniejsz� wsp�ln� wielokrotno��.

Dob�r dok�adnego zakresu parametru "t" w trzech wymiarach r�wnie� zale�y od konkretnego zastosowania i oczekiwanych efekt�w.Warto eksperymentowa� i dostosowa� zakres w zale�no�ci od potrzeb.
*/