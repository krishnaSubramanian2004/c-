#include <iostream>
using namespace std;
class DiamondPattern {
private:
    int size;

public:
    DiamondPattern(int s) : size(s) {}

    void printDiamond() {
        int space = size - 1;
        
        // Upper part of the diamond
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < space; ++j)
                std::cout << " ";
            for (int j = 0; j < 2 * i + 1; ++j)
                std::cout << "*";
            cout << endl;
            --space;
        }
        
        // Lower part of the diamond
        space = 1;
        for (int i = size - 1; i > 0; --i) {
            for (int j = 0; j < space; ++j)
                std::cout << " ";
            for (int j = 0; j < 2 * i - 1; ++j)
                cout << "*";
            cout << endl;
            ++space;
        }
    }
};

int main() {
    int diamondSize;
    
    cout << "Enter the size of the diamond: ";
    cin >> diamondSize;
    
    DiamondPattern diamond(diamondSize);
    diamond.printDiamond();

    return 0;
}

