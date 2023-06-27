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
				Vector4 v = calculate(i);//przerobiæ na operator = 
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
DOBÓR T:
W przypadku krzywych Lissajous w trzech wymiarach równie¿ mo¿na dostosowaæ parametry w celu unikniêcia powtarzania siê krzywej.Równania parametryczne dla trzech wymiarów wygl¹daj¹ nastêpuj¹co :

x = A * sin(a * t + ?)
y = B * sin(b * t)
z = C * sin(c * t + ?)

Podobnie jak w przypadku dwóch wymiarów, mo¿na dostosowaæ zakres parametru "t" na podstawie stosunków czêstoœci(a / b, b / c, a / c) oraz okresów funkcji sinusoidalnych dla poszczególnych osi.

Jeœli stosunki czêstoœci(a / b, b / c, a / c) s¹ liczbami niewymiernymi, krzywa Lissajous w trzech wymiarach nie powtórzy siê.Mo¿na wtedy wybraæ dowolny zakres dla parametru "t".
U NAS BÊD¥ ZAWSZE LICZBAMI NIEWYMIERNYMI BO PODAJEMY W GUI WARTOSCI U£AMKOWE I CA£KOWITE.
Jeœli stosunki czêstoœci s¹ liczbami wymiernymi, mo¿na dostosowaæ zakres parametru "t" tak, aby unikn¹æ powtórzeñ.Zakres dla "t" mo¿na ustawiæ na podstawie okresów funkcji sinusoidalnych dla poszczególnych osi.

Przyk³adowo, jeœli okresy dla osi x, y i z wynosz¹ odpowiednio T1, T2 i T3, mo¿na ustawiæ zakres dla "t" na t ?[0, k * NWW(T1, T2, T3)], gdzie NWW oznacza najmniejsz¹ wspóln¹ wielokrotnoœæ.

Dobór dok³adnego zakresu parametru "t" w trzech wymiarach równie¿ zale¿y od konkretnego zastosowania i oczekiwanych efektów.Warto eksperymentowaæ i dostosowaæ zakres w zale¿noœci od potrzeb.
*/