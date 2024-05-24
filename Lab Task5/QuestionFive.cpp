#include <iostream>
using namespace std;

int main() {
    cout << "Please select the area of the shape to calculater: " << endl;

    cout << "1. squre" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit Program \n\n";

    cout << "Enter Selection" << endl;

    int length;
    int width;
    int height;
    int area;
    int c;
    int base;

    cin >> c;
    while (c > 4) {
        cout << "Your input was: " << c << " which is an invalid input" << endl;
        cout << "Please enter a valid input!!!" << endl;
        cin >> c;
    }
    
    if (c == 1) {
        cout << "Enter the value of the length " << endl;
        cin >> length;
        area = length * length;
        cout << "Area of the Square is: " << area << endl;
        c++;
    }

    else if (c == 2) {
        cout << "Enter the value of  the length " << endl;
        cin >> length;
        cout << "Enter the value of the width " << endl;
        cin >> width;
        area = length * width;
        cout << "Area of a REctangle is: " << area << endl;
        c++;
    } 
    
    else if (c == 3) {
        cout << "Enter the value of the base " << endl;
        cin >> base;
        cout << "Enter the value of the height " << endl;
        cin >> height;
        area = (base * height)/2;
        cout << "Area of the Triangle is: " << area << endl;
    }

    else if (c == 4) {
        return 0;
    }
    
    return 0;
}