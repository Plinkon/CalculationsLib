#include <iostream>
#include <string>
#include <cmath>

// this is the conversion file

std::string str;

namespace cnvrt
{
    void intToStr(int num)
    {
        //! USE (extern std::string istr) TO REFRENCE TO THIS VARIABLE
        std::string istr = std::to_string(num);
        std::cout << "The integer is: " << num << std::endl;
        std::cout << "The string is: " << istr << std::endl;
    }

    void strToint(std::string str)
    {
        //! USE (extern int numStr) TO REFRENCE TO THIS VARIABLE
        int numStr = std::stoi(str);
        std::cout << "The string is: " << str << std::endl;
        std::cout << "The integer is: " << numStr << std::endl;
    }

    void strToDbl(std::string str)
    {
        //! USE (extern double numDouble) TO REFRENCE TO THIS VARIABLE
        double numDouble = std::stod(str);
        std::cout << "The string is: " << str << std::endl;
        std::cout << "The double is: " << numDouble << std::endl;
    }

    void dblToStr(double num)
    {
        //! USE (extern std::string strTd) TO REFRENCE TO THIS VARIABLE
        std::string strTd = std::to_string(num);
        std::cout << "The double is: " << num << std::endl;
        std::cout << "The string is: " << strTd << std::endl;
    }

    void chrToInt(char my_char)
    {
        //! USE (extern int my_int) TO REFRENCE TO THIS VARIABLE
        int my_int = static_cast<int>(my_char);
        std::cout << "The char is: " << my_char << std::endl;
        std::cout << "The integer is: " << my_int << std::endl;
    }

    void intToChr(int my_int)
    {
        //! USE (extern char my_char) TO REFRENCE TO THIS VARIABLE
        char my_char = static_cast<char>(my_int);
        std::cout << "The integer is: " << my_int << std::endl;
        std::cout << "The char is: " << my_char << std::endl;
    }
}