#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    // std::cout << "Welcome to my program" << std::endl;

    //Initialise interger variables
    int a = 0;
    int b = 0;

    // ask the user for an input
    std::cout << "Enter a number: ";
    //user input to a variable
    std::cin >> a;

    //user input to a variable
    std::cout << "Enter a 2nd number: ";
    //user input to a variable
    std::cin >> b;

    //output the variable
    std::cout << "Your number is " << a + b << std::endl;
    return 0;
}