//Q no. 2. Create a C++ program involving classes Person, Faculty, and Staff. The base class Person contains private attributes name and age. The derived Faculty class adds a protected attribute department and overrides displayInfo() to include name, age, and department. Similarly, the derived Staff class adds a protected attribute position and overrides displayInfo() with name, age, and position.Write a program that creates instances of Faculty and Staff,sets their attributes and calls displayInfo() for both instances. Observe data member and member function overriding during compilation and execution.

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
    // void input()
    // {
    //     Person::input();
    //     cout << "Enter department: ";
    //     cin >> department;
    // }
    void input()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter department: ";
        cin >> department;
    }
    // void displayInfo()
    // {
    //     Person::displayInfo();
    //     cout << "Department :" << department << endl;
    // }
    void displayInfo()
    {
        cout << "Your name is: " << name << endl << "Your age is: " << age << endl;
        cout << "Department :" << department << endl;
    }
};

class Staff : public Person
{
    string Position;
public:
    // void input()
    // {
    //     Person::input();
    //     cout << "Enter Position: ";
    //     cin >> Position;
    // }
    void input()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter Position: ";
        cin >> Position;
    }
    // void displayInfo()
    // {
    //     Person::displayInfo();
    //     cout << "Position:" << Position << endl;
    // }
    void displayInfo()
    {
        cout << "Your name is: " << name << endl << "Your age is: " << age << endl;
        cout << "Position:" << Position << endl;
    }
};

int main()
{
    Faculty F;
    Staff S;
    F.Person::input();
    F.input();
    F.displayInfo();
    // S.input();
    // S.displayInfo();
    return 0;
}