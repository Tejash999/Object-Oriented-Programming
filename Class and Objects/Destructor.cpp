// 5. WAP to show the destructor call such that it prints the message “memory is released”.

#include <iostream>
using namespace std;

class Memory
{
    int a;
public:
    Memory(int z)
    {
        a = z;
    }
    ~Memory()
    {
        cout << "Memory is relaesed." << endl;
    }
    void out()
    {
        cout << a << endl;
    }
};
int main()
{
    {
    Memory M1(5), M2(6);
    M1.out();
    M2.out();
    }
    return 0;
}