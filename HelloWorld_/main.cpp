#include <iostream>

int main() {
    //Initialise interger variables
    int a = 0;
    int b = 0;
    int c = 0;
    float avg;

    // std::cout << "Welcome to my program" << std::endl;

    // ask the user for an input
    std::cout << "Enter 1st number: " << std::endl;
    //user input to a variable
    std::cin >> a;

    //user input to a variable
    std::cout << "Enter a 2nd number: " << std::endl;
    //user input to a variable
    std::cin >> b;

    //user input to a variable
    std::cout << "Enter a 3rd number: " << std::endl;
    //user input to a variable
    std::cin >> c;

    avg=(a+b+c)/3;

    //output the variable
    std::cout << "The average is " << avg << std::endl;
    return 0;

}