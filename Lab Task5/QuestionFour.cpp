#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;
    bool num = true;
    
        cout << "Enter an integer between 5 and 10 " << endl;

        while (num){

            if (!(cin >> number)) {
                 cout << "Sorry, you entered an invalid number, please try again" << endl;
                 cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        } 
        else if (!(number > 5 && number < 10)) {
                 cout << "You entered " << number << ". Please enter the number between 5 and 10!" << endl;
                 cin.clear();
                 cin.ignore(numeric_limits<streamsize>::max(), '\n');
         }
         else if (number > 5 && number < 10) {
            cout << "Your input (" << number << ") has been accepted " << endl;
            return 0;
         }
        }

    return 0;
}