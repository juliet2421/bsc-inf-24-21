#include <iostream>
#include <fstream> //for perfoming input and output operations on files
#include <string> // for handling strings of characters
#include <algorithm> // header for providing the a collection of functions

using namespace std;

string reverseString(const string& text) {
    string reversedText = text;
    reverse(reversedText.begin(), reversedText.end());
    return reversedText;
}

string capitalizeSecondLetter(const string& text) {
    string capitalizedText = text;
    bool capitalize = true;
    for (char& c : capitalizedText) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
            }
            capitalize = !capitalize;
        }
    }
    return capitalizedText;
}

int main() {
    ifstream inFile("file.txt");
    if (!inFile.is_open()) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    string fileData;
    getline(inFile, fileData);
    inFile.close();

    // Calculation and output number of vowels
    int vowelCount = 0;
    string vowels = "aeiouAEIOU";
    for (char c : fileData) {
        if (vowels.find(c) != string::npos) {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;

    // Calculation and output number of words
    int wordCount = 0;
    bool inWord = false;
    for (char c : fileData) {
        if (isalnum(c)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    cout << "Number of words: " << wordCount << endl;

    // Reverse the text file statement and output
    string reversedText = reverseString(fileData);
    cout << "Reversed statement: " << reversedText << endl;

    // Capitalize the second letter of each word and output
    string capitalizedText = capitalizeSecondLetter(fileData);
    cout << "Statement with second letter capitalized: " << capitalizedText << endl;

    return 0;
}
