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
                std::cout << "Thank you for playing" << std::endl;

                break;
            default:
                std::cout << "Invalid Input, try again" << std::endl;
                break;
        }
    }
}




char user_input (){
    char user_guess;
    bool input_correct = true;
    bool no_play = true;


    while (input_correct) {

        std::cout << "R - Rock" << std::endl;
        std::cout << "P - Paper" << std::endl;
        std::cout << "S - Scissors" << std::endl;
        std::cin >> user_guess;
        user_guess = toupper(user_guess);


        if (user_guess == 'R') {
            break;
        } else if (user_guess == 'P') {
                break;
        } else if (user_guess == 'S') {
            break;

        } else {
            std::cout << "Invalid Input, Please try again: " << std::endl;
        }
    }

    return user_guess;


}

int scoring(char com_guess, char user_guess)
    {

        if ((user_guess == 'S' && com_guess == 'P') || (user_guess == 'R' && com_guess == 'S') ||
            (user_guess == 'P' && com_guess == 'R')) {
            std::cout << "You Chose: " << user_guess << std::endl << "Computer Chose: " << com_guess
                      << std::endl;
            //std::cout << "User Wins! Enter another: " << std::endl;
            std::cout << "_______________________________" << std::endl;
            return 1;

        } else if (user_guess == com_guess) {
            std::cout << "You Chose: " << user_guess << std::endl << "Computer Chose:" << com_guess
                      << std::endl;
           // std::cout << "You Draw! Enter another:  " << std::endl;
            std::cout << "_______________________________" << std::endl;
            return 0;
        } else {
            std::cout << "You Chose: " << user_guess << std::endl << "Computer Chose: " << com_guess
                      << std::endl;
          //  std::cout << "You lose, unlucky! Enter another:  " << std::endl;
            std::cout << "_______________________________" << std::endl;
            return -1;
        }

    }


int main() {
<<<<<<< HEAD
//MAIN MENU
bool rps_playagain = false;

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
            rps_playagain = true;
            break;

        case 3 :
            std::cout << "Thank you for playing";
            return 0;

        default:
            std::cout << "Invalid Input" << std::endl;
    }



    std::ifstream inFile("RPS.txt"); // opens file
    if (inFile.is_open()) {
    } else {
        std::cout << "Error reading file" << std::endl;
    }


    char com_guess;
    int game_count;

    int comp_score = 0;
    int user_score = 0;


    std::cout << "_______________________________" << std::endl;
    std::cout << "Hello and welcome to ROCK PAPER SCISSORS, Best of 5 games" << std::endl;


    while (rps_playagain) {
        for (int game_count = 0; game_count < 5; game_count++) {
            char user_guess = user_input();
            inFile >> com_guess;

            int score = scoring(com_guess, user_guess);


            if (score == 0) {
                std::cout << "You Draw, Enter another guess; " << std::endl;

            } else if (score == 1) {
                std::cout << "You Win, Enter another guess;" << std::endl;
                user_score++;


            } else if (score == -1) {
                std::cout << "You Lose, Enter another guess; " << std::endl;
                comp_score++;

            } else {
                std::cout << "No score";
            }

            if (game_count == 4) {
                std::cout << "Game Over, Here are the scores:" << std::endl;
                std::cout << "_______________________________" << std::endl;
                std::cout << "User: " << user_score << std::endl;
                std::cout << "Computer: " << comp_score << std::endl;


                if (user_score > comp_score) {
                    std::cout << "You Win, GG " << std::endl;
                    std::cout << "_______________________________" << std::endl;
                    rps_playagain = false;


                } else {
                    std::cout << "You Lose, GG" << std::endl;
                    std::cout << "_______________________________" << std::endl;
                    rps_playagain = false;

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
                std::cout << "_______________________________" << std::endl;
                std::cout << "Hello and welcome to ROCK PAPER SCISSORS, Best of 5 games" << std::endl;
                rps_playagain = true;

                break;
            case 2 :
                std::cout << "Thank you for playing" << std::endl;
                rps_playagain = false;

            default:
                std::cout << "Invalid Input, try again" << std::endl;
                break;
        }
    }
return 0;
        }

=======
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
>>>>>>> master
