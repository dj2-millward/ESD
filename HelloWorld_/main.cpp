#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>

void guessing_game() {
    std::srand(time(NULL));
    bool guess_game = true;
    int user_input;

    int rand_number = rand() % 10 + 1;
    std::cout << "Hello and welcome to THE GUESSING GAME! " << std::endl;

    while (guess_game) {
        for (int guess_count = 0; guess_count < 5; guess_count++) {
            std::cout << "Enter a number between 1 - 10: ";
            std::cin >> user_input;

            // if (user_input == rand_number) {

            //}
            if (user_input > rand_number) {
                std::cout << "Lower" << std::endl;
            } else if (user_input < rand_number) {
                std::cout << "Higher" << std::endl;
            } else {
                std::cout << "Well done! The number was indeed " << rand_number << std::endl;
                guess_game = false;
                break;

            }
            if (guess_count == 4) {
                std::cout << "Out of guesses, you lose!" << std::endl;
                guess_game = false;

            }
        }

        std::string yes = "1 - Yes\n";
        std::string no = "2 - No, Exit game.\n";

        int play_again_choice;

        std::cout
                << "Would you like to play again?"
                << std::endl;

        std::cout << yes;
        std::cout << no;


        std::cin >> play_again_choice;

        switch (play_again_choice) {
            case 1 :
                guessing_game();
                break;
            case 2 :
                break;
            default:
                std::cout << "Invalid Input, try again" << std::endl;
                break;
        }
    }
}

void rps_running() {
    bool rps_playagain = true;
    std::ifstream inFile("H:\\games_tech_year_1\\ESD\\Projects\\ESD\\HelloWorld_\\RPS.txt"); // opens file
    if (inFile.is_open()) {
    } else {
        std::cout << "Error reading file" << std::endl;
    }

    char user_guess;
    char com_guess;
    int game_count;


    int comp_score = 0;
    int user_score = 0;

    inFile >> com_guess;
    std::cout << "Hello and welcome to ROCK PAPER SCISSORS, Best of 5 games" << std::endl;
    std::cout << "R - Rock" << std::endl;
    std::cout << "P - Paper" << std::endl;
    std::cout << "S - Scissors" << std::endl;
    std::cin >> user_guess;
    while (rps_playagain) {
        for (int game_count = 0; game_count < 5; game_count++) {

            if ((user_guess == 'S' && com_guess == 'P') || (user_guess == 'R' && com_guess == 'S') ||
                (user_guess == 'P' && com_guess == 'R')) {
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
                std::cout << "_______________________________" << std::endl;
                std::cout << "User: " << user_score << std::endl;
                std::cout << "Computer: " << comp_score << std::endl;
                std::cout << "_______________________________" << std::endl;
                if (user_score > comp_score) {
                    std::cout << "You Win, GG" << std::endl;

                } else {
                    std::cout << "You Lose, GG" << std::endl;

                }
            }

        }
        std::string yes = "1 - Yes\n";
        std::string no = "2 - No, Exit game.\n";

        int play_again_choice;

        std::cout
                << "Would you like to play again?"
                << std::endl;

        std::cout << yes;
        std::cout << no;


        std::cin >> play_again_choice;

        switch (play_again_choice) {
            case 1 :
                rps_running();
                rps_playagain = false;
                break;
            case 2 :
                std::cout << "Thank you for playing" << std::endl;
                rps_playagain = false;
                break;
            default:
                std::cout << "Invalid Input, try again" << std::endl;
                break;
        }

    }
}

int main() {

//MAIN MENU
    std::string menu_reply;
    std::string reply;
    std::string playagain_input;


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
            guessing_game();
            break;

        case 2 :
            rps_running();
            break;

        case 3 :
            std::cout << "Thank you for playing";
            return 0;

        default:
            std::cout << "Invalid Input" << std::endl;
    }
}