#include <iostream>
#include <cmath>


int main()
{
    double height;
    double weight;
    double bmi;


    std::cout<< "******** BMI Calculator ********\n";
    
    std::cout << "Enter your height: ";
    std::cin >> height;
    height = pow(2, height/100);

    std::cout<< "Enter the weight: ";
    std::cin >> weight;

    bmi = weight/height;
    std::cout<< "The BMI is: " << bmi;




    std::cout<< "\n********************************";


    return 0;
}