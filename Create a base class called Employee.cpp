#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(const string& name, int id, double salary)
        : name(name), id(id), salary(salary) {}

    // Getter functions
    string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }

    // Setter functions
    void setName(const string& name) { this->name = name; }
    void setId(int id) { this->id = id; }
    void setSalary(double salary) { this->salary = salary; }
};

class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    Manager(const string& name, int id, double salary, const string& department, double bonus)
        : Employee(name, id, salary), department(department), bonus(bonus) {}

    // Getter functions for Manager
    string getDepartment() const { return department; }
    double getBonus() const { return bonus; }

    // Setter functions for Manager
    void setDepartment(const string& department) { this->department = department; }
    void setBonus(double bonus) { this->bonus = bonus; }
};

class Engineer : public Employee {
private:
    string specialty;
    int hours;

public:
    Engineer(const string& name, int id, double salary, const string& specialty, int hours)
        : Employee(name, id, salary), specialty(specialty), hours(hours) {}

    // Getter functions for Engineer
    string getSpecialty() const { return specialty; }
    int getHours() const { return hours; }

    // Setter functions for Engineer
    void setSpecialty(const string& specialty) { this->specialty = specialty; }
    void setHours(int hours) { this->hours = hours; }
};

int main() {
    Manager manager("John Doe", 1001, 60000, "Sales", 5000);
    Engineer engineer("Alice Smith", 2001, 70000, "Software", 40);

    cout << "Manager Details:" << endl;
    cout << "Name: " << manager.getName() << ", ID: " << manager.getId() << ", Salary: $" << manager.getSalary()
              << ", Department: " << manager.getDepartment() << ", Bonus: $" << manager.getBonus() << endl;

    cout << "\nEngineer Details:" << endl;
    cout << "Name: " << engineer.getName() << ", ID: " << engineer.getId() << ", Salary: $" << engineer.getSalary()
              << ", Specialty: " << engineer.getSpecialty() << ", Hours: " << engineer.getHours() << endl;

    return 0;
}

