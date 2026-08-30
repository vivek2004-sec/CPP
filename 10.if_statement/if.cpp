#include <iostream>

// int main()
// {

//     int age;
//     std::cout << "Enter your age: ";
//     std::cin >> age;

//     if (age >= 18)
//     {
//         std::cout << "Welcome!";
//     }
//     else if (age >= 12)
//     {
//         std::cout << "You need parents with you.";
//     }

//     else
//     {
//         std::cout << "You are underage.";
//     }

//     return 0;
// }

int main()
{

    using namespace std;
    int x;
    cout << "enter the value of x: ";
    cin >> x;

    if (x % 2 == 0)
    {
        cout << "It's an even number.";
    }
    else
    {
        cout << "it's an odd number.";
    }

    return 0;
}