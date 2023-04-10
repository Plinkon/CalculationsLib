#include "../../src/includes.h"
/*

    THIS IS THE BASIC SHOWCASE / EXAMPLE FILE. YOU CAN EDIT OR JUST LOOK AT THIS FILE IF YOUR WANT. Have fun!

*/

int main()
{
    std::string input;
    bool exit = false;

     std::cout << "Welcome to the basic example! Type 'help' for command list" << std::endl << std::endl;
    
    while (!exit)
    {
        std::cout << ">>> ";
        std::cin >> input;

        if (input == "exit")
        {
            exit = true;
        }

        else if (input == "help")
        {
            std::cout << std::endl << std::endl << "Example Help: (these are all for integers. There are all of these functions for floats, I just didin't put it in this example.)" << std::endl;
            std::cout << "1: add_2 (add 2 integers)" << std::endl;
            std::cout << "2: add_3 (add 3 integers)" << std::endl;
            std::cout << "3: sub_2 (subtract 2 integers)" << std::endl;
            std::cout << "4: add_3 (subtract 3 integers)" << std::endl;
            std::cout << "5: div_2 (divides 2 integers)" << std::endl;
            std::cout << "6: div_3 (divides 3 integers)" << std::endl;
            std::cout << "7: mul_2 (multiplies 2 integers)" << std::endl;
            std::cout << "8: mul_3 (multiplies 3 integers)" << std::endl;
            std::cout << "9: i_help (shows function help for integers)" << std::endl;
            std::cout << "10: exit (exits program)" << std::endl;
            std::cout << std::endl;
        }

        else if (input == "i_help")
        {
            iBasic::help();
        }

        else if (input == "add_2")
        {
            int a, b;

            std::cout << std::endl << std::endl;
            std::cout << "Enter first number: ";
            std::cin >> a;

            std::cout << std::endl << "Enter second number: ";
            std::cin >> b;

            iBasic::add2(a, b);

            std::cout << std::endl;
        }

        else if (input == "add_3")
        {
            int a, b, c;

            std::cout << std::endl << std::endl;
            std::cout << "Enter first number: ";
            std::cin >> a;

            std::cout << std::endl << "Enter second number: ";
            std::cin >> b;

            std::cout << std::endl << "Enter third number: ";
            std::cin >> c;

            iBasic::add3(a, b, c);

            std::cout << std::endl;
        }

        else if (input == "sub_2")
        {
            int a, b;

            std::cout << std::endl << std::endl;
            std::cout << "Enter first number: ";
            std::cin >> a;

            std::cout << std::endl << "Enter second number: ";
            std::cin >> b;

            iBasic::sub2(a, b);

            std::cout << std::endl;
        }

        else if (input == "sub_3")
        {
            int a, b, c;

            std::cout << std::endl << std::endl;
            std::cout << "Enter first number: ";
            std::cin >> a;

            std::cout << std::endl << "Enter second number: ";
            std::cin >> b;

            std::cout << std::endl << "Enter third number: ";
            std::cin >> c;

            iBasic::sub3(a, b, c);

            std::cout << std::endl;
        }

        else if (input == "div_2")
        {
            int a, b;

            std::cout << std::endl << std::endl;
            std::cout << "Enter first number: ";
            std::cin >> a;

            std::cout << std::endl << "Enter second number: ";
            std::cin >> b;

            iBasic::div2(a, b);

            std::cout << std::endl;
        }

        else if (input == "div_3")
        {
            int a, b, c;

            std::cout << std::endl << std::endl;
            std::cout << "Enter first number: ";
            std::cin >> a;

            std::cout << std::endl << "Enter second number: ";
            std::cin >> b;

            std::cout << std::endl << "Enter third number: ";
            std::cin >> c;

            iBasic::div3(a, b, c);

            std::cout << std::endl;
        }

        else if (input == "mul_2")
        {
            int a, b;

            std::cout << std::endl << std::endl;
            std::cout << "Enter first number: ";
            std::cin >> a;

            std::cout << std::endl << "Enter second number: ";
            std::cin >> b;

            iBasic::mult2(a, b);

            std::cout << std::endl;
        }

        else if (input == "mul_3")
        {
            int a, b, c;

            std::cout << std::endl << std::endl;
            std::cout << "Enter first number: ";
            std::cin >> a;

            std::cout << std::endl << "Enter second number: ";
            std::cin >> b;

            std::cout << std::endl << "Enter third number: ";
            std::cin >> c;

            iBasic::mult3(a, b, c);

            std::cout << std::endl;
        }
    }
}