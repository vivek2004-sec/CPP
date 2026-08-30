#include <iostream>

int main()
{

    double temp;
    std::string unit;

    std::cout << "***** Temperature Conversion *****\n";

    std::cout << "F = Farenheit.\n";
    std::cout << "C = Celsius.\n";
    std::cout << "Which unit you would prefer?\n";
    std::cin >> unit;

    if (unit == "F" || unit == "f")
    {
        std::cout << "You are converting to Farenheit.\n";
        std::cout << "Enter the temperature: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is " << temp << "F\n";
    }
    else if (unit == "C" || unit == "c")
    {
        std::cout << "You are converting to Celcius.\n";
        std::cout << "Enter the temperature: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is " << temp << "C\n";
    }
    else
    {
        std::cout << "Invalid Input.";
    }

    std::cout << "\n**********************************";

    return 0;
}