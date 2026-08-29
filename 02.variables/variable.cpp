/*
# Variable = It is like a container which holds the data value we assign to it.
             more like a placeholder in memory.
we create a variable by 1. declaration and 2. assignment
*/


// #include <iostream>

// int main() {
//     int x; // declaration
//     x = 5; // assignment
//     int y = 10; // declaration and assignment 
//     int sum = x + y;

//     std::cout << x << "\n"; 
//     std::cout << y << "\n";
//     std::cout << sum<< "\n";
//     return 0;
// }


/*
# Data Types: data types defines the type of data hold by variables.

*/

#include <iostream>

int main() {
    
    // 1. integer(int): Whole Number
    int age = 21;
    int year = 2023;
    double days = 7.5;

    std::cout << age << std::endl;
    std::cout << year << std::endl; 
    std::cout << days << std:: endl;

    //2. double: Number including decimal
    double price = 10.99;
    double hour = 1.22;

    std::cout << price << "\n";
    std::cout << hour << "\n";

    //3. single character (char) : only shows single character
    // to store single character you use single quote. ('')
    char grade = 'A';
    std::cout << grade << "\n";

    //4. Boolean (true: 1 or false : 0)
    bool student = false;
    bool female = true;

    std::cout << student << "\n";
    std::cout << female << "\n";
    
    //5. string (stores sequence of text character)
    std::string name = "Vivek";
    std::cout << name;
    return 0;
}