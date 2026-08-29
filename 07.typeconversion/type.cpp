#include <iostream>

int main() {
    using std::cout;

/*Type Conversion: conversion of a value of one data type to another.
    Implicit = automatic 
    Explicit = Precede value with new data type. */
 
    // double x = (int) 3.14;
    // cout << x;

    // int y = (double) 22.123;
    // cout << y;

    // char a = 100;
    // cout << (char) 123;
    int correct = 9;
    int questions = 10;
    double score = correct/(double) questions * 100;



    cout << score << "%";


    return 0;
}