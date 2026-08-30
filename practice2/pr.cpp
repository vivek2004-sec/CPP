#include <iostream>
#include <cmath>

int main() {
//  Hypotenuse of a right angled triangle.
    using std::cout;
    using std::cin;
// c = sqrt(a^2 + b^2)

    int a ;
    int b;
    double c;
    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

   
    // a = pow(2, a);
    // b = pow(2, b);

    // c  = sqrt(a + b);
    // cout << "The hypotenuse of triangle is: " << c;
    
    // area of rectangle
    c = (a *b);
    cout << "The area of rectangle is: "<< c;


    return 0;
}