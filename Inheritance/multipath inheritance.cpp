/*Q no 5. Develop a C++ program to exemplify multipath inheritance within a software development context. The scenario involves four classes:
Employee, Programmer, Manager, and TeamMember.

Employee Class:
➢ Base class Employee with a protected attribute employeeID and method displayEmployeeInfo() shows the employee's ID.
Programmer Class:
➢ Derived from Employee, introduces programmingLanguage attribute and method displayLanguage() displays the programming language.
Manager Class:
➢ Derived from Employee, introduces department attribute and method displayDepartment() shows the managed department.
TeamMember Class:
➢ Derived from both Programmer and Manager, inheriting attributes and method displayTeamInfo() calls methods from base classes.
Design a program that:
a. Creates a TeamMember instance, configures attributes and demonstrates ambiguity arising from multipath inheritance in method calls.
b. Resolves ambiguity using scope resolution to access specific base class methods and explain how multipath inheritance ambiguity is tackled with scope resolution.*/

#include <iostream>
using namespace std;

class Employee
{
protected:
    int employeeID;
public:
    Employee()
    {
        employeeID = 1021;
    }
    void displayEmployeeInfo()
    {
        cout << "The ID of the employee is " << employeeID << endl;
    }

};

class Programmer : public Employee
{
protected:
    string programmingLanguage;
public:
    Programmer()
    {
        programmingLanguage = "C++";
    }
    void displayLanguageg()
    {
        cout << "The language is " << programmingLanguage << endl;
    }
};

class Manager : public Employee
{
protected:
    string department;
public:
    Manager()
    {
        department = "IT";
    }
    void displayDepartment()
    {
        cout << "The department is " << department << endl;
    }
};

class TeamMember : public Programmer, public Manager
{
public:
    void displayTeamInfo()
    {
        Programmer::displayEmployeeInfo();
        displayLanguageg();
        displayDepartment();
    }
};

int main()
{
    TeamMember T;
    T.displayTeamInfo();
    return 0;
}