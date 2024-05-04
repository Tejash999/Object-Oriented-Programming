// Q no 4. You are provided with a LengthInMeters class that represents length in meters. The class has one private member variable meters, which is of type double. Your task is to implement a casting operator function that allows conversion from LengthInMeters to LengthInFeetAndInches.

#include <iostream>
using namespace std;
class LengthInFeetAndInchs;

class LengthInMeters
{
    double meters;

public:
    LengthInMeters()
    {
        meters = 0;
    }
    LengthInMeters(double A)
    {
        meters = A;
    }
    void display()
    {
        cout << "Height in meters is: " << meters << endl;
    }
    operator LengthInFeetAndInchs();
};

class LengthInFeetAndInchs
{
    int feet, inch;

public:
    void Display()
    {
        cout << "Your height is " << feet << " feet " << inch << " inch." << endl;
    }
    LengthInFeetAndInchs(int ft, int in)
    {
        feet = ft;
        inch = in;
    }
    LengthInFeetAndInchs()
    {
        feet = 0;
        inch = 0;
    }
};
LengthInMeters::operator LengthInFeetAndInchs()
{

    int X = meters;
    int inch = X * 39.37;
    int feet = inch / 12;
    inch = inch % 12;
    return LengthInFeetAndInchs(feet, inch);
}

int main()
{
    LengthInFeetAndInchs L1;
    LengthInMeters L2(59.15);
    L1 = L2;
    L1.Display();
    return 0;
}

