// #include <iostream>
// #include <vector>     


// // typedef std::vector<std::pair<std::string, int>> pairlist_t;
// // typedef std::string text_t;
// // typedef int digit_t;
// using text_t = std::string;
// using number_t = int;

// int main() {
//     // using std::cout;
//     /*
//     typedef: reserved keyword used to create an additional name (alias) for another data type.
//     New identifier for an existing type Helps with readability and reduces typos.
//     */

//     // pairlist_t pairlist;
//     text_t name = "vivek";
//     std::cout << name << "\n";
    
//     number_t a = 5;
//     std::cout << a << "\n";



//     return 0;

// }


#include <iostream>
#include <vector>

typedef std::string text_t;

int main() {
    using std::cout;
    text_t name = "vivek";
    cout << name;
    
    return 0;

}