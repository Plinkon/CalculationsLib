#include <iostream>
#include <string>
#include <cmath>

//this is the advanced functions file

namespace Advncd
{
    void pythagorean()
    {
        double a, b, c;
        std::cout << "Enter the lengths of the two legs of the right triangle: ";
        std::cin >> a >> b;
        c = sqrt(a*a + b*b);
        std::cout << "The length of the hypotenuse is " << c << std::endl;
    }

    void quadratic()
    {
        double a, b, c, x1, x2;
        std::cout << "Enter the coefficients a, b, and c of the quadratic equation: ";
        std::cin >> a >> b >> c;
        double discriminant = b*b - 4*a*c;
        std::cout << std::endl << discriminant << std::endl;

        if (discriminant < 0) 
        {
        std::cout << "No real roots" << std::endl;
        } 

        else 
        {
        x1 = (-b + sqrt(discriminant))/(2*a);
        x2 = (-b - sqrt(discriminant))/(2*a);
        std::cout << "The roots are " << x1 << " and " << x2 << std::endl;
        }
    }

    void eulerFrmla()
    {
        double x;
        std::cout << "Enter an angle in radians: ";
        std::cin >> x;
        double real_part = cos(x);
        double imaginary_part = sin(x);
        std::cout << "e^(i" << x << ") = " << real_part << " + i" << imaginary_part << std::endl;
    }

    //laplace
    double f(double t)
    {
        // Define the function f(t) to be transformed
        return exp(-t);
    }

    double F(double s) 
    {
    // Implement the Laplace transform of f(t) using numerical integration
    double integral = 0;
    double delta_t = 0.001;
    for (double t = 0; t < 100; t += delta_t) 
    {
        integral += f(t)*exp(-s*t)*delta_t;
    }
    return integral;
    }

    void laplaceTrnsfrm()
    {
    double s;
    std::cout << "Enter a value of s: ";
    std::cin >> s;
    std::cout << "The Laplace transform of f(t) at s = " << s << " is " << F(s) << std::endl;
    }

    void percent(int num, int max)
    {
        float percentage = (num / max) * 100;
        std::cout << "The percentage is: " << percentage << "%" << std::endl;
    }
}