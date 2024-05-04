// Q no. 1. WAP to implement public, private and protected inheritance.

#include <iostream>
using namespace std;

class Teacher
{
    string name;
protected:
    int age;
public:
    void input()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }
    void display()
    {
        cout << "Your name is: " << name << endl << "Your age is: " << age << endl;
    } 
};

class Maths : public Teacher
{
    string subject;
public:
    void input()
    {
        Teacher::input();
        subject = "Maths";
    }
    void display()
    {
        Teacher::display();
        cout << "Your subject is: " << subject << endl;
    }


};

class English : protected Teacher
{
    string subject;
public:
    void input()
    {
        Teacher::input();
        subject = "English";
    }
    void display()
    {
        Teacher::display();
        cout << "Your subject is: " << subject << endl;
    }

};

class OOP : private Teacher
{
    string subject;
public:
    void input()
    {
        Teacher::input();
        subject = "OOP";
    }
    void display()
    {
        Teacher::display();
        cout << "Your subject is: " << subject << endl;
    }

};

int main()
{
    Maths M;
    English E;
    OOP O;
    M.input();
    M.display();
    E.input();
    E.display();
    O.input();
    O.display();
    return 0;
}