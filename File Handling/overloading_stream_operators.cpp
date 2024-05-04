// 5. Write a program to overload stream operators to read and display the time units.

#include <iostream>
using namespace std;
class times
{
    int hour, minute, second;
public:
    friend istream &operator>>(istream &, times &);
    friend ostream &operator<<(ostream &, times &);
};
istream &operator>>(istream &is, times &t)
{

    is >> t.hour >> t.minute >> t.second;
    return is;
}
ostream &operator<<(ostream &os, times &t)
{

    os << t.hour << "Hour" << t.minute << "Minute and" << t.second << "Second";
    return os;
}
int main()
{

    times t;
    cout << "Enter the time in hour, minute and second:" << endl;
    cin >> t;
    cout << "The entered time is:";
    cout << t;
    return 0;
}