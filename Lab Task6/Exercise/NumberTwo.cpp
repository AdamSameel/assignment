#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    cout << "Enter the number of rows" << endl;
    cin >> rows;

    while (!(rows > 0 && rows <= 3)) {
        cout << "The number of rows are out of the limit. Enter the number of rows again " << endl;
        cin >> rows;
    }

    cout << "Enter the number of columns " << endl;
    cin >> columns;

    while (!(columns > 0 && columns <= 3)) {
        cout << "The number of columns are out of the limit. Enter the number of columns again " << endl;
        cin >> columns;
    }

    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[columns];
    }

    cout << "Start entering the values " << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
           cin >> array[i][j];
           cout << "continue " << endl;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}