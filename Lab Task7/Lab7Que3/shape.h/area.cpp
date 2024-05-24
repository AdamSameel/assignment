#include "area.h"
#include <cmath>

double area::calculateArea(shapes::square& square) {
    return square.getSideLength() * square.getSideLength();
}

double area::calculateArea(shapes::triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double area::calculateArea(shapes::circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}