#include <iostream>
using namespace std;
class FunctionCaller {
public:
    // Overloading the () operator to call a function with arguments
    void operator()(int arg1, int arg2) const {
        cout << "Calling function with arguments: " << arg1 << " and " << arg2 << endl;
        // You can call your function here with the provided arguments
        // For demonstration purposes, let's just print the sum of the arguments
        cout << "Sum of arguments: " << (arg1 + arg2) << endl;
    }
};

int main() {
    FunctionCaller caller;

    // Calling the overloaded () operator with arguments
    caller(5, 10);

    return 0;
}

