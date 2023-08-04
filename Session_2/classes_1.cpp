#include <iostream>
#include <string>

/*
EXERCISE: Animal Class

Create a C++ program that defines an Animal class. 
The class should have private data members for the 
animal's name, type (e.g., mammal, bird, fish), and age. 
Implement member functions to perform the following operations:

- Initialize the animal with its name, type, and age.
- Get the name of the animal.
- Get the type of the animal.
- Get the age of the animal.
- Set the name of the animal.
- Set the type of the animal.
- Set the age of the animal. Make sure that the age is not a negative integer.


Hints:

1. Define an Animal class with private data members for the name, type, and age of the animal.
2. Implement a constructor to initialize the animal with its name, type, and age.
3. Implement member functions to get the name, type, and age of the animal.
4. Implement member functions to set the name, type, and age of the animal.
*/

// DEFINE THE Animal CLASS HERE...
class Animal {
public:
    // Constructor to initialize the animal with name, type, and age
    // Add your code here...

    // Function to get the name of the animal
    // Add your code here...

    // Function to get the type of the animal
    // Add your code here...

    // Function to get the age of the animal
    // Add your code here...

    // Function to set the name of the animal
    // Add your code here...

    // Function to set the type of the animal
    // Add your code here...

    // Function to set the age of the animal
    // Add your code here...
private:
    // Private data members
    // Add your code here...
};


int main() {
    // Create an Animal object with name, type, and age
    Animal myPet("Fluffy", "Mammal", 3);

    // Get and display the animal's information
    std::cout << "Name: " << myPet.getName() << std::endl;
    std::cout << "Type: " << myPet.getType() << std::endl;
    std::cout << "Age: " << myPet.getAge() << " years" << std::endl;

    // Update the animal's information
    myPet.setName("Fido");
    myPet.setType("Dog");
    myPet.setAge(5);

    // Get and display the updated information
    std::cout << "Updated Name: " << myPet.getName() << std::endl;
    std::cout << "Updated Type: " << myPet.getType() << std::endl;
    std::cout << "Updated Age: " << myPet.getAge() << " years" << std::endl;

    return 0;
}