//Q no. 4. You're tasked with building a drawing application that supports various shapes. To achieve this, you decide to use an abstract class called Shape as the base class for different types of shapes. The Shape class has a pure virtual function double area() which needs to be implemented by each derived class. Additionally, the Shape class should have a member function void printInfo() const that prints "This is a shape."
//  Create the necessary classes with appropriate member functions and inheritance relationships. Write the program to demonstrate the concept of abstract classes by using an array of pointers to Shape objects, where some pointers point to specific shape objects such as Circle and Rectangle. Implement the area() function in the derived classes and use these pointers to call the printInfo() and area() functions for each object.

#include <iostream>
using namespace std;
const double PI = 3.14159;


class Shape
{
public:
    virtual double area() = 0;
    
};

class Circle : public Shape
{
    double radius;
public:
    Circle()
    {
        radius = 13;
    }
    double area()
    {
        return PI * radius * radius;
    }
    void printInfo()
    {
        cout << "The area of circle is: " << area() << endl;
    }
};

class Rectangle : public Shape
{
    double length, breadth;
public:
    Rectangle()
    {
        length = 25;
        breadth = 4;
    }
    double area()
    {
        return length*breadth;
    }
    void printInfo()
    {
        cout << "The area of rectangle is: " << area() << endl;
    }
};

int main()
{
    Shape *S[2];
    Circle C, *C1;
    Rectangle A, *R1;
    S[0] = &C;
    S[1] = &A;
    C1 = &C;
    R1 = &A;
    cout << S[0]->area() << endl;
    cout << S[1]->area() << endl;
    C1->printInfo();
    R1->printInfo();
    return 0;
}