//Write a C++ function called updateEmployeeSalary that takes a reference parameter salary and increases it by a given percentage. In the main function, prompt the user to enter an employee's current salary and the percentage increase. Call the updateEmployeeSalary function, passing the entered salary and percentage increase. The function should modify the salary by increasing it based on the given percentage. Finally, print the original salary and the updated salary to verify the changes.

#include <iostream>
using namespace std;

void updateEmployeeSalary(double &salary, float percent)
{
    salary = salary + salary*percent/100;
}

int main()
{
    double salary;
    float percent;
    cout << "Enter the salary of the employee: ";
    cin >> salary;
    cout << "Enter the percent increament of the salary: ";
    cin >> percent;
    cout << "The original salary is: " << salary << endl;
    updateEmployeeSalary(salary, percent);
    cout << "The updated salary is: " << salary << endl;
    return 0;
}