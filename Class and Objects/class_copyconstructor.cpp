// 3. Create a C++ class called 'Person' with a constructor that initializes the name and age member variables. Implement a copy constructor that creates a new Person object by copying the name and age from an existing object. Show the usage of both constructors by creating an object named 'person1' with name 'Sunil' and age 25. Then, use the constructors to create another object named 'person2' with the same name and age as 'person1'. Print the details (name and age) of 'person2'.

#include <iostream>
#include <string>
using namespace std;
class Person
{
    string name;
    int age;

public:
    Person()
    {
        name = "Sunil";
        age = 25;
    }
    Person(Person &P)
    {
        name = P.name;
        age = P.age;
    }
    void display()
    {
        cout << "Name: " << name << endl
             << "Age: " << age;
    }
};
int main()
{
    Person person1, person2;
    person2 = Person(person1);
    person2.display();
    return 0;
}