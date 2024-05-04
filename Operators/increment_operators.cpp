//Q no 2. Create a class TimeCounter to represent a time counter in seconds. Implement the prefix and postfix increment operators ++ to increase the time counter by one second. The class provides separate functions for prefix and postfix increment operations to showcase the difference in behavior between the operators. The example usage demonstrates the time counter's functionality with appropriate test cases, displaying the updated time counter after each increment operation.

#include <iostream>
using namespace std;

class TimeCounter
{
    int seconds;
public:
    TimeCounter()
    {
        seconds = 0;
    }
    TimeCounter(int vl)
    {
        seconds = vl;
    }
    void display()
    {
        cout << "The seconds is : " << seconds << endl;
    }
    TimeCounter operator ++ ()
    {
        ++seconds;
    }
    TimeCounter operator ++ (int)
    {
        seconds++;
    }
};
int main()
{
    TimeCounter C1(5);
    ++C1;
    C1.display();
    C1++;
    C1.display();
    return 0;
}