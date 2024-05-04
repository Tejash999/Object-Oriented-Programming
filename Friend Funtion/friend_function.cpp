//Q no. 1. Create a C++ class called Fraction that represents a fraction with private member variables numerator and denominator. Implement a non-member function called multiply() that takes two Fraction objects as parameters and returns the result of multiplying the fractions together as a new Fraction object. Make the multiply() function a friend of the Fraction class using the friend keyword. Demonstrate the usage of the multiply() function in a program.

#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;
    int getHCF(int a, int b)
    {
        if (b==0)
        {
            return a;
        }
        return getHCF(b, a%b);
    }
public:
    Fraction()
    {

    }
    Fraction(int neu, int den)
    {
        int HCF = getHCF(neu, den);
        numerator = neu / HCF;
        denominator = den / HCF;
    }
    friend Fraction multiply(Fraction, Fraction);

    void display()
    {
        cout << numerator << endl << denominator << endl;
    }
};

Fraction multiply(Fraction F1, Fraction F2)
{
    int numerator = F1.numerator * F2.numerator;
    int denominator = F1.denominator * F2.denominator;
    return Fraction(numerator, denominator);
}

int main()
{
    Fraction F1(3,5) , F2(5,3), F3;
    F3 = multiply(F1,F2);
    F3.display();
    return 0;
}