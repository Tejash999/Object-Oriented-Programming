// 3. WAP to write records of students in a file and display the records of the students according to the descending order of marks obtained by them.

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
        cout << endl
             << endl;
    }
    void display()
    {
        cout << "The name of the student is: " << name << endl;
        cout << "The roll no of the student is: " << roll << endl;
        cout << "The address of the student is: " << address << endl;
        cout << "The marks of the student is: " << marks << endl
             << endl;
    }
    float retMarks()
    {
        return marks;
    }
};
void fileInput()
{
    fstream file;
    student S[10];
    file.open("Qno3.txt", ios::out | ios::binary);
    for (int i = 0; i < 3; i++)
    {
        S[i].input();
        file.write((char *)&S[i], sizeof(S[i]));
    }
    file.close();
}
void fileOutput()
{
    fstream file;
    student S[10];
    int x = 0;
    file.open("Qno3.txt", ios::in);
    while (!file.eof())
    {
        file.read((char *)&S[x], sizeof(S[x]));
        x++;
    }
    x--;
    for (int i = 0; i < x - 1; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (S[j].retMarks() > S[i].retMarks())
            {
                student A = S[j];
                S[j] = S[i];
                S[i] = A;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        S[i].display();
    }
    file.close();
}

int main()
{
    student S;
    fileInput();
    fileOutput();
    return 0;
}
