#include <iostream>

namespace first_name
{
    std::string name = "vivek";
}

int main()
{

    std::string name = "rishi";

    std::cout << first_name::name << std::endl;
    std::cout << name;

    return 0;
}