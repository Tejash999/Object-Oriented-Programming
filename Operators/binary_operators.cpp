// You are given a Rational class that represents rational numbers (fractions). The class has two private member variables: numerator (to store the numerator) and denominator (to store the denominator) of the rational number. Your task is to overload the binary operators +, -, *, and / for this class to perform arithmetic operations with rational numbers. Make sure to simplify the rational numbers after performing arithmetic operations to represent them in their simplest form (i.e., with the smallest possible integer numerator and denominator). You may assume that the input rational numbers will have valid values, and the denominator will never be zero.

#include <iostream>
#include <string>
using namespace std;

class Rational
{
private:
    int numerator, denominator;

public:
    Rational()
    {
    }
    Rational(int num, int den)
    {
        numerator = num;
        denominator = den;
    }
    void input()
    {
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
    }
    void display()
    {
        cout << numerator << endl
             << denominator << endl
             << endl;
    }
    Rational operator+(Rational X)
    {
        Rational R1, R2;
        R2.numerator = numerator * X.denominator;
        R2.denominator = denominator * X.denominator;
        X.numerator = X.numerator * denominator;
        X.denominator = X.denominator * denominator;
        R1.numerator = R2.numerator + X.numerator;
        R1.denominator = R2.denominator;
        for (int i = R1.denominator; i >= 1; i--)
        {
            if ((R1.denominator % i == 0) && (R1.numerator % i == 0))
            {
                R1.denominator = R1.denominator/i;
                R1.numerator = R1.numerator/i;
            }
        }
        return R1;
    }
    Rational operator-(Rational X)
    {
        Rational R1, R2;
        R2.numerator = numerator * X.denominator;
        R2.denominator = denominator * X.denominator;
        X.numerator = X.numerator * denominator;
        X.denominator = X.denominator * denominator;
        R1.numerator = R2.numerator - X.numerator;
        R1.denominator = R2.denominator;
        for (int i = R1.denominator; i >= 1; i--)
        {
            if ((R1.denominator % i == 0) && (R1.numerator % i == 0))
            {
                R1.denominator = R1.denominator/i;
                R1.numerator = R1.numerator/i;
            }
        }
        return R1;
    }
    Rational operator * (Rational X)
    {
        Rational R1;
        R1.numerator = numerator * X.numerator;
        R1.denominator = denominator * X.denominator;
        for (int i = R1.denominator; i >= 1; i--)
        {
            if ((R1.denominator % i == 0) && (R1.numerator % i == 0))
            {
                R1.denominator = R1.denominator/i;
                R1.numerator = R1.numerator/i;
            }
        }
        return R1;
    }
    Rational operator / (Rational X)
    {
        Rational R1;
        R1.numerator = numerator * X.denominator;
        R1.denominator = denominator * X.numerator;
        for (int i = R1.denominator; i >= 1; i--)
        {
            if ((R1.denominator % i == 0) && (R1.numerator % i == 0))
            {
                R1.denominator = R1.denominator/i;
                R1.numerator = R1.numerator/i;
            }
        }
        return R1;
    }
};

int main()
{
    Rational R1(3,5), R2(2,7), R3, R4, R5, R6;
    // R1.input();
    // R2.input();
    R3 = R1 + R2;
    R4 = R1 - R2;
    R5 = R1 * R2;
    R6 = R1 / R2;
    R3.display();
    R4.display();
    R5.display();
    R6.display();
    return 0;
}