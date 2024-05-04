//Q no. 1. Suppose you have a base class called Shape and a derived class called Circle. The Shape class has a member function void printInfo() that prints "This is a shape." and the Circle class has an additional member function void printRadius() that prints the radius of the circle. The Circle class inherits publicly from the Shape class. Write a program that demonstrates the use of pointers to the base class and the derived class. Create an array of pointers to Shape objects, where some pointers point to Shape objects and some to Circle objects. Use these pointers to call the printInfo() function for each object and also call the printRadius() function for the objects that are Circle instances.

#include <iostream>
using namespace std;

class Shape
{
public:
    void printInfo()
    {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape
{
    int radius; 
public:
    Circle()
    {
        radius = 5;
    }
    void printRadius()
    {
        cout << "The radius is: " << radius << endl;
    }
};

int main()
{
    Shape *S[2], A;
    Circle C[2], *CR;
    S[0] = &C[0];
    S[1] = &A;
    CR = &C[1];

    S[1]->printInfo();
    S[0]->printInfo();
    CR->printRadius();
    return 0;
}