#pragma once

#include "vecmat.h"

struct AxisLines {
    double A = 1., B = 1., C = 1.;
    AxisLines() {
        points = new Vector4[6];
        points[0].Set(-1, 0, 0);
        points[1].Set(1, 0, 0);
        points[2].Set(0, -1, 0);
        points[3].Set(0, 1, 0);
        points[4].Set(0, 0, -1);
        points[5].Set(0, 0, 1);
        
    }
    ~AxisLines() {
        delete[] points;
    }
    void update() {
        points[0].Set(-1*A, 0, 0);
        points[1].Set(1*A, 0, 0);
        points[2].Set(0, -1*B, 0);
        points[3].Set(0, 1*B, 0);
        points[4].Set(0, 0, -1*C);
        points[5].Set(0, 0, 1*C);
        
    }
    Vector4* getPoints() {
        return points;
    }
private:
    Vector4* points;
};
