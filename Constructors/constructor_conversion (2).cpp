//Q no 3. You are provided with a LengthInMeters class that represents length in meters. The class has one private member variable meters, which is of type int. Your task is to implement a constructor that allows conversion from LengthInMeters to LengthInFeetAndInches. Your task is to implement a LengthInFeetAndInches class that represents length in feet and inches and includes a constructor to allow conversion from LengthInMeters to LengthInFeetAndInches.

#include <iostream>
using namespace std;
class LengthInFeetAndInchs;


class LengthInMeters
{
    int meters;
public:
    LengthInMeters()
    {
        meters = 0;
    }
    LengthInMeters(int A)
    {
        meters = A;
    }
    int ret_meter()
    {
        return meters;
    }
};

class LengthInFeetAndInchs
{
    int feet, inch;
public:
    void Display()
    {
        cout << "Your height is " << feet << " feet " << inch << " inch." << endl;
    }
    LengthInFeetAndInchs(LengthInMeters M)
    {
        int X = M.ret_meter();
        inch = X * 39.37;
        feet = inch / 12;
        inch = inch % 12;
    }
    LengthInFeetAndInchs()
    {
        feet = 0;
        inch = 0;
    }
};

int main()
{
    LengthInFeetAndInchs L1;
    LengthInMeters L2(59);
    L1 = L2;
    L1.Display();
    return 0;
}