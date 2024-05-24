#include <iostream>
using namespace std;

void swapNumbers(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;

    swapNumbers(varA, varB);

    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;
}

