#include "triangle.h"

namespace shapes {
    triangle::triangle() {
         base = 0.0;
        height = 0.0;
    }

    triangle::triangle(double b, double h) {
        base = b;
        height = h;
    }

    triangle::~triangle() {
        // empty destructor
    }

    void triangle::setBase(double b) {
        base = b;
    }

    void triangle::setHeight(double h) {
        height = h;
    }

    double triangle::getBase() {
        return base;
    }

    double triangle::getHeight() {
        return height;
    }
}