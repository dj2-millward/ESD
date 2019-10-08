#include <iostream>
#include <time.h>
#include <stdlib.h>



int main() {

    std::srand(time(NULL));

    int rand_number = rand() % 10 + 1;
    int user_input;
    int guessCount = 0;
    int limit = 5;
    bool is_running = false;

    std::cout << "Hello and welcome to THE GUESSING GAME! " << std::endl;
    _sleep(1500);
    while (user_input != rand_number && !is_running) {
        if (guessCount < limit) {
            std::cout << "Enter a number between 1 and 10: ";
            std::cin >> user_input;
            guessCount++;

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










/*
int main() {
    std::srand(time(0));

    int rand_number = rand() % 10 + 1;
    int user_input;
    int limit = 0;
    bool is_running = true;


    while (is_running = true) {
        std::cout << "Enter Number: " << std::endl;
        std::cin >> user_input;

        if (user_input < rand_number) {
            std::cout << "Higher" << std::endl;
        }
            else if (user_input > rand_number) {
                std::cout << "Lower" << std::endl;
        }
            else {
                std::cout << "Correct" << std::endl;
        }
        while (user_input != rand_number) {
        }
        return 0;


























    // Attempt 3
   // int the_number;
   // int guess;
   // int tries;

  //  the_number = rand() % 10 + 1;

 //   std::cout << "Let's play a game!";
 //   std::cout << "I will think of a number 1-100. Try to guess it.";
//   std::cout << std::endl;
 //   std::cin >> guess;

//    for (tries = 0; tries++;)
  //  {
  //      if (guess == the_number)
   //     {
   //         std::cout << "You guessed it!";
   //         std::cout << "And it only took you: " << tries.\n"";
   //     }
     //   else if (guess < the_number)
   //     {
    //        std::cout << "Higher";
    //        std::cin >> tries++;
    //    }


    //    else if (guess > the_number)
    //    {
    //        std::cout << "Lower";
    //        std::cin >> tries++;
   //    }

   //     else
  //         std::cout << "That's not even in range!";
   //     return 0;



    // Attempt 2
    //std::srand(time(0));

    //int rand_number = rand() % 10 + 1;
   // int user_input;
   // int limit = 0;
   // bool is_running = true;


   // while (is_running = true) {
    //    std::cout << "Enter Number: " << std::endl;
    //    std::cin >> user_input;

    //    if (user_input < rand_number) {
    //        std::cout << "Higher" << std::endl;
     //       ++limit;

     //   else if (user_input > rand_number) {
     //       std::cout << "Lower" << std::endl;
      //      limit++;
    //    }
      //  else {
     //       std::cout << "Correct" << std::endl;
      //      limit != 6;
      //     is_running = false;
      //


//}
      // while (user_input != rand_number) ;











    // While limit != 5
    // else if

//do {
//std::cout << "Enter Number: " << std::endl;
//std::cin >> user_input;

//if (user_input < rand_number)
//std::cout << "Higher" << std::endl;
//else if (user_input > rand_number)
//std::cout << "Lower" << std::endl;
//else
//std::cout << "Correct" << std::endl;
//} while (user_input != rand_number) ;
//return 0;













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
/**/
