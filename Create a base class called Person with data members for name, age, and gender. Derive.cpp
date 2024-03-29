#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
    char gender;

public:
    Person(const string& name, int age, char gender)
        : name(name), age(age), gender(gender) {}

    // Getter functions
    string getName() const { return name; }
    int getAge() const { return age; }
    char getGender() const { return gender; }

    // Setter functions
    void setName(const string& name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setGender(char gender) { this->gender = gender; }
};

class Student : public Person {
private:
    int rollNumber;
    string studentClass;

public:
    Student(const string& name, int age, char gender, int rollNumber, const string& studentClass)
        : Person(name, age, gender), rollNumber(rollNumber), studentClass(studentClass) {}

    // Getter functions for Student
    int getRollNumber() const { return rollNumber; }
    string getStudentClass() const { return studentClass; }

    // Setter functions for Student
    void setRollNumber(int rollNumber) { this->rollNumber = rollNumber; }
    void setStudentClass(const std::string& studentClass) { this->studentClass = studentClass; }
};

class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    Teacher(const string& name, int age, char gender, const string& subject, double salary)
        : Person(name, age, gender), subject(subject), salary(salary) {}

    // Getter functions for Teacher
    string getSubject() const { return subject; }
    double getSalary() const { return salary; }

    // Setter functions for Teacher
    void setSubject(const string& subject) { this->subject = subject; }
    void setSalary(double salary) { this->salary = salary; }
};

int main() {
    Student student("John Doe", 18, 'M', 101, "12th Grade");
    Teacher teacher("Jane Smith", 35, 'F', "Mathematics", 50000);

    cout << "Student Details:" << std::endl;
    cout << "Name: " << student.getName() << ", Age: " << student.getAge() << ", Gender: " << student.getGender()
              << ", Roll Number: " << student.getRollNumber() << ", Class: " << student.getStudentClass() << endl;

    cout << "\nTeacher Details:" << endl;
    cout << "Name: " << teacher.getName() << ", Age: " << teacher.getAge() << ", Gender: " << teacher.getGender()
              << ", Subject: " << teacher.getSubject() << ", Salary: $" << teacher.getSalary() << endl;

    return 0;
}

