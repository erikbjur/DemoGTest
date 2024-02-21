#include <iostream>
#include "Calculator.h"

int main() {
    // Ask the user for a number, lets store it in a double
    std::cout << "Enter the first number: " << std::endl;
    double first {0};
    std::cin >> first;

    std::cout << "Enter the second number: " << std::endl;
    double second {0};
    std::cin >> second;

    // Now call the add function from our library
    double result = Library::Add( first, second );
    std::cout << first << " + " << second << " = " << result << std::endl;

    // Now call the Subtract function from our library
    result = Library::Subtract( first, second );
    std::cout << first << " - " << second << " = " << result << std::endl;

    // Now call the Multiply function from our library
    result = Library::Multiply( first, second );
    std::cout << first << " * " << second << " = " << result << std::endl;

    // Now call the Divide function from our library
    result = Library::Divide( first, second );
    std::cout << first << " / " << second << " = " << result << std::endl;

    return 0;
}