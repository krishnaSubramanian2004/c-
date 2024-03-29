#include <iostream>
using namespace std;
class CharacterChecker {
private:
    char ch;

public:
    CharacterChecker(char c) : ch(c) {}

    bool isVowel() {
        // Convert character to lowercase for case-insensitive comparison
        char lowercaseCh = tolower(ch);
        
        // Check if the character is a vowel
        return (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u');
    }
};

int main() {
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    CharacterChecker checker(ch);
    if (isalpha(ch)) {
        if (checker.isVowel()) {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << "Invalid input: Please enter an alphabetic character." << endl;
    }

    return 0;
}

