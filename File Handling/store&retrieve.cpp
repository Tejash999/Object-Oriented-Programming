// 4. WAP to store and retrieve all the information of the students in a file. Also make sure to read the nth information of a student from the file and display it.

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
    file.open("Qno4.txt", ios::out | ios::binary);
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
    file.open("Qno4.txt", ios::in);
    while (!file.eof())
    {
        file.read((char *)&S[x], sizeof(S[x]));
        S[x].display();
        x++;
    }
    file.close();
}
void nRecord()
{
    fstream fin;
    student s;
    int n;
    fin.open("Qno4.txt",ios::in|ios::binary);
    cout<<"Enter the number of record to read:"<<endl;
    cin>>n;
    fin.seekg((n-1)*sizeof(s));
    fin.read((char*)&s,sizeof(s));
    s.display( );
    fin.close( );
}

int main()
{
    fileInput();
    fileOutput();
    nRecord();
    return 0;
}