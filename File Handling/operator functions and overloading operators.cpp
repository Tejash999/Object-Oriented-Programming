// 6. Write operator functions as member of a class to overload arithmetic operator +,logical operator <= and stream operator << to operate on the objects of user defined type times(hour, minute, second)

#include <iostream>
using namespace std;
class times
{
    int hour, minute, second;

public:
    void input()
    {
        cout << "Enter the values for hour, minute and second:" << endl;
        cin >> hour >> minute >> second;
    }
    friend ostream &operator<<(ostream &, times &);
    friend istream &operator>>(istream &, times &);

    times operator+(times t)
    {
        times temp;
        int sum = second + minute * 60 + hour * 60 * 60 + t.second + t.minute * 60 + t.hour * 60 * 60;
        temp.hour = sum / 3600;
        temp.minute = (sum % 3600) / 60;
        temp.second = (sum % 3600) % 60;
        return temp;
    }
    void operator<=(times t)
    {
        int mag1 = second + minute * 60 + hour * 60 * 60;
        int mag2 = t.second + t.minute * 60 + t.hour * 60 * 60;
        if (mag1 < mag2)

            cout << "First object is less than second object:" << endl;

        if (mag1 == mag2)

            cout << "First object is equal to the second object:" << endl;
    }
};
ostream &operator<<(ostream &os, times &t)
{
    os << t.hour << "Hour" << t.minute << "Minute and" << t.second << "Second" << endl;
    return os;
}
istream &operator>>(istream &in, times &t)
{
    in >> t.hour >>t.minute >> t.second;
    return in;
}

int main()
{

    times t1, t2;
    t1.input();
    t2.input();
    cout << "The given timess are:" << endl;
    cout << t1;
    cout << t2;
    times t3 = t1 + t2;
    cout << "After the addition of two times objects result=" << endl;
    cout << t3;
    t1 <= t2;
    return 0;
}