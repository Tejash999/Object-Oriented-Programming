//Q no. 2. Suppose you are building a simple drawing application. You have a base class called Shape and two derived classes called Circle and Square. Each class has a member function void draw() that should print the shape's name followed by " is drawn." Create the necessary classes with appropriate member functions and inheritance relationships. Then, write a program that demonstrates the concept of runtime polymorphism by using an array of pointers to Shape objects, where some pointers point to Circle objects and some to Square objects. Use these pointers to call the draw() function for each object.

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Shape is drawn." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle is drawn." << endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Square is drawn." << endl;
    }
};

int main()
{
    Shape *S[3], A;
    Circle C;
    Square S1;
    S[0] = &A;
    S[1] = &C;
    S[2] = &S1;
    S[0]->draw();
    S[1]->draw();
    S[2]->draw();
    return 0;
}