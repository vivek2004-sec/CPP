#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter the name: ";
    std::getline(std::cin, name);

    // int len = name.length();
    // bool emp = name.empty();
    // std::cout << len;
    // name.append("@gmail.com");
    std::cout << name;

    return 0;
}