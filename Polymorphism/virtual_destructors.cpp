//Q no. 5. You are building a simulation of a game involving characters and enemies. You have a base class called Character and a derived class called Enemy. Each class has a virtual destructor for proper memory cleanup. Additionally, the Character class has a member function void displayInfo() that prints "This is a character." and the Enemy class has an additional member function void displayType() that prints "This is an enemy." Create the necessary classes with appropriate member functions and inheritance relationships. Write a program that demonstrates the concept of virtual destructors by using an array of pointers to Character objects, where some pointers point to Character instances and some to Enemy instances. Use these pointers to call the displayInfo() and displayType() functions for each object. Implement the destructors to display a message when an object is destroyed.

#include <iostream>
using namespace std;

class Character
{
public:
    void displayInfo()
    {
        cout << "This is a character." << endl;
    }
    virtual~Character()
    {
        cout << "Character has been distroyed." << endl;
    }
};

class Enemy : public Character
{
public:
    void displayType()
    {
        cout << "This is an enamy." << endl;
    }
    ~Enemy()
    {
        cout << "Enemy has been distryoed." << endl;
    }
};

int main()
{
    
    Character *Ch[2];
    Enemy *En;
    Character A;
    Enemy E1, E2;
    
    Ch[0] = new Character;
    Ch[1] = new Enemy;
    En = new Enemy;

    Ch[0] = &A;
    Ch[1] = &E1;
    En = &E2;

    Ch[0]->displayInfo();
    Ch[1]->displayInfo();

    delete[] Ch;
    return 0;
}