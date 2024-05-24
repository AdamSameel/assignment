#include <iostream>
using namespace std;

int main() {
    int a = 21;
    int c;

    c = a;
    cout << "Line 1 - value = operator, valus of c = : " << c << endl;

    c += a;
     cout << "Line 2 - value += operator, valus of c = : " << c << endl;

     c -= a;
     cout << "Line 3 - value -= operator, valus of c = : " << c << endl;
     
     c *= a;
     cout << "Line 4 - value *= operator, valus of c = : " << c << endl;

     c /= a;
     cout << "Line 5 - value /= operator, valus of c = : " << c << endl;

     c = 200;
     c %= a;
     cout << "Line 6 - value %= operator, valus of c = : " << c << endl;

     c <<= 2;
     cout << "Line 7 - value <<= operator, valus of c = : " << c << endl;

     c >>= 2;
     cout << "Line 8 - value >>= operator, valus of c = : " << c << endl;

     c &= 2;
     cout << "Line 9 - value &= operator, valus of c = : " << c << endl;

     c ^= 2;
     cout << "Line 10 - value ^= operator, valus of c = : " << c << endl;

     c |= 2;
     cout << "Line 11 - value |= operator, valus of c = : " << c << endl;

     return 0;
}