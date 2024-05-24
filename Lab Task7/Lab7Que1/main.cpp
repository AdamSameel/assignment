#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {

    float a;
    float b;

    cout << "Enter the value of a length: ";
    cin >> a;
    cout << "Enter the value of a width: ";
    cin >> b;

    rectangle solve;
    solve.setvalue(a, b);
    solve.getvalue();
    cout << "The arae of a rectangle is: " << solve.getvalue();

    return 0;
}