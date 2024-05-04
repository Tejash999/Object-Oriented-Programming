/*Implement a macro in C++ called "SQUARE" that takes an argument and returns the square of that number. Use macro expansion techniques to compute the square value without using any built-in mathematical functions.*/

#include <iostream>
using namespace std;

#define SQUARE(num)(num*num)

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The square of " << number << " is " << SQUARE(number) << endl;
    return 0;
}