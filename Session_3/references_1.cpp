#include <iostream>

/*
Exercise: Swap Two Numbers using References

Write a C++ program that swaps the values of two integers using references. 
The program should take two integers as input from the user, and then it should 
swap the values of these two integers using references.

Task:

1. Prompt the user to enter two integers.
2. Read the input values from the user and store them in two separate integer variables.
3. Create a function called swapValuesByReference that takes two integer references 
   as parameters and swaps the values of the integers using references.
4. Call the swapValuesByReference function to swap the values of the two integers.
5. Display the values of the two integers before and after the swap.
*/



// Function to swap values using references
void swapValuesByReference(int& ref1, int& ref2) {
    // ADD YOUR CODE HERE
}

int main() {
    int num1, num2;

    // Input two integers from the user
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    // Before swap
    std::cout << "Before swap:" << std::endl;
    std::cout << "First integer: " << num1 << std::endl;
    std::cout << "Second integer: " << num2 << std::endl;

    // Call the function to swap values by reference
    // ADD THE FUNCTION CALL HERE

    // After swap
    std::cout << "After swap:" << std::endl;
    std::cout << "First integer: " << num1 << std::endl;
    std::cout << "Second integer: " << num2 << std::endl;

    return 0;
}
