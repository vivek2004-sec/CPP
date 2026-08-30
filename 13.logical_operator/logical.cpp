#include <iostream>

// namespace first
// {
//     int temp = 34;
// } // namespace first

// int main()
// {
//     using std::cin;
//     using std::cout;

//     // && : Used to check whether two conditions are true.

//     int temp;
//     cout << "Enter temperature: ";
//     cin >> temp;
//     // if (temp > 0 && temp < 30)
//     // {
//     //     std::cout << "This is right temperature.";
//     // }
//     // else
//     // {
//     //     cout << "Enter valid Input.";
//     // }

//     first::temp > 0 && first::temp < 30 ? cout << "This is right temperature." : cout << "Invalid Input.";
//     return 0;
// }

// int main()
// {
//     // ||(or logical operator.): checks if one of two conditions is true.

//     int temp;
//     std::cout << "Enter the temperture: ";
//     std::cin >> temp;

//     temp > 0 || temp < 30 ? std::cout << "This is right temperature." : std::cout << "Invalid Input.";
//     return 0;
// }

int main()
{
    // ! (not ): it reverses the logical state of the operator.

    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    !temp > 0 ? std::cout << "This is good." : std::cout << "Invalid Input";

    return 0;
}