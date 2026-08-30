#include <iostream>
#include <cmath>

int main()
{
    double p;
    double r;
    double t;
    double n;
    std::string interest;

    std::cout << "********* Simple & Compound Interest Calculator *********\n";
    std::cout << "Enter the value of p: ";
    std::cin >> p;

    std::cout << "Enter the value of r: ";
    std::cin >> r;

    std::cout << "Enter the value of t: ";
    std::cin >> t;

    double simple_interest;
    simple_interest = p * r * t / 100;

    double compound_interest;
    compound_interest = p * (1 + r / 100);
    compound_interest = pow(n * t, compound_interest);

    std::cout << "Which type interest you want? (SI or CI): ";
    std::cin >> interest;

    if (interest == "SI" || interest == "si")
    {
        std::cout << "Simple Interest is " << simple_interest;
    }
    else if (interest == "CI" || interest == "ci")
    {
        std::cout << "Compound Interest is " << compound_interest;
    }
    else
    {
        std::cout << "Invalid Input.";
    }

    std::cout << "\n*********************************************************";

    return 0;
}