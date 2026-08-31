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
    // name.insert(2, "@");
    // name.clear();
    // std::cout << name.at(0);
    // std::cout << name.find(" ");
    name.erase(0, 2);

    std::cout << name;

    return 0;
}