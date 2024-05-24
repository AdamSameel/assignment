#ifndef AREA_H
#define AREA_H

#include "square.h"
#include "triangle.h"
#include "circle.h"

class area {
    public:
        static double calculateArea(shapes::square& square);
        static double calculateArea(shapes::triangle& triangle);
        static double calculateArea(shapes::circle& circle);
};
#endif