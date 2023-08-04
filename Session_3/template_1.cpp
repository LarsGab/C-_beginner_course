#include <iostream>
#include <string>

/*
Exercise: Function Overloading for String Concatenation

Write a C++ program that demonstrates function overloading 
to concatenate strings. The program should provide multiple 
functions to concatenate two or three strings together.

Task:

- Create three functions named `concatenate` for each scenario:
  - `concatenate` that takes two strings and concatenates them.
  - `concatenate` that takes three strings and concatenates them in the order they are passed.
  - `concatenate` that takes two strings and an integer, and appends the second string to the first string `n` times, where `n` is the integer.

- Each function should return the result of the concatenation.
*/


int main() {
    int choice;
    std::string str1, str2, str3;
    int n;
    std::string result;

    std::cout << "Choose a concatenation scenario:" << std::endl;
    std::cout << "1. Concatenate two strings" << std::endl;
    std::cout << "2. Concatenate three strings" << std::endl;
    std::cout << "3. Append a string multiple times" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            std::cout << "Enter two strings to concatenate: ";
            std::cin >> str1 >> str2;
            result = concatenate(str1, str2);
            break;
        }
        case 2: {
            std::cout << "Enter three strings to concatenate: ";
            std::cin >> str1 >> str2 >> str3;
            result = concatenate(str1, str2, str3);
            break;
        }
        case 3: {
            std::cout << "Enter a string to append: ";
            std::cin >> str1;
            std::cout << "Enter the number of times to append: ";
            std::cin >> n;
            result = concatenate(str1, n);
            break;
        }
        default:
            std::cout << "Invalid choice!" << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
