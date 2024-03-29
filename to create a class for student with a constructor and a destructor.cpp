#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(const std::string& studentName, int studentAge) 
        : name(studentName), age(studentAge) {
        cout << "A new student named " << name << " aged " << age << " has been enrolled." << endl;
    }

    // Destructor
    ~Student() {
        cout << "The student named " << name << " aged " << age << " has graduated." << endl;
    }
};

int main() {
    // Creating an object of Student class
    Student myStudent("John Doe", 20);

    // The destructor will be called automatically when myStudent goes out of scope
    return 0;
}

