// Q no. 1 You are provided with a Height class that represents a person's height in the feet-inch system. The class has two private member variables: feet(to store the height in feet) and inches (to store the height in inches). Your task is to implement a constructor that allows conversion from int (representing height in inches) to Height. Try to implement given conversion using explicit constructor.

#include <iostream>
using namespace std;

class Height
{
    int foot;
    int inch;

public:
     Height()
    {
    }
    Height(int hgt)
    {
        foot = hgt / 12;
        inch = hgt % 12;
    }
    void display()
    {
        cout << "Your height is " << foot << " feet " << inch << " inch." << endl;
    }
};

int main()
{
    int a = 25;
    Height H;
    H=a;
    H.display();
    return 0;
}