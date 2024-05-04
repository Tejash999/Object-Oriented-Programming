//1. WAP to find largest of two numbers using inline function.

#include <iostream>
using namespace std;

inline void largest(int num1, int num2)
{
    if(num1 > num2)
    {
        cout << num1 << " is largest.";
    }
    else
    {
        cout << num2 << " is largest.";
    }
}

int main()
{
    int a, b;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    largest(a,b);
    return 0;
}