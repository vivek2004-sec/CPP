#include <iostream>
#include <cmath>


int main () {
    using std::cout;
    using std::cin;

    int x = 3.123;
    int y = 55;
    int z;

    // z = std::max(x, y);

    // z = std::min(x, y);
    // z = pow(2, x);
    // z = sqrt(9);
    // z = abs(  -3);
    // z = round(x);
    // z = ceil(x);
    z = floor(x);

    cout << z;


    return 0;
}