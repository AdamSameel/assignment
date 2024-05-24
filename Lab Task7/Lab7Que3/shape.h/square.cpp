#include "square.h"

namespace shapes {
    square::square() {
        sidelength = 0.0;
    }

    square::square(double side) {
        sidelength = side;
    }

    square::~square() {
        // empty distructor
    }

    void square::setSideLength(double side) {
        sidelength = side;
    }

    double square::getSideLength() {
        return sidelength;
    }
       
}