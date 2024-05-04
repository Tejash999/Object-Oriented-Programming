/* 4. Write a C++ program that defines a class called "Rectangle" with private member variables "length" and "width". The class should have the following member functions:
i. A default constructor that initializes both "length" and "width" to 0.
ii. A parameterized constructor that takes two arguments and initializes "length" and "width" accordingly.
iii. A function called "calculateArea" that calculates and returns the area of the rectangle.
iv. A function called "doubleSize" that takes a Rectangle object as an argument, doubles its length and width, and returns the modified object.
In the main function, create a Rectangle object using the parameterized constructor with the values 4 and 5. Then, pass this object to the "doubleSize" function, and display the area of the modified rectangle.*/

#include <iostream>
using namespace std;

class Rectangel
{
    float length, width;

public:
    Rectangel()
    {
        length = 0;
        width = 0;
    }
    Rectangel(float l, float w)
    {
        length = l;
        width = w;
    }
    float calculateArea()
    {
        return length * width;
    }
    Rectangel doubleSize(Rectangel &R)
    {
        length = R.length * 2;
        width = R.width * 2;
        return Rectangel(length, width);
    }
};
int main()
{
    Rectangel R1(4, 5);
    Rectangel R2;
    R2.doubleSize(R1);
    float Area;
    Area = R2.calculateArea();
    cout << "The area of rectangle is: " << Area;
    return 0;
}