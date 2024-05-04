//Q no 4. Write a program to compare magnitude of complex numbers by overloading <,>,== and != operators

#include <iostream>
#include <cmath>
using namespace std;

class complexx
{
    int real, imag;
public:
    complexx()
    {
        real = 0;
        imag = 0;
    }
    complexx(int rl, int im)
    {
        real = rl;
        imag = im;
    }
    void input()
    {
        cout << "Enter real number: ";
        cin >> real;
        cout << "Enter imaginary number: ";
        cin >> imag;
    }
    bool operator < (complexx C)
    {
        float M1 = sqrt(pow(real,2)+pow(imag,2));
        float M2 = sqrt(pow(C.real,2)+pow(C.imag,2));
        if (M1 < M2)
            return true;
        else
            return false;
    }
    bool operator > (complexx C)
    {
        float M1 = sqrt(pow(real,2)+pow(imag,2));
        float M2 = sqrt(pow(C.real,2)+pow(C.imag,2));
        if (M1 > M2)
            return true;
        else
            return false;
    }
    bool operator == (complexx C)
    {
        float M1 = sqrt(pow(real,2)+pow(imag,2));
        float M2 = sqrt(pow(C.real,2)+pow(C.imag,2));
        if (M1 == M2)
            return true;
        else
            return false;
    }
    bool operator != (complexx C)
    {
        float M1 = sqrt(pow(real,2)+pow(imag,2));
        float M2 = sqrt(pow(C.real,2)+pow(C.imag,2));
        if (M1 != M2)
            return true;
        else
            return false;
    }
};
int main()
{
    complexx C1, C2;
    C1.input();
    C2.input();
    if (C1 < C2) cout << "C2 is greater than C1" << endl;
    if (C1 > C2) cout << "C2 is smaller than C1" << endl;
    if (C1 == C2) cout << "C2 is equal tp C1" << endl;
    if (C1 != C2) cout << "C2 is not equal to C1" << endl;
    return 0;
}