#include <iostream>
#include <time.h>
#include <stdlib.h>



int main() {

    std::srand(time(NULL));

    int rand_number = rand() % 10 + 1;
    int user_input;
    int guess_count = 0;
    int limit = 5;
    bool is_running = false;

    std::cout << "Hello and welcome to THE GUESSING GAME! " << std::endl;
    _sleep(1500);
    while (user_input != rand_number && !is_running) {
        if (guess_count < limit) {
            std::cout << "Enter a number between 1 and 10: ";
            std::cin >> user_input;
            guess_count++;

            if (user_input < rand_number) {
                std::cout << "Higher" << std::endl;
            }
            else if (user_input > rand_number) {
                std::cout << "Lower" << std::endl;
            }
            else {
                std::cout << "Well done! The number was indeed " << rand_number << std::endl;
            }

        } else {
            is_running = true;
            std::cout <<"You Lose, the answer was: " << rand_number << "" << std::endl;
        }

    }
}




/* Hello World
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Welcome to my program" << std::endl;

    Initialise interger variables
    int a = 0;
    int b = 0;

    ask the user for an input
    std::cout << "Enter a number: ";
    user input to a variable
    std::cin >> a;

    user input to a variable
    std::cout << "Enter a 2nd number: ";
    user input to a variable
    std::cin >> b;

    output the variable
    std::cout << "Your number is " << a + b << std::endl;
    return 0;
/*/
