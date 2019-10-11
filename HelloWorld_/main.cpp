#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>



int main() {

    std::srand(time(NULL));

    int user_input;
    bool is_running_guess = true;
    bool is_running_rps = true;
    bool game_menu = true;
    bool menu = true;
    bool playagain = true;


    std::string menu_reply;
    std::string reply;
    std::string playagain_input;


    while (game_menu) { //   Main Menu
        while (menu) {
            std::cout
                    << "Hello, welcome to console games. Press G to play Guess the number and press R to play Rock Paper Scissors"
                    << std::endl;
            std::cin >> menu_reply;

            if (menu_reply == "G") {
                is_running_guess = true;
                menu = false;
            } else if (menu_reply == "R") {
                is_running_rps = true;
                is_running_guess = false;
            } else {
                std::cout << "Invalid reply\n";
                is_running_guess = false;
                is_running_rps = false;

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
                        playagain = true;
                        break;
                    }

                    if (user_input > rand_number) {
                        std::cout << "Lower" << std::endl;
                    } else if (user_input < rand_number) {
                        std::cout << "Higher" << std::endl;
                    }

                    if (guess_count == 4) {
                        std::cout << "Out of guesses, you lose!" << std::endl;
                        menu = true;
                        is_running_guess = false;
                        playagain = true;


                    }
                }

                while (playagain) {
                    std::cout
                            << "Would you like to play again, - Y for Yes - N for No - T for Top menu - " << std::endl;
                    std::cin >> playagain_input;

                    if (playagain_input == "Y") {
                        is_running_guess = true;
                        playagain = false;
                    } else if (playagain_input == "N") {
                        playagain = false;
                        is_running_guess = false;
                        is_running_rps = false;
                        menu = false;
                        break;
                    } else if (playagain_input == "T") {
                        menu = true;
                        playagain = false;
                        is_running_guess = false;
                        is_running_rps = false;

                    } else {
                        std::cout << "Invalid Reply \n";
                    }
                }
            }
            while (is_running_rps) {
                std::ifstream inFile("H:\\games_tech_year_1\\ESD\\Projects\\ESD\\HelloWorld_\\RPS.txt"); // opens file
                if (inFile.is_open()) {// checks to see if file was opened successfully
                    std::string line = "";
                    //getline(inFile, line, '#'); // display contents of file line by line
                    std::cout << line;
                    //inFile.close();
                } else {
                    std::cout << "Error Reading File;" << std::endl;
                }
                int RPS_input = 0;
                int com_input;

                inFile >> com_input;
                if (com_input = __isascii(82)) {
                    com_input = 1;
                } else if ((com_input = __isascii(80))) {
                    com_input = 2;

                } else if ((com_input = __isascii(83))) {
                    com_input = 3;
                }

                std::string ROCK = "ROCK - 1 \n";
                std::string PAPER = "PAPER - 2 \n";
                std::string SCISSORS = "SCISSORS - 3 \n";

                std::cout << "Hello and welcome to ROCK PAPER SCISSORS, please select 1, 2 or 3!" << std::endl;

                std::cout << ROCK;
                std::cout << PAPER;
                std::cout << SCISSORS;

                std::cin >> RPS_input;

                std::cout << "You selected: ";

                switch (RPS_input) {
                    case 1 :
                        std::cout << ROCK;
                        break;
                    case 2 :
                        std::cout << PAPER;
                        break;
                    case 3 :
                        std::cout << SCISSORS;
                        break;
                    default :
                        std::cout << "Invalid Input\n";

                }
                std::cout << "Computer Selected: ";
                switch (com_input) {
                    case 1 :
                        std::cout << ROCK;
                        break;
                    case 2 :
                        std::cout << PAPER;
                        break;
                    case 3 :
                        std::cout << SCISSORS;
                        break;
                    default :
                        std::cout << "Invalid Input\n";

                }
                if (RPS_input == com_input) {
                    std::cout << "- Draw - " << std::endl;

                } else if (RPS_input == 2 && com_input == 1) {
                    std::cout << "User Wins!" << std::endl;

                } else if (RPS_input == 3 && com_input == 2) {
                    std::cout << "User Wins!" << std::endl;

                } else if (RPS_input == 1 && com_input == 3) {
                    std::cout << "User Wins!" << std::endl;

                } else {
                    std::cout << "Computer Wins! ";
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
