#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& name, double initialBalance) : accountHolderName(name), balance(initialBalance) {
        cout << "Account for " << accountHolderName << " created with initial balance $" << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account for " << accountHolderName << " destroyed." << endl;
    }
};

int main() {
    // Create an object of BankAccount class
    BankAccount myAccount("John Doe", 1000.0);

    // The destructor will be called automatically when myAccount goes out of scope
    return 0;
}

