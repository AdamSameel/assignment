#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

namespace shapes {
    class circle {
        private:
        double radius;

        public:
        void setRadius(double r);
         double getRadius();
         circle();
         circle(double r);
         ~circle();
    };
}
#endif