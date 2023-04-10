#include <iostream>
#include <string>
#include <cmath>

//this is the basic functions file (add, sub, mult, div)

namespace iBasic
{
    void add2(int a, int b)
    {
        int r = a + b;
        std::cout << "Result: " << r << std::endl;
    }

    void add3(int a, int b, int c)
    {
        int r = a + b + c;
        std::cout << "Result: " << r << std::endl;
    }

    void sub2(int a, int b)
    {
        int r = a - b;
        std::cout << "Result: " << r << std::endl;
    }

    void sub3(int a, int b, int c)
    {
        int r = a - b - c;
        std::cout << "Result: " << r << std::endl;
    }

    void div2(int a, int b)
    {
        int r = a / b;
        std::cout << "Result: " << r << std::endl;
    }

    void div3(int a, int b, int c)
    {
        int r = a / b / c;
        std::cout << "Result: " << r << std::endl;
    }

    void mult2(int a, int b)
    {
        int r = a * b;
        std::cout << "Result: " << r << std::endl;
    }

    void mult3(int a, int b, int c)
    {
        int r = a * b * c;
        std::cout << "Result: " << r << std::endl;
    }

    void help()
    {
        std::cout << std::endl << std::endl;
        std::cout << "BASIC INTEGER FUNCTIONS HELP:";
        std::cout << std::endl << std::endl;
        std::cout << "1: add2() (adds 2 integers)";
        std::cout << std::endl;
        std::cout << "2: add3() (adds 3 integers)";
        std::cout << std::endl;
        std::cout << "1: sub2() (subtracts 1 integer from another)";
        std::cout << std::endl;
        std::cout << "2: sub3() (subtracts 1 integer from another and subracts another integer from that and another from that ex.[4 - 1 = 3, 3 - 1 = 2, 2 - 1 = 1])";
        std::cout << std::endl;
        std::cout << "1: div2() (divides one integer by another)";
        std::cout << std::endl;
        std::cout << "2: div3() (divides one integer by another and divides that by another integer and divides that by another integer ex.[12 / 2 = 6, 6 / 2 = 3, 3 / 3 = 1])";
        std::cout << std::endl;
        std::cout << "1: mult2() (multiplies 2 integers)";
        std::cout << std::endl;
        std::cout << "2: mult3() (multiplies 1 integer by another and multiplies that by another and then another ex.[4 x 2 = 8, 8 x 2 = 16, 16 x 2 = 32])";
        std::cout << std::endl << std::endl;
    }
}

namespace fBasic
{
    void add2(float a, float b)
    {
        float r = a + b;
        std::cout << "Result: " << r << std::endl;
    }

    void add3(float a, float b, float c)
    {
        float r = a + b + c;
        std::cout << "Result: " << r << std::endl;
    }

    void sub2(float a, float b)
    {
        float r = a - b;
        std::cout << "Result: " << r << std::endl;
    }

    void sub3(float a, float b, float c)
    {
        float r = a - b - c;
        std::cout << "Result: " << r << std::endl;
    }

    void div2(float a, float b)
    {
        float r = a / b;
        std::cout << "Result: " << r << std::endl;
    }

    void div3(float a, float b, float c)
    {
        float r = a / b / c;
        std::cout << "Result: " << r << std::endl;
    }

    void mult2(float a, float b)
    {
        float r = a * b;
        std::cout << "Result: " << r << std::endl;
    }

    void mult3(float a, float b, float c)
    {
        float r = a * b * c;
        std::cout << "Result: " << r << std::endl;
    }

    void help()
    {
        std::cout << std::endl << std::endl;
        std::cout << "BASIC INTEGER FUNCTIONS HELP:";
        std::cout << std::endl << std::endl;
        std::cout << "1: add2 (adds 2 floats)";
        std::cout << std::endl;
        std::cout << "2: add3 (adds 3 floats)";
        std::cout << std::endl;
        std::cout << "1: sub2 (subtracts 1 float from another)";
        std::cout << std::endl;
        std::cout << "2: sub3 (subtracts 1 float from another and subracts another float from that and another from that ex.[4.3 - 1.1 = 3.2, 3.2 - 1.1 - 2.1, 2.1 - 1.1 = 1.0])";
        std::cout << std::endl;
        std::cout << "1: div2 (divides one float by another)";
        std::cout << std::endl;
        std::cout << "2: div3 (divides one float by another and divides that by another float and divides that by another float ex.[12 / 2 = 6, 6 / 2 = 3, 3 / 3 = 1])";
        std::cout << std::endl;
        std::cout << "1: mult2 (multiplies 2 float)";
        std::cout << std::endl;
        std::cout << "2: mult3 (multiplies 1 float by another and multiplies that by another and then another ex.[4 x 2 = 8, 8 x 2 = 16, 16 x 2 = 32])";
        std::cout << std::endl << std::endl;
    }
}

/*

༼ つ  ͡° ͜ʖ ͡° ༽つ

*/