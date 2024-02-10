
#include<iostream>

using namespace std;

int main() {
    // Initialize counters
    int lengthCounter = 0;
    int wordCounter = 0;
    int vowelCounter = 0;
    char ch;

    // Read the first character
    cin >> noskipws >> ch;

    // Read characters until a period is encountered
    while (ch != '.') {
        // Increment the length counter for each character
        lengthCounter++;

        // Check if the character is a vowel (assuming lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCounter++;
        }

        // Read the next character
        cin >> ch;
    }

    // Count the last word (after the period)
    if (lengthCounter > 0) {
        wordCounter++;
    }

    // Output the results
    cout << "Length of the sentence: " << lengthCounter << endl;
    cout << "Number of words in the sentence: " << wordCounter << endl;
    cout << "Number of vowels in the sentence: " << vowelCounter << endl;

    return 0;
}
