#include <iostream>

void happy(std::string name, int age);

void sum(int a, int b);

int main()
{
    std::string name;
    std::cin >> name;
    int age = 22;
    happy(name, age);
    sum(3, 4);
    return 0;
}

void happy(std::string name, int age)
{
    std::cout << "Happy Birthday! " << name << age;
}

void sum(int a, int b)
{

    int sum = a + b;
    std::cout << sum;
}