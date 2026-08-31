#include <iostream>

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 10; j++)
    //     {
    //         std::cout << j;
    //     }
    //     std::cout << "\n";
    // }
    int rows;
    int columns;
    char symbols;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    std::cout << "Enter the symbol: ";
    std::cin >> symbols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            std::cout << symbols;
        }
        std::cout << "\n";
    }

        return 0;
}