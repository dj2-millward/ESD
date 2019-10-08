#include <cstdlib>
#include <iostream>
#include <ctime>

int main() {
    int user_input = 0;
    int target_num = std::rand() % 10 + 1;

    std::srand(std::time(nullptr)); //seed

    std::cout << "Hello, Welcome to 'Guess the number' !" << std::endl;
    std::cout << "Guess a number; " << std::endl;

    std::cin >> user_input;
    std::cout << target_num << '\n';

    if (user_input == target_num) {
        std::cout <<"Correct" << std::endl;
    }
    else (user_input != target_num);{
        std::cout <<"Incorrect" << std::endl;

    }





}












    // std::cout << "Hello, World!" << std::endl;
    // std::cout << "Welcome to my program" << std::endl;

    //Initialise interger variables
    //int a = 0;
   // int b = 0;

    // ask the user for an input
    //std::cout << "Enter a number: ";
    //user input to a variable
   // std::cin >> a;

    //user input to a variable
   // std::cout << "Enter a 2nd number: ";
    //user input to a variable
   // std::cin >> b;

    //output the variable
   // std::cout << "Your number is " << a + b << std::endl;
   // return 0;
