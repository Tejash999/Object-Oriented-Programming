/*Q no. 6. You have a BankAccount base class, and your objective is to implement constructors and a destructor in it. Additionally, you'll derive a specialized SavingsAccount class from the base class.
BankAccount Class:
➢ Create a base class named BankAccount with attributes accountNumber (string): Account number and balance (double):
Account balance.
➢ Implement a parameterized constructor to initialize attributes and implement a destructor displaying "Bank account with account
number [accountNumber] is being closed."
SavingsAccount Class:
➢ Derive SavingsAccount from BankAccount and add an attribute interestRate (double): Annual interest rate.
➢ Implement a parameterized constructor to initialize attributes.
Write a C++ program that:
a. Creates instances of SavingsAccount and sets attributes.
b. Demonstrates the behavior of constructors and the destructor during object creation and destruction.*/

#include <iostream>
using namespace std;

class BankAccount
{
protected:
    string accountNumber;
    double balance;
public:
    BankAccount(string AcNo, double blc)
    {
        accountNumber = AcNo;
        balance = blc;
    }
    ~BankAccount()
    {
        cout << accountNumber << " has been distroyed with balance " << balance << "." << endl;
    }
};

class SavingsAccount : public BankAccount
{
    double interestRate;
public:
    SavingsAccount(double intRet, string AccNo, double Balance) : BankAccount(AccNo, Balance)
    {
        interestRate = intRet;
    }

};

int main()
{
    SavingsAccount S(15.5,"01234",1200);
    return 0;
}