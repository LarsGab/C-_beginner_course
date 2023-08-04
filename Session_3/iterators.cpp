#include <iostream>
#include <vector>
/*
Exercise: Counting Specific Elements using Iterators

Write a C++ program that counts the occurrences of a specific 
element in a given vector using iterators. 
The program should create a vector of integers and then use 
iterators to traverse through the vector and count 
the occurrences of a specified target element.

Task:

- Create a vector of integers and initialize it with some values.
- Prompt the user to enter a target element to count its occurrences.
- Read the target element from the user.
- Create a function called countOccurrences that takes the vector and the target element as parameters and returns the count of occurrences using iterators.
- Use iterators to traverse through the vector and count the occurrences of the target element.
- Display the count of occurrences to the user.
*/


// Function to count occurrences of a specific element using iterators
int countOccurrences(const std::vector<int>& vec, int target) {

}

int main() {
    std::vector<int> numbers = {5, 8, 3, 2, 5, 7, 5};

    // Prompt the user to enter the target element
    int target;
    std::cout << "Given vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter the target element: ";
    std::cin >> target;

    // Call the function to count occurrences of the target element
    int occurrences = countOccurrences(numbers, target);

    // Display the count of occurrences
    std::cout << "Occurrences of " << target << ": " << occurrences << std::endl;

    return 0;
}
