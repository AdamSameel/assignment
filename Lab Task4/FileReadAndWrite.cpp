#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char data[100];

    // open a text file in a write mode.
    ofstream myfile;
    myfile.open("afile.txt");

    cout << "Writing to the file " << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    // write inputted data into the text file.
    myfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // again write inputted data into the text file.
    myfile << data << endl;

    // close the opened file.
    myfile.close();

    // open a.text file in read mode.
    ifstream infile;
    infile.open("afile.txt");

    cout << "Reading from the file" << endl;
    infile >> data;

    // write the data at the screen
    cout << data << endl;

    // again read the data from the file and display it.
    infile >> data;
    cout << data << endl;

    // close the openned file
    infile.close();

    return 0;
}