#include <iostream>
#include <string>

/*
EXERCISE: Create a Derived Class Dog

Create a derived class Dog from the parent class Animal. 
The Dog class will inherit the attributes and methods of 
the Animal class and add some additional functionalities specific to dogs.

Task:

1. Create a new class Dog that inherits from the Animal class.
2. Add a private data member breed to the Dog class to store the breed of the dog.
3. Implement a constructor for the Dog class that takes 
   additional parameters for the breed and initializes the 
   Animal data members using the base class constructor.
4. Implement a getter function to retrieve the breed of the dog.
5. Implement a setter function to set the breed of the dog.
*/

class Animal {
public:
    // Constructor to initialize the animal with name, type, and age
    Animal(const std::string& name, const std::string& type, int age) : name(name), type(type), age(age) {}

    // Function to get the name of the animal
    std::string getName() const {
        return name;
    }

    // Function to get the type of the animal
    std::string getType() const {
        return type;
    }

    // Function to get the age of the animal
    int getAge() const {
        return age;
    }

    // Function to set the name of the animal
    void setName(const std::string& newName) {
        name = newName;
    }

    // Function to set the type of the animal
    void setType(const std::string& newType) {
        type = newType;
    }

    // Function to set the age of the animal
    void setAge(int newAge) {
        age = newAge;
    }

private:
    // Private data members
    std::string name;
    std::string type;
    int age;
};

// ADD A CLASS DOG HERE


int main() {
    // Create an instance of the Dog class
    Dog dog("Buddy", "Dog", 3, "Golden Retriever");

    // Use the inherited methods from the Animal class
    std::cout << "Name: " << dog.getName() << std::endl;
    std::cout << "Type: " << dog.getType() << std::endl;
    std::cout << "Age: " << dog.getAge() << " years" << std::endl;

    // Use the specific methods of the Dog class
    std::cout << "Breed: " << dog.getBreed() << std::endl;

    // Modify the breed
    dog.setBreed("Labrador");

    std::cout << "Modified Breed: " << dog.getBreed() << std::endl;

    return 0;
}