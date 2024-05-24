#include "rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle() {
   // length = 0.0f;
   // width = 0.0f;
}
rectangle::~rectangle(void) {
    // nothing done
}
void rectangle::setvalue(float x, float y){
    length = x ;
    width = y;
}
float rectangle::getvalue() {
    return length * width;
}
