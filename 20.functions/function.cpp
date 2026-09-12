#include <iostream>

void happy(std::string name);

void sum(int a, int b);

int main()
{
    std::string name;
    std::cin >> name;
    happy(name);
    sum(3, 4);
    return 0;
}

void happy(std::string name)
{
    std::cout << "Happy Birthday! " << name;
}

void sum(int a, int b)
{

    int sum = a + b;
    std::cout << sum;
}