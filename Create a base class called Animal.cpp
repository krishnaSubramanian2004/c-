#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string name;
    string species;
    int age;

public:
    Animal(const string& name, const string& species, int age)
        : name(name), species(species), age(age) {}

    // Getter functions
    string getName() const { return name; }
    string getSpecies() const { return species; }
    int getAge() const { return age; }

    // Setter functions
    void setName(const std::string& name) { this->name = name; }
    void setSpecies(const std::string& species) { this->species = species; }
    void setAge(int age) { this->age = age; }
};

class Cat : public Animal {
private:
    string color;
    string breed;

public:
    Cat(const string& name, const string& species, int age, const string& color, const string& breed)
        : Animal(name, species, age), color(color), breed(breed) {}

    // Getter functions for Cat
    std::string getColor() const { return color; }
    std::string getBreed() const { return breed; }

    // Setter functions for Cat
    void setColor(const string& color) { this->color = color; }
    void setBreed(const string& breed) { this->breed = breed; }
};

class Dog : public Animal {
private:
    double weight;
    string breed;

public:
    Dog(const string& name, const string& species, int age, double weight, const string& breed)
        : Animal(name, species, age), weight(weight), breed(breed) {}

    // Getter functions for Dog
    double getWeight() const { return weight; }
    string getBreed() const { return breed; }

    // Setter functions for Dog
    void setWeight(double weight) { this->weight = weight; }
    void setBreed(const string& breed) { this->breed = breed; }
};

int main() {
    Cat cat("Whiskers", "Cat", 5, "White", "Persian");
    Dog dog("Buddy", "Dog", 3, 25.5, "Labrador");

    cout << "Cat Details:" << endl;
    cout << "Name: " << cat.getName() << ", Species: " << cat.getSpecies() << ", Age: " << cat.getAge()
              << ", Color: " << cat.getColor() << ", Breed: " << cat.getBreed() << endl;

    cout << "\nDog Details:" << endl;
    cout << "Name: " << dog.getName() << ", Species: " << dog.getSpecies() << ", Age: " << dog.getAge()
              << ", Weight: " << dog.getWeight() << " lbs, Breed: " << dog.getBreed() << endl;

    return 0;
}

