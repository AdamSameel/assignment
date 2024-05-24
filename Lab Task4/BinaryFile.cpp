// reading an entire binary file
#include <iostream>
#include <fstream>
using namespace std;

int main () {
    streampos size;
    char * memblock;

    ifstream myfile("afile.bin", ios::in|ios::binary|ios::ate);
    if (myfile.is_open())
    {
        size = myfile.tellg();
        myfile.seekg(0, ios::beg);
        myfile.read(memblock, size);
        myfile.close();

        cout << "The entire file content is in memory";
        delete[]memblock;
    }
    else
    {
        cout << "Unable to open file";
    }

    return 0;
}