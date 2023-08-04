#include <iostream>
#include <vector>
#include <algorithm>
#include <random>


/*
EXERCISE: Find Duplicates in an Array using Vectors

Write a C++ program that finds and displays duplicates 
in an vextor using std::vector. 
The program initializes a random and sorted vector with some elements.
Add code that identifies and prints any duplicate elements found in the array.

Hints:
1. The vector is already sorted!
2. Loop through the array and compare each element with the next element.
3. If the elements are equal, add them to the vector, if they are not already in the vector.
*/


std::vector<int> rand_numbers(){
    // Define the size of the array
    const int arraySize = 20;

    // Define the range of random numbers (minValue to maxValue)
    const int minValue = 1;
    const int maxValue = 20;

    // Initialize the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(minValue, maxValue);

    // Generate a sorted array with random numbers
    std::vector<int> randomNumbers(arraySize);
    std::generate(randomNumbers.begin(), randomNumbers.end(), [&]() { return distribution(gen); });
    std::sort(randomNumbers.begin(), randomNumbers.end());
    return randomNumbers;
}

int main() {
    std::vector<int> randomNumbers = rand_numbers();

    // Print random sorted array
    std::cout << "Sorted Array with Random Numbers: ";
    for (const auto& num : randomNumbers) {
        std::cout << num << " ";
    }

    // Find duplicates
    // YOUR CODE HERE...
    
    
    

    // Print the duplicate elements
    if (duplicates.empty()) {
        std::cout << "\nNo duplicates found in the array." << std::endl;
    } else {
        std::cout << "\nDuplicate elements found: ";
        for (const auto& duplicate : duplicates) {
            std::cout << duplicate << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}