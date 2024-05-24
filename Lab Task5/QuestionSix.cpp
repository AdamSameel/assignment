#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;


int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) {
    istringstream iss(str);
    int count = 0;
    string word;
    while (iss >> word) {
        count++;
    }
    return count;
}

string reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

string capitalizeSecondLetters(const string& str) {
    string result = str;
    bool capitalize = true;
    for (char& ch : result) {
        if (isalpha(ch)) {
            if (capitalize) {
                ch = toupper(ch);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
        
    }
    return result;
}

int main() {
    
    ifstream myfile("input.txt");
    if (!myfile) {
        cout << "Error: Failed to open the file. \n";
        return 1;
    }

    string fileData((istreambuf_iterator<char>(myfile)), istreambuf_iterator<char>());

    int vowelCount = countVowels(fileData);
    cout << "Number of vowels in the text: " << vowelCount << endl;

    int wordCount = countWords(fileData);
    cout << "Number of words in the text: " << wordCount << endl;

    string reversedText = reverse(fileData);
    cout << "Reversed Text: \n" << reversedText << endl;

    string capitalizedText = capitalizeSecondLetters(fileData);
    cout << "Text with second letter of each word capitalized: \n" << capitalizedText << endl;

    return 0;
}