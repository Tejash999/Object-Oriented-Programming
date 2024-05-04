//Q no 1. Create a class PositiveInteger that represents a positive integer. Implement an overloaded unary operator - to perform negation on a positive integer and return its negated value. The PositiveInteger class should ensure that the value remains positive at all times, even after negation. Use friend function to overload unary operator -.

#include <iostream>
#include <string>
using namespace std;

class PositiveInteger
{
    int Num;
public:
    PositiveInteger(int N)
    {
        Num = N;
    }
    int operator - ()
    {
        int N1;
        N1 = -Num;
        return N1;
    }
    void display()
    {
        cout << Num;
    }
};

int main()
{
    PositiveInteger P(5);
    int a = -P;
    cout << a << endl;
    P.display();
    return 0;
}