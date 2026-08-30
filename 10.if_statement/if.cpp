#include <iostream>

int main()
{

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Welcome!";
    }
    else if (age >= 12)
    {
        std::cout << "You need parents with you.";
    }

    else
    {
        std::cout << "You are underage.";
    }

    return 0;
}
