// 1. Create a class time having data members as hour, minute and second. Then add two time objects taking object as an function argument and subtract two time objects taking objects as an function arguments and as well as returning object by the function concept. Implement nameless temporary object concept somewhere in your code.

#include <iostream>
#include <string>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    Time add(Time t1, Time t2)
    {
        int total = ((t1.hour * 3600 + t1.minute * 60 + t1.second) + (t2.hour * 3600 + t2.minute * 60 + t2.second));
        hour = total / 3600;
        minute = (total % 3600) / 60;
        second = (total % 3600) % 60;
        return Time(hour, minute, second);
    }
    Time subtract(Time t1, Time t2)
    {
        int total = ((t1.hour * 3600 + t1.minute * 60 + t1.second) - (t2.hour * 3600 + t2.minute * 60 + t2.second));
        if (total < 0)
            total = -total;
        hour = total / 3600;
        minute = (total % 3600) / 60;
        second = (total % 3600) % 60;
        return Time(hour, minute, second);
    }
    void display()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};
int main()
{
    Time t1(2,5,4), t2(3,5,2), t3, t4, t5, t6;
    cout << "The sum of the time is: " << endl;
    t3 = t4.add(t1, t2);
    t3.display();
    cout << "The difference of the time is: " << endl;
    t5 = t6.subtract(t1, t2);
    t5.display();
    return 0;
}