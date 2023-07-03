#pragma once

#define _USE_MATH_DEFINES
#include <cmath>
#include <algorithm>

#include "vecmat.h"


struct LissajousCurve
{
	public:
		double A, B, C, a, b, c, phi, delta;

		LissajousCurve():segmentsSize(800) {
			A = 1.0;
			B = 1.0;
			C = 1.0;
			a = 1.0;
			b = 1.0;
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

			double x =  A * sin(a * t + delta);
			double y = B * sin(b * t);
			double z = C * sin(c * t + phi);
			
			vec.Set(x, y, z);

			return vec;
		}

		void update() {
			double tMax =2* std::max({ 2 * M_PI / a, 2 * M_PI / b, 2 * M_PI / c });

			for (int i = 0; i < segmentsSize; i++) {
				Vector4 v = calculate(i* tMax / segmentsSize);//przerobiæ na operator = 
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