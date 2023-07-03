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
			update(true);
		}

		~LissajousCurve() {
			delete[] segments;
		}

		Vector4 calculate(double t, bool kartezian=true) {
			Vector4 vec;	
			
			double x = A * sin(a * t + delta);
			double y = B * sin(b * t);
			double z = C * sin(c * t + phi);

			if (kartezian) {
				vec.Set(x, y, z);
			}
			else {
				double x1 = x * cos(y) * sin(z);
				double x2 = x * sin(y) * sin(z);
				double x3 = x * cos(z);

				vec.Set(x1, x2, x3);
			}

			return vec;
		}

		void update(bool kartezian) {
			double tMax =std::max({ 2 * M_PI / a, 2 * M_PI / b, 2 * M_PI / c });

			for (int i = 0; i < segmentsSize; i++) {
				Vector4 v = calculate(i* tMax / segmentsSize, kartezian);
				segments[i].Set(v.GetX(), v.GetY(), v.GetZ());
			}
		}
		
		size_t getSegmentsSize() {
			return segmentsSize;
		}

		Vector4* getSegments() {
			return segments;
		}

		void setSegmentsSize(size_t size, bool kartezian) {
			delete[] segments;

			segmentsSize = size;
			allocateSegments();
			update(kartezian);
		}

	private:
		size_t segmentsSize;
		Vector4* segments;

		void allocateSegments() {
			segments = new Vector4[segmentsSize];
		}
};