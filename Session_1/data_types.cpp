#include <iostream>

/*
EXERCISE: Arithmetic Operations

Write a C++ program that performs arithmetic operations on two input numbers.

The user is prompted to enter two numeric values (both integers).
Implement separate functions for each arithmetic operation:
    add: This function takes two integers as input and returns their sum.
    subtract: This function takes two integers as input and returns their difference.
    multiply: This function takes two integers as input and returns their product.
    divide: This function takes two integers as input 
            and returns their division result.
Implement each function using appropriate arithmetic operations.
*/


// DEFINE THE FUNCTIONS BELOW

// Define the add function here...

// Define the subtract function here...

// Define the multiply function here...

// Define the divide function here...

int main() {
    int num1, num2;

    // Prompt the user to enter two numeric values (both integers)
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform arithmetic operations and display the results
    std::cout << "Sum: " << add(num1, num2) << std::endl;
    std::cout << "Difference: " << subtract(num1, num2) << std::endl;
    std::cout << "Product: " << multiply(num1, num2) << std::endl;
    std::cout << "Division: " << divide(num1, num2) << std::endl;

    return 0;
}



