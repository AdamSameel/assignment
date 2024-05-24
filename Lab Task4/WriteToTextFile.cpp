#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile("input.txt");

    if (myfile.is_open())
    {
        myfile << "This is the Advanced Computer Programming Module. \n";
        myfile.close();
    }
    else
    {
        cout << "Unable to open file";
    }

    return 0;
}