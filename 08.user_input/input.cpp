#include <iostream>

using text_t = std::string;
using num = int;

int main() {
    using std::cout;
    using std::cin;
// cout << insertion operator
// cin >> extraction operator 

    text_t name ;
    num  age;
    cout << "What is your name?:  ";
    std::getline(std::cin, name) ;
   
    cout << "What is your age?: ";
    cin >> age;

    cout << "Hello " << name << std::endl;
    cout <<"you are "<< age << "  years old.";

    return 0;
}