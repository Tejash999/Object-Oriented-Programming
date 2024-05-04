//Q no 3. Develop a simple Banking System with two classes: Account and Transaction. The Account class represents bank accounts, including private data members for accountNumber, accountHolder, and balance, along with public member functions for initialization and data retrieval. The Transaction class handles individual transactions, containing private data members accountNumber, transactionType, and amount, and a constructor for transaction setup. Your task is to create a Friend function named processTransaction that links the Account and Transaction classes. This function should update the account balance based on the transaction type (deposit or withdrawal) and return the updated account balance. Implement the classes and function in C++ and demonstrate the banking system's functionality with appropriate test cases.

#include <iostream>
using namespace std;

class Transaction;

class Account
{
    int accountNumber;
    string accountHolder;
    double balance;
public:
    void input()
    {
        cout << "Enter your account number: ";
        cin >> accountNumber;
        cout << "Enter the name of account holder: ";
        cin >> accountHolder;
        cout << "Enter balance ammount: ";
        cin >> balance;
    }
    void output()
    {
        cout << "Your account number is " << accountNumber << endl << "Your name is " << accountHolder << endl << "Your balance is " << balance << endl;
    }
    friend void processTransaction(Account& , Transaction);
};

class Transaction
{
    int accountNumber;
    string transactionType;
    double amount;
public:
    Transaction(int accNo, string TransType, double Rokda)
    {
        accountNumber = accNo;
        transactionType = TransType;
        amount = Rokda;
    }
    friend void processTransaction(Account&, Transaction);

};

void processTransaction(Account &A, Transaction T)
{
    if (A.accountNumber==T.accountNumber)
    {
        if (T.transactionType == "Deposit")
        {
            A.balance += T.amount;
            cout << "Your account " << T.accountNumber << " has been sucessfully deposited NRs. " << T.amount << endl;
        }
        else if (T.transactionType == "Withdraw")
        {
            A.balance -= T.amount;
            cout << "NRs. " << T.amount << " has been sucessfully withdrawed form your account " << T.accountNumber << endl;

        }
        else
        {
            cout << "Invalid Transaction Type!!!" << endl;
        }
        
    }
    else
    {
        cout << "Transaction cannot be proceed..." << endl << "Account Number doesn't match!!!" << endl;
    }
    
}


int main()
{
    Account A;
    A.input();
    Transaction T(123, "Deposit" , 1000);
    processTransaction(A,T);
    A.output();
    return 0;
}