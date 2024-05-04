/*Write a program to read inputs from a keyboard and display the output in the monitor using Input/Output streams.*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    float flt;
    double dou;
    char character;
    string str;
    cout << "Enter an integer number: ";
    cin >> num;
    cout << "Enter a floating number: ";
    cin >> flt;
    cout << "Enter a double number: ";
    cin >> dou;
    cout << "Enter a character: ";
    cin >> character;
    cout << "Enter a string: ";
    getline(cin>>ws,str);
    cout << "You entered " << num << " as integer." << endl;
    cout << "You entered " << flt << " as float." << endl;
    cout << "You entered " << dou << " as double." << endl;
    cout << "You entered " << character << " as character." << endl;
    cout << "You entered " << str << " as string." << endl;
    return 0;
}