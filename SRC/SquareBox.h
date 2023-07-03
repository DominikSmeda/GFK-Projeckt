#pragma once

#include "vecmat.h"

struct SquareBox {
    double A=1., B=1., C=1.;
    SquareBox() {
        points = new Vector4[8];
        points[0].Set(-1, -1, -1);
        points[1].Set(-1, -1, 1);
        points[2].Set(-1, 1, 1);
        points[3].Set(-1, 1, -1);
        points[4].Set(1, -1, -1);
        points[5].Set(1, -1, 1);
        points[6].Set(1, 1, 1);
        points[7].Set(1, 1, -1);
    }
    ~SquareBox() {
        delete[] points;
    }
    void update() {
        points[0].Set(-1*A, -1*B, -1*C);
        points[1].Set(-1*A, -1*B, 1*C);
        points[2].Set(-1*A, 1*B, 1*C);
        points[3].Set(-1*A, 1*B, -1*C);
        points[4].Set(1*A, -1*B, -1*C);
        points[5].Set(1*A, -1*B, 1*C);
        points[6].Set(1*A, 1*B, 1*C);
        points[7].Set(1*A, 1*B, -1*C);
    }
    Vector4* getPoints() {
        return points;
    }
private:
    Vector4* points;
};