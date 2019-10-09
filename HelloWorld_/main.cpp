#include <iostream>
#include <time.h>
#include <stdlib.h>



int main() {

    std::srand(time(NULL));

    int user_input;
    bool is_running_guess = true;
    bool is_running_rps = true;
    bool invalid_menu = true;
    bool invalid_playagain = true;


    std::string menu_reply;
    std::string reply;
    std::string playagain_input;




    while (invalid_menu) { //   Main Menu
        std::cout
                << "Hello, welcome to console games. Press G to play Guess the number and press R to play Rock Paper Scissors"
                << std::endl;
        std::cin >> menu_reply;

        if (menu_reply == "G") {
            is_running_guess = true;
            invalid_menu = false;
        } else if (menu_reply == "R") {
            is_running_rps = true;
        }
        if (menu_reply != "G") {
            std::cout << "invalid reply\n";
        }


        while (is_running_guess) {
            int rand_number = rand() % 10 + 1;
            std::cout << "Hello and welcome to THE GUESSING GAME! " << std::endl;
            for (int guess_count = 0; guess_count < 5; guess_count++) {

                std::cout << "Enter a number: ";
                std::cin >> user_input;

                if (user_input == rand_number) {
                    std::cout << "Well done! The number was indeed " << rand_number << std::endl;
                    is_running_guess = false;
                    break;
                }

                if (user_input > rand_number) {
                    std::cout << "Lower" << std::endl;
                } else if (user_input < rand_number) {
                    std::cout << "Higher" << std::endl;
                }

                if (guess_count == 4) {
                    std::cout << "you lose!" << std::endl;
                }
            }

            while (invalid_playagain) {
                std::cout
                        << "Would you like to play again, - Y for Yes - N for No - T for Top menu - " << std::endl;
                std::cin >> playagain_input;

                if (playagain_input == "Y") {
                    is_running_guess = true;
                    invalid_playagain = false;
                } else if (playagain_input == "N") {
                    invalid_playagain = true;
                    break;
                }

                else if (playagain_input == "T") {
                    invalid_menu = true;
                }
                else {
                    std::cout << "invalid reply - Please enter Y or N or T \n";
                }
            }


        }
    }
}

































            /* else if (user_input == rand_number) {
                std::cout << "Well done! The number was indeed " << rand_number << std::endl;
                is_running = false; /*/


        //else {
          //  is_running = true;
           // std::cout <<"You Lose, the answer was: " << rand_number << "" << std::endl;








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
