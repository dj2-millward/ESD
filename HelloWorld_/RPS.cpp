#include <fstream>
#include <iostream>

bool is_running_rps = true;

int main() {
    while (is_running_rps) {
        std::ifstream myFile("H:\\games_tech_year_1\\ESD\\Projects\\ESD\\HelloWorld_\\RPS.txt"); // opens file
        if (myFile.is_open()) {// checks to see if file was opened successfully

            std::string line = "";
            getline(myFile, line, '#'); // display contents of file line by line
            std::cout << line;
            myFile.close();
        }
            else {
            std::cout << "Error Reading File;" << std::endl;
        }



    }
}
















