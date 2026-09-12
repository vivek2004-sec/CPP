#include <iostream>

void happy(std::string name);

int main()
{
    std::string name;
    std::cin >> name;
    happy(name);
    return 0;
}

void happy(std::string name)
{
    std::cout << "Happy Birthday! " << name;
}