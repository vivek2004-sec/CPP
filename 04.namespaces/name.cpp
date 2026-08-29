// #include <iostream>

// namespace first{
//     int x = 2;

// }

// namespace second{
//     int x = 10;

// }



// int main() {
// /*Namespace: provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
// A namespace allows for identically named entities as long as the namespace are differnt.
// */
//     // int x = 0;

//     // std::cout << x << std::endl;
//     // std::cout << first::x << std::endl;
//     // std::cout << second::x << std::endl; # (::) is known as scope-resolution operator.
 

//     using namespace first;

//     std::cout << x << std::endl;
//     return 0;
// }

#include <iostream>



int main() {
    // using namespace std;
    using std::cout;
    using std::string;
    
    int x = 10;
    cout << x << std:: endl;

    string name = "vivek";
    cout << "hello"  << name;
 
    return 0;
}