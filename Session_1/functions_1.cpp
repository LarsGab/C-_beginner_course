#include <iostream>
#include <iomanip> // For setprecision to format the output

/*
EXERCISE: Celsius to Fahrenheit Conversion

Write a C++ program that converts temperatures 
from Celsius to Fahrenheit using functions.

The user is prompted to enter a temperature in Celsius.
Your task is to create a function called celsiusToFahrenheit 
that takes a Celsius temperature as a parameter and returns 
the equivalent temperature in Fahrenheit.
The formula to convert Celsius to Fahrenheit is: 
            Fahrenheit = (Celsius * 9/5) + 32.
*/


// DEFINE THE celsiusToFahrenheit FUNCTION HERE...




int main() {
    double celsius;

    // Prompt the user to enter a temperature in Celsius
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> celsius;

    // Calculate the Fahrenheit temperature using the celsiusToFahrenheit function
    // CALL YOUR FUNCTION HERE...




    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit." << std::endl;

    return 0;
}