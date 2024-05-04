/*3. Write a C++ program that demonstrates the dynamic memory allocation for objects and object arrays. Create a class called Rectangle with private member variables length and width and member functions to set and display the dimensions of a rectangle. Implement the following functionalities:
i. Dynamically create a single Rectangle object by allocating memory using new and set the dimensions of the rectangle object.
ii. Display the dimensions of the rectangle object.
iii. Dynamically create an array of Rectangle objects by allocating memory using new and set the dimensions of each rectangle in the array.
iv. Display the dimensions of each rectangle in the array.*/

#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    int length, width;
public:
    void input()
    {
        cout << "Enter length and width of rectangle:"<<endl;
        cin >> length>>width;
    }
    void display()
    {
        cout << "The length is " << length <<" and width is " << width<<endl;
    }
};

int main()
{
    //for single object
    Rectangle *Rec1;
    Rec1 = new Rectangle;
    Rec1->input();
    Rec1->display();
    delete Rec1;
    //for array of object
    Rectangle *R;
    R = new Rectangle[3];
    for (int i = 0; i < 3; i++)
    {
        R[i].input();
    }
    for (int i = 0; i < 3; i++)
    {
        (R+i)->display();
    }
    delete[] R;
    return 0;
}