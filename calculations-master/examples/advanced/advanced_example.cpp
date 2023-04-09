#include "../../src/includes.h"
/*

    THIS IS THE ADVANCED SHOWCASE / EXAMPLE FILE. YOU CAN EDIT OR JUST LOOK AT THIS FILE IF YOUR WANT. Have fun!

*/

int main()
{
    std::string input;
    bool exit = false;
    
    while (!exit)
    {
        std::cout << "Welcome to the advanced example! Type 'help' for command list";
        std::cin >> input;

        if (input == "exit")
        {
            exit = true;
        }
    }
}