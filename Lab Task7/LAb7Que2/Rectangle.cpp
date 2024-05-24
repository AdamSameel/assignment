#include "Rectangle.h"

rectangle::rectangle() {
   // length = 0.0f;
   // width = 0.0f;
}
rectangle::~rectangle(void) {
    // nothing done
}
rectangle::rectangle(float a, float b) : length(a), width(b){
    
}
int rectangle::area() {
    return length * width;
}