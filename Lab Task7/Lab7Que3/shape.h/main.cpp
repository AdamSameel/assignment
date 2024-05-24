#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"

using namespace std;
using namespace shapes;

int main(){

    int a;
    double b;
    double c;

    cout << "1. Calculate area of a square \n";
    cout << "2. Calculate area of a triangle \n";
    cout << "3. Calculate area of a circle \n";
    cout << "4. quit\n";

    cout << "Enter your option\n";
    cin >> a;
    while (a == 1){
        cout << "Enter the value of a side length \n";
        cin >> b;
        square square(b);
        cout << "Area of the square is " << area::calculateArea(square) << endl;
        return 0;
    } 
    while (a == 2) {
        cout << "Enter the value of a base\n";
        cin >> b;
        cout << "Enter the value of a height\n";
        cin >> c;
        triangle triangle(b, c);
        cout << "Area of the triangle is " << area::calculateArea(triangle) << endl;
        return 0;
    }
    while (a == 3) {
        cout << "Enter the value of a Radius\n";
        cin >> b;
        circle circle(b);
        cout << "Area of the circle is " << area::calculateArea(circle) << endl;
        return 0;
    }
    while (a == 4) {
        return 0;
    }
    while (a < 0 || a > 4) {
        cout << "Invalid option";
        return 0;
    }

    return 0;
}