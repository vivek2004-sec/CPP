#include <iostream>

int main () {
    using std::cout;
    using std::cin;

    int x = 3;
    int y = 55;
    int z;

    z = std::max(x, y);
    z = std::min(x, y);
    cout << z;

    return 0;
}