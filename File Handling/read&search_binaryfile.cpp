//2. Write a class student with roll, name, address, marks as member variables and member functions to read and display the information of the students. Write records of 10 students in a binary file and also read the records of the student from the binary file. Also search a specific record of the student using roll number as a key from the user input.

#include <iostream>
#include <fstream>
using namespace std;

class student
{
    int roll;
    string name, address;
    float marks;
public:
    void input()
    {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll no of the student: ";
        cin >> roll;
        cout << "Enter the address of the student: ";
        cin >> address;
        cout << "Enter marks of the student: ";
        cin >> marks;
        cout << endl << endl;
    }
    void display()
    {
        cout << "The name of the student is: " << name << endl;
        cout << "The roll no of the student is: " << roll << endl;
        cout << "The address of the student is: " << address << endl;
        cout << "The marks of the student is: " << marks << endl << endl;
    }
    void fileInput()
    {
        fstream file;
        student S[10];
        file.open("Qno2.txt",ios::out|ios::binary);
        for (int  i = 0; i < 3; i++)
        {
            S[i].input();
            file.write((char*)&S[i],sizeof(S[i]));
        }
        file.close();
    }
    void fileOutput()
    {
        fstream file;
        student S[10];
        int i = 0;
        file.open("Qno2.txt",ios::in);
        while(!file.eof())
        {
            file.read((char*)&S[i],sizeof(S[i]));
            S[i].display();
            i++;
            
        }
        file.close();
    }
    void SearchRoll(int rollNo)
    {
        fstream file;
        student S[10];
        int i = 0;
        file.open("Qno2.txt",ios::in);
        while(!file.eof())
        {
            file.read((char*)&S[i],sizeof(S[i]));
            if(S[i].roll == rollNo)
            {
                S[i].display(); 
            }
            i++;
            
        }
        file.close();
    }
};

int main()
{
    int roll;
    student S;
    S.fileInput();
    //S.fileOutput();
    cout << "Enter roll number: " ;
    cin >>  roll;
    S.SearchRoll(roll);
    return 0;
}