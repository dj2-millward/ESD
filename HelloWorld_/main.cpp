#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>


int main() {

    std::srand(time(NULL));

    int user_input;
    bool is_running_guess = false;
    bool is_running_rps = false;
    bool play_again = false;
    bool main_menu = true;


    std::string menu_reply;
    std::string reply;
    std::string playagain_input;


    while (main_menu) {
        std::string gg = "1 - Guessing Game\n";
        std::string rps = "2 - Rock Paper Scissors\n";
        std::string exit = "3 - Exit\n";
        int menu_choice;
        std::cout
                << "Hello, welcome to console games. Please enter the number for the game you would like to play."
                << std::endl;


        std::cout << gg;
        std::cout << rps;
        std::cout << exit;

        std::cin >> menu_choice;

        switch (menu_choice) {
            case 1 :
                //std::cout << "Guessing Game";
                is_running_guess = true;
                //main_menu = false;

                break;

            case 2 :
                //std::cout << "Rock Paper Scissors";
                is_running_rps = true;
                //main_menu = false;

                break;


            case 3 :
                std::cout << "Thank you for playing";

                return 0;

            default:
                std::cout << "Invalid Input" << std::endl;
        }
        while (is_running_guess) { // Guessing Game

            int rand_number = rand() % 10 + 1;
            std::cout << "Hello and welcome to THE GUESSING GAME! " << std::endl;
            for (int guess_count = 0; guess_count < 5; guess_count++) {

                std::cout << "Enter a number between 1 - 10: ";
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
                    std::cout << "Out of guesses, you lose!" << std::endl;
                    is_running_guess = false;
                }
            }




            //play again - GUESSING GAME
            std::string yes = "1 - Yes\n";
            std::string no = "2 - No, Exit game.\n";
            std::string menu = "3 - Return to Menu\n";
            int play_again_choice;

            std::cout
                    << "Would you like to play again?"
                    << std::endl;


            std::cout << yes;
            std::cout << no;
            std::cout << menu;

            std::cin >> play_again_choice;

            switch (play_again_choice) {
                case 1 :
                    //"YES";
                    is_running_guess = true;
                    is_running_rps = true;
                    break;

                case 2 :
                    // "NO";
                    return 0;

                case 3 :
                    //"MENU";
                    main_menu = true;
                    break;

                default:
                    std::cout << "Invalid Input, try again" << std::endl;
            }
        }
        std::ifstream inFile("H:\\games_tech_year_1\\ESD\\Projects\\ESD\\HelloWorld_\\RPS.txt"); // opens file
        if (inFile.is_open()) {// checks to see if file was opened successfully
            std::string line = "";
            std::cout << line;

        }
        char user_guess;
        char com_guess;

        int game_count;

        while (is_running_rps) {
            int comp_score = 0;
            int user_score = 0;
            inFile >> com_guess;
            std::cout << "Hello and welcome to ROCK PAPER SCISSORS, Best of 5 games" << std::endl;
            std::cout << "R - Rock" << std::endl;
            std::cout << "P - Paper" << std::endl;
            std::cout << "S - Scissors" << std::endl;
            std::cin >> user_guess;
            for (int game_count = 0; game_count < 5; game_count++) {

                if ((user_guess == 'R' && com_guess == 'S') || (user_guess == 'P' && com_guess == 'R') ||
                    (user_guess == 'S' && com_guess == 'P')) {
                    std::cout << "You Chose: " << user_guess << std::endl << "Computer Chose: " << com_guess
                              << std::endl;
                    std::cout << "User Wins, Enter another guess; " << std::endl;
                    user_score++;
                    inFile >> com_guess;
                    std::cin >> user_guess;
                } else if (user_guess == com_guess) {
                    std::cout << "You Chose: " << user_guess << std::endl << "Computer Chose:" << com_guess
                              << std::endl;
                    std::cout << "Draw, Enter another guess; " << std::endl;
                    inFile >> com_guess;
                    std::cin >> user_guess;
                } else {
                    std::cout << "You Chose: " << user_guess << std::endl << "Computer Chose: " << com_guess
                              << std::endl;
                    std::cout << "You Lose, Enter another guess; " << std::endl;
                    comp_score++;
                    inFile >> com_guess;
                    std::cin >> user_guess;
                }
                if (game_count == 4) {
                    std::cout << "Game Over, Here are the scores:" << std::endl;
                    std::cout << "User: " << user_score << std::endl;
                    std::cout << "Computer: " << comp_score << std::endl;
                    if (user_score > comp_score)
                        std::cout << "You Win, GG" << std::endl;
                    else {
                        std::cout << "You Lose, GG" << std::endl;
                    }


                    }

                }
            //play again - RPS GAME
            std::string yes = "1 - Yes\n";
            std::string no = "2 - No, Exit game.\n";
            std::string menu = "3 - Return to Menu\n";
            int play_again_choice;

            std::cout
                    << "Would you like to play again?"
                    << std::endl;


            std::cout << yes;
            std::cout << no;
            std::cout << menu;

            std::cin >> play_again_choice;

            switch (play_again_choice) {
                case 1 :
                    //"YES";
                    is_running_rps = true;
                    break;

                case 2 :
                    // "NO";
                    return 0;

                case 3 :
                    //"MENU";
                    main_menu = true;
                    break;

                default:
                    std::cout << "Invalid Input, try again" << std::endl;
            }
        }
    }





/*
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
                int com_input = 0;

// Changing RPS to 1,2,3
                    inFile >> com_input;
                    std::cin >> com_input;

                    if (com_input == __isascii(82)) { //R
                        com_input = 1;
                    }
                    else if (com_input == __isascii(80)) { //P
                        com_input = 2;
                    } else if (com_input == __isascii(83)) { //S
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
                            break;
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
                } /*/
}



























//while (game_menu) { //   Main Menu
/* (menu) {
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

    }/*/
/*
                    while (playagain) {
                        std::cout
                                << "Would you like to play again, - Y for Yes - N for No - T for Top menu - "
                                << std::endl;
                        std::cin >> playagain_input;

                        if (playagain_input == "Y") {

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
                        }/*/













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
