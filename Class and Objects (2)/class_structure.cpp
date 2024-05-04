// 5. Define a structure called BankAccount to represent a bank account with attributes such as account number, account holder name, and account balance. Include methods to deposit and withdraw money from the account. In the main function, create an instance of the BankAccount structure, prompt the user for account details and initial balance, perform a deposit, perform a withdrawal, and print the updated account balance.

#include <iostream>
#include <string>
using namespace std;

struct BankAccount
{
private:
    string AccountNumber, AccountHolderName;
    double Balance;
public:
    void CreateAccount()
    {
        cout << "Enter account number: ";
        cin >> AccountNumber;
        cout << "Enter the name of account holder: ";
        getline(cin>>ws,AccountHolderName);
        cout << "Set initial balance: ";
        cin >> Balance;
    }
    void deposit()
    {
        double money;
        cout << "Enter the amount you wanna deposit:"<<endl;
        cin>>money;
        Balance = Balance + money;
        // cout << "Your total balance is: " << Balance << endl;
    }
    void withdraw()
    {
        double money;
        cout << "Enter the amount you wanna withdraw:"<<endl;
        cin>>money;
        if (Balance >= money)
        {
            Balance -= money;
            // cout << "Your total balance is: " << Balance << endl;
        }
        else
        {
            cout << "You have insufficient balance!" << endl;
        }       
    }
    void Update()
    {
        cout << "Hii " << AccountHolderName<<"! ";
        cout<< "Your updated balance is: " << Balance;
    }
};
int main()
{
    BankAccount Acc1;
    Acc1.CreateAccount();
    Acc1.deposit();
    Acc1.withdraw();
    Acc1.Update();
    return 0;
}