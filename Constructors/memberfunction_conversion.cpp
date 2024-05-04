//Q no 2 You are provided with a Time class that represents time in hours and minutes. The class has two private member variables: hours (to store the time in hours) and minutes (to store the time in minutes). Your task is to implement a member function that allows conversion from Time to int, representing the total minutes.

#include<iostream>
using namespace std;

class Time
{
    int hours, minutes;
public:
    void input()
    {
        cout << "Enter time in hour: ";
        cin >> hours;
        cout << "Enter time in minutes: ";
        cin >> minutes;
    }
    operator int()
    {
        return hours * 60 + minutes;
    }
};

int main()
{
    Time T;
    T.input();
    int a = T;
    cout << "Time is " << a << " minutes." << endl;
    return 0;
}