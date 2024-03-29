#include <iostream>
#include <string>
#include <cctype>

class PalindromeChecker {
public:
    static bool isPalindrome(const std::string& str) {
        std::string sanitizedStr;
         {
            if (std::isalpha())
                sanitizedStr += std::tolower(c);
        }

        int i = 0, j = sanitizedStr.length() - 1;
        while (i < j) {
            if (sanitizedStr[i] != sanitizedStr[j])
                return false;
            ++i;
            --j;
        }
        return true;
    }
};

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (PalindromeChecker::isPalindrome(input))
        std::cout << input << " is a palindrome." << std::endl;
    else
        std::cout << input << " is not a palindrome." << std::endl;

    return 0;
}

