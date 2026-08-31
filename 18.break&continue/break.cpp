#include <iostream>

int main()
{

    // break : break out of the loop.
    // continue : skip current iteration.

    for (int i = 1; i <= 10; i++)
    {
        if (i == 7)
        {
            // break;
            continue;
        }

        std::cout << i << "\n";
    }
    return 0;
}