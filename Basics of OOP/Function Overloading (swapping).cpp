/*WAP to swap values of two integers, two characters, two floats and two strings respectively using function overloading.*/

#include <iostream>
#include <string>
using namespace std;

void swap(int *variable_1, int *variable_2)
{
    int *temp_variable;
    *temp_variable = *variable_1;
    *variable_1 = *variable_2;
    *variable_2 = *temp_variable;
}
void swap(char *variable_1, char *variable_2)
{
    char *temp_variable;
    *temp_variable = *variable_1;
    *variable_1 = *variable_2;
    *variable_2 = *temp_variable;
}
void swap(float *variable_1, float *variable_2)
{
    float *temp_variable;
    *temp_variable = *variable_1;
    *variable_1 = *variable_2;
    *variable_2 = *temp_variable;
}
void swap(string *variable_1, string *variable_2)
{
    string *temp_variable;
    *temp_variable = *variable_1;
    *variable_1 = *variable_2;
    *variable_2 = *temp_variable;
}

int main()
{
    int integer1, integer2;
    float float1, float2;
    char character1, character2;
    string str1, str2;

    cout << "Enter first character:" << endl;
    cin >> character1;
    cout << "Enter second character:" << endl;
    cin >> character2;
    // cout << character1 << "  " << character2;
    swap(&character1, &character2);
    cout << "After swaping, first and second character are : " << character1 << " " << character2 << endl;

    cout << "Enter first and second integer value respectively:" << endl;
    cin >> integer1 >> integer2;
    swap(&integer1, &integer2);
    cout << "After swaping, first and second integer value are : " << integer1 << " " << integer2 << endl;

    cout << "Enter first and second float value respectively:" << endl;
    cin >> float1 >> float2;
    swap(&float1, &float2);
    cout << "After swaping, first and second float value are : " << float1 << " " << float2 << endl;

    cout << "Enter first and second string respectively:" << endl;
    cin >> str1 >> str2;
    swap(&str1,&str2);
    cout << "After swaping, first and second string are : " << str1 << " " << str2 << endl;
    return 0;
}