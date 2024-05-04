// WAP to implement return by reference.

#include <iostream>
using namespace std;

int &Apple(int &a)
{
    return a;
}

int main()
{
    int a = 2;
    Apple(a) = 4;
    cout << a;
    return 0;
}