#include <iostream>
#include <string>
#include <vector>
using namespace std;

void displayStatementsStartingWihLetter(const string statements[], int size, char letter) {
    bool found = false;

    cout << "statements starting with the letter: " << letter << " : " << endl;
    for (int j = 0; j < size; j++) {
        if (!statements[j].empty()) {
            char firstChar = tolower(statements[j][0]);
            if (firstChar == tolower(letter)) {
                cout << statements[j] << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No statements start with the letter: " << letter << endl;
    }
}

int main(){
    string statements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C234", "B179"};

    char startletter;

    startletter = 'B';

    displayStatementsStartingWihLetter(statements, 8, startletter);

    return 0;
}