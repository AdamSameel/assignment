#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    float c;
    float d;

    cout << "Enter the value of length: ";
    cin >> c;
    cout << "Enter the value of width: ";
    cin >> d;

    rectangle solve(c, d);
    
    cout << "Area of a Rectangle is: " << solve.area();
    return 0;
}