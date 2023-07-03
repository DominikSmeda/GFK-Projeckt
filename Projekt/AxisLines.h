#pragma once

#include "vecmat.h"

const double length = 1.6;
struct AxisLines {
    double A = 1., B = 1., C = 1.;
    AxisLines() {
        points = new Vector4[6];
        points[0].Set(-length, 0, 0);
        points[1].Set(length, 0, 0);
        points[2].Set(0, -length, 0);
        points[3].Set(0, length, 0);
        points[4].Set(0, 0, -length);
        points[5].Set(0, 0, length);
        
    }
    ~AxisLines() {
        delete[] points;
    }
    void update() {
        points[0].Set(-length *A, 0, 0);
        points[1].Set(length *A, 0, 0);
        points[2].Set(0, -length *B, 0);
        points[3].Set(0, length *B, 0);
        points[4].Set(0, 0, -length *C);
        points[5].Set(0, 0, length *C);
        
    }
    Vector4* getPoints() {
        return points;
    }
private:
    Vector4* points;
};
