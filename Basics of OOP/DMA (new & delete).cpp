/*WAP to implement dynamic memory allocation with new and delete operators (for both simple variable and array variable).*/

#include <iostream>
using namespace std;

int main()
{
    //for single variable.
    int *ptr = new(int);
    cout << "Enter a integer value: ";
    cin >> *ptr;
    cout << *ptr << endl;
    delete ptr;
    //for array variable.
    ptr = new(int);
    cout << "Enter an array of elements: " << endl;
    for (int i = 0; i < 5; i++)
        cin >> *(ptr+i);
    for (int i = 0; i < 5; i++)
        cout << *(ptr+i);
    delete[] ptr;
    return 0;
}