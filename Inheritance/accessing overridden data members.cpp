//Q no. 3. Write a program to access the overridden data members and member functions of question number 2 by the help of a member function of a derived class and also by the help of a derived class object.

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    void input()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }
    void displayInfo()
    {
        cout << "Your name is: " << name << endl << "Your age is: " << age << endl;
    }
};

class Faculty : public Person
{
    string department;
public:
    void input()
    {
        Person::input();
        cout << "Enter department: ";
        cin >> department;
    }
    // void input()
    // {
    //     cout << "Enter your name: ";
    //     cin >> name;
    //     cout << "Enter your age: ";
    //     cin >> age;
    //     cout << "Enter department: ";
    //     cin >> department;
    // }
    void displayInfo()
    {
        Person::displayInfo();
        cout << "Department :" << department << endl;
    }
    // void displayInfo()
    // {
    //     cout << "Your name is: " << name << endl << "Your age is: " << age << endl;
    //     cout << "Department :" << department << endl;
    // }
};

class Staff : public Person
{
    string Position;
public:
    void input()
    {
        Person::input();
        cout << "Enter Position: ";
        cin >> Position;
    }
    void displayInfo()
    {
        Person::displayInfo();
        cout << "Position:" << Position << endl;
    }
};

int main()
{
    Faculty F;
    Staff S;
    F.input();
    F.displayInfo();
    S.input();
    S.displayInfo();
    return 0;
}