/*WAP to implement endl, setw, setprecision,fixed and scientific Manipulator.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a = 1.23456;
    cout << setw(10) << a << endl;
    cout << setprecision(3) << a << endl;
    cout << fixed << setprecision(6) << a << endl;
    cout << scientific << 12345683.6 << endl;
    return 0;
}