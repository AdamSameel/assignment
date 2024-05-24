#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"
namespace shapes {
    class square {
      private:
        double sidelength;

      public:
        double getSideLength();
        void setSideLength(double side);
        square();
        square(double side);
        ~square();
        
    };
}

#endif