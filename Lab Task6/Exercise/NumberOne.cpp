#include <iostream>
#include <string>
using namespace std;

int main() {
    int* dynamicInt = new int;

    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    string* dynamicString = new string;

    cout << "Enter a string value: "; 
    cin >> *dynamicString;

    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;
    cout << "Dynamically allocated string value: " << *dynamicString << endl;

    delete dynamicInt;
    delete dynamicString;

    return 0;
}