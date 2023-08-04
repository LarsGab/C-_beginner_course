#include <iostream>

/*
EXERCISE: Even and Odd Sum

Write a C++ program that calculates the sum of 
even and odd numbers separately from a range of 
positive integers using functions.

The user is prompted to enter two positive integers: 
    start and end (start <= end).
Your task is to create a function called calculateSum 
that takes three parameters: 
    start, end, and a boolean flag for even/odd.
The calculateSum function should return the sum of 
either even or odd numbers within the given range 
(inclusive) based on the boolean flag. 
If the flag is true, calculate the sum of even numbers; 
if the flag is false, calculate the sum of odd numbers.

Implement the calculateSum function using loops to 
iterate through the range and calculate the sums.
After calculating the sums, display the results.

Hint: 
The modulus operator (%) can be used to determine
whether a number is even or odd. 
*/

// DEFINE THE calculateSum FUNCTION HERE...

int main() {
    int start, end;

    // Prompt the user to enter two positive integers: start and end
    std::cout << "Enter the starting positive integer: ";
    std::cin >> start;
    std::cout << "Enter the ending positive integer: ";
    std::cin >> end;

    // Check if the input is valid (start <= end, both positive)
    if (start > end || start <= 0 || end <= 0) {
        std::cout << "Error: Invalid input. Please enter valid positive integers." << std::endl;
        return 1;
    }

    // Calculate the sum of even numbers using the calculateSum function
    // CALL YOUR FUNCTION HERE...
    int sumEven = 

    // Calculate the sum of odd numbers using the calculateSum function
    // CALL YOUR FUNCTION HERE...
    int sumOdd = 

    // Display the results
    std::cout << "Sum of even numbers in the range: " << sumEven << std::endl;
    std::cout << "Sum of odd numbers in the range: " << sumOdd << std::endl;

    return 0;
}

