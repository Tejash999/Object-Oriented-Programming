/*4. Create a C++ program that simulates a banking system. Define a class called BankAccount with private member variables accountNumber, balance, and a static member variable totalAccounts to keep track of the total number of bank accounts created. Implement the following functionalities:
i. A constructor that initializes the accountNumber and balance variables and increments the totalAccounts count.
ii. A member function deposit() that takes an amount as input and adds it to the balance of the account.
iii. A member function withdraw() that takes an amount as input and subtracts it from the balance, only if the balance is sufficient.
iv. A static member function getTotalAccounts() that returns the total number of bank accounts created.*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    static int totalAccounts;
    string accountNumber;
    double balance;
public:
    BankAccount(string accnum, double money)
    {
        accountNumber = accnum;
        balance = money;
        totalAccounts++;
    }
    void deposit()
    {
        double money;
        cout << "Enter the amount you wanna deposit:"<<endl;
        cin>>money;
        balance += money;
        cout << "Your total balance is: " << balance << endl;
    }
    void withdraw()
    {
        double money;
        cout << "Enter the amount you wanna withdraw:"<<endl;
        cin>>money;
        if (balance >= money)
        {
            balance -= money;
            cout << "Your total balance is: " << balance << endl;
        }
        else
        {
            cout << "You have insufficient balance!" << endl;
        }       
    }
    int getTotalAccounts()
    {
        return totalAccounts;
    }

};
int BankAccount::totalAccounts;

int main()
{
    BankAccount Acc1("1234",100.00), Acc2("2341",200.00), Acc3("3412",300.00), Acc4("4123",400.00);
    Acc1.deposit();
    Acc1.withdraw();
    cout << "The total number of accounts are: " << Acc1.getTotalAccounts() << endl;
    return 0;
}