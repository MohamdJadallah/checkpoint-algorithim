#include <iostream>

using namespace std;

int main() {
    // Initialize counters
    int lengthCounter = 0;
    int wordCounter = 0;
    int vowelCounter = 0;
    char ch;

    // Read characters until a period is encountered
    while (cin.get(ch) && ch != '.') {
        // Increment the length counter for each character
        lengthCounter++;

        // Check if the character is a space, indicating the end of a word
        if (ch == ' ') {
            wordCounter++;
        }

        // Check if the character is a vowel (assuming lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCounter++;
        } else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCounter++;
        }
    }

    // The last character is a point, so it's not counted as a word
    wordCounter++;

    // Output the results
    cout << "Length of the sentence: " << lengthCounter << endl;
    cout << "Number of words in the sentence: " << wordCounter << endl;
    cout << "Number of vowels in the sentence: " << vowelCounter << endl;

    return 0;
}
