/*WAP to find the volume of a cube, cuboid and cylinder using the concept of function overloading.*/

#include <iostream>
#include <cmath>
using namespace std;

float volume(float length)
{
    return pow(length, 3);
}
float volume(float length, float breadth, float height)
{
    return length * breadth * height;
}
float volume(float radius, float height)
{
    return 3.14 * radius * height;
}

int main()
{
    float length, breadth, height, radius;
    cout << "Enter the length of cube." << endl;
    cin >> length;
    cout << "The volume of cube is " << volume(length) << endl;
    cout << "Enter the length, breadth and height of cuboid respectively." << endl;
    cin >> length >> breadth >> height;
    cout << "The volume of cube is " << volume(length, breadth, height) << endl;
    cout << "Enter the radius and height of cylinder respectively." << endl;
    cin >> radius>>height;
    cout << "The volume of cube is " << volume(radius,height) << endl;
    return 0;
}