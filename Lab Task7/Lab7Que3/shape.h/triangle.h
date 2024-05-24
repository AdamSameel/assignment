#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

namespace shapes {
    class triangle {
        private:
        double base;
        double height;
        public:
    
        void setBase(double b);
        void setHeight(double h);
        double getBase();
        double getHeight();
        triangle();
        triangle(double b, double h);
        ~triangle();
    };
}
#endif