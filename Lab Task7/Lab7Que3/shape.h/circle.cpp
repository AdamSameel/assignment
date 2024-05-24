#include "circle.h"

namespace shapes {
         circle::circle() {
        radius = 0.0;
    }

    circle::circle(double r) {
        radius = r;
    }

    circle::~circle() {
        // empty destructor 
    }

    void circle::setRadius(double r) {
        radius = r;
    }
    double circle::getRadius() {
        return radius;
    }
}