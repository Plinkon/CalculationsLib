#include "../../src/includes.h"
/*

    THIS IS THE ADVANCED SHOWCASE / EXAMPLE FILE. YOU CAN EDIT OR JUST LOOK AT THIS FILE IF YOUR WANT. Have fun!

*/

int main()
{
    std::string input;
    bool exit = false;

    std::cout << "Welcome to the advanced example! Type 'help' for command list";
    
    while (!exit)
    {
        std::cout << std::endl << ">>> ";
        std::cin >> input;

        if (input == "exit")
        {
            exit = true;
        }

        else if (input == "help")
        {
            std::cout << std::endl << std::endl << "Example Help: " << std::endl;
            std::cout << "1: pythgrean (use the pythagorean theorem)" << std::endl;
            std::cout << "2: quadratic (use the quadratic equation)" << std::endl;
            std::cout << "3: euler (use euler's formula)" << std::endl;
            std::cout << "4: laplace (use the laplace transform equation)" << std::endl;
            std::cout << "5: percent (calculate percentage of a number)" << std::endl;
            std::cout << "6: intToStr (convert int to a string)" << std::endl;
            std::cout << "7: strToInt (convert string to a int)" << std::endl;
            std::cout << "8: strToDbl (convert a string to a double)" << std::endl;
            std::cout << "9: dblToStr (convert a double to a string)" << std::endl;
            std::cout << "10: chrToInt (convert a char to a int)" << std::endl;
            std::cout << "11: intToChr (convert a int to a char)" << std::endl;
            std::cout << "12: exit (exits program)" << std::endl;
            std::cout << std::endl;
        }

        // ADVANCED

        else if (input == "pythgrean")
        {
            std::cout << std::endl << std::endl;
            Advncd::pythagorean();
        }
        
        else if (input == "quadratic")
        {
            std::cout << std::endl << std::endl;
            Advncd::quadratic();
        }

        else if (input == "euler")
        {
            std::cout << std::endl << std::endl;
            Advncd::eulerFrmla();
        }

        else if (input == "laplace")
        {
            std::cout << std::endl << std::endl;
            Advncd::laplaceTrnsfrm();
        }

        else if (input == "percent")
        {   
            int a, b;
            
            std::cout << std::endl << std::endl;
            std::cout << "Enter first number: ";
            std::cin >> a;

            std::cout << std::endl << "Enter second number: ";
            std::cin >> b;

            Advncd::percent(a, b);
        }

        // CONVERSIONS

        else if (input == "intToStr")
        {
            int i;
            
            std::cout << std::endl << std::endl;
            std::cout << "Enter int: ";
            std::cin >> i;

            cnvrt::intToStr(i);
        }

        else if (input == "strToInt")
        {
            std::string s;

            std::cout << std::endl << std::endl;
            std::cout << "Enter string: ";
            std::cin >> s;

            cnvrt::strToint(s);
        }

        else if (input == "strToDbl")
        {
            std::string s;

            std::cout << std::endl << std::endl;
            std::cout << "Enter string: ";
            std::cin >> s;

            cnvrt::strToDbl(s);
        }

        else if (input == "dblToStr")
        {
            double d;

            std::cout << std::endl << std::endl;
            std::cout << "Enter double: ";
            std::cin >> d;

            cnvrt::dblToStr(d);
        }

        else if (input == "chrToInt")
        {
            char c;

            std::cout << std::endl << std::endl;
            std::cout << "Enter char: ";
            std::cin >> c;

            cnvrt::chrToInt(c);
        }

        else if (input == "intToChr")
        {
            int i;

            std::cout << std::endl << std::endl;
            std::cout << "Enter int: ";
            std::cin >> i;

            cnvrt::intToChr(i);
        }
    }
}