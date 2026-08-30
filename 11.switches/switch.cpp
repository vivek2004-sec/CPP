#include <iostream>

// int main()
// {

//     int month;
//     std::cout << "Enter the month(1-12): ";
//     std::cin >> month;

//     if (month == 1)
//     {
//         std::cout << "It's January.";
//     }
//     else if (month == 2)
//     {
//         std::cout << "It's February.";
//     }

//     else if (month == 3)
//     {
//         std::cout << "It's March.";
//     }

//     else if (month == 4)
//     {
//         std::cout << "It's April.";
//     }

//     else if (month == 5)
//     {
//         std::cout << "It's May.";
//     }

//     else if (month == 6)
//     {
//         std::cout << "It's June.";
//     }

//     else if (month == 7)
//     {
//         std::cout << "It's July.";
//     }

//     else if (month == 8)
//     {
//         std::cout << "It's August.";
//     }

//     else if (month == 9)
//     {
//         std::cout << "It's September.";
//     }

//     else if (month == 10)
//     {
//         std::cout << "It's October.";
//     }

//     else if (month == 11)
//     {
//         std::cout << "It's November.";
//     }
//     else if (month == 12)
//     {
//         std::cout << "It's December.";
//     }
//     else
//     {
//         std::cout << "Invalid Input.";
//     }

//     return 0;
// }

int main()
{
    int month;
    std::cout << "Enter the month(1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It's January";
        break;

    case 2:
        std::cout << "It's February";
        break;
    case 3:
        std::cout << "It's March";
        break;
    case 4:
        std::cout << "It's April";
        break;
    case 5:
        std::cout << "It's May";
        break;
    case 6:
        std::cout << "It's June";
        break;
    case 7:
        std::cout << "It's July";
        break;
    case 8:
        std::cout << "It's August";
        break;
    case 9:
        std::cout << "It's September";
        break;
    case 10:
        std::cout << "It's October";
        break;
    case 11:
        std::cout << "It's November";
        break;
    case 12:
        std::cout << "It's December";
        break;
    }
    return 0;
}